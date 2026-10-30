/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_001CD9E0(f32);                             /* extern */
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
s32 func_009E1C90(s32);                             /* extern */
M2C_UNK func_00AA7B70(void *, u16, u16, s32, s32);  /* extern */
M2C_UNK func_00AA8B90(void *, s32, u16, s32, s32);  /* extern */
M2C_UNK func_00AAC070(void *);                      /* extern */
M2C_UNK func_00AF8870(void *, u16, u16, s32, s32);  /* extern */
s32 func_00BC2B50(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_00C56570(void *, s32, M2C_UNK);        /* extern */
s32 func_00C565C0(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591E19[];
extern char D_00591E1A[];
extern char D_00591E4C[];
extern char D_005926D8[];
extern char D_005926E4[];
extern char D_005926EC[];
extern char D_005926FD[];
extern char D_005926FE[];
extern char D_00CBCC62[];
extern char D_00CBD269[];

s32 func_00A0C040(void *arg0) {
    f32 var_f0;
    f32 var_f12;
    f32 var_f12_2;
    f32 var_f12_3;
    f32 var_f12_4;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_s0_2;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 temp_v1_4;
    u16 var_s0;
    u8 temp_a0;
    u8 temp_v1_3;
    void *temp_v0_3;

    var_a0 = 1;
    if ((*(u8 *)D_005926FD) == 1) {
        if (((*(u8 *)D_00CBCC62) == 0) && ((*(u8 *)D_005926FE) == 5)) {
            if ((*(u8 *)D_00CBD269) != 0xFF) {
                var_a0 = (s32) (*(u8 *)D_00CBD269) % 23;
            }
            if (func_00BC2B50(((void *)Pes6MatchPlayers) + (var_a0 * 0x240), 2, 0) != 0) {
                var_v0 = 1;
            } else {
                goto block_7;
            }
        } else {
            goto block_7;
        }
    } else if ((func_009E1C90(1) & 0xFF) != 5) {
        var_v0 = 1;
    } else {
block_7:
        var_v0 = 0;
    }
    if ((var_v0 != 0) && (temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30), (temp_v1 != 0x306))) {
        if (((s32) M2C_FIELD(arg0, u8 *, 0x16) >= 0x80) || (M2C_FIELD(arg0, u8 *, 0x10) == 0)) {
            if (M2C_FIELD(arg0, u8 *, 0x46) == 0) {
                if (temp_v1 == 0x2A6) {
                    var_s0 = M2C_FIELD(arg0, u16 *, 0x28);
                    var_a4 = 0x400;
                } else if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 0x10000)) {
                    func_00C56570(arg0, func_00C565C0(arg0), 0);
                    var_s0 = func_009B3480(arg0, M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C)) & 0xFFFF;
                    temp_v0 = func_009B33A0(arg0, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C));
                    if (temp_v0 < 0) {
                        var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
                    } else {
                        var_f12 = (f32) temp_v0;
                    }
                    var_a4 = (s32) func_001CD9E0(var_f12);
                } else {
                    var_s0 = func_009B3480(arg0, M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C)) & 0xFFFF;
                    temp_v0_2 = func_009B33A0(arg0, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C));
                    if (temp_v0_2 < 0) {
                        var_f12_2 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
                    } else {
                        var_f12_2 = (f32) temp_v0_2;
                    }
                    var_a4 = (s32) func_001CD9E0(var_f12_2);
                }
                if (var_a4 >= 0x1000) {
                    M2C_FIELD(arg0, s16 *, 0x3A) = 2;
                    M2C_FIELD(arg0, u16 *, 0x42) = var_s0;
                    func_00AF8870(arg0, var_s0, M2C_FIELD(arg0, u16 *, 0x10C), 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC), 0x1000);
                } else {
                    M2C_FIELD(arg0, s16 *, 0x3A) = 4;
                    func_00AA7B70(arg0, var_s0, M2C_FIELD(arg0, u16 *, 0x10C), 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC), var_a4);
                }
                func_00207390(M2C_FIELD(arg0, void **, 4), 6);
                M2C_FIELD(arg0, s16 *, 0x1CE) = (s16) (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
                M2C_FIELD(arg0, s16 *, 0x1D0) = (s16) (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
                M2C_FIELD(arg0, s8 *, 0x45) = 0;
                M2C_FIELD(arg0, u8 *, 0x16) = 0x82U;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
                return 1;
            }
            goto block_97;
        }
        temp_v0_3 = ((*(u8 *)D_005926E4) * 4) + Pes6Ball_Current;
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x1C);
        temp_s0 = func_009B3480(arg0, M2C_FIELD(temp_v0_3, f32 *, 0x47C), M2C_FIELD(temp_v0_3, f32 *, 0xB7C)) & 0xFFFF;
        if ((temp_a1 < 0x401) || (temp_a0 = M2C_FIELD(arg0, u8 *, 0x16), (temp_a0 == 0xC)) || (temp_v1_2 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84), (temp_v1_2 == 0)) || (temp_v1_2 == 0xF) || ((temp_v1_3 = M2C_FIELD(arg0, u8 *, 0), (temp_v1_3 != (*(u8 *)D_00591E19))) && (temp_v1_3 != (*(u8 *)D_00591E1A)))) {
            goto block_44;
        }
        if ((s32) (*(u8 *)D_005926EC) >= 0) {
            var_f0 = (f32) (*(u8 *)D_005926EC);
        } else {
            var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926EC) >> 1) | ((*(u8 *)D_005926EC) & 1));
        }
        if (((*(f32 *)D_005926D8) <= var_f0) || (((temp_a0 != 2) || (temp_a1 >= 0x1B01)) && (temp_a1 >= 0x1700) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFFFF) >= 0x29))) {
            goto block_97;
        }
block_44:
        temp_v1_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        switch (temp_v1_4) {                        /* irregular */
        case 0x2DE:
            temp_v0_4 = func_009B33A0(arg0, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C));
            if (temp_v0_4 < 0) {
                var_f12_3 = 2.0f * (f32) (((u32) temp_v0_4 >> 1) | (temp_v0_4 & 1));
            } else {
                var_f12_3 = (f32) temp_v0_4;
            }
            func_00AA8B90(arg0, temp_s0, M2C_FIELD(arg0, u16 *, 0x10C), 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC), (s32) func_001CD9E0(var_f12_3));
block_66:
            func_00207390(M2C_FIELD(arg0, void **, 4), 4);
            if ((*(u8 *)D_00591E4C) != 0) {
                if ((*(u8 *)D_00591E19) == 0xFF) {
                    var_v1 = 1;
                } else {
                    if ((*(u8 *)D_00591E19) != 0xFF) {
                        var_a0_2 = (s32) (*(u8 *)D_00591E19) % 23;
                    } else {
                        var_a0_2 = 1;
                    }
                    if (M2C_FIELD(arg0, u8 *, 0x13) != M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240)), u8 *, 0x13)) {
                        var_v1 = 1;
                    } else {
                        var_v1 = 0;
                    }
                }
                if (var_v1 == 1) {
                    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
                    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
                    M2C_FIELD(arg0, u8 *, 0x16) = 0xFU;
                    M2C_FIELD(arg0, s16 *, 0x18) = 4;
                    return 1;
                }
                goto block_79;
            }
block_79:
            if (M2C_FIELD(arg0, u8 *, 0x16) != 0xC) {
                var_v0_2 = 0xFF;
            } else {
                var_v0_2 = 0x62;
            }
            M2C_FIELD(arg0, s32 *, 0xAC) = var_v0_2;
            M2C_FIELD(arg0, u8 *, 0x46) = 0U;
            M2C_FIELD(arg0, u8 *, 0x16) = 0x1BU;
            M2C_FIELD(arg0, s16 *, 0x18) = 0;
            return 1;
        case 0x170:
            M2C_FIELD(arg0, u8 *, 0x16) = 1U;
            M2C_FIELD(arg0, s16 *, 0x18) = 0;
            return 1;
        default:
            func_00AAC070(arg0);
            temp_s0_2 = func_009B3480(arg0, M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C)) & 0xFFFF;
            if (M2C_FIELD(arg0, s32 *, 0x1C) < 0xE00) {
                M2C_FIELD(arg0, u16 *, 0x42) = temp_s0_2;
            }
            M2C_FIELD(arg0, f32 *, 0x6C) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
            M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
            temp_v0_5 = func_009B33A0(arg0, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C));
            if (temp_v0_5 < 0) {
                var_f12_4 = 2.0f * (f32) (((u32) temp_v0_5 >> 1) | (temp_v0_5 & 1));
            } else {
                var_f12_4 = (f32) temp_v0_5;
            }
            func_00AF8870(arg0, temp_s0_2, M2C_FIELD(arg0, u16 *, 0x10C), 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC), (s32) func_001CD9E0(var_f12_4));
            goto block_66;
        }
    } else {
block_97:
        return 0;
    }
}
