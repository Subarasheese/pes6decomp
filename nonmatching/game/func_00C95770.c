/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002A9470(u8);
extern void func_002A96D0(void);
extern void func_002A8830(s32);
extern s32 func_002A6B20(void);
extern void func_002A9570(s32);
extern s32 func_00BF6270(void);
extern void func_002A7D00(s32, s32);
extern s32 func_009E1C90(s32);
extern s32 func_00BBB8C0(s32);
extern char Pes6MatchPlayers[];
extern u8 D_00592740[];

void func_00C95770(void) {
    s32 idx;
    u8 state;
    u16 id;
    char *p;

    if (func_00BF6270() == 0xFF) {
        idx = 1;
    } else {
        idx = func_00BF6270() % 23;
    }
    p = Pes6MatchPlayers + idx * 0x240;
    state = D_00592740[0];
    if (state == 1) {
        func_002A6B20();
        return;
    }
    if (state != 0) {
        return;
    }
    if ((func_009E1C90(3) & 0xFF) < 3) {
        return;
    }
    func_002A96D0();
    func_002A9470(*(u8 *)p);
    id = *(u16 *)(*(char **)(p + 4) + 0x30);
    if (id == 0x59D) {
        func_002A7D00(0xA, (func_00BBB8C0(3) + 0xE) & 0xFF);
    } else if (id == 0x59C) {
        func_002A7D00(0xA, (func_00BBB8C0(3) + 0xB) & 0xFF);
    } else if (id == 0x59B) {
        func_002A7D00(0xA, (func_00BBB8C0(3) + 8) & 0xFF);
    } else if (id == 0x59A) {
        func_002A7D00(0xA, (func_00BBB8C0(3) + 5) & 0xFF);
    }
    func_002A9570(0);
    func_002A8830(0);
    D_00592740[0] += 1;
    func_002A6B20();
}
