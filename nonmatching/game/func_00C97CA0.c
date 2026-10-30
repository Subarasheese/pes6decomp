/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002A9470(u8);
extern void func_002A96D0(void);
extern void func_002A8830(s32);
extern int func_002DCA30(void);
extern void func_002A9570(int);
extern s32 func_002A6B20(void);
extern void func_00BBB960(u32);
M2C_UNK func_002A7D00(M2C_UNK, s32);                /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_00592740[];
extern char D_008B145C[];

void func_00C97CA0(void) {
    if (func_002DCA30() != 0) {
        func_00BBB960((*(u32 *)D_008B145C));
    }
    switch ((*(u8 *)D_00592740)) {                           /* irregular */
    case 1:
        break;
    case 0:
        func_002A96D0();
        func_002A9470((*(u8 *)Pes6MatchPlayers));
        func_002A7D00(0xA, (func_00BBB8C0(5) + 1) & 0xFF);
        func_002A9570(0);
        func_002A8830(0);
        (*(u8 *)D_00592740) += 1;
        break;
    }
    func_002A6B20();
}
