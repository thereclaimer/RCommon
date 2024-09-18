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

    inline RColor32Bit 
    color_32_bit_create(
        const RColorFormat color_format,
        const r_byte       red,
        const r_byte       green,
        const r_byte       blue,
        const r_byte       alpha) {

        RColor32Bit color_32;
        color_32.format = color_format;

        switch (color_32.format) {

            case RColorFormat_RGBA: {

                color_32.rgba.r = red;
                color_32.rgba.g = green;
                color_32.rgba.b = blue;
                color_32.rgba.a = alpha;

            } break;

            case RColorFormat_ARGB: {

                color_32.argb.r = red;
                color_32.argb.g = green;
                color_32.argb.b = blue;
                color_32.argb.a = alpha;

            } break;

            case RColorFormat_ABGR: {

                color_32.abgr.r = red;
                color_32.abgr.g = green;
                color_32.abgr.b = blue;
                color_32.abgr.a = alpha;

            } break;

            case RColorFormat_BGRA: {

                color_32.bgra.r = red;
                color_32.bgra.g = green;
                color_32.bgra.b = blue;
                color_32.bgra.a = alpha;

            }  break;
        }

        return(color_32);
    }    
};

#endif //R_COMMON_COLOR_HPP