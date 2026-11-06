/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 D_003E9CD0;
extern char D_005A249C[];

typedef struct { u8 a; u8 b; u8 c[4]; s16 d; } T2;

void func_00293E80(void *arg0, void *arg1, T2 *arg2) {
    f32 temp_f5;
    f32 temp_f4;
    s32 temp_a1_2;
    s32 temp_a1_3;
    u8 temp_a1;
    u8 temp_v1;
    u8 var_v1;

    temp_a1 = M2C_FIELD(arg1, u8 *, 1);

    temp_f4 = M2C_FIELD(arg0, f32 *, 4);
    temp_f5 = M2C_FIELD(arg0, f32 *, 0);
    if (temp_a1 == 3) {
        if (temp_f4 < 20.0f) {
            (*(f32 *)D_005A249C) = 0.55f;
        }
        if (!(temp_f4 < 20.0f) && (temp_f4 < 30.0f)) {
            (*(f32 *)D_005A249C) = 0.57f;
        }
        if (!(temp_f4 < 30.0f) && (temp_f4 < 40.0f)) {
            (*(f32 *)D_005A249C) = 0.6f;
        }
        if (!(temp_f4 < 40.0f) && (temp_f4 < 50.0f)) {
            (*(f32 *)D_005A249C) = 0.63f;
        }
        if (!(temp_f4 < 50.0f) && (temp_f4 < 60.0f)) {
            (*(f32 *)D_005A249C) = 0.66f;
        }
        if (!(temp_f4 < 60.0f) && (temp_f4 < 70.0f)) {
            (*(f32 *)D_005A249C) = 0.7f;
        }
        if (!(temp_f4 < 70.0f) && (temp_f4 < 80.0f)) {
            (*(f32 *)D_005A249C) = 0.76f;
        }
        if (!(temp_f4 < 80.0f)) {
            (*(f32 *)D_005A249C) = 0.81f;
        }
        if (!(temp_f4 < 90.0f)) {
            (*(f32 *)D_005A249C) = 127.0f;
        }
        if (arg2->d == 2) {
            (*(f32 *)D_005A249C) = 0.54f;
        }
        if (arg2->d == 3) {
            (*(f32 *)D_005A249C) = 0.74f;
        }
        if (arg2->d == 1) {
            (*(f32 *)D_005A249C) = 1.0f;
        }
        if (arg2->a == 2) {
            (*(f32 *)D_005A249C) = 0.0f;
        }
        temp_a1_2 = (D_003E9CD0 ^ (D_003E9CD0 << 5)) & 0xFF;
        temp_a1_3 = (temp_a1_2 ^ (temp_a1_2 >> 3)) & 0xFF;
        temp_v1 = temp_a1_3 ^ (temp_a1_3 << 5);
        D_003E9CD0 = temp_v1;
        if (((*(f32 *)D_005A249C) * ((f32) ((temp_v1 & 0xFF) - 1) / 254.0f)) < 0.5f) {
            if ((temp_f5 < 5.0f) && (temp_f4 < 40.0f)) {
                var_v1 = 2;
            } else {
                var_v1 = 0;
            }
        } else if (!(temp_f5 <= 2.0f)) {
            var_v1 = 1;
        } else {
            var_v1 = 2;
        }
        M2C_FIELD(arg0, u8 *, 8) = var_v1;
    } else {
        M2C_FIELD(arg0, u8 *, 8) = temp_a1;
    }
}
