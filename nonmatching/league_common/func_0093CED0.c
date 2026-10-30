/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0093D040(s32, s32);
s32 func_00236BA0(u8, u8);                          /* extern */
s32 func_00236DC0();                                /* extern */
M2C_UNK func_0094C710(M2C_UNK);                     /* extern */
M2C_UNK func_0098D0F0();                            /* extern */
extern void *D_003E77B0;
extern void *D_003E77B4;

void func_0093CED0(void) {
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_v1;
    u8 temp_s0;
    u8 temp_s1;

    temp_v1 = M2C_FIELD(D_003E77B0, u32 *, 0x20);
    if (!(temp_v1 & 0x4000)) {
        if (!(temp_v1 & 0x2000)) {
            var_v0 = 0;
        } else {
            var_v0 = 2;
        }
    } else {
        var_v0 = 1;
    }
    if (!(var_v0 & 0xFF)) {
loop_9:
        temp_s0 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
        temp_s1 = M2C_FIELD((D_003E77B4 + (temp_s0 * 0xC)), u8 *, 0x4AB6);
        if (func_00236DC0() != 1) {
            if ((func_00236BA0(temp_s0, temp_s1) == 0) && ((func_0093D040((s32) temp_s0, (s32) temp_s1) & 0xFF) == 1)) {
                var_v0_2 = 1 & 0xFF;
            } else {
                goto loop_9;
            }
        } else {
            var_v0_2 = 0;
        }
        if (var_v0_2 == 0) {
            M2C_FIELD(D_003E77B0, u32 *, 0x20) = (u32) (M2C_FIELD(D_003E77B0, u32 *, 0x20) | 0x800);
        } else {
            func_0094C710(1);
        }
    }
    func_0098D0F0();
}
