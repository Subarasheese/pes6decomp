/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
s32 func_008B28B0(s32, s32, u8);                    /* extern */
extern char D_008EDDA0[];

void func_008DF5D0(void *arg0, s32 arg1, void *arg2) {
    s32 *var_s1;
    s32 temp_a1_2;
    s32 temp_s4;
    s32 var_a1;
    s32 var_s3;
    void *temp_a0;
    void *temp_a1;
    void *temp_s0;
    void *temp_s6;
    void *var_a2;
    void *var_s2;

    var_a1 = arg1;
    var_a2 = arg2;
    temp_s6 = var_a2;
    temp_s4 = var_a1;
    var_s3 = 0;
    var_s2 = temp_s6;
    M2C_FIELD(var_a2, s32 *, 0) = 0x98;
    var_s1 = ((void *)D_008EDDA0);
    temp_s0 = arg0 + temp_s4;
    M2C_FIELD(var_a2, u8 *, 0x2C) = (u8) M2C_FIELD(arg0, u8 *, 0);
    M2C_FIELD(var_a2, s8 *, 0x2D) = 1;
    M2C_FIELD(var_a2, s8 *, 0x58) = 1;
    M2C_FIELD(var_a2, s8 *, 0x59) = 1;
    do {
        M2C_FIELD(var_s2, s32 *, 4) = func_008B28B0(var_s3, var_a1, (u8) var_a2);
        if ((var_s3 == 2) && ((s32) M2C_FIELD((temp_s0 + (M2C_FIELD(arg0, u8 *, 0x946) * 0x52)), u8 *, 0xA13) >= 2)) {
            M2C_FIELD(var_s2, s32 *, 4) = func_001F08B0(0x3C002E);
        }
        temp_a1 = temp_s6 + var_s3;
        M2C_FIELD(var_s2, s32 *, 0x30) = (s32) *var_s1;
        M2C_FIELD(temp_a1, s8 *, 0x5A) = 1;
        if (temp_s4 == 0) {
            temp_a1_2 = M2C_FIELD(var_s2, s32 *, 0x30);
            if ((temp_a1_2 != 0x15) && (temp_a1_2 != 0x12) && (temp_a1_2 != 0x11)) {

            } else {
                M2C_FIELD(temp_a1, s8 *, 0x5A) = 0;
            }
        }
        temp_a0 = M2C_FIELD(arg0, void **, 0x3220);
        if (temp_a0 != NULL) {
            if (M2C_FIELD(temp_a0, u16 *, 0x208) == 0xFFFF) {
                goto block_14;
            }
        } else {
block_14:
            if (M2C_FIELD(var_s2, s32 *, 0x30) == 0x15) {
                M2C_FIELD(temp_a1, s8 *, 0x5A) = 0;
            }
        }
        var_a2 = (void *) M2C_FIELD(arg0, u8 *, 0x946);
        var_a1 = (s32) M2C_FIELD((temp_s0 + ((s32) (((s32) (((s32) var_a2 * 4) + var_a2) * 8) + var_a2) * 2)), u8 *, 0x9F2);
        if (var_a1 == 4) {
            var_a1 = M2C_FIELD(var_s2, s32 *, 0x30);
            if (var_a1 == 0x15) {
                M2C_FIELD(temp_a1, s8 *, 0x5A) = 0;
            }
        }
        var_s3 += 1;
        var_s2 += 4;
        var_s1 += 4;
    } while (var_s3 < 5);
}
