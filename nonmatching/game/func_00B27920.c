/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002CA7A0(M2C_UNK *);                       /* extern */
s32 func_00A1B990(M2C_UNK *);                       /* extern */
s32 func_00AFBAB0(u8);                              /* extern */
s32 func_00B29B50();                                /* extern */
extern char Pes6MatchPlayers[];
extern char D_0058E7F0[];
extern char Pes6MatchState_Current[];
extern char D_00591E4C[];
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_00592800[];
extern char D_005E3810[];
extern char D_005E3811[];

void func_00B27920(void) {
    M2C_UNK *var_a2;
    M2C_UNK *var_s0;
    M2C_UNK *var_s1_2;
    M2C_UNK *var_s2;
    s32 var_a1;
    s32 var_a3;
    s32 var_a4;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_a0_4;
    void *temp_a1;

    var_s1 = 0;
    var_s0 = ((void *)D_0058E7F0);
    do {
        if ((func_00B29B50() == 0) || ((temp_a0 = M2C_FIELD(var_s0, u8 *, 0), (temp_a0 != (*(u8 *)D_005E3810))) && (temp_a0 != (*(u8 *)D_005E3811)))) {
            temp_a0_2 = M2C_FIELD(var_s0, u8 *, 0x16);
            if ((temp_a0_2 != 5) && ((temp_a0_2 != 0xFD) || ((temp_a0_3 = M2C_FIELD(var_s0, u8 *, 0), ((*(u8 *)D_00591E4D) != temp_a0_3)) && ((*(u8 *)D_00591E4E) != temp_a0_3)))) {
                if (func_00A1B990(var_s0) & 0xFF) {
                    if (M2C_FIELD(M2C_FIELD(var_s0, void **, 4), u16 *, 0x30) == 0x12E) {
                        goto block_36;
                    }
                } else {
block_36:
                    if ((func_002CA7A0(var_s0) == 0) && (M2C_FIELD(var_s0, u8 *, 0x16) != 0xFF)) {
                        temp_a0_4 = M2C_FIELD(var_s0, u8 *, 0);
                        if (temp_a0_4 != (*(u8 *)Pes6MatchState_Current)) {
                            if ((*(u8 *)D_00591E4C) != temp_a0_4) {

                            } else {
                                (*(u8 *)D_00591E4C) = 0;
                            }
                            M2C_FIELD(var_s0, u8 *, 0x16) = 0xFFU;
                            M2C_FIELD(var_s0, s16 *, 0x18) = 0;
                        }
                    }
                }
            }
        }
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x16);
    var_s0_2 = 0;
    var_s1_2 = ((void *)D_0058E7F0);
    do {
        if (M2C_FIELD(var_s1_2, u8 *, 0x16) == 0xFF) {
            var_s5 = 0;
            var_s2 = ((void *)D_00592800);
            do {
                if ((M2C_FIELD(var_s1_2, u8 *, 0) == M2C_FIELD(var_s2, u8 *, 0x10)) && (M2C_FIELD(var_s2, u8 *, 3) != 0)) {
                    var_s3 = 0;
                    var_s4 = 1;
loop_15:
                    if ((var_s4 + (func_00AFBAB0(M2C_FIELD(var_s1_2, u8 *, 0)) & 0xFF)) == 0xFF) {
                        var_a1 = 1;
                    } else {
                        var_a1 = (var_s4 % 23) + (func_00AFBAB0(M2C_FIELD(var_s1_2, u8 *, 0)) & 0xFF);
                    }
                    temp_a1 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
                    if (M2C_FIELD(temp_a1, u8 *, 0x16) != 0xFF) {
                        var_a4 = 0;
                        var_a3 = 0;
                        var_a2 = ((void *)D_00592800);
loop_21:
                        if (M2C_FIELD(temp_a1, u8 *, 0) != M2C_FIELD(var_a2, u8 *, 0x10)) {
                            var_a3 += 1;
                            var_a2 += 0x28;
                            if (var_a3 < 8) {
                                goto loop_21;
                            }
                        } else {
                            var_a4 = 1;
                        }
                        if (var_a4 == 0) {
                            var_s3 = 1;
                        } else {
                            goto block_44;
                        }
                    } else {
block_44:
                        var_s4 += 1;
                        if (var_s4 >= 0xB) {

                        } else {
                            goto loop_15;
                        }
                    }
                    if (var_s3 != 0) {
                        M2C_FIELD(var_s2, u8 *, 0x10) = (u8) M2C_FIELD(temp_a1, u8 *, 0);
                    }
                }
                var_s5 += 1;
                var_s2 += 0x28;
            } while (var_s5 < 8);
        }
        var_s0_2 += 1;
        var_s1_2 += 0x240;
    } while (var_s0_2 < 0x16);
}
