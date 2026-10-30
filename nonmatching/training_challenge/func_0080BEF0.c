/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00824080(void);
extern s32 func_00263030(void);
extern char D_00829833[];
extern char D_0082983B[];
extern char D_0082983C[];

void func_0080BEF0(void *arg0, void *arg1) {
    f32 var_f0;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f21;
    s32 var_a1;
    s32 var_a5;
    s32 var_s1;
    s8 var_a4;
    u32 temp_s0;
    u8 temp_a0;
    u8 temp_v0;
    void **temp_v1;
    void **var_a3;

    temp_s0 = func_00824080();
    var_f21 = 0.0f;
    var_s1 = 0;
    if (*M2C_FIELD(*M2C_FIELD(func_00824080(), void ***, 0x18), s8 **, 8) != 0) {
        var_s1 = 1;
    }
    if (var_s1 != 0) {
        var_a4 = (*(s8 *)D_00829833);
    } else {
        var_a4 = (*(s8 *)D_00829833) - 3;
    }
    temp_a0 = M2C_FIELD(temp_s0, u8 *, 0x1C);
    var_a5 = 0;
    if ((s32) temp_a0 > 0) {
        temp_v1 = M2C_FIELD(temp_s0, void ***, 0x18);
        var_a1 = 0;
        var_a3 = temp_v1;
        do {
            if (var_f21 < M2C_FIELD(*var_a3, f32 *, 0x58)) {
                var_f21 = M2C_FIELD(*(temp_v1 + var_a1), f32 *, 0x58);
            }
            var_a5 += 1;
            var_a3 += 4;
            var_a1 += 4;
        } while (var_a5 < (s32) temp_a0);
    }
    var_f20 = 200.0f - ((*(f32 *)D_0082983C) / 12.799999f);
    if (var_f20 < 0.0f) {
        var_f20 = 0.0f;
    }
    if ((*(s8 *)D_00829833) != 0) {
        var_f20 *= 2.0f - ((0.3f * (f32) (var_a4 - 1) * (f32) (*M2C_FIELD(arg0, u8 **, 0xC) + 1)) / 3.0f);
    }
    if (((*(s8 *)D_00829833) != 0) && ((*(s8 *)D_0082983B) != 0)) {
        var_f20 *= 2.0f;
    }
    var_f20_2 = var_f20 * 5.0f;
    if (func_00263030() == 0) {
        temp_v0 = M2C_FIELD(arg1, u8 *, 0x29);
        if ((s32) temp_v0 < 0) {
            var_f0 = 2.0f * (f32) ((temp_v0 >> 1) | (temp_v0 & 1));
        } else {
            var_f0 = (f32) temp_v0;
        }
        var_f20_2 /= var_f0;
    }
    if (func_00263030() == 0) {
        M2C_FIELD(arg1, s16 *, 0x2A) = (s16) (s32) var_f20_2;
    } else if ((u32) ((*(s8 *)D_00829833) - 1) < 2U) {
        M2C_FIELD(arg1, s32 *, 0x30) = 1;
    }
}
