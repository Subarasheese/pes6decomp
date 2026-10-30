/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 D_003E7C24;
extern u8 D_003E7C25;
extern u8 D_003E7C26;
extern u8 D_003E7C28;
extern u8 D_003E7C29;
extern u8 D_003E7C2A;
extern u8 D_003E7C2C;
extern u8 D_003E7C2D;
extern u8 D_003E7C2E;
extern u8 D_003E7C30;
extern u8 D_003E7C31;
extern u8 D_003E7C32;
extern u8 D_003E7C34;
extern u8 D_003E7C35;
extern u8 D_003E7C36;
extern u8 D_003E7C38;
extern u8 D_003E7C39;
extern u8 D_003E7C3A;
extern s32 D_003EAD78;

void func_00B16BE0(s32 arg0, s32 arg1, void *arg2) {
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f1_5;
    u8 temp_a0;

    M2C_FIELD(arg2, s8 *, 3) = 0x60;
    if (D_003EAD78 != 0) {
        temp_a0 = M2C_FIELD(((arg1 & 0xFF) + (((arg0 & 0xFF) * 8) + D_003EAD78)), u8 *, 0x33);
        if ((s32) temp_a0 < 0) {
            var_f1 = 2.0f * (f32) ((temp_a0 >> 1) | (temp_a0 & 1));
        } else {
            var_f1 = (f32) temp_a0;
        }
        if (!(var_f1 < 5.0f)) {
            M2C_FIELD(arg2, u8 *, 0) = (u8) D_003E7C24;
            M2C_FIELD(arg2, u8 *, 1) = (u8) D_003E7C25;
            M2C_FIELD(arg2, u8 *, 2) = (u8) D_003E7C26;
            return;
        }
        if ((s32) temp_a0 < 0) {
            var_f1_2 = 2.0f * (f32) ((temp_a0 >> 1) | (temp_a0 & 1));
        } else {
            var_f1_2 = (f32) temp_a0;
        }
        if (!(var_f1_2 < 4.0f)) {
            M2C_FIELD(arg2, u8 *, 0) = (u8) D_003E7C28;
            M2C_FIELD(arg2, u8 *, 1) = (u8) D_003E7C29;
            M2C_FIELD(arg2, u8 *, 2) = (u8) D_003E7C2A;
            return;
        }
        if ((s32) temp_a0 < 0) {
            var_f1_3 = 2.0f * (f32) ((temp_a0 >> 1) | (temp_a0 & 1));
        } else {
            var_f1_3 = (f32) temp_a0;
        }
        if (!(var_f1_3 < 3.0f)) {
            M2C_FIELD(arg2, u8 *, 0) = (u8) D_003E7C2C;
            M2C_FIELD(arg2, u8 *, 1) = (u8) D_003E7C2D;
            M2C_FIELD(arg2, u8 *, 2) = (u8) D_003E7C2E;
            return;
        }
        if ((s32) temp_a0 < 0) {
            var_f1_4 = 2.0f * (f32) ((temp_a0 >> 1) | (temp_a0 & 1));
        } else {
            var_f1_4 = (f32) temp_a0;
        }
        if (!(var_f1_4 < 2.0f)) {
            M2C_FIELD(arg2, u8 *, 0) = (u8) D_003E7C30;
            M2C_FIELD(arg2, u8 *, 1) = (u8) D_003E7C31;
            M2C_FIELD(arg2, u8 *, 2) = (u8) D_003E7C32;
            return;
        }
        if ((s32) temp_a0 < 0) {
            var_f1_5 = 2.0f * (f32) ((temp_a0 >> 1) | (temp_a0 & 1));
        } else {
            var_f1_5 = (f32) temp_a0;
        }
        if (var_f1_5 < 1.0f) {
            M2C_FIELD(arg2, u8 *, 0) = (u8) D_003E7C38;
            M2C_FIELD(arg2, u8 *, 1) = (u8) D_003E7C39;
            M2C_FIELD(arg2, u8 *, 2) = (u8) D_003E7C3A;
        } else {
            M2C_FIELD(arg2, u8 *, 0) = (u8) D_003E7C34;
            M2C_FIELD(arg2, u8 *, 1) = (u8) D_003E7C35;
            M2C_FIELD(arg2, u8 *, 2) = (u8) D_003E7C36;
        }
    }
}
