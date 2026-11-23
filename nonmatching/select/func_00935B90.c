/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001B6A30(s32, s32, s32, s32);
void func_0023B040(s32, s32, s32, s32);
void func_0023EA10(s32, s32, s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_002405A0(s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008B32E0(s32, s32, s32, s32);
s32 func_00941CD0(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00935B90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    a0 = (*(volatile s8 *) (u32) (gp + -18660));
    v0 = 2;
    if (a0 == v0) goto L_00935D68;
    v0 = 1;
    if (a0 == v0) goto L_00935C30;
    if (a0 == 0) goto L_00935BCC;
    v0 = 0; goto L_00935D78;
L_00935BCC:;
    v0 = (s32) 0x510000U;
    v1 = 6;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 == v1) { v0 = (s32) ((u32) a0 + 0x1U); goto L_00935C18; }
    v0 = (*(volatile s32 *) (u32) (gp + -18784));
    if (v0 != 0) { v0 = (s32) ((u32) a0 + 0x1U); goto L_00935C10; }
    a0 = 0; v0 = func_00941CD0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) { a0 = 0; goto L_00935C20; }
    v0 = (*(volatile s8 *) (u32) (gp + -18660));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18660)) = (u8) v0; goto L_00935C1C;
L_00935C10:;
    (*(volatile u8 *) (u32) (gp + -18660)) = (u8) v0; goto L_00935C1C;
L_00935C18:;
    (*(volatile u8 *) (u32) (gp + -18660)) = (u8) v0;
L_00935C1C:;
    a0 = 0;
L_00935C20:;
    func_0023EA10(a0, a1, a2, a3);
    goto L_00935D74;
L_00935C30:;
    v0 = (s32) 0x590000U;
    v1 = 12;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) { a0 = 20437; goto L_00935CCC; }
    s0 = (s32) 0x540000U;
    s2 = 0;
    s0 = (s32) ((u32) s0 + 0xffffc300U);
    s1 = 0;
L_00935C54:;
    v0 = (*(volatile s32 *) (u32) (gp + -18652));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 4;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00935C54; }
    a0 = (s32) ((u32) gp + 0xffffb724U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x14U); func_002405A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18656)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x510000U;
    v1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { a0 = 1; goto L_00935CAC; }
    a0 = 2; func_0023F510(a0, a1, a2, a3);
    a0 = 1;
L_00935CAC:;
    func_0023EA10(a0, a1, a2, a3);
    func_0023B040(a0, a1, a2, a3);
    v0 = (*(volatile s8 *) (u32) (gp + -18660));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18660)) = (u8) v0; goto L_00935D74;
L_00935CCC:;
    v0 = func_001B6A30(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_00935D74;
    s0 = (s32) 0x540000U;
    s2 = 0;
    s0 = (s32) ((u32) s0 + 0xffffc300U);
    s1 = 0;
L_00935CF0:;
    v0 = (*(volatile s32 *) (u32) (gp + -18652));
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B32E0(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 4;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00935CF0; }
    a0 = (s32) ((u32) gp + 0xffffb724U); func_002405A0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x14U); func_002405A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18656)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x510000U;
    v1 = 4;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { a0 = 1; goto L_00935D48; }
    a0 = 2; func_0023F510(a0, a1, a2, a3);
    a0 = 1;
L_00935D48:;
    func_0023EA10(a0, a1, a2, a3);
    func_0023B040(a0, a1, a2, a3);
    v0 = (*(volatile s8 *) (u32) (gp + -18660));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18660)) = (u8) v0; goto L_00935D74;
L_00935D68:;
    (*(volatile u8 *) (u32) (gp + -18660)) = (u8) 0;
    v0 = 1; goto L_00935D78;
L_00935D74:;
    v0 = 0;
L_00935D78:;
    return v0;
}
