/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
extern char D_008A35F0[];

s32 func_00815620(void) {
    s32 temp_a0;
    s32 var_a1;

    if (func_0082C2A0() == 0) {
        goto block_23;
    }
    if (((void *)D_008A35F0) != NULL) {
        if (M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) < 0) {
            return 0;
        }
        if (M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) < 0x10) {
            if (M2C_FIELD(((void *)D_008A35F0), s32 *, 0) == 8) {
                if (M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) < 0xF) {
                    var_a1 = 0;
                    M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) = (s32) (M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) + 1);
                    do {
                        temp_a0 = var_a1 * 8;
                        var_a1 += 1;
                        M2C_FIELD((((void *)D_008A35F0) + (M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) << 6) + temp_a0), s32 *, 0x10) = 0;
                        M2C_FIELD((((void *)D_008A35F0) + (M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) << 6) + temp_a0), s32 *, 0x14) = 0;
                    } while (var_a1 < 8);
block_23:
                    return 1;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
