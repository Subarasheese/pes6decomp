/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/word_transform.h"

extern s32 func_00BF6AA0(s32 byteOffset, s32 count, const s32 *excluded);

s32 func_00BF78C8(u32 *word, const u32 *end, const u8 *base, s32 count, const s32 *excluded) {
    for (; (s32)word < (s32)end; ++word) {
        if (func_00BF6AA0((const u8 *)word - base, count, excluded) > 0) {
            *word =
                unshuffleWordBytes(rotateWordRight13(rotateWordRight8(*word ^ PES6_WORD_XOR_A)));
        }
    }
    return 0;
}
