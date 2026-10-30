/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void func_0021E4B0(void);
extern s32 D_003E77AC;
extern char D_00591C09[];

void func_00225520(s32 arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    u16 *var_s0;
    u16 var_s0_2;
    void *var_a0;

    if (func_00231240() != 1) {
        if ((D_003E77AC != 0) && (temp_v1 = arg0 & 0xFF, ((temp_v1 < 0x50) != 0))) {
            var_s0 = D_003E77AC + (temp_v1 * 0x4D4) + 0x44328;
        } else {
            goto block_7;
        }
    } else {
block_7:
        var_s0 = NULL;
    }
    if (func_00231240() == 1) {
        goto block_14;
    }
    if (var_s0 != NULL) {
        var_s0_2 = *var_s0;
    } else {
block_14:
        var_s0_2 = 0xFFFF & 0xFFFF;
    }
    if (func_00231240() != 1) {
        if ((D_003E77AC != 0) && (temp_v1_2 = arg0 & 0xFF, ((temp_v1_2 < 0x50) != 0))) {
            var_a0 = D_003E77AC + (temp_v1_2 * 0x4D4) + 0x44328;
        } else {
            goto block_22;
        }
    } else {
block_22:
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        if ((var_s0_2 & 0xFFFF) == 0xFFFF) {
            return;
        }
        if ((*(u8 *)D_00591C09) != 0xE) {
            if (M2C_FIELD(var_a0, s8 *, 3) != 0) {
                return;
            }
            func_0021E4B0();
        }
    }
}
