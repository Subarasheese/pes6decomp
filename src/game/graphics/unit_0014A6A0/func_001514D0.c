/* compiler: mwcc-3.0.1b151 */
#pragma opt_repositioncode off
#include "types.h"

extern s32 func_00145590(void *texture);

/* Count and pointer to texture handles occupy the first two words of the list. */
void func_001514D0(const void *list) {
    s32 count, i;
    s32 *slot;
    count = *(const s32 *)list;
    for (i = 0; i < count; i++) {
        slot = (s32 *)(*(const s32 *)((const u8 *)list + 4) + i * 4);
        if (*slot != 0) {
            func_00145590((void *)*slot);
        }
    }
}
