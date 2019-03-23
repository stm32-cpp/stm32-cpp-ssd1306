//
// Created by mugabe on 2019-03-23.
//

#ifndef _PENTACOM_H
#define _PENTACOM_H

#include "Font.h"

namespace hw {
  namespace Fonts {
    class Pentacom : public Font {
    public:
      const FontCharacter &getCharacter(uint16_t character) override;
    };
  }
}


#endif //_PENTACOM_H
