/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
f32 func_001CD9E0(f32);                             /* extern */
M2C_UNK func_0097A6D0(void *, u16);                 /* extern */
s32 func_009B30B0(u16, s32);                        /* extern */
s32 func_009B33A0(s32, s32);                        /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
s32 func_00A07B40();                                /* extern */
s32 func_00A09950(void *);                          /* extern */
s32 func_00A0FC40(void *, s32, M2C_UNK);            /* extern */
M2C_UNK func_00AA9F90(void *, void *, s32, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_00C201A0(void *, s32);                     /* extern */
s32 func_00C20350(void *, s32, M2C_UNK);            /* extern */
extern void *Pes6Ball_Current;
extern char D_00591C09[];
extern char D_00591F11[];
extern char D_00591F24[];
extern char D_005926DC[];
extern char D_005926E4[];
extern char Pes6MatchSquads[];

s32 func_00C1E6E0(void *arg0, s32 arg1) {
    f32 var_f12;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v0;
    u8 temp_v1;
    u8 var_v0;

    temp_v0 = func_009B33A0((s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C));
    if (temp_v0 < 0) {
        var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    } else {
        var_f12 = (f32) temp_v0;
    }
    temp_s0 = (s32) func_001CD9E0(var_f12);
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x45);
    temp_a1 = func_009B3480(arg0, M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C)) & 0xFFFF;
    switch (temp_v1) {                              /* irregular */
    case 0x91:
        if (func_00A0FC40(arg0, temp_s0, 0x140) == 0) {
            M2C_FIELD(arg0, u8 *, 0x45) = 0x90U;
        }
        if (func_00C20350(arg0, temp_s0, 1) == 0) {
            var_v0 = 2;
block_68:
            M2C_FIELD(arg0, u8 *, 0x45) = var_v0;
        }
block_69:
        return 0;
    case 0x90:
        if ((M2C_FIELD(arg0, s32 *, 0x1C) >= 0x201) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), temp_a1) & 0xFFFF) >= 0x50)) {
            func_0097A6D0(arg0, M2C_FIELD(arg0, u16 *, 0xA8));
            var_v0 = 0x91;
            goto block_68;
        }
        if (func_00A0FC40(arg0, temp_s0, 0x140) != 0) {
            func_0097A6D0(arg0, M2C_FIELD(arg0, u16 *, 0xA8));
            var_v0 = 0x91;
            goto block_68;
        }
        if (func_00C20350(arg0, temp_s0, 1) == 0) {
            var_v0 = 2;
            goto block_68;
        }
        goto block_69;
    case 0x3:
        if (func_00A0FC40(arg0, temp_s0, 0x28) != 0) {
            var_v0 = 2;
            goto block_68;
        }
        goto block_69;
    case 0x2:
        if (func_00C201A0(arg0, arg1) != 0) {
            temp_a0 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
            func_00AA9F90(arg0, arg0, M2C_FIELD(arg0, s32 *, 0x1C), 1, 0x200, ((temp_a0 * -0x220) / 183) + ((u32) (temp_a0 * -0x220) >> 0x1F));
            M2C_FIELD(arg0, u8 *, 0x45) = 0x80U;
            M2C_FIELD(arg0, s16 *, 0x1CE) = (s16) (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
            M2C_FIELD(arg0, s16 *, 0x1D0) = (s16) (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
        } else {
            if ((func_00A07B40() == 0) && ((*(u8 *)D_00591F24) != 5) && ((*(u8 *)D_00591F11) == 0) && (func_00A0FC40(arg0, temp_s0, 0x50) == 0)) {
                M2C_FIELD(arg0, u8 *, 0x45) = 1U;
            }
            if (func_00A0FC40(arg0, temp_s0, 0x28) == 0) {
                if (arg1 != 0) {
                    if ((*(u8 *)D_00591C09) == 5) {
                        goto block_90;
                    }
                } else {
block_90:
                    var_v0 = 1;
                    goto block_68;
                }
            }
        }
        goto block_69;
    case 0x81:
        if (func_00A0FC40(arg0, temp_s0, 0x50) == 0) {
            if (func_00C201A0(arg0, arg1) == 0) {
                M2C_FIELD(arg0, u8 *, 0x45) = 0U;
            }
        } else {
            var_v0 = 0x80;
            goto block_68;
        }
        goto block_69;
    case 0x80:
        if ((func_00A0FC40(arg0, temp_s0, 0x3C0) == 0) && (arg1 == 0)) {
            var_v0 = 0x81;
            goto block_68;
        }
        if (func_00C201A0(arg0, arg1) == 0) {
            M2C_FIELD(arg0, u8 *, 0x45) = 0U;
        }
        goto block_69;
    default:
        if (func_00C201A0(arg0, arg1) != 0) {
            temp_a0_2 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
            func_00AA9F90(arg0, arg0, M2C_FIELD(arg0, s32 *, 0x1C), 1, 0x200, ((temp_a0_2 * -0x220) / 183) + ((u32) (temp_a0_2 * -0x220) >> 0x1F));
            M2C_FIELD(arg0, u8 *, 0x45) = 0x80U;
            M2C_FIELD(arg0, s16 *, 0x1CE) = (s16) (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
            M2C_FIELD(arg0, s16 *, 0x1D0) = (s16) (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
            goto block_69;
        }
        if (func_00A0FC40(arg0, temp_s0, 0x10) != 0) {
            if (M2C_FIELD(arg0, u16 *, 0x3A) == 6) {
                func_0097A6D0(arg0, M2C_FIELD(arg0, u16 *, 0xA8));
                M2C_FIELD(arg0, u8 *, 0x45) = 0x91U;
                return 1;
            }
            var_v0 = 2;
            goto block_68;
        }
        if (((*(u8 *)D_00591C09) == 5) && ((*(u8 *)D_00591F24) == 1)) {
            if (temp_s0 >= 0x201) {
                M2C_FIELD(arg0, u8 *, 0x3E) = (u8) (*(u8 *)D_005926DC);
                M2C_FIELD(arg0, u8 *, 0x45) = 3U;
            }
        } else if (M2C_FIELD(arg0, u8 *, 0x3E) == (*(u8 *)D_005926DC)) {
            M2C_FIELD(arg0, u8 *, 0x3E) = func_002AE670((s32) (*(u8 *)D_005926E4));
            if (arg1 == 0) {
                if (temp_s0 < 0x201) {
                    if ((func_00A09950(arg0) == 1) && (temp_s0 >= 0x141)) {
                        goto block_85;
                    }
                } else {
block_85:
                    M2C_FIELD(arg0, u8 *, 0x3E) = (u8) (*(u8 *)D_005926DC);
                    M2C_FIELD(arg0, u8 *, 0x45) = 3U;
                }
            }
        }
        goto block_69;
    }
}
