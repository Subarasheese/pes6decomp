/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
s32 func_0027DA80(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_002802C0(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_00997EF0(M2C_UNK *, M2C_UNK *, s32);       /* extern */
s32 func_00A07B40(u8);                              /* extern */
s32 func_00A0D0F0(M2C_UNK *, void *);               /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_0058E7F0[];
extern char D_00591E00[];
extern char Pes6MatchState_Current[];
extern char D_00591E19[];
extern char D_00591E4C[];
extern char D_00591E57[];
extern char D_00591F14[];
extern char D_005926D8[];

void func_00282F80(void) {
    M2C_UNK *var_s2;
    s32 temp_a0_3;
    s32 temp_a2;
    s32 var_a0;
    s32 var_s1;
    u16 temp_a0_4;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_5;
    void *temp_a1;
    void *temp_s0;

    if ((*(u8 *)D_00591F14) == 0) {
        var_s1 = 0;
        var_s2 = ((void *)D_0058E7F0);
        do {
            if (M2C_FIELD(M2C_FIELD(var_s2, void **, 4), u8 *, 0x2C) != 0) {
                temp_a0 = M2C_FIELD(var_s2, u8 *, 0);
                if (temp_a0 == (*(u8 *)Pes6MatchState_Current)) {
                    if ((*(u8 *)Pes6MatchState_Current) == 0) {
                        goto block_54;
                    }
                } else {
block_54:
                    if (func_00A07B40(temp_a0) != 0) {
                        if (M2C_FIELD(M2C_FIELD(M2C_FIELD(var_s2, void **, 4), void **, 0), u8 *, 3) == 0) {
                            goto block_7;
                        }
                    } else {
block_7:
                        temp_a0_2 = M2C_FIELD(var_s2, u8 *, 0);
                        temp_a1 = ((void *)D_00591E00) + (M2C_FIELD(var_s2, u8 *, 0x13) * 2);
                        if ((temp_a0_2 == M2C_FIELD(temp_a1, u8 *, 0x4F)) || (temp_a0_2 == M2C_FIELD(temp_a1, u8 *, 0x50)) || (temp_a0_2 == 1) || (temp_a0_2 == 0xC) || (temp_a0_2 == 0) || ((u32) M2C_FIELD(var_s2, u32 *, 0x114) < 0x101U) || (func_00A0D0F0(var_s2, temp_a1) != 0)) {
                            if ((*(u8 *)D_00591E4C) != 0) {
                                temp_a0_3 = (*(u8 *)D_00591E4C) & 0xFF;
                                if (M2C_FIELD(var_s2, u8 *, 0) != temp_a0_3) {
                                    if (temp_a0_3 != 0xFF) {
                                        var_a0 = temp_a0_3 % 23;
                                    } else {
                                        var_a0 = 1;
                                    }
                                    temp_a2 = var_a0 * 0x240;
                                    temp_s0 = ((void *)Pes6MatchPlayers) + temp_a2;
                                    if (((M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) == 5) && (M2C_FIELD(var_s2, u8 *, 0x16) != 7) && ((u32) M2C_FIELD(temp_s0, u32 *, 0x114) >= 0x181U) && (func_00997EF0(var_s2, ((void *)Pes6MatchPlayers), temp_a2) != 0)) || (M2C_FIELD(var_s2, u8 *, 0x13) != M2C_FIELD(temp_s0, u8 *, 0x13))) {
                                        goto block_24;
                                    }
                                } else if (M2C_FIELD(Pes6Ball_Current, u8 *, 0x65) != 0) {

                                } else {
                                    goto block_24;
                                }
                            } else if ((M2C_FIELD(var_s2, u8 *, 0) == (*(u8 *)D_00591E57)) && (M2C_FIELD(Pes6Ball_Current, u8 *, 0x65) != 0)) {
                                if (M2C_FIELD(var_s2, u8 *, 0x66) == 3) {
                                    goto block_24;
                                }
                            } else {
block_24:
                                if ((M2C_FIELD(var_s2, u8 *, 0) != (*(u8 *)D_00591E19)) && (temp_a0_4 = M2C_FIELD(M2C_FIELD(var_s2, void **, 4), u16 *, 0x30), (temp_a0_4 != 0x37E)) && (temp_a0_4 != 0x37F) && ((*(u8 *)D_00591E4C) == 0) && ((*(f32 *)D_005926D8) <= (f32) func_002AE670(4))) {
                                    func_0027DA80(var_s2, 0x18);
                                } else {
                                    temp_a0_5 = M2C_FIELD(var_s2, u8 *, 0x66);
                                    switch (temp_a0_5) { /* irregular */
                                    case 0x4:
                                        func_002802C0(var_s2, 0x1000);
                                        break;
                                    case 0x2:
                                    case 0x1:
                                        if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x6001) {
                                            func_0027DA80(var_s2, 0x18);
                                        } else {
                                            func_002802C0(var_s2, 0x1440);
                                        }
                                        break;
                                    case 0x7:
                                        if ((M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x6001) || (func_0027DA80(var_s2, 0x18) == 0)) {
                                            func_002802C0(var_s2, 0x2400);
                                        }
                                        break;
                                    case 0x6:
                                        if ((M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x6001) || (func_0027DA80(var_s2, 0x18) == 0)) {
                                            func_002802C0(var_s2, 0x1E40);
                                        }
                                        break;
                                    case 0x5:
                                        func_002802C0(var_s2, 0xC40);
                                        break;
                                    case 0xFF:
                                    case 0x8:
                                    case 0x3:
                                        func_0027DA80(var_s2, 0x18);
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            var_s1 += 1;
            var_s2 += 0x240;
        } while (var_s1 < 0x16);
    }
}
