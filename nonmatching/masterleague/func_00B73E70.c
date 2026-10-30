/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B77020(void);
M2C_UNK func_00B720A0();                            /* extern */
M2C_UNK func_00B727C0(u8);                          /* extern */

void func_00B73E70(s32 arg0) {
    s32 var_s1;
    u32 temp_v0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_v0;
    void *temp_v0_2;

    temp_v0 = func_00B77020();
    if ((temp_v0 != 0) && ((s32) M2C_FIELD(temp_v0, u8 *, 0x3D1) > 0)) {
        temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x3D2) + temp_v0;
        if ((s32) M2C_FIELD(temp_v0_2, u8 *, 0x3D3) >= 0xC) {
            M2C_FIELD(temp_v0_2, u8 *, 0x3D3) = 0xBU;
        }
        var_s1 = 0;
        if (arg0 < 0) {
            temp_v1 = M2C_FIELD(temp_v0_2, u8 *, 0x3D3);
            if ((s32) temp_v1 <= 0) {
                M2C_FIELD(temp_v0_2, u8 *, 0x3D3) = 0U;
            } else {
                var_s1 = 1;
                var_v0 = temp_v1 + (arg0 & 0xFF);
                goto block_14;
            }
        } else if (arg0 > 0) {
            temp_v1_2 = M2C_FIELD(temp_v0_2, u8 *, 0x3D3);
            if ((s32) temp_v1_2 >= 0xB) {
                var_v0 = 0xB;
            } else {
                var_s1 = 1;
                var_v0 = temp_v1_2 + (arg0 & 0xFF);
            }
block_14:
            M2C_FIELD(temp_v0_2, u8 *, 0x3D3) = var_v0;
        }
        func_00B727C0(M2C_FIELD(temp_v0, u8 *, 0x3D2));
        if ((var_s1 & 0xFF) == 1) {
            M2C_FIELD(temp_v0, s8 *, 0x3CC) = 6;
        }
        func_00B720A0();
    }
}
