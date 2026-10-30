/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022F0E0(void);
extern void func_0094D930(s32, s32);
s32 func_00210DF0();                                /* extern */
s32 func_00224310(s32, s32);                        /* extern */
void *func_00224520();                              /* extern */
s32 func_00224D90(s32, s32);                        /* extern */
M2C_UNK func_0094CFE0(s32, s32);                    /* extern */
s32 func_00AFDD10(s32, s32);                        /* extern */
extern void *D_003E77B0;

void func_0094D3F0(s32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_v1;
    u8 temp_a0;
    u8 temp_v1_2;
    u8 var_v0;
    void *temp_s4;

    temp_s4 = func_00224520();
    temp_s3 = func_0022F0E0();
    if ((temp_s4 != NULL) && (temp_s3 != 0)) {
        temp_v1 = arg0 & 0xFF;
        if ((temp_v1 < 0x50) && ((temp_s2 = M2C_FIELD(D_003E77B0, u8 *, 0x2C) != temp_v1, temp_s5 = func_00224D90(arg0, arg1) & 0xFFFF, (func_00210DF0() != 2)) || (func_00AFDD10(temp_s5, arg0) != 1))) {
            temp_a1 = func_00224310(arg0, arg1) & 0xFF;
            if (temp_a1 != 0xFF) {
                temp_a0 = M2C_FIELD(temp_s4, u8 *, 3);
                temp_v1_2 = M2C_FIELD(((temp_a1 * 0x14) + (((temp_s2 & 0xFF) * 0x280) + temp_s3)), u8 *, 0x5E);
                if (((u64) ((s64) temp_a0 << 0x38) >> 0x3D) != 0) {
                    if (temp_v1_2 & 0xFF) {
                        var_v0 = (temp_a0 & ~0xE0) | 0x60;
                    } else {
                        var_v0 = (temp_a0 & ~0xE0) | 0x40;
                    }
                } else if (temp_v1_2 & 0xFF) {
                    var_v0 = (temp_a0 & ~0xE0) | 0x60;
                } else {
                    var_v0 = (temp_a0 & ~0xE0) | 0x20;
                }
                M2C_FIELD(temp_s4, u8 *, 3) = var_v0;
                func_0094CFE0(arg0, arg1);
                func_0094D930(arg0, arg1);
            }
        }
    }
}
