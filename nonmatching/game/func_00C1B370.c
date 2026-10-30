/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_001CD9E0(f32);                             /* extern */
M2C_UNK func_0027A600(M2C_UNK);                     /* extern */
M2C_UNK func_0090BA30(void *);                      /* extern */
s32 func_00979270(void *, M2C_UNK);                 /* extern */
s32 func_009B30B0(u16, s32);                        /* extern */
s32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
s32 func_00A07B40(u8);                              /* extern */
s32 func_00A0FC40(void *, s32, M2C_UNK);            /* extern */
M2C_UNK func_00A28A00(void *, u16, M2C_UNK);        /* extern */
s32 func_00C1E6E0(void *, s32);                     /* extern */
M2C_UNK func_00C1F280(void *, s32, u16, s32);       /* extern */
M2C_UNK func_00C1F8F0(void *, s32, s32);            /* extern */
s32 func_00C20350(void *, s32, M2C_UNK);            /* extern */
M2C_UNK func_00C20600(void *, s32, u16, s32, s32);  /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BEC[];
extern char D_00591C09[];
extern char D_00591F11[];
extern char D_00591F24[];

void func_00C1B370(void *arg0) {
    f32 temp_f20;
    f32 temp_f21;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f12_3;
    f32 var_f12_4;
    f32 var_f12_5;
    f32 var_f20;
    f32 var_f21;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_s2;
    s32 var_s3;
    u16 temp_s5;
    u8 temp_a0;
    u8 temp_v1;

    var_s3 = 0;
    func_0027A600(1);
    temp_a0 = M2C_FIELD(arg0, u8 *, 0);
    if ((temp_a0 != 1) && (temp_a0 != 0xC)) {
        goto block_2;
    }
    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
        if ((func_00A07B40(temp_a0) == 0) && ((*(u8 *)D_00591F24) != 5) && ((*(u8 *)D_00591F11) == 0)) {
            var_s3 = 1;
        }
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = (f32) M2C_FIELD(arg0, s16 *, 0x1CE);
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = (f32) M2C_FIELD(arg0, s16 *, 0x1D0);
        if (func_00C1E6E0(arg0, var_s3) == 0) {
            temp_v1 = M2C_FIELD(arg0, u8 *, 0x45);
            switch (temp_v1) {                      /* irregular */
            case 0x0:
                func_0090BA30(arg0);
                M2C_FIELD(arg0, s32 *, 0xF4) = 0;
                M2C_FIELD(arg0, s32 *, 0xE4) = 0;
                M2C_FIELD(arg0, u8 *, 0x45) = 1U;
                /* fallthrough */
            case 0x1:
                var_f21 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
                var_f20 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
                temp_v0 = func_009B33A0(arg0, (s32) var_f21, (s32) var_f20);
                if (temp_v0 >= 0) {
                    var_f12 = (f32) temp_v0;
                } else {
                    var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
                }
                temp_s0 = (s32) func_001CD9E0(var_f12);
                func_00C1F8F0(arg0, func_009B3480(arg0, var_f21, var_f20) & 0xFFFF, temp_s0);
                break;
            default:
                func_00A28A00(arg0, M2C_FIELD(arg0, u16 *, 0xA8), 0x12E);
                var_f21 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
                var_f20 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
                temp_v0_2 = func_009B33A0(arg0, (s32) var_f21, (s32) var_f20);
                if (temp_v0_2 >= 0) {
                    var_f12_2 = (f32) temp_v0_2;
                } else {
                    var_f12_2 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
                }
                temp_a1 = (s32) func_001CD9E0(var_f12_2);
                if ((var_s3 != 0) || ((*(u8 *)D_00591C09) == 5)) {
                    if (func_00A0FC40(arg0, temp_a1, 0x3C) == 0) {
                        M2C_FIELD(arg0, u8 *, 0x45) = 1U;
                    }
                }
                if (var_s3 == 0) {
                    M2C_FIELD(arg0, u8 *, 0x45) = 0U;
                    M2C_FIELD(arg0, s8 *, 0x16) = 0x82;
                    M2C_FIELD(arg0, s16 *, 0x18) = 0;
                }
                break;
            case 0x3:
                temp_f21 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
                temp_f20 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
                temp_v0_3 = func_009B33A0(arg0, (s32) temp_f21, (s32) temp_f20);
                if (temp_v0_3 >= 0) {
                    var_f12_3 = (f32) temp_v0_3;
                } else {
                    var_f12_3 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
                }
                temp_s1 = (s32) func_001CD9E0(var_f12_3);
                temp_s5 = M2C_FIELD(arg0, u16 *, 0xA8);
                temp_s0_2 = func_009B3480(arg0, temp_f21, temp_f20) & 0xFFFF;
                func_00C1F280(arg0, temp_s1, temp_s5, temp_s0_2);
                temp_v0_4 = M2C_FIELD(arg0, s32 *, 0x58);
                var_s2 = (s32) ((f32) temp_s1 * (*(f32 *)D_00591BEC));
                if ((temp_v0_4 < var_s2) || (var_s2 < 0)) {
                    var_s2 = temp_v0_4;
                }
                if ((temp_s1 < 0x100) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0xA8), temp_s0_2) & 0xFFFF) < 0x16)) {
                    var_s2 = 0xC80;
                }
                func_00C20600(arg0, temp_s0_2, temp_s5, var_s2, temp_s1);
                if (func_00A0FC40(arg0, temp_s1, 0x50) != 0) {
                    M2C_FIELD(arg0, s16 *, 0x1CE) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0xE0);
                    M2C_FIELD(arg0, s16 *, 0x1D0) = (s16) (s32) M2C_FIELD(arg0, f32 *, 0xE8);
                    M2C_FIELD(arg0, u8 *, 0x45) = 2U;
                }
                var_f20 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
                var_f21 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
                break;
            case 0x90:
                var_f21 = (f32) M2C_FIELD(arg0, s16 *, 0x1CE);
                var_f20 = (f32) M2C_FIELD(arg0, s16 *, 0x1D0);
                temp_v0_5 = func_009B33A0(arg0, (s32) var_f21, (s32) var_f20);
                if (temp_v0_5 >= 0) {
                    var_f12_4 = (f32) temp_v0_5;
                } else {
                    var_f12_4 = 2.0f * (f32) (((u32) temp_v0_5 >> 1) | (temp_v0_5 & 1));
                }
                temp_s0_3 = (s32) func_001CD9E0(var_f12_4);
                temp_a1_2 = func_009B3480(arg0, var_f21, var_f20) & 0xFFFF;
                M2C_FIELD(arg0, s16 *, 0x3A) = 6;
                func_00C20600(arg0, temp_a1_2, M2C_FIELD(arg0, u16 *, 0xA8), 0x680, temp_s0_3);
                if (func_00C20350(arg0, temp_s0_3, 1) == 0) {
                    M2C_FIELD(arg0, u8 *, 0x45) = 0x91U;
                }
                break;
            case 0x91:
                var_f21 = (f32) M2C_FIELD(arg0, s16 *, 0x1CE);
                var_f20 = (f32) M2C_FIELD(arg0, s16 *, 0x1D0);
                temp_v0_6 = func_009B33A0(arg0, (s32) var_f21, (s32) var_f20);
                if (temp_v0_6 >= 0) {
                    var_f12_5 = (f32) temp_v0_6;
                } else {
                    var_f12_5 = 2.0f * (f32) (((u32) temp_v0_6 >> 1) | (temp_v0_6 & 1));
                }
                temp_s0_4 = (s32) func_001CD9E0(var_f12_5);
                if (func_00979270(arg0, 0) == 0) {
                    goto block_48;
                }
                func_00A28A00(arg0, M2C_FIELD(arg0, u16 *, 0xA8), 0x1BF);
                if (func_00C20350(arg0, temp_s0_4, 1) == 0) {
                    M2C_FIELD(arg0, u8 *, 0x45) = 2U;
                }
                if (func_00A0FC40(arg0, temp_s0_4, 0x140) == 0) {
                    M2C_FIELD(arg0, u8 *, 0x45) = 0x90U;
                } else {
block_48:
                    var_f21 = (f32) M2C_FIELD(arg0, s16 *, 0x1CE);
                    var_f20 = (f32) M2C_FIELD(arg0, s16 *, 0x1D0);
                }
                break;
            }
            M2C_FIELD(arg0, s16 *, 0x1CE) = (s16) (s32) var_f21;
            M2C_FIELD(arg0, s16 *, 0x1D0) = (s16) (s32) var_f20;
            if (var_s3 == 0) {
                M2C_FIELD(arg0, u8 *, 0x45) = 0U;
                M2C_FIELD(arg0, s8 *, 0x16) = 0x82;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
            }
            return;
        }
        return;
    }
block_2:
    M2C_FIELD(arg0, s8 *, 0x16) = 7;
    M2C_FIELD(arg0, s16 *, 0x18) = 0;
}
