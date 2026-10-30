/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
s64 func_002BDD00(s32);                             /* extern */
s64 func_002BDE70(u8, u8, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s64 func_002BE490(s32, M2C_UNK);                    /* extern */
u32 func_009A03A0();                                /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char D_00591DCD[];
extern char D_00592370[];

s32 func_00B42F00(void) {
    s32 temp_s0_2;
    s32 var_a0;
    s32 var_s2_2;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v0_6;
    s64 var_s0;
    s64 var_s2;
    s64 var_s2_3;
    s64 var_v0_2;
    s64 var_v0_4;
    s64 var_v0_5;
    u64 temp_a0;
    u64 temp_a0_2;
    u8 temp_s0;
    u8 temp_s2;
    u8 temp_s2_2;
    void *temp_s1;

    if (func_00BF6270() == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = func_00BF6270() % 23;
    }
    temp_s1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    temp_s0 = M2C_FIELD(temp_s1, u8 *, 0x12);
    if ((*(u8 *)D_00591DCD) == 0) {
        var_s0 = (s64) (func_002BE490(temp_s0 & 0xFF, 0) << 0x30) >> 0x30;
        var_v0_2 = func_002BE490((temp_s0 ^ 1) & 0xFF, 0) << 0x30;
    } else {
        var_s0 = (s64) (func_002BDD00(temp_s0 & 0xFF) << 0x30) >> 0x30;
        var_v0_2 = func_002BDD00((temp_s0 ^ 1) & 0xFF) << 0x30;
    }
    temp_s0_2 = var_s0 - (var_v0_2 >> 0x30);
    if ((*(u8 *)D_00592370) != 0) {
        var_v0_3 = 0xA;
    } else {
        temp_s2 = M2C_FIELD(temp_s1, u8 *, 0x12);
        if ((*(u8 *)D_00591DCD) == 0) {
            var_s2 = (s64) (func_002BE490(temp_s2 & 0xFF, 0) << 0x30) >> 0x30;
            var_v0_4 = func_002BE490((temp_s2 ^ 1) & 0xFF, 0) << 0x30;
        } else {
            var_s2 = (s64) (func_002BDD00(temp_s2 & 0xFF) << 0x30) >> 0x30;
            var_v0_4 = func_002BDD00((temp_s2 ^ 1) & 0xFF) << 0x30;
        }
        var_s2_2 = 0;
        if ((var_s2 - (var_v0_4 >> 0x30)) == -1) {
            temp_a0 = (u64) ((s64) (func_009A03A0() / (u32) ((*(u8 *)D_00591BE4) * 0x3C)) << 0x20) >> 0x20;
            switch ((*(u8 *)D_00591DCD)) {                   /* irregular */
            case 1:
                if (temp_a0 >= 0x1FU) {
                    var_s2_2 = 1;
                }
                break;
            case 3:
            case 2:
                var_s2_2 = 1;
                break;
            }
        }
        if ((var_s2_2 == 0) && (temp_s0_2 >= -2)) {
            temp_s2_2 = M2C_FIELD(temp_s1, u8 *, 0x12);
            if ((*(u8 *)D_00591DCD) == 0) {
                var_s2_3 = (s64) (func_002BE490(temp_s2_2 & 0xFF, 0) << 0x30) >> 0x30;
                var_v0_5 = func_002BE490((temp_s2_2 ^ 1) & 0xFF, 0) << 0x30;
            } else {
                var_s2_3 = (s64) (func_002BDD00(temp_s2_2 & 0xFF) << 0x30) >> 0x30;
                var_v0_5 = func_002BDD00((temp_s2_2 ^ 1) & 0xFF) << 0x30;
            }
            if ((var_s2_3 - (var_v0_5 >> 0x30)) != 1) {
                goto block_20;
            }
            temp_a0_2 = (u64) ((s64) (func_009A03A0() / (u32) ((*(u8 *)D_00591BE4) * 0x3C)) << 0x20) >> 0x20;
            if ((*(u8 *)D_00591DCD) != 1) {
                goto block_43;
            }
            if (temp_a0_2 < 0x1FU) {
block_43:
                if ((s32) (*(u8 *)D_00591DCD) >= 2) {
                    goto block_44;
                }
block_20:
                var_v0_6 = 0;
            } else {
block_44:
                var_v0_6 = 1;
            }
            if (var_v0_6 != 0) {
                var_v0_3 = func_00BBB8C0(3) + 6;
            } else if ((temp_s0_2 != 0) && (temp_s0_2 != 1) && (((s64) (func_002BDE70(M2C_FIELD(temp_s1, u8 *, 0x12), M2C_FIELD(temp_s1, u8 *, 0x11), 0, 0xA, 1) << 0x30) >> 0x30) != 3)) {
                var_v0_3 = func_00BBB8C0(3) + 3;
            } else {
                var_v0_3 = func_00BBB8C0(3) + 4;
            }
        } else {
            var_v0_3 = 2;
        }
    }
    var_v0 = var_v0_3 - 1;
    if (var_v0 < 0) {
        var_v0 = 0;
    }
    return var_v0;
}
