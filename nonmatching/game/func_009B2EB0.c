/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
s32 func_009A01D0(u8);                              /* extern */
extern char D_00591BC0[];
extern char D_00591BE4[];
extern char D_00591DCD[];
extern char D_00591E10[];
extern char D_005926E2[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_009B2EB0(s32 arg0) {
    f32 temp_f20;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f1_2;
    u8 temp_s0;

    temp_s0 = (*(u8 *)D_00591BE4);
    temp_f20 = (f32) func_009A01D0((*(u8 *)D_00591DCD));
    temp_f2 = temp_f20 / (f32) func_002AE670(0x190);
    if ((s32) temp_s0 >= 0) {
        var_f1 = (f32) temp_s0;
    } else {
        var_f1 = 2.0f * (f32) ((temp_s0 >> 1) | (temp_s0 & 1));
    }
    if (arg0 >= 0) {
        var_f1_2 = (f32) arg0;
    } else {
        var_f1_2 = 2.0f * (f32) (((u32) arg0 >> 1) | (arg0 & 1));
    }
    if ((s32) temp_s0 < 0) {
        var_f0 = 2.0f * (f32) ((temp_s0 >> 1) | (temp_s0 & 1));
    } else {
        var_f0 = (f32) temp_s0;
    }
    if ((s32) (*(u8 *)D_00591BC0) >= 0) {
        var_f0_2 = (f32) (*(u8 *)D_00591BC0);
    } else {
        var_f0_2 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BC0) >> 1) | ((*(u8 *)D_00591BC0) & 1));
    }
    (*(s16 *)D_00591E10) += (s64) ((s64) (s32) ((((var_f1_2 * var_f0) / (f32) (*(u8 *)D_005926E2)) * ((var_f1 / 60.0f) * temp_f2)) / ((5.0f * (1.0f + var_f0_2)) / 10.0f)) << 0x30) >> 0x30;
}
