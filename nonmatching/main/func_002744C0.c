/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_005927E0[];
extern char D_005927E1[];
extern char D_005927E2[];
extern char D_005927E3[];
extern char D_005927E4[];
extern char D_005927E5[];
extern char D_005927E8[];
extern char D_005927EC[];
extern char D_005927F0[];
extern char D_005927F2[];
extern char D_00592A68[];
extern s32 D_003D9C70[];

s32 func_00BBB8C0(s32, s32, s32, s32, s32, s32);
void func_001C48E8(void *, s32, s32);
s32 func_00275950(u8 *);
void func_00274370(u8 *);
s32 func_002DCA30(void);
void func_00848500(s32, s32);

s32 func_002744C0(u8 *a0, u8 *a1, u8 *a2) {
    s32 frame[4];
    s32 *buf = frame + 2;
    s32 r = 0;
    u16 *p;

    if (*(u16 *)(a2 + 4) == 0) return 0;
    if (*(u16 *)(a2 + 0x14) == 0) return 0;
    *(u8 *)D_005927E0 = 1;
    *(u8 *)D_005927E1 = a0[0];
    *(u8 *)D_005927E2 = a1[0];
    *(u8 *)D_005927E3 = a0[0x12];
    *(u8 *)D_005927E4 = a1[0x12];
    *(u8 *)D_005927E5 = a0[0x11];
    *(u8 *)D_005927E4 = a1[0x11];
    *(s32 *)D_005927E8 = D_003D9C70[func_00BBB8C0(14, a0[0x11], a1[0x12], a0[0x12], a1[0], a0[0])];
    *(s32 *)D_005927EC = D_003D9C70[func_00BBB8C0(14, a0[0x11], a1[0x12], a0[0x12], a1[0], a0[0])];
    *(u16 *)D_005927F0 = (s32)*(u16 *)(a2 + 4) / 5;
    *(u16 *)D_005927F2 = *(u16 *)(a2 + 0x14);
    p = (u16 *)(D_00592A68 + a0[0x12] * 26880 + a0[0x11] * 840);
    *p = *p + *(u16 *)D_005927F0;
    p = (u16 *)(D_00592A68 + a1[0x12] * 26880 + a1[0x11] * 840);
    *p = *p + *(u16 *)D_005927F2;
    func_001C48E8(buf, 0, 8);
    if (*(u16 *)D_005927F2 >= 16) {
        buf[1] = func_00275950(a1);
    }
    if (buf[1] != 0) {
        func_00274370(a1);
        r = 1;
        if (func_002DCA30() != 0) func_00848500(a1[0x12], a1[0x11]);
    }
    if (buf[0] != 0) {
        func_00274370(a0);
        r = 1;
        if (func_002DCA30() != 0) func_00848500(a1[0x12], a1[0x11]);
    }
    return r;
}
