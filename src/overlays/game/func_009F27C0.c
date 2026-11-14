/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00186220(void);
extern void func_00182B30(int);
extern void func_00270580(int);
extern void func_002727C0(s32);
extern int func_002DCA30(void);
extern void func_0017E120(int);
extern void func_00287000();
extern s16 *func_008472D0();
extern void func_00853B50(s32, s32, s32, s32, s16, s32, s32, s32);
extern void func_00988E10(s32);
extern void func_00996060();
extern void func_009983C0(u8 *, s32);
extern void func_0099B4F0();
extern void func_0099C790();
extern void func_0099FE40();
extern void func_009B6C00();
extern void func_009F1A40();
extern void func_00B26F50();
extern void func_00B27010(s32);
extern void func_00BC6930();
extern void func_00BC9000(s32);
extern void func_00C04780();
extern void func_00C23C70();
extern u8 Pes6MatchPlayers[];
extern char D_00591DCF[];
extern char D_00591E79[];
extern char D_00591EFC[];
extern char D_00591F14[];

void func_009F27C0(void) {
    s32 a4;
    s32 v1;
    u8 *p;
    s32 one;
    s32 n;
    s32 ff;

    func_0017E120(1);
    func_009F1A40();
    func_0099FE40();
    func_00287000();
    func_00988E10(2);
    func_00988E10(0xD);
    func_009B6C00();
    func_00BC9000(0);
    (*(s8 *)D_00591EFC) = 0;
    func_00270580(0);
    (*(s8 *)D_00591F14) = 0;
    (*(u8 *)D_00591E79) = 0xFF;
    (*(s8 *)D_00591DCF) = 1;
    func_00186220();
    func_00182B30(1);
    func_0099B4F0();
    func_009983C0(Pes6MatchPlayers, 3);
    func_0099C790();
    func_002727C0(1);
    func_00B27010(1);
    func_00B26F50();
    a4 = 0;
    one = 1;
    n = 0x17;
    ff = 0xFF;
    do {
        v1 = (a4 != ff) ? a4 % n : one;
        a4 += 1;
        p = Pes6MatchPlayers + v1 * 0x240;
        M2C_FIELD(p, s32 *, 0x214) = 0;
        M2C_FIELD(p, s8 *, 0x21F) = 0;
        M2C_FIELD(p, s8 *, 0x218) = 0;
    } while (a4 < n);
    func_00BC6930();
    func_00996060();
    func_00C04780();
    func_00C23C70();
    if (func_002DCA30() != 0) {
        func_00853B50(1, 0xD, 2, 0, *func_008472D0(), 0, 0, 0);
    }
}
