#ifndef PES6_HTTPS_WORD_TRANSFORM_H
#define PES6_HTTPS_WORD_TRANSFORM_H

#include "types.h"

#define PES6_WORD_XOR_A 0x09f8ed17U
#define PES6_WORD_XOR_B 0xa95128c3U

static inline u32 rotateWordLeft13(u32 value) {
    return ((value << 13) & 0xffffe000U) | ((value >> 19) & 0x00001fffU);
}

static inline u32 rotateWordLeft8(u32 value) {
    return ((value << 8) & 0xffffff00U) | ((value >> 24) & 0x000000ffU);
}

static inline u32 rotateWordRight13(u32 value) {
    return (((s32)value >> 13) & 0x0007ffffU) | ((value << 19) & 0xfff80000U);
}

static inline u32 rotateWordRight8(u32 value) {
    return (((s32)value >> 8) & 0x00ffffffU) | ((value << 24) & 0xff000000U);
}

#endif
