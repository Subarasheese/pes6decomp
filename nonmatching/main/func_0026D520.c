/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDA50(s32);
void func_00221300(s32, s32, s32, s32);
void func_00334980(s32, s32);

void func_0026D520(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x590000U;
    a4 = (*(volatile u8 *) (u32) (v0 + -10220));
    { s32 c_ = a4 == 0; s0 = a1; if (c_) goto L_0026D598; }
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -10216));
    v0 = (*(volatile u16 *) (u32) (v1 + 8));
    { s32 c_ = v0 <= 0; a5 = 0; if (c_) goto L_0026D598; }
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v1 + 0x8U);
    a2 = (*(volatile s32 *) (u32) (v0 + -10212));
    a3 = a0 & 0xffff;
    v1 = a5 & 0xffff;
L_0026D564:;
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) a2 + (u32) v0);
    v0 = (*(volatile u16 *) (u32) v0);
    if (v0 != a3) { v0 = (*(volatile u16 *) (u32) a1); goto L_0026D584; }
    goto L_0026D5A0;
    v0 = (*(volatile u16 *) (u32) a1);
L_0026D584:;
    v1 = (s32) ((u32) a5 + 0x1U);
    a5 = v1 & 0xffff;
    v0 = a5 < v0;
    if (v0 != 0) { v1 = a5 & 0xffff; goto L_0026D564; }
L_0026D598:;
    v0 = 0xffff;
    v1 = v0 & 0xffff;
L_0026D5A0:;
    if (a4 == 0) { a0 = 0; goto L_0026D6E8; }
    v1 = v1 & 0xffff;
    v0 = 0xffff;
    if (v1 != v0) goto L_0026D5D4;
    a0 = 0; v0 = func_001CDA50(a0);
    a0 = v0;
    a1 = 0; func_00334980(a0, a1);
    goto L_0026D700;
L_0026D5D4:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 7);
    a2 = (*(volatile s32 *) (u32) (v0 + -10216));
    v0 = (s32) 0x590000U;
    a2 = (*(volatile u16 *) (u32) (a2 + 8));
    a1 = (*(volatile s32 *) (u32) (v0 + -10224));
    a2 = (s32) ((u32) a2 << 1);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (s32) ((u32) v1 + 0xcU);
    (*(volatile u32 *) (u32) (v0 + -10208)) = (u32) v1; func_00221300(a0, a1, a2, a3);
    { s32 c_ = s0 != 0; v1 = v0 & 0xff; if (c_) goto L_0026D628; }
    v0 = v1 & 0xff;
    v1 = 1;
    if (v0 != v1) goto L_0026D65C;
    v1 = 0; goto L_0026D65C;
L_0026D628:;
    v0 = 3;
    if (s0 != v0) { v1 = 0; goto L_0026D65C; }
    v0 = v1 & 0xff;
    v1 = 1;
    if (v0 != v1) { v1 = 0; goto L_0026D65C; }
    goto L_0026D65C;
    v1 = 0;
    goto L_0026D65C;
    v1 = 0;
L_0026D65C:;
    if (v1 == 0) goto L_0026D6A4;
    v0 = (s32) 0x590000U;
    v1 = 0xffff;
    v0 = (*(volatile s32 *) (u32) (v0 + -10208));
    v0 = (*(volatile u16 *) (u32) (v0 + 124));
    if (v0 == v1) { a0 = 0; goto L_0026D688; }
    goto L_0026D69C;
    a0 = 0;
L_0026D688:;
    v0 = func_001CDA50(a0);
    a0 = v0;
    a1 = 0; func_00334980(a0, a1);
L_0026D69C:;
    goto L_0026D6FC;
L_0026D6A4:;
    v0 = (s32) 0x590000U;
    v1 = 0xffff;
    v0 = (*(volatile s32 *) (u32) (v0 + -10208));
    v0 = (*(volatile u16 *) (u32) (v0 + 126));
    if (v0 == v1) { a0 = 0; goto L_0026D6C8; }
    goto L_0026D6DC;
    a0 = 0;
L_0026D6C8:;
    v0 = func_001CDA50(a0);
    a0 = v0;
    a1 = 0; func_00334980(a0, a1);
L_0026D6DC:;
    goto L_0026D6FC;
    a0 = 0;
L_0026D6E8:;
    v0 = func_001CDA50(a0);
    a0 = v0;
    a1 = 0; func_00334980(a0, a1);
L_0026D6FC:;
L_0026D700:;
    return;
}
