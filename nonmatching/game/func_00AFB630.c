/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00288580(void);
extern char D_00591DF0[];

void func_00AFB630(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;

    temp_a2 = ((arg2 * (*(u8 *)D_00591DF0)) / 60) + ((u32) (arg2 * (*(u8 *)D_00591DF0)) >> 0x1F);
    if (arg1 >= M2C_FIELD(arg0, s32 *, 0x1C)) {
        var_a0 = (s32) (0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) / temp_a2;
        if (var_a0 >= 0x201) {
            var_a0 = 0x200;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + var_a0);
        if (arg1 < M2C_FIELD(arg0, s32 *, 0x1C)) {
            goto block_4;
        }
    } else {
        temp_v0 = temp_a2 * 3;
        var_s0 = temp_v0 >> 1;
        if (temp_v0 < 0) {
            var_s0 = (s32) (temp_v0 + 1) >> 1;
        }
        if (func_00288580() != 0) {
            var_s0 = ((var_s0 * 0xB) / 10) + ((u32) (var_s0 * 0xB) >> 0x1F);
        }
        var_a0_2 = (s32) (0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) / var_s0;
        if (var_a0_2 >= 0x201) {
            var_a0_2 = 0x200;
        }
        if (var_a0_2 < M2C_FIELD(arg0, s32 *, 0x1C)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - var_a0_2);
            if (M2C_FIELD(arg0, s32 *, 0x1C) < arg1) {
block_4:
                M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        }
    }
}
