/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0058E5B0[];
extern char D_00591E4D[];
extern char D_00591E67[];
extern char D_00591E68[];
extern char D_00592374[];
extern char D_005926FE[];
extern char D_005926FF[];
extern char D_00592700[];
extern char D_00C9EEE0[];
extern char D_00C9EEE4[];
extern char D_00C9EEE8[];
extern char D_00C9EEEC[];
extern char D_00C9EEF0[];
extern char D_00C9EEF4[];
extern char D_00C9EF20[];
extern char D_00C9EF24[];
extern char D_00C9EF28[];
extern char D_00C9EF2C[];
extern char D_00C9EF30[];
extern char D_00C9EF34[];
extern char D_00C9EF40[];
extern char D_00C9EF44[];
extern char D_00C9EF48[];
extern char D_00C9EF4C[];
extern char D_00C9EF50[];
extern char D_00C9EF54[];
extern char D_00C9EF60[];
extern char D_00C9EF64[];
extern char D_00C9EF68[];
extern char D_00C9EF6C[];
extern char D_00C9EF70[];
extern char D_00C9EF74[];
extern char D_00C9EF80[];
extern char D_00C9EF84[];
extern char D_00C9EF88[];
extern char D_00C9EF8C[];
extern char D_00C9EF90[];
extern char D_00C9EF94[];
extern s32 func_00B7B6C0();
extern s32 func_00B25C50();
extern s32 func_00B78FC0();
extern s32 func_00BFEFA0();
extern s32 func_00BFEE00();
extern s32 func_002561A0();
extern s32 func_002DCA30();
extern s32 func_00849DA0();

void func_00BFF740(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 tA[6];
    u32 tB[6];
    u32 tC[6];
    u32 tD[6];
    u32 tE[6];
    u32 fn;
    s32 a0;
    s32 a6;
    s32 b0;
    s32 b1;
    u8 *p;
    tA[0] = *(u32 *)D_00C9EF60;
    tA[1] = *(u32 *)D_00C9EF64;
    tA[2] = *(u32 *)D_00C9EF68;
    tA[3] = *(u32 *)D_00C9EF6C;
    tA[4] = *(u32 *)D_00C9EF70;
    tA[5] = *(u32 *)D_00C9EF74;
    fn = tA[*(u8 *)D_005926FE];
    if (fn != 0) {
        ((void (*)(s32, s32, s32, s32, s32))fn)(arg0, arg1, arg2, arg3, arg4);
    }
    func_00B7B6C0();
    b0 = *(u8 *)D_00592700;
    b1 = *(u8 *)D_005926FE;
    tB[0] = *(u32 *)D_00C9EEE0;
    tB[1] = *(u32 *)D_00C9EEE4;
    tB[2] = *(u32 *)D_00C9EEE8;
    tB[3] = *(u32 *)D_00C9EEEC;
    tB[4] = *(u32 *)D_00C9EEF0;
    tB[5] = *(u32 *)D_00C9EEF4;
    fn = tB[b1];
    if (fn != 0) {
        ((void (*)(s32, s32, s32, s32))fn)(b0, b1, arg2, arg3);
    }
    a0 = *(u8 *)D_00591E4D;
    if (a0 == 0xFF) {
        a0 = 1;
    } else {
        a0 = a0 % 0x17;
    }
    a6 = *(u8 *)(D_0058E5B0 + a0 * 0x240 + 0x12);
    tC[0] = *(u32 *)D_00C9EF80;
    tC[1] = *(u32 *)D_00C9EF84;
    tC[2] = *(u32 *)D_00C9EF88;
    tC[3] = *(u32 *)D_00C9EF8C;
    tC[4] = *(u32 *)D_00C9EF90;
    tC[5] = *(u32 *)D_00C9EF94;
    D_00591E67[a6] = 0;
    D_00591E67[a6 ^ 1] = 1;
    *(u8 *)D_00592374 = *(u8 *)D_00591E67;
    ((u8 *)D_00592374)[1] = *(u8 *)D_00591E68;
    fn = tC[*(u8 *)D_005926FE];
    if (fn != 0) {
        ((void (*)(s32, s32, s32, s32, s32))fn)((s32)D_00592374 & 0xFFFF0000, *(u8 *)D_00591E68, (s32)D_00592374 & 0xFFFF0000, *(u8 *)D_00591E67, (s32)(D_00591E67 + (a6 ^ 1)));
    }
    func_00B78FC0(*(u8 *)D_005926FF, *(u8 *)D_00591E68, (s32)D_00592374 & 0xFFFF0000, *(u8 *)D_00591E67, (s32)(D_00591E67 + (a6 ^ 1)));
    func_00BFEFA0(*(u8 *)D_005926FE, *(u8 *)D_00592700, *(u8 *)D_005926FF);
    func_00BFEE00(*(u8 *)D_005926FE);
    if (*(u8 *)D_005926FE == 4) {
        func_00B25C50(0);
    }
    tD[0] = *(u32 *)D_00C9EF20;
    tD[1] = *(u32 *)D_00C9EF24;
    tD[2] = *(u32 *)D_00C9EF28;
    tD[3] = *(u32 *)D_00C9EF2C;
    tD[4] = *(u32 *)D_00C9EF30;
    tD[5] = *(u32 *)D_00C9EF34;
    tE[0] = *(u32 *)D_00C9EF40;
    tE[1] = *(u32 *)D_00C9EF44;
    tE[2] = *(u32 *)D_00C9EF48;
    tE[3] = *(u32 *)D_00C9EF4C;
    tE[4] = *(u32 *)D_00C9EF50;
    tE[5] = *(u32 *)D_00C9EF54;
    a0 = *(u8 *)D_005926FE;
    if (tD[a0] != 0) {
        func_002561A0(tE[a0]);
    }
    if (func_002DCA30() != 0) {
        func_00849DA0();
    }
}
