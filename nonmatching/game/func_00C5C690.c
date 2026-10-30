/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00C13400(void *);
extern void * func_00C13280(void *);
extern u8 func_00C132C0(void *);
extern void * func_00C13390(void *);
extern u8 func_00C132B0(void *);
extern u32 func_00C137B0(u32);
void *func_002C18C0(s32, M2C_UNK);                  /* extern */
s32 func_002C4B50(void *, s32);                     /* extern */
void *func_00C13640(u32, M2C_UNK *, s32);           /* extern */
extern char D_00CB3450[];
extern char D_00CB3468[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74], gap at: 0x8. */
s32 func_00C5C690(u32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(f32 *, u32, u16)) {
    f32 sp80;
    s32 sp84;
    f32 sp88;
    f32 temp_f20;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_s5;
    u16 temp_a2;
    u16 temp_a3;
    u32 temp_a1_2;
    void *temp_v0;
    void *var_s0;
    void *var_s4;

    var_s5 = 0;
    temp_s3 = arg2 & 0xFF;
    temp_s2 = (temp_s3 >> 5) & 1;
    if ((arg0 == -1U) || (arg1 == -1) || (temp_v0 = func_002C18C0(temp_s2, 6), (temp_v0 == (void *)-1)) || (var_s4 = func_00C13390(temp_v0), (var_s4 == (void *)-1)) || (arg0 >= (u32) var_s4) || ((func_00C132C0(var_s4) & 0xFF) != 0xB) || ((temp_s2 & 0xFF) != (((s32) (func_00C132B0(var_s4) & 0xFF) >> 5) & 1))) {
        var_s4 = (void *)-1;
    }
    var_s0 = (void *)-1;
    if ((var_s4 != (void *)-1) && (temp_s3 == (func_00C132B0(var_s4) & 0xFF))) {
        var_s0 = func_00C13400(var_s4);
        if (var_s0 != (void *)-1) {
            var_s0 = func_00C13640(func_00C137B0((u32) var_s0), ((void *)D_00CB3450), (*(s32 *)D_00CB3468));
        }
    }
    if ((var_s4 != (void *)-1) && (var_s0 != (void *)-1)) {
        temp_f20 = (f32) func_002C4B50(var_s4, temp_s2 & 0xFF);
        temp_a3 = M2C_FIELD(func_00C13280(var_s4), u16 *, 2);
        temp_a0 = (s32) temp_a3 % 312;
        sp84 = 0;
        sp80 = temp_f20 * ((86.59164f * (f32) temp_a0) - 13465.0f);
        sp88 = temp_f20 * ((83.5311f * (f32) ((temp_a3 / 312) + (temp_a3 >> 0x1F))) - 8729.0f);
        temp_a2 = M2C_FIELD(func_00C13280(var_s0), u16 *, 2);
        temp_a1 = (s32) temp_a2 % 312;
        sp84 = 0;
        sp80 = temp_f20 * ((86.59164f * (f32) temp_a1) - 13465.0f);
        temp_a1_2 = temp_a2 >> 0x1F;
        sp88 = temp_f20 * ((83.5311f * (f32) ((temp_a2 / 312) + temp_a1_2)) - 8729.0f);
        var_s5 = arg3(&sp80, temp_a1_2, temp_a2);
    }
    return var_s5;
}
