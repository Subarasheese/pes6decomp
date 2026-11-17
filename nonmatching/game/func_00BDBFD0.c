/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002075B0(s32, s32, s32, s32);

void func_00BDBFD0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    a2 = (*(volatile s32 *) (u32) a0);
    s0 = a0;
    a0 = (*(volatile u16 *) (u32) (a2 + 38));
    v1 = (*(volatile u16 *) (u32) (a2 + 44));
    a1 = (s32) ((u32) a0 - (u32) v1);
    if (a1 == 0) goto L_00BDC034;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = 2;
    a0 = (*(volatile u8 *) (u32) (a0 + 76));
    if (a0 == v1) goto L_00BDC034;
    v1 = 5;
    if (a0 == v1) goto L_00BDC034;
    v1 = (*(volatile s32 *) (u32) (a2 + 4));
    a0 = (s32) 0x10000U;
    a1 = (s32) ((u32) a1 + (u32) a0);
    a0 = 0x8001;
    a1 = a1 & 0xffff;
    a0 = a1 < a0;
    (*(volatile u8 *) (u32) (v1 + 45)) = (u8) a0;
L_00BDC034:;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    v1 = (*(volatile u8 *) (u32) (v1 + 76));
    at = (u64) v1 < (u64) (s64) 6;
    if (at == 0) goto L_00BDC11C;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x25d0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xbdc064U) goto L_00BDC064; if (t_ == 0xbdc084U) goto L_00BDC084; if (t_ == 0xbdc0a4U) goto L_00BDC0A4; if (t_ == 0xbdc0c4U) goto L_00BDC0C4; if (t_ == 0xbdc0e4U) goto L_00BDC0E4; if (t_ == 0xbdc104U) goto L_00BDC104; }
L_00BDC064:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1010;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s0); goto L_00BDC120;
L_00BDC084:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1011;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00BDC11C;
L_00BDC0A4:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1012;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00BDC11C;
L_00BDC0C4:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1008;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00BDC11C;
L_00BDC0E4:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1007;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00BDC11C;
L_00BDC104:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1009;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
L_00BDC11C:;
    v1 = (*(volatile s32 *) (u32) s0);
L_00BDC120:;
    a0 = 2;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0;
    return;
}
