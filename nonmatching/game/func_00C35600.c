/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009E1C90(s32);
extern void func_009E1CB0(s32);
extern void func_009E1D30(s32, s32);
extern void func_00C36230(void);
extern void func_009B4450(s32);
extern s32 func_00C01090(s32);
extern s32 func_001A5BB0(s32);
extern s32 func_0017F900(void);
extern s32 func_00C35960(void);
extern void func_00152130(s32, s32);
extern s32 func_00C394C0(void);
extern s32 func_00C3C0B0(s32);
extern void func_009B4630(s32);
extern void func_009B3F70(void);
extern s32 func_009B45F0(void);
extern void func_00C36020(void);
extern void func_00BC8D00(void);
extern void func_00BF6240(s32);
extern char D_00CCB660[];
extern char D_00CCB650[];
extern char D_00CCB658[];
extern char D_00CCB665[];
extern char D_00CCB65A[];
extern char D_00591BE4[];
extern char D_00591DB7[];
extern char D_003A9B6C[];
extern char D_003A9B68[];

void func_00C35600(void)
{
    u32 s;
    u32 a;
    s32 s0;
    u32 b;

    s = func_009E1C90(3) & 0xFF;
    if (s > 10) return;
    if (s == 0) goto e0;
    if (s == 1) goto e1;
    if (s == 2) goto e2;
    if (s == 3) goto e3;
    if (s == 4) goto e4;
    if (s == 5) goto e5;
    if (s == 6) goto e6;
    if (s == 7) goto e7;
    if (s == 8) goto e8;
    if (s == 9) goto e9;
    goto e10;

e0:
    func_00C36230();
    func_009B4450(0);
    if (func_00C01090(0x2A) != 0) goto c592c;
    func_009E1CB0(3);
e1:
    if (*(u8 *)D_00CCB660 == 0 && *(s32 *)D_00CCB650 != 0) {
        s0 = func_001A5BB0(5) != 0;
        if (s0) s0 = func_0017F900() != 0;
        if (s0) *(u8 *)D_00CCB660 = 1;
    }
    if (func_00C35960() == 0) return;
    b = *(u8 *)D_00CCB658;
    if (b == 4 || b == 3 || b == 2) {
        if (*(u8 *)D_00CCB665 != 0) {
            func_009E1D30(3, 4);
        } else {
            func_009E1D30(3, 2);
        }
    } else {
        func_009E1D30(3, 4);
    }
    a = func_009E1C90(3) & 0xFF;
    if (a != 2) return;
e2:
    if (func_0017F900() == 0) return;
    func_00152130(0, (0x3C0 / *(u8 *)D_00591BE4) & 0xFF);
    func_009E1D30(3, 3);
e3:
    if (func_00C394C0() == 0) return;
    func_009E1D30(3, 4);
    return;
e4:
    func_009E1D30(3, 5);
    if (func_00C3C0B0(1) != 0) {
        func_00152130(0, 0xFF);
        func_009B4630(4);
        func_009B3F70();
        return;
    }
e5:
    if (func_009B45F0() != 0) return;
    func_009E1D30(3, 6);
e6:
    if (func_0017F900() == 0) return;
    func_00C36020();
    func_009E1D30(3, 4);
e7:
    func_00BC8D00();
    func_009E1D30(3, 8);
    return;
e8:
    if (*(u8 *)D_00CCB658 == 4) {
        func_009E1D30(3, 9);
    } else {
        func_009E1D30(3, 10);
    }
    return;
e9:
    s0 = 0;
    a = func_009E1C90(4) & 0xFF;
    if (a == 1) goto c58dc;
    if (a != 0) goto c58f8;
    {
        void (*p)(s32, s32, s32) = *(void (**)(s32, s32, s32))D_003A9B6C;
        if (p) p(0, 0xFF, *(u8 *)D_00CCB65A);
    }
    func_009E1CB0(4);
c58dc:
    if ((*(s32 (**)(void))D_003A9B68)() != 0) s0 = 1;
c58f8:
    if (s0 == 0) return;
    func_009E1D30(3, 10);
    return;
e10:
    *(u8 *)D_00591DB7 = 1;
    func_00BF6240(1);
    return;
c592c:
    func_009E1D30(3, 6);
}
