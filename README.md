# STM32 C++ SSD1306 Library

## Prerequisites 

This library uses [libopencm3](https://github.com/libopencm3/libopencm3) for I²C communication.

## Usage example

```cpp
#include <SSD1306/SSD1306.h>
#include <SSD1306/Fonts/Pentacom.h>

// Init i2c (see libopencm3 documentation)
i2c_peripheral_disable(I2C1);
i2c_set_clock_frequency(I2C1, ...);
...
i2c_peripheral_enable(I2C1);

// Create SSD1306 instance
h2::SSD1306 ssd1306(
  I2C1,
  0x3c, // i2c address
  128,  // display width
  64    // display height
);

// Initialize display
ssd1306.init();

// Clear and update
ssd1306.clear();
ssd1306.refresh();

delay(1000);

// White fill
ssd1306.fill(
  hw::SSD1306::Color::White
);

// Draw String
ssd1306.drawWString(
  10,   // X
  10,   // Y
  &font,
  hw::SSD1306::Color::Black,
  hw::SSD1306::WrapType::NoWrap,
  L"Hello World"
);

// Salute random dog
ssd1306.drawWString(
  10,   // X
  40,   // Y
  &font,
  hw::SSD1306::Color::Black,
  hw::SSD1306::WrapType::NoWrap,
  L"Привет, пёс!"
);

// Push changes
ssd1306.refresh();

```

## Font creation
Font used in this library initially was found in [StanislavLakhtin](https://github.com/StanislavLakhtin/ssd1306_libopencm3)'s ssd1306 library.
You can use his [tool](https://github.com/StanislavLakhtin/ssd1306_libopencm3/tree/master/tools/pentacom-font) and [instructions](https://github.com/StanislavLakhtin/ssd1306_libopencm3/blob/master/tools/pentacom-font/about.md) to create your own font.
