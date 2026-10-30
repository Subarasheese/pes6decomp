/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009F4DC0(s32, f32);
extern s32 func_00B044D0(s32, s32);
extern f32 func_00AB4270(void *);
extern s32 func_009B3070(s32, s32);
extern s32 func_009B32D0(s32, s32, s32);
s32 func_00A19D40(void *, M2C_UNK, M2C_UNK, s32, s32, s32, f32); /* extern */
s32 func_00AB3590(void *, M2C_UNK, s32);            /* extern */
extern char D_0059225C[];
extern char D_0059226E[];
extern char Pes6MatchSquads[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84], gap at: 0x8. */
s32 func_00A94580(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp_f0;
    s32 temp_a2_2;
    s32 temp_s0;
    s32 temp_s6;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    u8 temp_a2;

    temp_s0 = M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x68) & 1 & 1;
    temp_f0 = func_00AB4270(arg0);
    temp_s6 = func_009F4DC0(0x10, temp_f0);
    temp_v0 = func_009B3070(arg1, arg2) & 0xFFFF;
    if (temp_v0 >= 0x801) {
        var_s1 = ((((arg2 & 0xFFFF) - (arg1 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001;
    } else {
        var_s1 = temp_s0;
    }
    if (temp_s0 != var_s1) {
        temp_a2 = M2C_FIELD(arg0, u8 *, 0x12);
        if (((((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a2 * 0x6900))), u8 *, 0x84) << 0x3A) >> 0x3D) + 1) < 4) && (temp_v0 < 0x1801)) {
            (*(s32 *)D_0059225C) = temp_s0;
            (*(s16 *)D_0059226E) = func_009B32D0(arg1, arg2, func_00AB3590(arg0, 0xF4, temp_a2 * 0x69) & 0xFFFF);
            return 0xF4;
        }
    }
    if (temp_v0 >= 0x1800) {
        var_s0 = 0xF3;
        if (func_00A19D40(arg0, 0xF3, 0, arg1, arg3 & 0xFF, temp_s6, temp_f0) == 0) {
            var_s0 = 0x246;
        }
        temp_a2_2 = (func_00B044D0(var_s0, 0x5A) & 0xFFFF) * ((var_s1 != 0) ? -1 : 1);
        (*(s32 *)D_0059225C) = var_s1;
        (*(s16 *)D_0059226E) = (arg2 & 0xFFFF) + temp_a2_2;
        return var_s0;
    }
    (*(s32 *)D_0059225C) = temp_s0;
    if (temp_s0 != arg3) {
        (*(s16 *)D_0059226E) = (s16) arg2;
        return 0xF4;
    }
    (*(s16 *)D_0059226E) = (s16) arg1;
    return 0x193;
}
