/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0052B0B4[];
extern char D_0052B0B8[];
extern char D_0052B0C0[];

void func_001E5A30(void *arg0, void *arg1) {
    s16 spC;
    s16 spE;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f1;
    s16 *var_a2;
    s32 temp_f5;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v1;

    var_a2 = &spC;
    var_v1 = 4;
    if (var_a2 != NULL) {
        do {
            *var_a2 = 0;
            var_v1 -= 1;
            var_a2 += 1;
        } while (var_v1 != 0);
    }
    temp_f4 = M2C_FIELD(arg1, f32 *, 0);
    temp_f3 = M2C_FIELD(arg1, f32 *, 4);
    temp_f5 = (s32) (*(f32 *)D_0052B0B4);
    spE = (s16) (s32) (*(f32 *)D_0052B0B8);
    spC = (s16) temp_f5;
    temp_f1 = (f32) temp_f5;
    temp_f2 = (f32) spE;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s64 *, 0x28) = (s64) ((((s64) ((((s64) ((s64) (s32) (temp_f2 + (temp_f3 + M2C_FIELD(arg1, f32 *, 0xC))) << 0x30) >> 0x30) - 1) << 0x20) >> 0x20) << 0x30) | ((((s64) ((s64) (s32) (temp_f3 + temp_f2) << 0x30) >> 0x30) << 0x20) | (((s64) ((s64) (s32) (temp_f4 + temp_f1) << 0x30) >> 0x30) | (((s64) ((((s64) ((s64) (s32) (temp_f1 + (temp_f4 + M2C_FIELD(arg1, f32 *, 8))) << 0x30) >> 0x30) - 1) << 0x20) >> 0x20) << 0x10))));
        if ((*(f32 *)D_0052B0C0) != 1.0f) {
            temp_v1 = M2C_FIELD(arg0, u16 *, 0x2C) & 0x7FF;
            if (temp_v1 < 0) {
                var_f0 = 2.0f * (f32) (((u32) temp_v1 >> 1) | (temp_v1 & 1));
            } else {
                var_f0 = (f32) temp_v1;
            }
            M2C_FIELD(arg0, u16 *, 0x2C) = (u16) ((M2C_FIELD(arg0, u16 *, 0x2C) & ~0x7FF) | (((s64) ((s64) (s32) (var_f0 * (*(f32 *)D_0052B0C0)) << 0x30) >> 0x30) & 0x7FF));
            temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x2E) & 0x7FF;
            if (temp_v1_2 < 0) {
                var_f1 = 2.0f * (f32) (((u32) temp_v1_2 >> 1) | (temp_v1_2 & 1));
            } else {
                var_f1 = (f32) temp_v1_2;
            }
            M2C_FIELD(arg0, u16 *, 0x2E) = (u16) ((M2C_FIELD(arg0, u16 *, 0x2E) & ~0x7FF) | (((s64) ((s64) (s32) (var_f1 * (*(f32 *)D_0052B0C0)) << 0x30) >> 0x30) & 0x7FF));
        }
        M2C_FIELD(arg0, u8 *, 0x3C) = (u8) (M2C_FIELD(arg0, u8 *, 0x3C) | 0x20);
    }
}
