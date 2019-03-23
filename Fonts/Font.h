//
// Created by mugabe on 2019-03-23.
//

#ifndef DRUMS_FONTBASE_H
#define DRUMS_FONTBASE_H

#include <cstdint>

namespace hw {
  namespace Fonts {
    typedef struct {
      uint8_t size;
      uint8_t l[10];
    } FontCharacter;

    class Font {
    public:
      virtual const FontCharacter &getCharacter(uint16_t character) = 0;
    };
  }
}

#endif //DRUMS_FONTBASE_H
