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

typedef s32 (*WordTransform)(u32 *word, const u32 *end, const u8 *base, s32 count,
                             const s32 *excluded);

static inline u32 shuffleWordBytes(u32 value) {
    u32 result = (value << 16) & 0x00ff0000U;
    result |= ((s32)value >> 8) & 0x000000ffU;
    result |= (value << 8) & 0xff000000U;
    result |= ((s32)value >> 16) & 0x0000ff00U;
    return result;
}

static inline u32 unshuffleWordBytes(u32 value) {
    u32 byte1 = (value << 8) & 0x0000ff00U;
    u32 byte2 = ((s32)value >> 8) & 0x00ff0000U;
    u32 byte0 = ((s32)value >> 16) & 0x000000ffU;
    u32 byte3 = (value << 16) & 0xff000000U;
    return byte1 | ((byte2 | byte3) | byte0);
}

#endif
