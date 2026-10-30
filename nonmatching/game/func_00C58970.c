/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00C137C0(u32);
extern void * func_00C13280(void *);
extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
u32 func_002C18C0(void *, u32, M2C_UNK, M2C_UNK);   /* extern */

void func_00C58970(void *arg0, void *arg1, u32 arg2, void *arg3) {
    f32 temp_f1;
    f32 var_f0;
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_v0;
    u32 var_s1;
    u8 temp_s0;

    temp_a0 = func_00C132B0(arg1) & 0xFF;
    M2C_FIELD(arg0, s8 *, 0) = 0x19;
    M2C_FIELD(arg0, u8 *, 2) = (u8) ((temp_a0 >> 5) & 1);
    M2C_FIELD(arg0, s8 *, 3) = (s8) (temp_a0 & 0x1F);
    M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    var_s1 = func_002C18C0(arg1, arg2, 0, 6);
    temp_v0 = func_002C18C0(arg1, arg2, 1, 6);
    if (var_s1 != -1U) {
        goto block_1;
    }
    if (temp_v0 != -1U) {
block_1:
        var_s1 = (var_s1 >= temp_v0) ? temp_v0 : var_s1;
    }
    if (var_s1 == -1U) {
        var_s1 = (u32) arg1;
    }
    if (var_s1 < arg2) {
        do {
            temp_v1 = func_00C132C0((void *) var_s1) & 0xFF;
            if (temp_v1 != 0xF) {
                if (temp_v1 == 0x1B) {
                    var_f0 = M2C_FIELD(arg0, f32 *, 4) + 2.0f;
                    goto block_7;
                }
            } else {
                temp_s0 = M2C_FIELD(func_00C13280((void *) var_s1), u8 *, 4);
                if (M2C_FIELD(func_00C13280((void *) var_s1), u8 *, 5) == 3) {
                    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + 7.0f);
                }
                temp_v1_2 = temp_s0 & 0xFF;
                if (temp_v1_2 & 1) {
                    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + 3.0f);
                }
                if (temp_v1_2 & 2) {
                    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + 5.0f);
                }
                if (temp_v1_2 & 8) {
                    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + 1.5f);
                }
                var_f0 = M2C_FIELD(arg0, f32 *, 4) + 2.0f;
block_7:
                M2C_FIELD(arg0, f32 *, 4) = var_f0;
            }
            var_s1 = func_00C137C0(var_s1);
        } while (var_s1 < arg2);
    }
    if (M2C_FIELD(arg0, u8 *, 2) != (((s32) (func_00C132B0(arg3) & 0xFF) >> 5) & 1)) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 4) * -0.5f;
        M2C_FIELD(arg0, f32 *, 4) = temp_f1;
        if (temp_f1 < -20.0f) {
            M2C_FIELD(arg0, f32 *, 4) = -20.0f;
        }
    }
}
