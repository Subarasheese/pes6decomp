/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/word_transform.h"

extern s32 func_00C24180(s32 selection);
extern const WordTransform D_00C47E58[8];

s32 func_00C241E8(u32 *word, const u32 *end, const u8 *base, s32 selection, s32 count,
                  const s32 *excluded) {
    s32 i = 0;
    s32 schedule = func_00C24180(selection);
    for (; i < (s32)((u32)schedule >> 28); ++i) {
        D_00C47E58[(schedule >> (i * 4)) & 15](word, end, base, count, excluded);
    }
    return 0;
}
