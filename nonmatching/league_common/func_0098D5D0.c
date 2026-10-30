/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0098D1E0(void);
extern s32 func_00226710(void);
s32 func_00236BA0(u8, u8);                          /* extern */
extern void *D_003E77B4;

void func_0098D5D0(void) {
    s32 temp_s0;
    s32 var_v0;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_s1;
    void *temp_v1;
    void *temp_v1_2;

    temp_s1 = M2C_FIELD(D_003E77B4, u8 *, 0x16F1);
    temp_s0 = temp_s1 * 0xC;
    temp_v1 = temp_s0 + D_003E77B4;
    temp_a1 = M2C_FIELD(temp_v1, u8 *, 0x4AB6);
    if (((s32) temp_a1 < (s32) M2C_FIELD(temp_v1, u8 *, 0x4ABA)) && (func_00236BA0(temp_s1, temp_a1) == 1)) {
        if ((func_00226710() & 0xFF) != 6) {
            var_v0 = func_00236BA0(temp_s1, M2C_FIELD((temp_s0 + D_003E77B4), u8 *, 0x4AB6)) & 0xFF;
        } else {
            var_v0 = 1;
        }
        temp_v1_2 = temp_s0 + D_003E77B4;
        temp_a0 = M2C_FIELD(temp_v1_2, u8 *, 0x4AB6);
        if (((s32) temp_a0 < (s32) M2C_FIELD(temp_v1_2, u8 *, 0x4ABA)) && ((var_v0 & 0xFF & 0xFF) == 1)) {
            M2C_FIELD(temp_v1_2, u8 *, 0x4AB6) = (u8) (temp_a0 + 1);
        }
        func_0098D1E0();
    }
}
