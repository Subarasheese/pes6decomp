/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E00[];
extern char D_00592800[];
extern char Pes6MatchSquads[];
extern char D_00CB62B0[];

void func_00BBB4F0(void *arg0) {
    u8 sp58;
    M2C_UNK *var_a3;
    M2C_UNK *var_t3;
    s32 temp_a4;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_a6;
    s32 var_t8;
    s32 var_t9;
    u8 *var_a2;
    u8 *var_s4;
    u8 temp_a6;
    u8 temp_a7;
    u8 temp_s4;

    var_a4 = 0;
    var_a3 = ((void *)D_00592800);
    var_a2 = &sp58;
    do {
        if ((u8) M2C_FIELD(var_a3, u8 *, 3) < 2U) {
            *var_a2 = M2C_FIELD(var_a3, u8 *, 0x10);
        } else {
            *var_a2 = 0xFF;
        }
        var_a4 += 1;
        var_a3 += 0x28;
        var_a2 += 1;
    } while (var_a4 < 8);
    var_t9 = 0;
    var_t3 = ((void *)D_00592800);
loop_7:
    if (((u8) M2C_FIELD(var_t3, u8 *, 3) < 2U) && (M2C_FIELD(var_t3, u8 *, 0) != 8)) {
        temp_a7 = M2C_FIELD(arg0, u8 *, 0);
        var_t8 = 1;
        if ((*(u8 *)0x591E4C != temp_a7) && (*(u8 *)0x591E18 != temp_a7) && (temp_a6 = M2C_FIELD(arg0, u8 *, 0x12), (M2C_FIELD((((void *)D_00591E00) + temp_a6), u8 *, 0x67) == 0)) && (temp_s4 = M2C_FIELD(arg0, u8 *, 0x13), (M2C_FIELD((temp_s4 + (((void *)D_00591E00) + (temp_s4 * 2))), u8 *, 0x4F) != temp_a7)) && (temp_a7 == M2C_FIELD(var_t3, u8 *, 0x10)) && (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a6 * 0x6900))), u8 *, 0xF8) == 0) && (M2C_FIELD(arg0, u8 *, 0x16) != 0xFF) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2C) != 0)) {
            var_a4_2 = 1;
        } else {
            var_a4_2 = 0;
        }
        if (var_a4_2 == 0) {
            var_a6 = 0;
            var_s4 = &sp58;
            do {
                if ((var_a6 != var_t9) && (temp_a7 == *var_s4)) {
                    var_t8 = 0;
                }
                var_a6 += 1;
                var_s4 += 1;
            } while (var_a6 < 8);
            if (var_t8 != 0) {
                M2C_FIELD(arg0, s32 *, 0x214) = 0;
                goto block_26;
            }
            goto block_27;
        }
        temp_a4 = M2C_FIELD(arg0, s32 *, 0x214);
        switch (temp_a4) {                          /* irregular */
        case 0:
            M2C_FIELD(arg0, u8 *, 0x21F) = 0x3CU;
            break;
        case 3:
            M2C_FIELD(arg0, u8 *, 0x21F) = 0xA0U;
            break;
        }
        M2C_FIELD(arg0, u8 *, 0x21F) = (u8) (M2C_FIELD(arg0, u8 *, 0x21F) - 1);
        if ((s32) M2C_FIELD(arg0, u8 *, 0x21F) > 0) {
            if ((M2C_FIELD(arg0, s32 *, 0xB4) & 0x200) && !(M2C_FIELD((((void *)D_00CB62B0) + (var_t9 * 0x18)), s32 *, 8) & 0x100)) {
                M2C_FIELD(arg0, s32 *, 0x214) = (s32) (M2C_FIELD(arg0, s32 *, 0x214) + 1);
                return;
            }
            goto block_27;
        }
        M2C_FIELD(arg0, s32 *, 0x214) = 0;
block_26:
        M2C_FIELD(arg0, u8 *, 0x21F) = 0U;
        goto block_27;
    }
block_27:
    var_t9 += 1;
    var_t3 += 0x28;
    if (var_t9 >= 8) {
        return;
    }
    goto loop_7;
}
