/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
s64 func_001F08B0(s64);
void func_0036C9B0(s64, s64, s64, s64);
void func_0036CC40(s64, s64, s64, s64);
void func_0036D200(s64, s64, s64, s64);
void func_0036D310(s64, s64, s64, s64);
void func_0036EDE0(s64, s64, s64, s64);
void func_008B2D70(s64, s64, s64, s64);
void func_008B2F80(s64, s64, s64, s64);
void func_008B3050(s64, s64, s64, s64);
void func_008B3280(s64, s64, s64, s64);
void func_008B3400(s64, s64, s64, s64);
void func_008B3FD0(s64, s64, s64, s64);
s64 func_008B9660(s64, s64, s64, s64);
s64 func_008BC3B0(s64, s64, s64, s64);
s64 func_008BF0E0(s64, s64, s64, s64);
void func_008C9CB0(s64, s64, s64, s64);
s64 func_008C9D00(s64, s64, s64, s64);
void func_008C9DB0(s64, s64, s64, s64);
void func_008CACD0(s64, s64, s64, s64);
s64 func_008CB0C0(s64, s64, s64, s64);
s64 func_008CB6F0(s64, s64, s64, s64);
void func_008E0530(s64, s64, s64, s64);
void func_008E0540(s64, s64, s64, s64);
s64 func_008E0650(s64, s64, s64, s64);
void func_008E0660(s64, s64, s64, s64);
s64 func_008E0710(s64, s64, s64, s64);
void func_008E0870(s64, s64, s64, s64);
s64 func_008E0990(s64, s64, s64, s64);
void func_008E0E70(s64, s64, s64, s64);
void func_008E0EB0(s64, s64, s64, s64);
void func_008E10D0(s64, s64, s64, s64);
s64 func_008E2870(s64, s64, s64, s64);
void func_008E2A20(s64, s64, s64, s64);
s64 func_008E2A30(s64, s64, s64, s64);
void func_008E2A40(s64, s64, s64, s64);
void func_008E2A50(s64, s64, s64, s64);
void func_008E5110(s64, s64, s64, s64);

s64 func_0036F040(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, a4 = 0, s0 = 0, s1 = 0;
    s64 frame[18];
    s64 sp = (s32) (u32) frame;

    s1 = a0;
    a0 = 2;
    { s32 c_ = a1 == a0; s0 = 0; if (c_) goto L_0036F530; }
    v1 = 1;
    if (a1 == v1) { v0 = (*(volatile u8 *) (u32) (s1 + 22)); goto L_0036F1F0; }
    if (a1 == 0) { a0 = (s32) ((u32) s1 + 0xb0cU); goto L_0036F07C; }
    v0 = 0; goto L_0036F574;
L_0036F07C:;
    a1 = 19; func_008C9DB0(a0, a1, a2, a3);
    a0 = s1;
    a1 = 4;
    a2 = 3; func_008B2F80(a0, a1, a2, a3);
    v0 = func_008B9660(a0, a1, a2, a3);
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 2;
    if (v1 == v0) { a1 = (*(volatile u8 *) (u32) s1); goto L_0036F0C8; }
    v0 = 1;
    if (v1 == v0) goto L_0036F0C4;
    a1 = (*(volatile u8 *) (u32) s1); goto L_0036F0DC;
L_0036F0C4:;
    a1 = (*(volatile u8 *) (u32) s1);
L_0036F0C8:;
    a0 = (s32) ((u32) s1 + 0x26dcU);
    a2 = 1; func_008E10D0(a0, a1, a2, a3);
    a0 = s1; goto L_0036F0EC;
L_0036F0DC:;
    a0 = (s32) ((u32) s1 + 0x26dcU);
    a2 = 0; func_008E10D0(a0, a1, a2, a3);
    a0 = s1;
L_0036F0EC:;
    func_0036EDE0(a0, a1, a2, a3);
    a1 = (s32) ((u32) s1 + 0x946U);
    a0 = (s32) ((u32) s1 + 0x254cU);
    v1 = 199;
L_0036F100:;
    v0 = (*(volatile s16 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) a0) = (u16) v0;
    a1 = (s32) ((u32) a1 + 0x2U);
    a0 = (s32) ((u32) a0 + 0x2U);
    if (v1 > 0) goto L_0036F100;
    v0 = func_008BF0E0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s1 + 2374)); goto L_0036F14C; }
    v0 = func_008BC3B0(a0, a1, a2, a3);
    if (v0 == 0) { a0 = s1; goto L_0036F158; }
    v0 = (*(volatile u8 *) (u32) s1);
    if (v0 == 0) goto L_0036F154;
    v0 = (*(volatile u8 *) (u32) (s1 + 2374));
L_0036F14C:;
    if (v0 == 0) { a0 = s1; goto L_0036F168; }
L_0036F154:;
    a0 = s1;
L_0036F158:;
    a1 = (s32) ((u32) sp + 0x80U); func_0036CC40(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x26dcU); goto L_0036F174;
L_0036F168:;
    a1 = (s32) ((u32) sp + 0x80U); func_0036C9B0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x26dcU);
L_0036F174:;
    a1 = 13; v0 = func_008E0990(a0, a1, a2, a3);
    if (v0 == 0) { a0 = s1; goto L_0036F190; }
    v0 = (*(volatile u8 *) (u32) (s1 + 2517));
    (*(volatile u8 *) (u32) (sp + 141)) = (u8) v0;
    a0 = s1;
L_0036F190:;
    a1 = (s32) ((u32) sp + 0x80U);
    a2 = (s32) ((u32) sp + 0x30U); func_0036D310(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (s1 + 2369));
    a0 = (s32) ((u32) s1 + 0x26dcU);
    a2 = (s32) ((u32) sp + 0x30U); func_008E0EB0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s1 + 12832));
    v0 = (*(volatile u8 *) (u32) (v1 + 524));
    if (v0 == 0) { a2 = s0; goto L_0036F1C4; }
    s0 = (s32) ((u32) v1 + 0x208U);
    a2 = s0;
L_0036F1C4:;
    a0 = (s32) ((u32) s1 + 0x26dcU);
    a1 = (s32) ((u32) s1 + 0x208U);
    a3 = (s32) ((u32) s1 + 0x254cU); func_008E0870(a0, a1, a2, a3);
    a0 = s1; func_0036D200(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x129cU);
    a1 = 0; func_008E5110(a0, a1, a2, a3);
    goto L_0036F570;
L_0036F1F0:;
    if (v0 == a0) { a1 = (*(volatile u8 *) (u32) (s1 + 25)); goto L_0036F480; }
    if (v0 == v1) { a1 = (*(volatile u8 *) (u32) (s1 + 25)); goto L_0036F3A0; }
    if (v0 == 0) { a0 = (s32) ((u32) s1 + 0xb0cU); goto L_0036F210; }
    goto L_0036F570;
L_0036F210:;
    v0 = func_008CB0C0(a0, a1, a2, a3);
    a4 = v0 & 0xff;
    a0 = (s32) ((u32) s1 + 0x26dcU);
    v0 = (*(volatile s32 *) (u32) (s1 + 12832));
    a1 = (s32) ((u32) s1 + 0x208U);
    a3 = (s32) ((u32) s1 + 0x254cU);
    a2 = (s32) ((u32) v0 + 0x208U); func_008E0540(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0xb0cU); v0 = func_008C9D00(a0, a1, a2, a3);
    if (v0 != 0) goto L_0036F570;
    a1 = (*(volatile u8 *) (u32) (s1 + 25));
    a0 = (s32) ((u32) s1 + 0x26dcU); v0 = func_008E0710(a0, a1, a2, a3);
    v1 = 6;
    if (v0 == v1) { a0 = s1; goto L_0036F390; }
    if (v0 == 0) { a1 = (*(volatile u8 *) (u32) (s1 + 25)); goto L_0036F344; }
    v1 = 4;
    if (v0 == v1) { a0 = (s32) ((u32) s1 + 0xb0cU); goto L_0036F328; }
    v1 = 1;
    if (v0 == v1) { v0 = (s32) 0x84000000U; goto L_0036F2DC; }
    v1 = 2;
    if (v0 == v1) { v0 = (s32) 0x84020000U; goto L_0036F290; }
    goto L_0036F570;
L_0036F290:;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = (s32) 0x11d0000U;
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) 0;
    a0 = v0 | 0x14; v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) v0;
    a0 = (s32) ((u32) s1 + 0x2484U);
    a3 = (*(volatile u8 *) (u32) s1);
    a1 = 4;
    a2 = 3;
    a4 = (s32) ((u32) sp + 0x78U); func_008E2A50(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x2484U);
    a1 = 1; func_008E2A20(a0, a1, a2, a3);
    v0 = 1;
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v0; goto L_0036F570;
L_0036F2DC:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = (s32) 0x10c0000U;
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) 0;
    a0 = v0 | 0x12; v0 = func_001F08B0(a0);
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) v0;
    a0 = (s32) ((u32) s1 + 0x2484U);
    a3 = (*(volatile u8 *) (u32) s1);
    a1 = 4;
    a2 = 3;
    a4 = (s32) ((u32) sp + 0x70U); func_008E2A50(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x2484U);
    a1 = 1; func_008E2A20(a0, a1, a2, a3);
    v0 = 2;
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v0; goto L_0036F570;
L_0036F328:;
    v0 = func_008CB0C0(a0, a1, a2, a3);
    a1 = v0 & 0xff;
    a0 = (s32) ((u32) s1 + 0x26dcU); func_008E0530(a0, a1, a2, a3);
    goto L_0036F570;
L_0036F344:;
    a0 = (s32) ((u32) s1 + 0x26dcU); func_008E0660(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x26dcU); v0 = func_008E0650(a0, a1, a2, a3);
    if (v0 != 0) goto L_0036F570;
    a1 = (*(volatile u8 *) (u32) (s1 + 25));
    a0 = (s32) ((u32) s1 + 0xb0cU); v0 = func_008CB6F0(a0, a1, a2, a3);
    v1 = 3;
    if (v0 != v1) goto L_0036F570;
    a0 = (s32) ((u32) s1 + 0xb0cU); v0 = func_008CB0C0(a0, a1, a2, a3);
    a1 = v0 & 0xff;
    a0 = (s32) ((u32) s1 + 0x26dcU); func_008E0530(a0, a1, a2, a3);
    goto L_0036F570;
L_0036F390:;
    func_0036D200(a0, a1, a2, a3);
    goto L_0036F570;
L_0036F3A0:;
    a0 = (s32) ((u32) s1 + 0x26dcU); v0 = func_008E0710(a0, a1, a2, a3);
    v1 = 6;
    if (v0 == v1) { a0 = s1; goto L_0036F3E4; }
    v1 = 4;
    if (v0 == v1) { a0 = (s32) ((u32) s1 + 0xb0cU); goto L_0036F3C8; }
    a1 = (*(volatile u8 *) (u32) (s1 + 25)); goto L_0036F3F0;
L_0036F3C8:;
    v0 = func_008CB0C0(a0, a1, a2, a3);
    a1 = v0 & 0xff;
    a0 = (s32) ((u32) s1 + 0x26dcU); func_008E0530(a0, a1, a2, a3);
    goto L_0036F3EC;
L_0036F3E4:;
    func_0036D200(a0, a1, a2, a3);
L_0036F3EC:;
    a1 = (*(volatile u8 *) (u32) (s1 + 25));
L_0036F3F0:;
    a0 = (s32) ((u32) s1 + 0x2484U); v0 = func_008E2870(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) { a0 = (s32) ((u32) s1 + 0x2484U); goto L_0036F470; }
    v1 = 2;
    if (v0 == v1) { a0 = (s32) ((u32) s1 + 0x2484U); goto L_0036F418; }
    goto L_0036F570;
L_0036F418:;
    v0 = func_008E2A30(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_0036F46C;
    a1 = (s32) ((u32) s1 + 0x254cU);
    a0 = (s32) ((u32) s1 + 0x946U);
    v1 = 199;
L_0036F438:;
    v0 = (*(volatile s16 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u16 *) (u32) a0) = (u16) v0;
    a1 = (s32) ((u32) a1 + 0x2U);
    a0 = (s32) ((u32) a0 + 0x2U);
    if (v1 > 0) goto L_0036F438;
    a0 = s1; func_008B3280(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x2484U); func_008E2A40(a0, a1, a2, a3);
    v0 = 39; goto L_0036F574;
L_0036F46C:;
    a0 = (s32) ((u32) s1 + 0x2484U);
L_0036F470:;
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) 0; func_008E2A40(a0, a1, a2, a3);
    goto L_0036F570;
L_0036F480:;
    a0 = (s32) ((u32) s1 + 0x26dcU); v0 = func_008E0710(a0, a1, a2, a3);
    v1 = 6;
    if (v0 == v1) { a0 = s1; goto L_0036F4C4; }
    v1 = 4;
    if (v0 == v1) { a0 = (s32) ((u32) s1 + 0xb0cU); goto L_0036F4A8; }
    a1 = (*(volatile u8 *) (u32) (s1 + 25)); goto L_0036F4D0;
L_0036F4A8:;
    v0 = func_008CB0C0(a0, a1, a2, a3);
    a1 = v0 & 0xff;
    a0 = (s32) ((u32) s1 + 0x26dcU); func_008E0530(a0, a1, a2, a3);
    goto L_0036F4CC;
L_0036F4C4:;
    func_0036D200(a0, a1, a2, a3);
L_0036F4CC:;
    a1 = (*(volatile u8 *) (u32) (s1 + 25));
L_0036F4D0:;
    a0 = (s32) ((u32) s1 + 0x2484U); v0 = func_008E2870(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) { a0 = (s32) ((u32) s1 + 0x2484U); goto L_0036F520; }
    v1 = 2;
    if (v0 == v1) { a0 = (s32) ((u32) s1 + 0x2484U); goto L_0036F4F8; }
    goto L_0036F570;
L_0036F4F8:;
    v0 = func_008E2A30(a0, a1, a2, a3);
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_0036F51C;
    a0 = (s32) ((u32) s1 + 0x2484U); func_008E2A40(a0, a1, a2, a3);
    v0 = 39; goto L_0036F574;
L_0036F51C:;
    a0 = (s32) ((u32) s1 + 0x2484U);
L_0036F520:;
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) 0; func_008E2A40(a0, a1, a2, a3);
    goto L_0036F570;
L_0036F530:;
    a0 = (s32) ((u32) s1 + 0x26dcU); func_008E0E70(a0, a1, a2, a3);
    a0 = s1; func_008B2D70(a0, a1, a2, a3);
    a0 = s1;
    a1 = (s32) ((u32) s1 + 0x208U); func_008B3050(a0, a1, a2, a3);
    a0 = s1; func_008B3400(a0, a1, a2, a3);
    a0 = s1; func_008B3FD0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0xb0cU);
    a1 = 1; func_008C9CB0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0xb0cU); func_008CACD0(a0, a1, a2, a3);
L_0036F570:;
    v0 = 0;
L_0036F574:;
    return v0;
}
