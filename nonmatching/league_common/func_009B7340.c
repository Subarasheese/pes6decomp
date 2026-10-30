/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225820();                                /* extern */
void *func_00229380();                              /* extern */
s32 func_00235B60();                                /* extern */
s32 func_0097C720(M2C_UNK, s32);                    /* extern */
s32 func_0097EED0(M2C_UNK, s32);                    /* extern */
s32 func_0097EFB0(M2C_UNK, s32);                    /* extern */
s32 func_0097F790(u8, u8, M2C_UNK, s8);             /* extern */
extern void *D_003E7B0C;
extern void *D_003EA9B0;

void func_009B7340(s8 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s0_2;
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_v1;
    s8 temp_s0;
    s8 var_a0;
    s8 var_a3;
    u8 temp_v1_2;
    void *temp_s1;
    void *temp_s2;

    temp_s1 = D_003EA9B0;
    temp_s2 = func_00229380();
    if (temp_s1 != NULL) {
        temp_s3 = func_00225820() & 0xFF;
        temp_v1 = arg1 & 0xFF;
        temp_s0 = func_00235B60() & 0xFF;
        M2C_FIELD(D_003E7B0C, s8 *, 0x2B) = arg0;
        switch (temp_v1) {                          /* irregular */
        case 0:
            M2C_FIELD(D_003E7B0C, s8 *, 0x28) = temp_s0;
            M2C_FIELD(D_003E7B0C, s8 *, 0x29) = 0;
            M2C_FIELD(D_003E7B0C, s8 *, 0x34) = 0;
            M2C_FIELD(D_003E7B0C, s8 *, 0x2A) = arg0;
            return;
        case 1:
            if ((func_0097F790(M2C_FIELD(temp_s2, u8 *, 0), M2C_FIELD(temp_s2, u8 *, 5), 1, arg0) & 0xFF) && (func_0097C720(1, temp_s3) == 1)) {
                M2C_FIELD(D_003E7B0C, s8 *, 0x28) = 1;
                M2C_FIELD(D_003E7B0C, s8 *, 0x29) = 1;
                M2C_FIELD(D_003E7B0C, s8 *, 0x34) = 1;
                var_a0 = (func_0097F790(M2C_FIELD(temp_s2, u8 *, 0), M2C_FIELD(temp_s2, u8 *, 5), 1, arg0) & 0xFF) - 1;
            } else {
                temp_a0 = arg0 & 0xFF;
                M2C_FIELD(D_003E7B0C, s8 *, 0x28) = temp_s0;
                M2C_FIELD(D_003E7B0C, s8 *, 0x34) = 2;
                temp_v1_2 = M2C_FIELD(temp_s1, u8 *, 0x234);
                if ((temp_a0 == (temp_v1_2 - 1)) || ((temp_a0 == (temp_v1_2 - 2)) && (M2C_FIELD(temp_s2, u8 *, 0) == 0xF))) {
                    var_a3 = (temp_a0 + 1) & 0xFF;
                } else {
                    var_a3 = arg0 & 0xFF;
                }
                temp_s1_2 = func_0097F790(M2C_FIELD(temp_s2, u8 *, 0), M2C_FIELD(temp_s2, u8 *, 5), 2, var_a3) & 0xFF;
                temp_s0_2 = func_0097EED0(2, temp_s1_2) & 0xFF;
                if ((func_0097EFB0(2, temp_s1_2 & 0xFF) & 0xFF) != 1) {
                    if ((func_0097EFB0(2, temp_s1_2 & 0xFF) & 0xFF) != 2) {
                        if (M2C_FIELD(temp_s2, u8 *, 0) != 0x14) {
                            var_a0 = (temp_s0_2 & 0xFF) - 1;
                        } else {
                            var_a0 = ((temp_s0_2 & 0xFF) * 2) - 1;
                        }
                    } else {
                        var_a0 = (((temp_s0_2 & 0xFF) - 1) * 2) + 1;
                    }
                } else {
                    var_a0 = ((temp_s0_2 & 0xFF) - 1) * 2;
                }
            }
            M2C_FIELD(D_003E7B0C, s8 *, 0x2A) = var_a0;
            break;
        }
    }
}
