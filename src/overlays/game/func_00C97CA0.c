/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002A9470(u8);
extern void func_002A96D0(void);
extern void func_002A8830(s32);
extern int func_002DCA30(void);
extern void func_002A9570(int);
extern s32 func_002A6B20(void);
extern void func_00BBB960(u32);
void func_002A7D00(s32, s32);
s32 func_00BBB8C0(s32);
extern u8 Pes6MatchPlayers[];
extern u8 D_00592740[];
extern u32 D_008B145C[];

void func_00C97CA0(void) {
    u8 *p = Pes6MatchPlayers;
    if (func_002DCA30() != 0) {
        func_00BBB960(D_008B145C[0]);
    }
    switch (D_00592740[0]) {
    case 0:
        func_002A96D0();
        func_002A9470(*p);
        func_002A7D00(0xA, (func_00BBB8C0(5) + 1) & 0xFF);
        func_002A9570(0);
        func_002A8830(0);
        D_00592740[0] += 1;
        break;
    case 1:
        break;
    }
    func_002A6B20();
}
