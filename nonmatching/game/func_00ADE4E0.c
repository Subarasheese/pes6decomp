/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00930240(void *, void *);              /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
s32 func_009F4DC0(s32, f32);                        /* extern */
s32 func_00A22C50(void *, M2C_UNK, s32, s32, s32, s32, s32, M2C_UNK, f32); /* extern */
s16 func_00AB3B70(void *, s32, s32);                /* extern */
f32 func_00AB3C60(void *, s32);                     /* extern */
f32 func_00AB4270(void *);                          /* extern */
s32 func_00B0B4D0();                                /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char *Pes6Ball_Current;
extern char D_00592260[];
extern char D_0059226E[];

s32 func_00ADE4E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 temp_f20;
    s32 s1;
    s32 s2;
    s32 s0;
    void *a1;

    if (func_00B0B4D0() != 0) {
        return 0;
    }
    if ((arg2 & 0xFFFF) >= 0xC00) {
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFFFF) < 0x21) {
            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x21) {
                return 0;
            }
        }
    }
    temp_f20 = func_00AB4270(arg0);
    s2 = 4;
    do {
        s1 = func_009F4DC0(0xA - s2, temp_f20);
        s0 = s1 * 4;
        if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), func_009B3480(arg0, M2C_FIELD(Pes6Ball_Current + s0, f32 *, 0x47C), M2C_FIELD(Pes6Ball_Current + s0, f32 *, 0xB7C)) & 0xFFFF) & 0xFFFF) >= 7)
            || ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFFFF) >= 0x11)) {
            if (func_00A22C50(arg0, 0xCC, arg1 & 0xFF, s2, s1, arg3, arg4, 0, temp_f20) != 0) {
                func_00209A00(M2C_FIELD(arg0, void **, 4), 0xCC, s2 & 0xFFFF);
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x28) = func_00AB3C60(arg0, s1);
                M2C_FIELD(arg0, s32 *, 0x98) = (s32) ((M2C_FIELD(Pes6Ball_Current + s0, f32 *, 0x7FC) / 32.0f) + (f32) (func_00BBB8C0(8) + 0xE0));
                a1 = M2C_FIELD(arg0, void **, 4);
                M2C_FIELD(a1, u8 *, 0x2D) = (u8) arg1;
                M2C_FIELD(arg0, u16 *, 0x28) = *(u16 *)D_0059226E;
                M2C_FIELD(arg0, s32 *, 0x20) = *(s32 *)D_00592260;
                func_00930240(arg0, a1);
                func_00207390(M2C_FIELD(arg0, void **, 4), 4);
                M2C_FIELD(arg0, u8 *, 0x66) = 0;
                M2C_FIELD(arg0, s16 *, 0x38) = func_00AB3B70(arg0, arg3, s1);
                M2C_FIELD(arg0, s16 *, 0x2C) = (s16) arg3;
                M2C_FIELD(arg0, u8 *, 0x16) = 4;
                M2C_FIELD(arg0, s16 *, 0x18) = 0x12;
                return 1;
            }
        }
        s2 -= 2;
    } while (s2 >= 0);
    return 0;
}
