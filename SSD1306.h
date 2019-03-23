//
// Created by mugabe on 2019-03-22.
//

#ifndef _SSD1306_H
#define _SSD1306_H

#include <cstdint>

namespace hw {
  namespace Fonts {
    class Font;
  }

  class SSD1306 {
  public:
    enum AddressingMode {
      Horizontal = 0b00,
      Vertical = 0b01,
      Page = 0b10,
      INVALID = 0b11
    };

    enum Color {
      White = 0,
      Black = 1
    };

    enum WrapType {
      NoWrap,
      WrapDisplay,
      WrapCoord
    };

    enum PacketType: uint8_t {
      Command = 0x00,
      Data = 0x40
    };


    SSD1306(uint32_t i2c, uint8_t address, uint8_t width, uint8_t height);
    ~SSD1306();
    void init();
    void refresh();
    void clear();
    void fill(Color color);
    void setPixel(uint8_t x, uint8_t y, Color color);

    void drawWString(uint8_t x, int8_t y, Fonts::Font *font, Color color, WrapType wrType, wchar_t *str);

  private:
    uint32_t m_i2c;
    uint8_t m_address;
    uint8_t m_width;
    uint8_t m_height;

    uint16_t m_screenDataLength;
    uint8_t *m_screenData;

    void sendData(PacketType spec, uint8_t data);

    void switchOLED(bool state);
    void setOscillatorFrequency(uint8_t frequency);  // D5h 0x80
    void setMultiplexRatio(uint8_t ratio);
    void setInverse(bool inverse);
    void chargePump(bool chargeOn);
    void setContrast(uint8_t contrast);
    void setPrecharge(uint8_t precharge);
    void setCOMPinsHardwareConfiguration(uint8_t val);
    void adjustVcomDeselectLevel(uint8_t level);
    void setDisplayOn(bool state);
    void setMemoryAddressingMode(AddressingMode mode);
    void setColumnAddressScope(uint8_t lower, uint8_t upper);
    void setPageAddressScope(uint8_t lower, uint8_t upper);

    void drawVPattern(uint8_t x, int8_t y, uint8_t pattern);
  };
}


#endif //_SSD1306_H
