/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
M2C_UNK func_0084B2A0(s32 *, s32, s32, s32, s32, f32); /* extern */
extern s32 D_003E7808;
extern f32 D_003EA2F4;
extern char D_00591BE4[];
extern char D_008B0EC0[];
extern char D_008B0F00[];
extern char D_008B1424[];
extern char D_008B1428[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
f32 func_0084B110(s32 arg0) {
    s32 sp58;
    s32 sp5C;
    f32 *temp_v1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 var_f20;
    f32 var_f4;
    s32 *temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a4;
    s32 temp_s0;
    s32 temp_v0;
    u8 temp_s1;

    temp_s1 = (*(u8 *)D_00591BE4);
    temp_v0 = D_003E7808 + 1;
    D_003E7808 = temp_v0;
    if (arg0 < temp_v0) {
        temp_s0 = (*(s32 *)D_008B1424) & 0xF;
        func_00110E58(func_001105C8(), &sp5C, &sp58);
        temp_a1 = temp_s0 * 4;
        temp_a4 = sp58 / 1000;
        temp_a0 = ((void *)D_008B0F00) + temp_a1;
        temp_a2 = temp_a4 + (sp5C * 0x3E8);
        var_f4 = (f32) (arg0 * 0x10) * (1000.0f / (f32) (temp_a2 - *temp_a0));
        temp_f0 = (f32) temp_s1;
        if (!(var_f4 <= temp_f0)) {
            var_f4 = temp_f0;
        }
        *temp_a0 = temp_a2;
        temp_v1 = ((void *)D_008B0EC0) + temp_a1;
        D_003E7808 = 1;
        temp_f0_2 = (f32) temp_s1;
        temp_f2 = D_003EA2F4 + (var_f4 - *temp_v1);
        var_f20 = temp_f2 / 16.0f;
        *temp_v1 = var_f4;
        D_003EA2F4 = temp_f2;
        if (!(var_f20 <= temp_f0_2)) {
            var_f20 = temp_f0_2;
            D_003EA2F4 = (f32) (temp_s1 * 0x10);
        }
        func_0084B2A0(temp_a0, temp_a1, temp_a2, sp5C, temp_a4, var_f20);
        (*(f32 *)D_008B1428) = var_f20;
    }
    return (*(f32 *)D_008B1428);
}
