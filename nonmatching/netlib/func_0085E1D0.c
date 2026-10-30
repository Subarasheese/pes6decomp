/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00858B60(s16 *, M2C_UNK);                  /* extern */
extern void *D_003EA358;
extern char D_008B21C0[];

s32 func_0085E1D0(void) {
    s16 *var_s1;
    s32 var_s0;

    if (D_003EA358 != NULL) {
        if (M2C_FIELD(D_003EA358, s8 *, 4) != 0) {
            return 0;
        }
        var_s0 = 1;
        var_s1 = ((void *)D_008B21C0);
loop_12:
        if (var_s0 < (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1)) {
            if (((s32) M2C_FIELD(D_003EA358, u8 *, 0xE) >> (*var_s1 - 1)) & 1) {
                var_s0 += 1;
                var_s1 += 0x1C;
                goto loop_12;
            }
            return 0;
        }
        return 1;
    }
    return 0;
}
