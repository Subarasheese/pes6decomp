/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002A9470(u8);
extern void func_002A96D0(void);
extern void func_002A8830(s32);
extern s32 func_002A6B20(void);
extern void func_002A9570(int);
extern s32 func_00BF6270(void);
M2C_UNK func_002A7D00(M2C_UNK, s32);
s32 func_009E1C90(M2C_UNK, void *, s32);
s32 func_00BBB8C0(M2C_UNK);
s32 func_00BEC4A0();
extern u8 Pes6MatchPlayers[];
extern u8 D_00592740[];

void func_00C95C70(void) {
    s32 temp_a2;
    s32 var_a0;
    u16 temp_v1;
    u8 *temp_s0;

    if (func_00BF6270() == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = func_00BF6270() % 23;
    }
    temp_a2 = var_a0 * 0x240;
    temp_s0 = Pes6MatchPlayers + temp_a2;
    if (D_00592740[0] == 1) {
        func_002A6B20();
        return;
    }
    if (D_00592740[0] != 0) {
        return;
    }
    if ((func_009E1C90(3, Pes6MatchPlayers, temp_a2) & 0xFF) >= 4) {
        func_002A96D0();
        func_002A9470(temp_s0[0]);
        if (func_00BEC4A0() == 0) {
            temp_v1 = M2C_FIELD(M2C_FIELD(temp_s0, u8 **, 4), u16 *, 0x30);
            if (temp_v1 == 0x44C || (u32) (temp_v1 - 0x47D) < 2U) {
                func_002A7D00(0xA, (func_00BBB8C0(3) + 7) & 0xFF);
            } else {
                func_002A7D00(0xA, (func_00BBB8C0(3) + 0xA) & 0xFF);
            }
            if (M2C_FIELD(M2C_FIELD(temp_s0, u8 **, 4), u8 *, 0x2D) != 0) {
                func_002A9570(2);
            } else {
                func_002A9570(0);
            }
            func_002A8830(0);
        } else {
            if (func_00BEC4A0() != 1) {
                func_002A7D00(0xA, (func_00BBB8C0(3) + 4) & 0xFF);
            } else {
                func_002A7D00(0xA, (func_00BBB8C0(3) + 1) & 0xFF);
            }
            func_002A9570(0);
            func_002A8830(0);
        }
        D_00592740[0] += 1;
        func_002A6B20();
    }
}
