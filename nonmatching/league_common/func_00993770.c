/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00229280(u8);                            /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00983E20(u8);                              /* extern */
s32 func_00983E70(u8);                              /* extern */
M2C_UNK func_009920B0(M2C_UNK);                     /* extern */
M2C_UNK func_00992160(M2C_UNK);                     /* extern */
void *func_00993A80();                              /* extern */
extern void *D_003E7B0C;

void func_00993770(s32 arg0) {
    u8 temp_s1;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 var_a0;
    u8 var_s1;
    u8 var_v0;
    void *temp_v0;

    temp_v0 = func_00993A80();
    if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, s32 *, 0x258) == 0)) {
        if ((u32) (M2C_FIELD(temp_v0, u8 *, 0x25F) - 1) >= 4U) {
            temp_s1 = M2C_FIELD(D_003E7B0C, u8 *, 0x29);
            var_s1 = func_00983E70(temp_s1) & 0xFF;
            var_a0 = (((var_s1 & 0xFF) + (func_00983E20(temp_s1) & 0xFF)) - 1) & 0xFF;
        } else {
            var_a0 = M2C_FIELD(temp_v0, u8 *, 0x25E);
            var_s1 = M2C_FIELD(temp_v0, u8 *, 0x25D);
        }
        if (arg0 < 0) {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x254);
            if ((var_s1 & 0xFF) >= (s32) temp_v1) {
                M2C_FIELD(temp_v0, u8 *, 0x254) = var_a0;
            } else {
                var_v0 = temp_v1 + (arg0 & 0xFF);
                goto block_17;
            }
        } else if (arg0 > 0) {
            temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0x254);
            if ((s32) temp_v1_2 >= (var_a0 & 0xFF)) {
                M2C_FIELD(temp_v0, u8 *, 0x254) = var_s1;
            } else {
                var_v0 = temp_v1_2 + (arg0 & 0xFF);
block_17:
                M2C_FIELD(temp_v0, u8 *, 0x254) = var_v0;
            }
        }
        M2C_FIELD(temp_v0, u8 *, 0x255) = (u8) M2C_FIELD(func_00229280(M2C_FIELD(temp_v0, u8 *, 0x254)), u8 *, 2);
        func_0026E840(0x8400F803);
        func_009920B0(1);
        func_00992160(1);
    }
}
