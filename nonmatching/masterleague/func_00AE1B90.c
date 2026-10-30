/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 D_003E7C8C;
extern u8 D_003E7C8D;
extern u8 D_003E7C8E;
extern u8 D_003E7C90;
extern u8 D_003E7C91;
extern u8 D_003E7C92;
extern u8 D_003E7C94;
extern u8 D_003E7C95;
extern u8 D_003E7C96;
extern u8 D_003E7C98;
extern u8 D_003E7C99;
extern u8 D_003E7C9A;
extern u8 D_003E7C9C;
extern u8 D_003E7C9D;
extern u8 D_003E7C9E;
extern u8 D_003E7CA0;
extern u8 D_003E7CA1;
extern u8 D_003E7CA2;
extern void *D_003EADA4;

void func_00AE1B90(s32 arg0, s32 arg1, void *arg2) {
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f1_5;
    u8 temp_v1;

    M2C_FIELD(arg2, s8 *, 3) = 0x60;
    if (D_003EADA4 != NULL) {
        temp_v1 = M2C_FIELD(((arg1 & 0xFF) + (((arg0 & 0xFF) * 8) + ((M2C_FIELD(D_003EADA4, s32 *, 0x3DBC) * 0x314) + D_003EADA4))), u8 *, 0xFA6);
        if ((s32) temp_v1 < 0) {
            var_f1 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
        } else {
            var_f1 = (f32) temp_v1;
        }
        if (!(var_f1 < 5.0f)) {
            M2C_FIELD(arg2, u8 *, 0) = (u8) D_003E7C8C;
            M2C_FIELD(arg2, u8 *, 1) = (u8) D_003E7C8D;
            M2C_FIELD(arg2, u8 *, 2) = (u8) D_003E7C8E;
            return;
        }
        if ((s32) temp_v1 < 0) {
            var_f1_2 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
        } else {
            var_f1_2 = (f32) temp_v1;
        }
        if (!(var_f1_2 < 4.0f)) {
            M2C_FIELD(arg2, u8 *, 0) = (u8) D_003E7C90;
            M2C_FIELD(arg2, u8 *, 1) = (u8) D_003E7C91;
            M2C_FIELD(arg2, u8 *, 2) = (u8) D_003E7C92;
            return;
        }
        if ((s32) temp_v1 < 0) {
            var_f1_3 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
        } else {
            var_f1_3 = (f32) temp_v1;
        }
        if (!(var_f1_3 < 3.0f)) {
            M2C_FIELD(arg2, u8 *, 0) = (u8) D_003E7C94;
            M2C_FIELD(arg2, u8 *, 1) = (u8) D_003E7C95;
            M2C_FIELD(arg2, u8 *, 2) = (u8) D_003E7C96;
            return;
        }
        if ((s32) temp_v1 < 0) {
            var_f1_4 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
        } else {
            var_f1_4 = (f32) temp_v1;
        }
        if (!(var_f1_4 < 2.0f)) {
            M2C_FIELD(arg2, u8 *, 0) = (u8) D_003E7C98;
            M2C_FIELD(arg2, u8 *, 1) = (u8) D_003E7C99;
            M2C_FIELD(arg2, u8 *, 2) = (u8) D_003E7C9A;
            return;
        }
        if ((s32) temp_v1 < 0) {
            var_f1_5 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
        } else {
            var_f1_5 = (f32) temp_v1;
        }
        if (var_f1_5 < 1.0f) {
            M2C_FIELD(arg2, u8 *, 0) = (u8) D_003E7CA0;
            M2C_FIELD(arg2, u8 *, 1) = (u8) D_003E7CA1;
            M2C_FIELD(arg2, u8 *, 2) = (u8) D_003E7CA2;
        } else {
            M2C_FIELD(arg2, u8 *, 0) = (u8) D_003E7C9C;
            M2C_FIELD(arg2, u8 *, 1) = (u8) D_003E7C9D;
            M2C_FIELD(arg2, u8 *, 2) = (u8) D_003E7C9E;
        }
    }
}
