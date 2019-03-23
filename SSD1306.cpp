//
// Created by mugabe on 2019-03-22.
//

#include "SSD1306.h"

#include <libopencm3/stm32/i2c.h>
#include <cstdlib>

#include "Fonts/Font.h"

namespace hw {
  SSD1306::SSD1306(uint32_t i2c, uint8_t address, uint8_t width, uint8_t height):
    m_i2c(i2c)
  {
    m_address = address;
    m_width = width;
    m_height = height;

    m_screenDataLength = static_cast<uint16_t>(m_width * m_height / 8);
    m_screenData = new uint8_t[m_screenDataLength];
  }

  SSD1306::~SSD1306() {
    delete m_screenData;
  }

  void SSD1306::init() {
    switchOLED(false);
    setMemoryAddressingMode(Page);

    sendData(Command, 0xb0); // Set Page Start Address for Page Addressing Mode,0-7

//    sendData(Command, 0xC0); // Mirror vertically

    sendData(Command, 0xc8); // //Set COM Output Scan Direction

    sendData(Command, 0x00); //---set low column address
    sendData(Command, 0x10); //---set high column address

    sendData(Command, 0x40); //--set start line address - CHECK

    setContrast(0xFF);

//    ssd1306_WriteCommand(0xA0); // Mirror horizontally
    sendData(Command, 0xA1); //--set segment re-map 0 to 127 - CHECK

    setInverse(false);

    setMultiplexRatio(0x3F);

    setDisplayOn(true); //0xa4,Output follows RAM content;0xa5,Output ignores RAM content

    sendData(Command, 0xD3); //-set display offset - CHECK
    sendData(Command, 0x00);

    setOscillatorFrequency(0xf0);

    setPrecharge(0x22);

    setCOMPinsHardwareConfiguration(0x12);

    adjustVcomDeselectLevel(0x20);

    chargePump(true);

    switchOLED(true);
  }

  void SSD1306::fill(Color color) {
    uint8_t colorValue = static_cast<uint8_t>(color == Black ? 0x00 : 0xff);
    for (uint16_t i = 0; i < m_screenDataLength; i++) {
      m_screenData[i] = colorValue;
    }
  }

  void SSD1306::refresh() {
    uint8_t pbuffer[m_width + 1];

    for (int i = 0; i < 8; i++) {
      sendData(Command, static_cast<uint8_t>(0xb0 + i));
      sendData(Command, 0x00);
      sendData(Command, 0x10);

      uint8_t *buffer = &m_screenData[m_width * i];

      pbuffer[0] = Data;
      for (int j = 0; j < m_width; j++) {
        pbuffer[j + 1] = *buffer;
        buffer++;
      }

      i2c_transfer7(m_i2c, m_address, pbuffer, m_width + 1, nullptr, 0);
    }
  }

  void SSD1306::clear() {
    fill(Black);
  }

  void SSD1306::sendData(PacketType spec, uint8_t data) {
    uint8_t bf[2];
    bf[0] = spec;
    bf[1] = data;

    i2c_transfer7(m_i2c, m_address, bf, sizeof(bf), 0, 0);
  }

  void SSD1306::switchOLED(bool state) {
    if (state) {
      sendData(Command, 0xAF);
    }
    else {
      sendData(Command, 0xAE);
    }
  }

  void SSD1306::setOscillatorFrequency(uint8_t frequency) {
    sendData(Command, 0xd5);
    sendData(Command, frequency);
  }

  void SSD1306::setMultiplexRatio(uint8_t ratio) {
    sendData(Command, 0xa8);
    sendData(Command, ratio);
  }

  void SSD1306::setInverse(bool inverse) {
    auto cmd = (uint8_t) (inverse ? 0xA7 : 0xA6);
    sendData(Command, cmd);
  }

  void SSD1306::chargePump(bool chargeOn) {
    sendData(Command, 0x8D);
    if (chargeOn) {
      sendData(Command, 0x14);
    }
    else {
      sendData(Command, 0x10);
    }
  }

  void SSD1306::setContrast(uint8_t contrast) {
    sendData(Command, 0x81);
    sendData(Command, contrast);
  }

  void SSD1306::setPrecharge(uint8_t precharge) {
    sendData(Command, 0xd9);
    sendData(Command, precharge);
  }

  void SSD1306::setCOMPinsHardwareConfiguration(uint8_t val) {
    sendData(Command, 0xda);
    sendData(Command, static_cast<uint8_t>(0b00110010 & val));
  }

  void SSD1306::adjustVcomDeselectLevel(uint8_t level) {
    sendData(Command, 0xdb);
    sendData(Command, level);
  }

  void SSD1306::setDisplayOn(bool state) {
    auto cmd = (uint8_t) (state ? 0xA4 : 0xA5);
    sendData(Command, cmd);
  }

  void SSD1306::setMemoryAddressingMode(AddressingMode mode) {
    sendData(Command, 0x20);
    sendData(Command, mode);
  }

  void SSD1306::setColumnAddressScope(uint8_t lower, uint8_t upper) {
    sendData(Command, 0x21);
    sendData(Command, lower);
    sendData(Command, upper);
  }

  void SSD1306::setPageAddressScope(uint8_t lower, uint8_t upper) {
    sendData(Command, 0x22);
    sendData(Command, lower);
    sendData(Command, upper);
  }

  void SSD1306::setPixel(uint8_t x, uint8_t y, Color color) {
    if(x >= m_width || y >= m_height) {
      // Don't write outside the buffer
      return;
    }

    // Draw in the right color
    if (color == White) {
      m_screenData[x + (y / 8) * m_width] |= 1 << (y % 8);
    }
    else {
      m_screenData[x + (y / 8) * m_width] &= ~(1 << (y % 8));
    }
  }



  void SSD1306::drawWString(uint8_t x, int8_t y, Fonts::Font *font, Color color, WrapType wrType, wchar_t *str) {
    wchar_t symbol = 0x00;
    uint16_t curPos = 0;
    uint8_t xx = x; int8_t yy = y;
    do {
      symbol = str[curPos];
      const Fonts::FontCharacter &charCur = font->getCharacter(static_cast<uint16_t>(symbol));

      if ((charCur.size + xx) >= (m_width - 1) || (symbol == L'\n')) {
        switch (wrType) {
          case NoWrap:
            return;

          case WrapDisplay:
            xx = 0;
            yy += 8;
            break;

          case WrapCoord:
            xx = x;
            yy += 8;
        }
      }

      for (uint8_t i = 0; i < charCur.size; i++) {
        uint8_t p = (color == White) ? charCur.l[i] : ~charCur.l[i];
        drawVPattern(xx,yy, p);
        xx += 1;
      }
      curPos += 1;
    } while (symbol != 0x00);
  }


  void SSD1306::drawVPattern(uint8_t x, int8_t y, uint8_t pattern) {
    if (y > m_height || y < (-7) || x > m_width) {
      return;
    }

    auto yy = static_cast<uint8_t>(abs(y) % 8);

    if (y < 0) {
      m_screenData[y / 8 * m_width + x] |= pattern >> yy;
    }
    else if (y > 23) {
      m_screenData[y / 8 * m_width + x] |= pattern << yy;
    }
    else {
      if (yy != 0) {
        m_screenData[y / 8 * m_width + x] |= pattern << yy;
        m_screenData[(y / 8 + 1) * m_width + x] |= pattern >> (8-yy);
      } else
        m_screenData[y / 8 * m_width + x] |= pattern;
    }
  }
}

