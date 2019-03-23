//
// Created by mugabe on 2019-03-23.
//

#include "Pentacom.h"

namespace hw {
  namespace Fonts {
    const FontCharacter spaceChar = {2, {0x00, 0x00}};

    // original was {"33":[0,2,2,2,2,2,0,2,0,0,0,0,0,0,0,0
    const FontCharacter char_33={2, {0x00,0xbe}}; // !

    // original was "34":[0,10,10,0,0,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_34={4, {0x00,0x06,0x00,0x06}}; // "

    // original was "35":[0,20,20,62,20,62,20,20,0,0,0,0,0,0,0,0
    const FontCharacter char_35={6, {0x00,0x28,0xfe,0x28,0xfe,0x28}}; // #

    // original was "36":[0,8,60,10,30,40,40,30,8,0,0,0,0,0,0,0
    const FontCharacter char_36={6, {0x00,0x98,0x94,0xfe,0x94,0x64}}; // $

    // original was "37":[0,10,8,4,4,2,10,0,0,0,0,0,0,0,0,0
    const FontCharacter char_37={4, {0x00,0x62,0x18,0x46}}; // %

    // original was "38":[0,12,18,12,82,34,92,0,0,0,0,0,0,0,0,0
    const FontCharacter char_38={7, {0x00,0x34,0x4a,0x4a,0x54,0x20,0x50}}; // &

    // original was "39":[0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_39={2, {0x00,0x06}}; // '

    // original was "40":[0,4,2,2,2,2,4,0,0,0,0,0,0,0,0,0
    const FontCharacter char_40={3, {0x00,0x3c,0x42}}; // (

    // original was "41":[0,2,4,4,4,4,2,0,0,0,0,0,0,0,0,0
    const FontCharacter char_41={3, {0x00,0x42,0x3c}}; // )

    // original was "42":[0,0,4,14,4,10,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_42={4, {0x00,0x28,0x1c,0x28}}; // *

    // original was "43":[0,8,8,62,8,8,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_43={6, {0x00,0x08,0x08,0x3e,0x08,0x08}}; // +

    // original was "44":[0,0,0,0,0,0,0,4,2,0,0,0,0,0,0,0
    const FontCharacter char_44={3, {0x00,0x00,0x80}}; // ,

    // original was "45":[0,0,0,62,0,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_45={6, {0x00,0x08,0x08,0x08,0x08,0x08}}; // -

    // original was "46":[0,0,0,0,0,0,6,6,0,0,0,0,0,0,0,0
    const FontCharacter char_46={3, {0x00,0xc0,0xc0}}; // .

    // original was "47":[0,8,8,4,4,2,2,2,0,0,0,0,0,0,0,0
    const FontCharacter char_47={4, {0x00,0xe0,0x18,0x06}}; // /

    // original was "48":[0,28,34,50,42,38,34,28,0,0,0,0,0,0,0,0
    const FontCharacter char_48={6, {0x00,0x7c,0xa2,0x92,0x8a,0x7c}}; // 0

    // original was "49":[0,6,4,4,4,4,4,14,0,0,0,0,0,0,0,0
    const FontCharacter char_49={4, {0x00,0x82,0xfe,0x80}}; // 1

    // original was "50":[0,28,34,32,32,28,2,62,0,0,0,0,0,0,0,0
    const FontCharacter char_50={6, {0x00,0xc4,0xa2,0xa2,0xa2,0x9c}}; // 2

    // original was "51":[0,28,34,24,32,32,34,28,0,0,0,0,0,0,0,0
    const FontCharacter char_51={6, {0x00,0x44,0x82,0x8a,0x8a,0x74}}; // 3

    // original was "52":[0,16,24,20,18,18,62,16,0,0,0,0,0,0,0,0
    const FontCharacter char_52={6, {0x00,0x70,0x48,0x44,0xfe,0x40}}; // 4

    // original was "53":[0,30,2,30,32,32,34,28,0,0,0,0,0,0,0,0
    const FontCharacter char_53={6, {0x00,0x4e,0x8a,0x8a,0x8a,0x70}}; // 5

    // original was "54":[0,28,2,30,34,34,34,28,0,0,0,0,0,0,0,0
    const FontCharacter char_54={6, {0x00,0x7c,0x8a,0x8a,0x8a,0x70}}; // 6

    // original was "55":[0,62,34,32,16,8,4,4,0,0,0,0,0,0,0,0
    const FontCharacter char_55={6, {0x00,0x06,0xc2,0x22,0x12,0x0e}}; // 7

    // original was "56":[0,28,34,28,34,34,34,28,0,0,0,0,0,0,0,0
    const FontCharacter char_56={6, {0x00,0x74,0x8a,0x8a,0x8a,0x74}}; // 8

    // original was "57":[0,28,34,34,34,60,32,28,0,0,0,0,0,0,0,0
    const FontCharacter char_57={6, {0x00,0x1c,0xa2,0xa2,0xa2,0x7c}}; // 9

    // original was "58":[0,6,6,0,0,6,6,0,0,0,0,0,0,0,0,0
    const FontCharacter char_58={3, {0x00,0x66,0x66}}; // :

    // original was "59":[0,6,6,0,0,6,4,2,0,0,0,0,0,0,0,0
    const FontCharacter char_59={3, {0x00,0xa6,0x66}}; // ;

    // original was "60":[0,16,12,2,12,16,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_60={5, {0x00,0x08,0x14,0x14,0x22}}; // <

    // original was "61":[0,0,62,0,62,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_61={6, {0x00,0x14,0x14,0x14,0x14,0x14}}; // =

    // original was "62":[0,2,12,16,12,2,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_62={5, {0x00,0x22,0x14,0x14,0x08}}; // >

    // original was "63":[0,28,34,32,16,8,0,8,0,0,0,0,0,0,0,0
    const FontCharacter char_63={6, {0x00,0x04,0x02,0xa2,0x12,0x0c}}; // ?

    // original was "64":[120,132,178,170,186,194,28,0,0,0,0,0,0,0,0,0
    const FontCharacter char_64={8, {0x00,0x3c,0x42,0x59,0x55,0x1d,0x21,0x3e}}; // @

    // original was "65":[0,24,36,34,34,62,34,34,0,0,0,0,0,0,0,0
    const FontCharacter char_65={6, {0x00,0xf8,0x24,0x22,0x22,0xfc}}; // A

    // original was "66":[0,30,34,34,30,34,34,30,0,0,0,0,0,0,0,0
    const FontCharacter char_66={6, {0x00,0xfe,0x92,0x92,0x92,0x6c}}; // B

    // original was "67":[0,60,2,2,2,2,2,60,0,0,0,0,0,0,0,0
    const FontCharacter char_67={6, {0x00,0x7c,0x82,0x82,0x82,0x82}}; // C

    // original was "68":[0,30,34,34,34,34,34,30,0,0,0,0,0,0,0,0
    const FontCharacter char_68={6, {0x00,0xfe,0x82,0x82,0x82,0x7c}}; // D

    // original was "69":[0,62,2,2,2,30,2,62,0,0,0,0,0,0,0,0
    const FontCharacter char_69={6, {0x00,0xfe,0xa2,0xa2,0xa2,0x82}}; // E

    // original was "70":[0,62,2,2,2,30,2,2,0,0,0,0,0,0,0,0
    const FontCharacter char_70={6, {0x00,0xfe,0x22,0x22,0x22,0x02}}; // F

    // original was "71":[0,60,2,2,2,50,34,60,0,0,0,0,0,0,0,0
    const FontCharacter char_71={6, {0x00,0x7c,0x82,0x82,0xa2,0xe2}}; // G

    // original was "72":[0,34,34,34,34,62,34,34,0,0,0,0,0,0,0,0
    const FontCharacter char_72={6, {0x00,0xfe,0x20,0x20,0x20,0xfe}}; // H

    // original was "73":[0,14,4,4,4,4,4,14,0,0,0,0,0,0,0,0
    const FontCharacter char_73={4, {0x00,0x82,0xfe,0x82}}; // I

    // original was "74":[0,14,8,8,8,8,8,6,0,0,0,0,0,0,0,0
    const FontCharacter char_74={4, {0x00,0x82,0x82,0x7e}}; // J

    // original was "75":[0,34,18,10,6,10,18,34,0,0,0,0,0,0,0,0
    const FontCharacter char_75={6, {0x00,0xfe,0x10,0x28,0x44,0x82}}; // K

    // original was "76":[0,2,2,2,2,2,2,30,0,0,0,0,0,0,0,0
    const FontCharacter char_76={5, {0x00,0xfe,0x80,0x80,0x80}}; // L

    // original was "77":[0,102,90,90,66,66,66,66,0,0,0,0,0,0,0,0
    const FontCharacter char_77={7, {0x00,0xfe,0x02,0x0c,0x0c,0x02,0xfe}}; // M

    // original was "78":[0,34,34,34,38,42,50,34,0,0,0,0,0,0,0,0
    const FontCharacter char_78={6, {0x00,0xfe,0x10,0x20,0x40,0xfe}}; // N

    // original was "79":[0,28,34,34,34,34,34,28,0,0,0,0,0,0,0,0
    const FontCharacter char_79={6, {0x00,0x7c,0x82,0x82,0x82,0x7c}}; // O

    // original was "80":[0,30,34,34,34,34,30,2,0,0,0,0,0,0,0,0
    const FontCharacter char_80={6, {0x00,0xfe,0x42,0x42,0x42,0x3c}}; // P

    // original was "81":[0,28,34,34,34,34,42,28,48,0,0,0,0,0,0,0
    const FontCharacter char_81={6, {0x00,0x7c,0x82,0xc2,0x82,0x7c}}; // Q

    // original was "82":[0,30,34,34,34,34,30,34,0,0,0,0,0,0,0,0
    const FontCharacter char_82={6, {0x00,0xfe,0x42,0x42,0x42,0xbc}}; // R

    // original was "83":[0,60,2,2,28,32,32,30,0,0,0,0,0,0,0,0
    const FontCharacter char_83={6, {0x00,0x8c,0x92,0x92,0x92,0x62}}; // S

    // original was "84":[0,62,8,8,8,8,8,8,0,0,0,0,0,0,0,0
    const FontCharacter char_84={6, {0x00,0x02,0x02,0xfe,0x02,0x02}}; // T

    // original was "85":[0,34,34,34,34,34,34,28,0,0,0,0,0,0,0,0
    const FontCharacter char_85={6, {0x00,0x7e,0x80,0x80,0x80,0x7e}}; // U

    // original was "86":[0,34,34,20,20,20,8,8,0,0,0,0,0,0,0,0
    const FontCharacter char_86={6, {0x00,0x06,0x38,0xc0,0x38,0x06}}; // V

    // original was "87":[0,130,130,68,84,84,40,40,0,0,0,0,0,0,0,0
    const FontCharacter char_87={8, {0x00,0x06,0x38,0xc0,0x30,0xc0,0x38,0x06}}; // W

    // original was "88":[0,34,34,20,28,20,34,34,0,0,0,0,0,0,0,0
    const FontCharacter char_88={6, {0x00,0xc6,0x38,0x10,0x38,0xc6}}; // X

    // original was "89":[0,34,34,20,20,8,8,8,0,0,0,0,0,0,0,0
    const FontCharacter char_89={6, {0x00,0x06,0x18,0xe0,0x18,0x06}}; // Y

    // original was "90":[0,62,32,16,8,4,2,62,0,0,0,0,0,0,0,0
    const FontCharacter char_90={6, {0x00,0xc2,0xa2,0x92,0x8a,0x86}}; // Z

    // original was "91":[0,6,2,2,2,2,2,6,0,0,0,0,0,0,0,0
    const FontCharacter char_91={3, {0x00,0xfe,0x82}}; // [

    // original was "92":[0,2,2,4,4,8,8,0,0,0,0,0,0,0,0,0
    const FontCharacter char_92={4, {0x00,0x06,0x18,0x60}}; //

    // original was "93":[0,6,4,4,4,4,4,6,0,0,0,0,0,0,0,0
    const FontCharacter char_93={3, {0x00,0x82,0xfe}}; // ]

    // original was "94":[0,8,20,34,0,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_94={6, {0x00,0x08,0x04,0x02,0x04,0x08}}; // ^

    // original was "95":[0,0,0,0,0,0,0,126,0,0,0,0,0,0,0,0
    const FontCharacter char_95={7, {0x00,0x80,0x80,0x80,0x80,0x80,0x80}}; // _

    // original was "96":[0,2,4,0,0,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_96={3, {0x00,0x02,0x04}}; // `

    // original was "97":[0,12,16,28,18,18,28,0,0,0,0,0,0,0,0,0
    const FontCharacter char_97={5, {0x00,0x30,0x4a,0x4a,0x7c}}; // a

    // original was "98":[0,2,14,18,18,18,14,0,0,0,0,0,0,0,0,0
    const FontCharacter char_98={5, {0x00,0x7e,0x44,0x44,0x38}}; // b

    // original was "99":[0,12,18,2,2,18,12,0,0,0,0,0,0,0,0,0
    const FontCharacter char_99={5, {0x00,0x3c,0x42,0x42,0x24}}; // c

    // original was "100":[16,16,28,18,18,18,28,0,0,0,0,0,0,0,0,0
    const FontCharacter char_100={5, {0x00,0x38,0x44,0x44,0x7f}}; // d

    // original was "101":[0,12,18,18,30,2,12,0,0,0,0,0,0,0,0,0
    const FontCharacter char_101={5, {0x00,0x3c,0x52,0x52,0x1c}}; // e

    // original was "102":[8,20,4,14,4,4,4,0,0,0,0,0,0,0,0,0
    const FontCharacter char_102={5, {0x00,0x08,0x7e,0x09,0x02}}; // f

    // original was "103":[0,0,28,18,18,28,16,14,0,0,0,0,0,0,0,0
    const FontCharacter char_103={5, {0x00,0x98,0xa4,0xa4,0x7c}}; // g

    // original was "104":[2,2,14,18,18,18,18,0,0,0,0,0,0,0,0,0
    const FontCharacter char_104={5, {0x00,0x7f,0x04,0x04,0x78}}; // h

    // original was "105":[2,0,2,2,2,2,2,0,0,0,0,0,0,0,0,0
    const FontCharacter char_105={2, {0x00,0x7d}}; // i

    // original was "106":[4,0,4,4,4,4,2,0,0,0,0,0,0,0,0,0
    const FontCharacter char_106={3, {0x00,0x40,0x3d}}; // j

    // original was "107":[0,0,18,10,6,10,18,0,0,0,0,0,0,0,0,0
    const FontCharacter char_107={5, {0x00,0x7c,0x10,0x28,0x44}}; // k

    // original was "108":[2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0
    const FontCharacter char_108={2, {0x00,0x7f}}; // l

    // original was "109":[0,0,22,42,42,42,42,0,0,0,0,0,0,0,0,0
    const FontCharacter char_109={6, {0x00,0x7c,0x04,0x78,0x04,0x78}}; // m

    // original was "110":[0,0,14,18,18,18,18,0,0,0,0,0,0,0,0,0
    const FontCharacter char_110={5, {0x00,0x7c,0x04,0x04,0x78}}; // n

    // original was "111":[0,0,12,18,18,18,12,0,0,0,0,0,0,0,0,0
    const FontCharacter char_111={5, {0x00,0x38,0x44,0x44,0x38}}; // o

    // original was "112":[0,0,14,18,18,14,2,0,0,0,0,0,0,0,0,0
    const FontCharacter char_112={5, {0x00,0x7c,0x24,0x24,0x18}}; // p

    // original was "113":[0,0,28,18,18,28,16,16,0,0,0,0,0,0,0,0
    const FontCharacter char_113={5, {0x00,0x18,0x24,0x24,0xfc}}; // q

    // original was "114":[0,0,26,6,2,2,2,0,0,0,0,0,0,0,0,0
    const FontCharacter char_114={5, {0x00,0x7c,0x08,0x04,0x04}}; // r

    // original was "115":[0,0,28,2,28,32,30,0,0,0,0,0,0,0,0,0
    const FontCharacter char_115={6, {0x00,0x48,0x54,0x54,0x54,0x20}}; // s

    // original was "116":[0,4,4,14,4,4,24,0,0,0,0,0,0,0,0,0
    const FontCharacter char_116={5, {0x00,0x08,0x3e,0x48,0x40}}; // t

    // original was "117":[0,0,18,18,18,18,28,0,0,0,0,0,0,0,0,0
    const FontCharacter char_117={5, {0x00,0x3c,0x40,0x40,0x7c}}; // u

    // original was "118":[0,0,34,34,20,28,8,0,0,0,0,0,0,0,0,0
    const FontCharacter char_118={6, {0x00,0x0c,0x30,0x60,0x30,0x0c}}; // v

    // original was "119":[0,0,42,42,42,28,20,0,0,0,0,0,0,0,0,0
    const FontCharacter char_119={6, {0x00,0x1c,0x60,0x3c,0x60,0x1c}}; // w

    // original was "120":[0,0,34,20,8,20,34,0,0,0,0,0,0,0,0,0
    const FontCharacter char_120={6, {0x00,0x44,0x28,0x10,0x28,0x44}}; // x

    // original was "121":[0,0,18,18,20,24,16,12,0,0,0,0,0,0,0,0
    const FontCharacter char_121={5, {0x00,0x0c,0x90,0xa0,0x7c}}; // y

    // original was "122":[0,0,30,16,12,2,30,0,0,0,0,0,0,0,0,0
    const FontCharacter char_122={5, {0x00,0x64,0x54,0x54,0x4c}}; // z

    // original was "123":[0,12,4,4,2,4,4,12,0,0,0,0,0,0,0,0
    const FontCharacter char_123={4, {0x00,0x10,0xee,0x82}}; // {

    // original was "124":[2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0
    const FontCharacter char_124={2, {0x00,0xff}}; // |

    // original was "125":[0,6,4,4,8,4,4,6,0,0,0,0,0,0,0,0
    const FontCharacter char_125={4, {0x00,0x82,0xee,0x10}}; // }

    // original was "126":[0,0,4,42,16,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_126={6, {0x00,0x08,0x04,0x08,0x10,0x08}}; // ~

    // original was "161":[0,2,0,2,2,2,2,0,0,0,0,0,0,0,0,0
    const FontCharacter char_161={2, {0x00,0x7a}}; // ¡

    // original was "162":[8,28,42,10,10,42,28,8,0,0,0,0,0,0,0,0
    const FontCharacter char_162={6, {0x00,0x3c,0x42,0xff,0x42,0x24}}; // ¢

    // original was "163":[0,24,4,14,4,20,14,0,0,0,0,0,0,0,0,0
    const FontCharacter char_163={5, {0x00,0x48,0x7c,0x4a,0x22}}; // £

    // original was "164":[0,34,28,20,28,34,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_164={6, {0x00,0x22,0x1c,0x14,0x1c,0x22}}; // ¤

    // original was "165":[0,34,34,20,20,8,62,8,0,0,0,0,0,0,0,0
    const FontCharacter char_165={6, {0x00,0x46,0x58,0xe0,0x58,0x46}}; // ¥

    // original was "166":[0,2,2,2,0,2,2,2,0,0,0,0,0,0,0,0
    const FontCharacter char_166={2, {0x00,0xee}}; // ¦

    // original was "167":[0,28,2,12,18,12,16,14,0,0,0,0,0,0,0,0
    const FontCharacter char_167={5, {0x00,0x94,0xaa,0xaa,0x52}}; // §

    // original was "168":[0,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_168={4, {0x00,0x02,0x00,0x02}}; // ¨

    // original was "169":[0,56,68,146,138,146,68,56,0,0,0,0,0,0,0,0
    const FontCharacter char_169={8, {0x00,0x38,0x44,0x92,0xaa,0x82,0x44,0x38}}; // ©

    // original was "171":[0,36,18,36,0,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_171={6, {0x00,0x04,0x0a,0x00,0x04,0x0a}}; // «

    // original was "172":[0,30,16,16,0,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_172={5, {0x00,0x02,0x02,0x02,0x0e}}; // ¬

    // original was "174":[60,66,189,165,157,165,66,60,0,0,0,0,0,0,0,0
    const FontCharacter char_174={8, {0x3c,0x42,0xbd,0x95,0x95,0xad,0x42,0x3c}}; // ®

    // original was "175":[0,126,0,0,0,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_175={7, {0x00,0x02,0x02,0x02,0x02,0x02,0x02}}; // ¯

    // original was "176":[0,4,10,4,0,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_176={4, {0x00,0x04,0x0a,0x04}}; // °

    // original was "177":[0,8,8,62,8,8,0,62,0,0,0,0,0,0,0,0
    const FontCharacter char_177={6, {0x00,0x88,0x88,0xbe,0x88,0x88}}; // ±

    // original was "178":[0,4,10,8,4,14,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_178={4, {0x00,0x24,0x32,0x2c}}; // ²

    // original was "179":[0,6,8,4,8,14,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_179={4, {0x00,0x22,0x2a,0x34}}; // ³

    // original was "180":[0,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_180={3, {0x00,0x04,0x02}}; // ´

    // original was "181":[0,10,10,10,22,2,2,0,0,0,0,0,0,0,0,0
    const FontCharacter char_181={5, {0x00,0x7e,0x10,0x0e,0x10}}; // µ

    // original was "182":[0,28,22,20,20,20,20,0,0,0,0,0,0,0,0,0
    const FontCharacter char_182={5, {0x00,0x04,0x7e,0x02,0x7e}}; // ¶

    // original was "183":[0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_183={2, {0x00,0x08}}; // ·

    // original was "185":[0,6,4,4,4,14,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_185={4, {0x00,0x22,0x3e,0x20}}; // ¹

    // original was "186":[0,4,10,10,10,4,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_186={4, {0x00,0x1c,0x22,0x1c}}; // º

    // original was "187":[0,18,36,18,0,0,0,0,0,0,0,0,0,0,0,0
    const FontCharacter char_187={6, {0x00,0x0a,0x04,0x00,0x0a,0x04}}; // »

    // original was "188":[0,70,36,676,686,912,528,0,0,0,0,0,0,0,0,0
    const FontCharacter char_188={10, {0x00,0x12,0x1e,0x10,0x60,0x1c,0x02,0x38,0x20,0x78}}; // ¼

    // original was "189":[0,38,148,340,272,200,456,0,0,0,0,0,0,0,0,0
    const FontCharacter char_189={9, {0x00,0x02,0x0e,0x60,0x1c,0x02,0x68,0x64,0x58}}; // ½

    // original was "190":[0,70,40,676,680,918,528,0,0,0,0,0,0,0,0,0
    const FontCharacter char_190={10, {0x00,0x22,0x2a,0x14,0x60,0x1c,0x02,0x38,0x20,0x78}}; // ¾

    // original was "191":[0,8,0,8,4,2,34,28,0,0,0,0,0,0,0,0
    const FontCharacter char_191={6, {0x00,0x60,0x90,0x8a,0x80,0x40}}; // ¿

    // original was "1025":[20,30,2,2,30,2,62,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1025={6, {0x00,0x7e,0x53,0x52,0x53,0x40}}; // Ё

    // original was "1040":[0,24,36,34,34,62,34,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1040={6, {0x00,0x78,0x24,0x22,0x22,0x7c}}; // А

    // original was "1041":[0,30,2,30,34,34,62,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1041={6, {0x00,0x7e,0x4a,0x4a,0x4a,0x70}}; // Б

    // original was "1042":[0,30,34,30,34,34,62,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1042={6, {0x00,0x7e,0x4a,0x4a,0x4a,0x74}}; // В

    // original was "1043":[0,30,2,2,2,2,2,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1043={5, {0x00,0x7e,0x02,0x02,0x02}}; // Г

    // original was "1044":[0,56,36,36,36,36,126,66,0,0,0,0,0,0,0,0
    const FontCharacter char_1044={7, {0x00,0xc0,0x7c,0x42,0x42,0x7e,0xc0}}; // Д

    // original was "1045":[0,30,2,2,30,2,62,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1045={6, {0x00,0x7e,0x52,0x52,0x52,0x40}}; // Е

    // original was "1046":[0,146,146,146,124,146,146,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1046={8, {0x00,0x6e,0x10,0x10,0x7e,0x10,0x10,0x6e}}; // Ж

    // original was "1047":[0,30,32,28,32,32,62,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1047={6, {0x00,0x42,0x4a,0x4a,0x4a,0x74}}; // З

    // original was "1048":[0,34,34,50,42,38,34,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1048={6, {0x00,0x7e,0x20,0x10,0x08,0x7e}}; // И

    // original was "1049":[8,42,34,50,42,38,34,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1049={6, {0x00,0x7e,0x20,0x13,0x08,0x7e}}; // Й

    // original was "1050":[0,50,10,6,10,18,34,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1050={6, {0x00,0x7e,0x08,0x14,0x22,0x42}}; // К

    // original was "1051":[0,56,36,36,36,36,38,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1051={6, {0x00,0x40,0x7c,0x02,0x02,0x7e}}; // Л

    // original was "1052":[0,130,130,198,238,146,146,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1052={8, {0x00,0x7e,0x18,0x10,0x60,0x10,0x18,0x7e}}; // М

    // original was "1053":[0,34,34,34,62,34,34,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1053={6, {0x00,0x7e,0x10,0x10,0x10,0x7e}}; // Н

    // original was "1054":[0,28,34,34,34,34,28,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1054={6, {0x00,0x3c,0x42,0x42,0x42,0x3c}}; // О

    // original was "1055":[0,62,34,34,34,34,34,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1055={6, {0x00,0x7e,0x02,0x02,0x02,0x7e}}; // П

    // original was "1056":[0,30,34,34,34,30,2,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1056={6, {0x00,0x7e,0x22,0x22,0x22,0x1c}}; // Р

    // original was "1057":[0,60,2,2,2,2,60,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1057={6, {0x00,0x3c,0x42,0x42,0x42,0x42}}; // С

    // original was "1058":[0,62,8,8,8,8,8,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1058={6, {0x00,0x02,0x02,0x7e,0x02,0x02}}; // Т

    // original was "1059":[0,34,34,34,20,8,6,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1059={6, {0x00,0x4e,0x50,0x20,0x10,0x0e}}; // У

    // original was "1060":[0,16,124,146,146,146,124,16,0,0,0,0,0,0,0,0
    const FontCharacter char_1060={8, {0x00,0x38,0x44,0x44,0xfe,0x44,0x44,0x38}}; // Ф

    // original was "1061":[0,34,20,8,8,20,34,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1061={6, {0x00,0x42,0x24,0x18,0x24,0x42}}; // Х

    // original was "1062":[0,34,34,34,34,34,126,64,0,0,0,0,0,0,0,0
    const FontCharacter char_1062={7, {0x00,0x7e,0x40,0x40,0x40,0x7e,0xc0}}; // Ц

    // original was "1063":[0,34,34,34,60,32,32,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1063={6, {0x00,0x0e,0x10,0x10,0x10,0x7e}}; // Ч

    // original was "1064":[0,146,146,146,146,146,254,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1064={8, {0x00,0x7e,0x40,0x40,0x7e,0x40,0x40,0x7e}}; // Ш

    // original was "1065":[0,146,146,146,146,146,510,256,0,0,0,0,0,0,0,0
    const FontCharacter char_1065={9, {0x00,0x7e,0x40,0x40,0x7e,0x40,0x40,0x7e,0xc0}}; // Щ

    // original was "1066":[0,6,60,68,68,68,60,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1066={7, {0x00,0x02,0x7e,0x44,0x44,0x44,0x38}}; // Ъ

    // original was "1067":[0,130,158,162,162,162,158,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1067={8, {0x00,0x7e,0x44,0x44,0x44,0x38,0x00,0x7e}}; // Ы

    // original was "1068":[0,2,30,34,34,34,30,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1068={6, {0x00,0x7e,0x44,0x44,0x44,0x38}}; // Ь

    // original was "1069":[0,30,32,60,32,32,30,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1069={6, {0x00,0x42,0x4a,0x4a,0x4a,0x3c}}; // Э

    // original was "1070":[0,114,138,138,142,138,114,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1070={8, {0x00,0x7e,0x10,0x3c,0x42,0x42,0x42,0x3c}}; // Ю

    // original was "1071":[0,60,34,34,60,36,34,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1071={6, {0x00,0x4c,0x32,0x12,0x12,0x7e}}; // Я

    // original was "1072":[0,0,12,16,28,18,44,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1072={6, {0x00,0x20,0x54,0x54,0x38,0x40}}; // а

    // original was "1073":[0,0,30,2,30,18,30,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1073={5, {0x00,0x7c,0x54,0x54,0x74}}; // б

    // original was "1074":[0,0,6,10,14,18,30,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1074={5, {0x00,0x7c,0x54,0x58,0x60}}; // в

    // original was "1075":[0,0,14,2,2,2,2,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1075={4, {0x00,0x7c,0x04,0x04}}; // г

    // original was "1076":[0,0,56,36,36,36,62,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1076={6, {0x00,0x40,0x78,0x44,0x44,0x7c}}; // д

    // original was "1077":[0,0,12,18,14,2,12,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1077={5, {0x00,0x38,0x54,0x54,0x08}}; // е

    // original was "1078":[0,0,42,42,42,28,42,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1078={6, {0x00,0x5c,0x20,0x7c,0x20,0x5c}}; // ж

    // original was "1079":[0,0,14,8,4,8,14,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1079={4, {0x00,0x44,0x54,0x6c}}; // з

    // original was "1080":[0,0,18,18,26,22,18,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1080={5, {0x00,0x7c,0x20,0x10,0x7c}}; // и

    // original was "1081":[8,8,18,18,26,22,18,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1081={5, {0x00,0x7c,0x20,0x13,0x7c}}; // й

    // original was "1082":[0,0,18,10,6,10,18,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1082={5, {0x00,0x7c,0x10,0x28,0x44}}; // к

    // original was "1083":[0,0,28,20,20,20,18,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1083={5, {0x00,0x40,0x3c,0x04,0x7c}}; // л

    // original was "1084":[0,0,34,34,54,42,42,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1084={6, {0x00,0x7c,0x10,0x60,0x10,0x7c}}; // м

    // original was "1085":[0,0,18,18,30,18,18,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1085={5, {0x00,0x7c,0x10,0x10,0x7c}}; // н

    // original was "1086":[0,0,12,18,18,18,12,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1086={5, {0x00,0x38,0x44,0x44,0x38}}; // о

    // original was "1087":[0,0,30,18,18,18,18,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1087={5, {0x00,0x7c,0x04,0x04,0x7c}}; // п

    // original was "1088":[0,0,14,18,18,14,2,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1088={5, {0x00,0x7c,0x24,0x24,0x18}}; // р

    // original was "1089":[0,0,28,2,2,2,28,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1089={5, {0x00,0x38,0x44,0x44,0x44}}; // с

    // original was "1090":[0,0,62,8,8,8,8,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1090={6, {0x00,0x04,0x04,0x7c,0x04,0x04}}; // т

    // original was "1091":[0,0,18,18,20,8,6,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1091={5, {0x00,0x4c,0x50,0x20,0x1c}}; // у

    // original was "1092":[0,8,28,42,42,28,8,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1092={6, {0x00,0x18,0x24,0x7e,0x24,0x18}}; // ф

    // original was "1093":[0,0,18,18,12,18,18,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1093={5, {0x00,0x6c,0x10,0x10,0x6c}}; // х

    // original was "1094":[0,0,18,18,18,18,62,32,0,0,0,0,0,0,0,0
    const FontCharacter char_1094={6, {0x00,0x7c,0x40,0x40,0x7c,0xc0}}; // ц

    // original was "1095":[0,0,18,18,18,28,16,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1095={5, {0x00,0x1c,0x20,0x20,0x7c}}; // ч

    // original was "1096":[0,0,34,34,42,42,62,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1096={6, {0x00,0x7c,0x40,0x70,0x40,0x7c}}; // ш

    // original was "1097":[0,0,34,34,42,42,126,64,0,0,0,0,0,0,0,0
    const FontCharacter char_1097={7, {0x00,0x7c,0x40,0x70,0x40,0x7c,0xc0}}; // щ

    // original was "1098":[0,0,6,28,36,36,28,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1098={6, {0x00,0x04,0x7c,0x48,0x48,0x30}}; // ъ

    // original was "1099":[0,0,34,46,50,50,46,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1099={6, {0x00,0x7c,0x48,0x48,0x30,0x7c}}; // ы

    // original was "1100":[0,0,2,14,18,18,14,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1100={5, {0x00,0x7c,0x48,0x48,0x30}}; // ь

    // original was "1101":[0,0,14,16,30,16,14,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1101={5, {0x00,0x54,0x54,0x54,0x38}}; // э

    // original was "1102":[0,0,50,74,78,74,50,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1102={7, {0x00,0x7c,0x10,0x38,0x44,0x44,0x38}}; // ю

    // original was "1103":[0,0,28,18,18,28,18,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1103={5, {0x00,0x58,0x24,0x24,0x7c}}; // я

    // original was "1105":[0,18,12,18,30,2,12,0,0,0,0,0,0,0,0,0
    const FontCharacter char_1105={5, {0x00,0x3a,0x54,0x54,0x1a}}; // ё

    // original was "8364":[0,56,4,30,4,30,4,56,0,0,0,0,0,0,0,0
    const FontCharacter char_8364={6, {0x00,0x28,0x7c,0xaa,0xaa,0x82}}; // €



    const uint16_t charTableSize = 189;



    const uint16_t charTable[] = {
      33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,// !, ", #, $, %, &, ', (, ), *, +, ,, -, ., /, 0,
      49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,// 1, 2, 3, 4, 5, 6, 7, 8, 9, :, ;, <, =, >, ?, @,
      65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,// A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P,
      81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,// Q, R, S, T, U, V, W, X, Y, Z, [, \, ], ^, _, `,
      97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,// a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p,
      113,114,115,116,117,118,119,120,121,122,123,124,125,126,161,162,// q, r, s, t, u, v, w, x, y, z, {, |, }, ~, ¡, ¢,
      163,164,165,166,167,168,169,171,172,174,175,176,177,178,179,180,// £, ¤, ¥, ¦, §, ¨, ©, «, ¬, ®, ¯, °, ±, ², ³, ´,
      181,182,183,185,186,187,188,189,190,191,1025,1040,1041,1042,1043,1044,// µ, ¶, ·, ¹, º, », ¼, ½, ¾, ¿, Ё, А, Б, В, Г, Д,
      1045,1046,1047,1048,1049,1050,1051,1052,1053,1054,1055,1056,1057,1058,1059,1060,// Е, Ж, З, И, Й, К, Л, М, Н, О, П, Р, С, Т, У, Ф,
      1061,1062,1063,1064,1065,1066,1067,1068,1069,1070,1071,1072,1073,1074,1075,1076,// Х, Ц, Ч, Ш, Щ, Ъ, Ы, Ь, Э, Ю, Я, а, б, в, г, д,
      1077,1078,1079,1080,1081,1082,1083,1084,1085,1086,1087,1088,1089,1090,1091,1092,// е, ж, з, и, й, к, л, м, н, о, п, р, с, т, у, ф,
      1093,1094,1095,1096,1097,1098,1099,1100,1101,1102,1103,1105,8364};



    const FontCharacter* chars[] = {
      &char_33, &char_34, &char_35, &char_36, &char_37, &char_38, &char_39, &char_40, &char_41, &char_42, &char_43, &char_44,
      &char_45, &char_46, &char_47, &char_48, &char_49, &char_50, &char_51, &char_52, &char_53, &char_54, &char_55, &char_56,
      &char_57, &char_58, &char_59, &char_60, &char_61, &char_62, &char_63, &char_64, &char_65, &char_66, &char_67, &char_68,
      &char_69, &char_70, &char_71, &char_72, &char_73, &char_74, &char_75, &char_76, &char_77, &char_78, &char_79, &char_80,
      &char_81, &char_82, &char_83, &char_84, &char_85, &char_86, &char_87, &char_88, &char_89, &char_90, &char_91, &char_92,
      &char_93, &char_94, &char_95, &char_96, &char_97, &char_98, &char_99, &char_100, &char_101, &char_102, &char_103, &char_104,
      &char_105, &char_106, &char_107, &char_108, &char_109, &char_110, &char_111, &char_112, &char_113, &char_114, &char_115, &char_116,
      &char_117, &char_118, &char_119, &char_120, &char_121, &char_122, &char_123, &char_124, &char_125, &char_126, &char_161, &char_162,
      &char_163, &char_164, &char_165, &char_166, &char_167, &char_168, &char_169, &char_171, &char_172, &char_174, &char_175, &char_176,
      &char_177, &char_178, &char_179, &char_180, &char_181, &char_182, &char_183, &char_185, &char_186, &char_187, &char_188, &char_189,
      &char_190, &char_191, &char_1025, &char_1040, &char_1041, &char_1042, &char_1043, &char_1044, &char_1045, &char_1046, &char_1047, &char_1048,
      &char_1049, &char_1050, &char_1051, &char_1052, &char_1053, &char_1054, &char_1055, &char_1056, &char_1057, &char_1058, &char_1059, &char_1060,
      &char_1061, &char_1062, &char_1063, &char_1064, &char_1065, &char_1066, &char_1067, &char_1068, &char_1069, &char_1070, &char_1071, &char_1072,
      &char_1073, &char_1074, &char_1075, &char_1076, &char_1077, &char_1078, &char_1079, &char_1080, &char_1081, &char_1082, &char_1083, &char_1084,
      &char_1085, &char_1086, &char_1087, &char_1088, &char_1089, &char_1090, &char_1091, &char_1092, &char_1093, &char_1094, &char_1095, &char_1096,
      &char_1097, &char_1098, &char_1099, &char_1100, &char_1101, &char_1102, &char_1103, &char_1105, &char_8364};

    FontCharacter const &Pentacom::getCharacter(uint16_t character) {
      int i = 0;
      for (; i < charTableSize; ++i) {
        if (charTable[i] == character) {
          return *chars[i];
        }
      }

      return spaceChar;
    }
  }
}
