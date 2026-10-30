/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00A9DFF0(void *, s32);
extern s32 func_009BAE30(void *);
extern s32 func_00207D10(void *);
extern s32 func_00BBB8C0(s32);
extern s32 func_00207D80(void *, s32);
extern u32 func_00288670(u32, u32);
extern void func_00AB3BB0(void *);
extern s32 func_009B32D0(s32, s32, s32);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_002562B0(M2C_UNK);                     /* extern */
M2C_UNK func_00284AB0(void *, s32, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_00287120(void *);                      /* extern */
M2C_UNK func_00930240(void *, u8);                  /* extern */
M2C_UNK func_00995500(void *, M2C_UNK);             /* extern */
M2C_UNK func_009B36C0(void *, u16, s32, u16, u8);   /* extern */
M2C_UNK func_00A009A0();                            /* extern */
M2C_UNK func_00A1DB30(void *);                      /* extern */
M2C_UNK func_00A3F9F0(void *);                      /* extern */
s32 func_00A3FAC0(void *, u16, M2C_UNK, M2C_UNK);   /* extern */
s32 func_00A40B80(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_00AA1110(void *);                      /* extern */
M2C_UNK func_00AABED0(void *);                      /* extern */
M2C_UNK func_00ADA160(void *, u8);                  /* extern */
s32 func_00ADAA70(void *);                          /* extern */
M2C_UNK func_00ADD850(void *, M2C_UNK);             /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BEC[];
extern char D_00591E19[];
extern char D_00591E70[];
extern char Pes6MatchSquads[];

void func_00A3DC60(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    f32 temp_f4;
    s32 temp_a0_3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 var_a2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_a0;
    u16 temp_a0_2;
    u16 temp_v1;
    u32 temp_v0;
    u32 temp_v0_3;
    u8 temp_a1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x18);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_00A009A0();
        M2C_FIELD(arg0, u16 *, 0x18) = (u16) (M2C_FIELD(arg0, u16 *, 0x18) + 1);
        break;
    case 1:
        func_00A009A0();
        M2C_FIELD(arg0, f32 *, 0xE4) = (f32) (M2C_FIELD(arg0, f32 *, 0xE4) + (M2C_FIELD(arg0, f32 *, 0xF4) / (*(f32 *)D_00591BEC)));
        temp_v1_2 = M2C_FIELD(arg0, void **, 4);
        temp_f1 = M2C_FIELD(temp_v1_2, f32 *, 0x38);
        if (temp_f1 >= 2.1474836e9f) {
            var_a2 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
        } else {
            var_a2 = (s32) temp_f1;
        }
        func_009B36C0(arg0, M2C_FIELD(temp_v1_2, u16 *, 0x30), var_a2, M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(temp_v1_2, u8 *, 0x2D));
        func_00A3F9F0(arg0);
        if (func_00207D80(M2C_FIELD(arg0, void **, 4), 0x10) != 0) {
            if ((func_00A40B80(arg0, 1, 1) != 0) && !(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= ((*(f32 *)D_00591E70) - 48.0f))) {
                temp_s3 = func_009B32D0(func_00A3FAC0(arg0, M2C_FIELD(arg0, u16 *, 0x228), 0x800, 1) & 0xFFFF, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xE)) & 0xFFFF, 0x2400) & 0xFFFF;
                func_00BBB8C0(0x400);
                temp_f1_2 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC);
                if ((temp_f1_2 <= (32.0f + (*(f32 *)D_00591E70))) && ((temp_f1_2 <= (8.0f + (*(f32 *)D_00591E70))) || (func_00BBB8C0(4) != 0) || (temp_v0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x80) & 0x7F, 0x28U), (func_00BBB8C0(((0x63 - temp_v0) / 10) + ((u32) (0x63 - temp_v0) >> 0x1F) + 3) != 0)))) {
                    temp_a0 = M2C_FIELD(arg0, u16 *, 0x68);
                    temp_s0 = ((temp_a0 * 0x50) / 100) + ((u32) (temp_a0 * 0x50) >> 0x1F);
                    var_s0 = temp_s0 + func_00BBB8C0(0x400);
                    var_v0 = (s32) (*(f32 *)D_00591E70) - (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC);
                    if (var_v0 <= 0) {
                        var_v0 = -var_v0;
                    }
                    if (var_v0 < 8) {
                        temp_v0_2 = func_00BBB8C0(0xA) + 0x64;
                        var_s0 = ((var_s0 * temp_v0_2) / 100) + ((u32) (var_s0 * temp_v0_2) >> 0x1F);
                    }
                    temp_v0_3 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7D) & 0x7F, 0x32U);
                    temp_s2 = func_00BBB8C0(((0x63 - temp_v0_3) / 3) + ((u32) (0x63 - temp_v0_3) >> 0x1F) + 0x10) - 6;
                    temp_v0_4 = func_00ADAA70(arg0);
                    var_v1 = temp_v0_4 >> 3;
                    if (temp_v0_4 < 0) {
                        var_v1 = (s32) (temp_v0_4 + 7) >> 3;
                    }
                    temp_f4 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC);
                    temp_f3 = (*(f32 *)D_00591E70) - temp_f4;
                    var_s2 = (s32) ((f32) (temp_s2 + var_v1) + (temp_f3 / 4.0f));
                    if (temp_f4 < ((*(f32 *)D_00591E70) - 4.0f)) {
                        var_s2 = (s32) ((f32) var_s2 + (12.0f + (temp_f3 / 2.0f)));
                    }
                    if (var_s2 >= 0x29) {
                        var_s2 = 0x28;
                    }
                } else {
                    temp_a0_2 = M2C_FIELD(arg0, u16 *, 0x68);
                    temp_s0_2 = ((temp_a0_2 * 0x50) / 100) + ((u32) (temp_a0_2 * 0x50) >> 0x1F) + 0x200;
                    var_s0 = temp_s0_2 + func_00BBB8C0(0x200);
                    var_s2 = func_00BBB8C0(4) - 0xF;
                }
                if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x68) & 1 & 1)) {
                    var_s0 = ((var_s0 * 9) / 10) + ((u32) (var_s0 * 9) >> 0x1F);
                }
                M2C_FIELD(Pes6Ball_Current, s8 *, 0x6C) = func_00BBB8C0(2);
                M2C_FIELD(Pes6Ball_Current, s16 *, 0x6A) = (s16) (0x80 - func_00BBB8C0(0x30));
                if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0) <= (*(f32 *)D_00591E70)) && !(M2C_FIELD(Pes6Ball_Current, f32 *, 0) <= 3008.0f)) {
                    M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = (s32) (func_00BBB8C0(0x800) + 0xC00);
                } else {
                    M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = (s32) (-0x1000 - func_00BBB8C0(0x800));
                }
                func_00284AB0(arg0, temp_s3, var_s0, var_s2 * 2, 0);
                func_00287120(arg0);
                M2C_FIELD(Pes6Ball_Current, s8 *, 0x62) = 4;
                func_002562B0(2);
                func_00ADD850(arg0, 0xB);
                func_00995500(arg0, 2);
            }
            func_00AB3BB0(arg0);
            M2C_FIELD(arg0, u16 *, 0x18) = (u16) (M2C_FIELD(arg0, u16 *, 0x18) + 1);
        }
        break;
    case 2:
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) != 0x10F) {
            var_v0_2 = func_00A9DFF0(arg0, 0xB4);
        } else {
            var_v0_2 = func_00A9DFF0(arg0, 0xE1);
        }
        M2C_FIELD(arg0, u16 *, 0x38) = (u16) var_v0_2;
        temp_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D);
        M2C_FIELD(arg0, u16 *, 0x26) = (u16) (M2C_FIELD(arg0, u16 *, 0x26) + ((M2C_FIELD(arg0, u16 *, 0x38) * ((temp_a1 != 0) ? -1 : 1)) & 0xFFFF));
        M2C_FIELD(arg0, f32 *, 0xE4) = (f32) (M2C_FIELD(arg0, f32 *, 0xE4) - M2C_FIELD(arg0, f32 *, 0xF4));
        if ((M2C_FIELD(arg0, f32 *, 0xF4) * M2C_FIELD(arg0, f32 *, 0xE4)) < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0xE4) = 0.0f;
        }
        temp_v1_3 = M2C_FIELD(arg0, void **, 4);
        if (!(M2C_FIELD(temp_v1_3, f32 *, 0x38) <= (f32) (M2C_FIELD(M2C_FIELD(temp_v1_3, void **, 4), u8 *, 2) * 2))) {
            func_00930240(arg0, temp_a1);
            M2C_FIELD(arg0, f32 *, 0xF4) = 0.0f;
            M2C_FIELD(arg0, f32 *, 0xE4) = 0.0f;
        } else {
            temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x1C);
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (((temp_a0_3 * 0x62) / 100) + ((u32) (temp_a0_3 * 0x62) >> 0x1F));
        }
        if (func_00207D10(M2C_FIELD(arg0, void **, 4)) != 0) {
            if (func_009BAE30(arg0) == 0) {
                func_00209A00(M2C_FIELD(arg0, void **, 4), 0x2A9, 0);
                M2C_FIELD(arg0, s8 *, 0x16) = 0x11;
                M2C_FIELD(arg0, u16 *, 0x18) = 0x41U;
            } else {
                func_00209A00(M2C_FIELD(arg0, void **, 4), 0x2A6, 0);
                M2C_FIELD(arg0, s8 *, 0x16) = 0x11;
                M2C_FIELD(arg0, u16 *, 0x18) = 0x40U;
            }
        }
        if (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E19)) {
            func_00A1DB30(arg0);
        }
        break;
    }
    func_00ADA160(arg0, M2C_FIELD(arg0, u8 *, 0x4D));
    func_00AABED0(arg0);
    if ((M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) != 4) || (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E19))) {
        M2C_FIELD(arg0, s8 *, 0x66) = 3;
    }
    func_00AA1110(arg0);
}
