#ifndef R_COMMON_COLOR_HPP
#define R_COMMON_COLOR_HPP

#include "r-common-types.hpp"

enum RColorFormat_ {
    RColorFormat_RGBA = 0,
    RColorFormat_ARGB = 1,
    RColorFormat_ABGR = 2,
    RColorFormat_BGRA = 3
};

typedef r_u32 RColorFormat; 

struct RColorRGBA {
    r_u8 r;
    r_u8 g;
    r_u8 b;
    r_u8 a;
};

struct RColorARGB {
    r_u8 a;
    r_u8 r;
    r_u8 g;
    r_u8 b;
};

struct RColorABGR {
    r_u8 a;
    r_u8 b;
    r_u8 g;
    r_u8 r;
};

struct RColorBGRA {
    r_u8 b;
    r_u8 g;
    r_u8 r;
    r_u8 a;
};

struct RColor32Bit {
    RColorFormat format;
    r_u32        hex;
    union {
        RColorRGBA rgba;
        RColorARGB argb;
        RColorABGR abgr;
        RColorBGRA bgra;
    };
};

struct RColor32BitNormalized {
    r_f32 r;
    r_f32 g;
    r_f32 b;
    r_f32 a;
};

namespace r_common {

    

};

#endif //R_COMMON_COLOR_HPP