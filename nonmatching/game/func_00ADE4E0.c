/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00930240(void *, void *);              /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
s32 func_009F4DC0(s32, f32);                        /* extern */
s32 func_00A22C50(void *, M2C_UNK, s32, s32, s32, s16, s32, M2C_UNK, f32); /* extern */
s16 func_00AB3B70(void *, s16, s32);                /* extern */
f32 func_00AB3C60(void *, s32);                     /* extern */
f32 func_00AB4270(void *);                          /* extern */
s32 func_00B0B4D0();                                /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern void *Pes6Ball_Current;
extern char D_00592260[];
extern char D_0059226E[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64, 0x68, 0x6c, 0x70, 0x74, 0x78, 0x7c, 0x80, 0x84, 0x88, 0x8c, 0x90, 0x94], gap at: 0x8. */
s32 func_00ADE4E0(void *arg0, s8 arg1, s32 arg2, s16 arg3, s32 arg4) {
    f32 temp_f20;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s2;
    void *temp_a1;
    void *temp_v0_2;

    if (func_00B0B4D0() == 0) {
        if ((arg2 & 0xFFFF) >= 0xC00) {
            if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFFFF) < 0x21) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x21)) {
                goto block_13;
            }
            goto block_4;
        }
block_4:
        temp_f20 = func_00AB4270(arg0);
        var_s2 = 4;
loop_5:
        temp_v0 = func_009F4DC0(0xA - var_s2, temp_f20);
        temp_s0 = temp_v0 * 4;
        temp_v0_2 = Pes6Ball_Current + temp_s0;
        if ((((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), func_009B3480(arg0, M2C_FIELD(temp_v0_2, f32 *, 0x47C), M2C_FIELD(temp_v0_2, f32 *, 0xB7C)) & 0xFFFF) & 0xFFFF) >= 7) || ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFFFF) >= 0x11)) && (func_00A22C50(arg0, 0xCC, arg1 & 0xFF, var_s2, temp_v0, arg3, arg4, 0, temp_f20) != 0)) {
            func_00209A00(M2C_FIELD(arg0, void **, 4), 0xCC, var_s2 & 0xFFFF);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28) = func_00AB3C60(arg0, temp_v0);
            M2C_FIELD(arg0, s32 *, 0x98) = (s32) ((M2C_FIELD((temp_s0 + Pes6Ball_Current), f32 *, 0x7FC) / 32.0f) + (f32) (func_00BBB8C0(8) + 0xE0));
            temp_a1 = M2C_FIELD(arg0, void **, 4);
            M2C_FIELD(temp_a1, s8 *, 0x2D) = arg1;
            M2C_FIELD(arg0, u16 *, 0x28) = (u16) (*(u16 *)D_0059226E);
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (*(s32 *)D_00592260);
            func_00930240(arg0, temp_a1);
            func_00207390(M2C_FIELD(arg0, void **, 4), 4);
            M2C_FIELD(arg0, s8 *, 0x66) = 0;
            M2C_FIELD(arg0, s16 *, 0x38) = func_00AB3B70(arg0, arg3, temp_v0);
            M2C_FIELD(arg0, s16 *, 0x2C) = arg3;
            M2C_FIELD(arg0, s8 *, 0x16) = 4;
            M2C_FIELD(arg0, s16 *, 0x18) = 0x12;
            return 1;
        }
        var_s2 -= 2;
        if (var_s2 < 0) {
            goto block_13;
        }
        goto loop_5;
    }
block_13:
    return 0;
}
