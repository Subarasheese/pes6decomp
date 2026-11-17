/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern s32 func_002DCA30(void);
extern void func_00BBB960(s32);
extern s32 func_009E1C90(s32);
extern void func_002A96D0(void);
extern s32 func_00BDC590(void);
extern s32 func_00BDC580(void);
extern s32 func_00BF6270(void);
extern void func_002A9470(s32);
extern s32 func_00BBB8C0(s32);
extern void func_002A7D00(s32, s32);
extern void func_002A9570(s32);
extern void func_002A8830(s32);
extern void func_002A6B20(void);
extern char D_008B145C[];
extern char D_00592740[];
extern char D_0058E5B0[];

void func_00C95900(void) {
    char *s0;
    s32 r, a, v;
    u8 st;
    if (func_002DCA30() != 0) {
        func_00BBB960(*(s32 *)D_008B145C);
    }
    st = *(u8 *)D_00592740;
    if (st == 1) goto end;
    if (st != 0) goto end;
    if ((u8)func_009E1C90(3) < 3) return;
    func_002A96D0();
    r = func_00BDC590();
    if (r == 3) {
        if (func_00BF6270() == 0xFF) a = 1; else a = func_00BF6270() % 23;
        s0 = D_0058E5B0 + a * 576;
        func_002A96D0();
        func_002A9470(*(u8 *)s0);
        v = func_00BBB8C0(3);
        func_002A7D00(10, (u8)(v + 0x13));
    } else if (r == 2) {
        if (func_00BF6270() == 0xFF) a = 1; else a = func_00BF6270() % 23;
        s0 = D_0058E5B0 + a * 576;
        func_002A96D0();
        func_002A9470(*(u8 *)s0);
        v = func_00BBB8C0(3);
        func_002A7D00(10, (u8)(v + 0x10));
    } else if (r == 1) {
        if (func_00BF6270() == 0xFF) a = 1; else a = func_00BF6270() % 23;
        s0 = D_0058E5B0 + a * 576;
        func_002A96D0();
        func_002A9470(*(u8 *)s0);
        v = func_00BBB8C0(3);
        func_002A7D00(10, (u8)(v + 0xD));
    } else if (r == 0) {
        if (func_00BDC580() == 0xFF) a = 1; else a = func_00BDC580() % 23;
        s0 = D_0058E5B0 + a * 576;
        func_002A96D0();
        func_002A9470(*(u8 *)s0);
        v = func_00BBB8C0(2);
        func_002A7D00(10, (u8)(v + 0x13));
    }
    if (*(u8 *)(*(char **)(s0 + 4) + 0x2D) == 0) func_002A9570(0);
    else func_002A9570(2);
    func_002A8830(0);
    *(u8 *)D_00592740 = *(u8 *)D_00592740 + 1;
end:
    func_002A6B20();
}
