/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/word_transform.h"

extern s32 func_00C24140(s32 byteOffset, s32 count, const s32 *excluded);

s32 func_00C23DE8(u32 *word, const u32 *end, const u8 *base, s32 count, const s32 *excluded) {
    for (; (s32)word < (s32)end; ++word) {
        if (func_00C24140((const u8 *)word - base, count, excluded) > 0) {
            *word = shuffleWordBytes((rotateWordLeft8(*word) ^ PES6_WORD_XOR_B));
        }
    }
    return 0;
}
