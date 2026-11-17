/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
s32 func_0022F190(void);
void func_00320D90(s32);
void func_00321D40(s32, s32, s32, s32);
void func_00321E40(s32);
void func_00322300(s32, s32, s32);
void func_00322600(s32, s32);

void func_003226A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v1 = 6;
    s5 = a0;
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 != v1) { ; goto L_00322914; }
    v1 = (*(volatile u8 *) (u32) (s5 + 2298));
    { s32 c_ = v1 == 0; s4 = (s32) ((u32) s5 + 0x8f8U); if (c_) goto L_00322910; }
    v0 = func_0022F190();
    v0 = (*(volatile s16 *) (u32) (s5 + 2296));
    s1 = s4;
    v1 = (*(volatile u16 *) (u32) (s5 + 58));
    s3 = (s32) ((u32) s1 + 0x4U);
    s6 = (*(volatile u16 *) (u32) (s5 + 60));
    { s32 c_ = v0 <= 0; s2 = 0; if (c_) goto L_00322760; }
    s0 = v1 & 0xffff;
L_0032270C:;
    a0 = (*(volatile u16 *) (u32) s3);
    v0 = 295;
    if (a0 == v0) goto L_00322730;
    v0 = 294;
    if (a0 == v0) goto L_00322730;
    goto L_00322740;
L_00322730:;
    v0 = Pes6Team_ResolveSpecialId(a0);
    a0 = v0 & 0xffff; goto L_00322740;
L_00322740:;
    if (a0 != s0) { v0 = (*(volatile s16 *) (u32) s1); goto L_00322750; }
    v0 = (*(volatile s16 *) (u32) (s5 + 2296)); goto L_00322768;
L_00322750:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < v0;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x10U); if (c_) goto L_0032270C; }
L_00322760:;
    s3 = 0;
    v0 = (*(volatile s16 *) (u32) (s5 + 2296));
L_00322768:;
    s0 = (s32) ((u32) s5 + 0x8f8U);
    s6 = s6 & 0xffff;
    s2 = (s32) ((u32) s0 + 0x4U);
    { s32 c_ = v0 <= 0; s1 = 0; if (c_) goto L_003227D0; }
L_0032277C:;
    a0 = (*(volatile u16 *) (u32) s2);
    v0 = 295;
    if (a0 == v0) goto L_003227A0;
    v0 = 294;
    if (a0 == v0) goto L_003227A0;
    goto L_003227B0;
L_003227A0:;
    v0 = Pes6Team_ResolveSpecialId(a0);
    a0 = v0 & 0xffff; goto L_003227B0;
L_003227B0:;
    if (a0 != s6) { v0 = (*(volatile s16 *) (u32) s0); goto L_003227C0; }
    a0 = s3; goto L_003227D8;
L_003227C0:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x10U); if (c_) goto L_0032277C; }
L_003227D0:;
    s2 = 0;
    a0 = s3;
L_003227D8:;
    a1 = s2; func_00322600(a0, a1);
    v0 = (*(volatile s16 *) (u32) s4);
    { s32 c_ = v0 >= 0; a2 = (s32) v0 >> 1; if (c_) goto L_003227F4; }
    v0 = (s32) ((u32) v0 + 0x1U);
    a2 = (s32) v0 >> 1;
L_003227F4:;
    a0 = s5;
    a1 = s4; func_00322300(a0, a1, a2);
    v1 = 0;
    v0 = s4;
    a6 = (s32) ((u32) sp + 0x80U);
    a5 = 4;
L_00322810:;
    a2 = (s32) ((u32) v1 + 0x1U);
    a3 = (*(volatile s16 *) (u32) (v0 + 6));
    at = a2 < 20;
    { s32 c_ = at == 0; a7 = v1; if (c_) goto L_00322858; }
    a0 = (s32) ((u32) a2 << 4);
    a1 = (s32) ((u32) s4 + (u32) a0);
L_00322830:;
    a0 = (*(volatile s16 *) (u32) (a1 + 6));
    at = a3 < a0;
    if (at == 0) goto L_00322848;
    a3 = a0;
    a7 = a2;
L_00322848:;
    a2 = (s32) ((u32) a2 + 0x1U);
    a0 = a2 < 20;
    { s32 c_ = a0 != 0; a1 = (s32) ((u32) a1 + 0x10U); if (c_) goto L_00322830; }
L_00322858:;
    a4 = (s32) ((u32) v0 + 0x4U);
    a2 = a5;
    a3 = a6;
L_00322868:;
    a1 = (*(volatile s16 *) (u32) a4);
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    a0 = (*(volatile s16 *) (u32) (a4 + 2));
    (*(volatile u16 *) (u32) a3) = (u16) a1;
    (*(volatile u16 *) (u32) (a3 + 2)) = (u16) a0;
    a4 = (s32) ((u32) a4 + 0x4U);
    { s32 c_ = a2 > 0; a3 = (s32) ((u32) a3 + 0x4U); if (c_) goto L_00322868; }
    a0 = (s32) ((u32) a7 << 4);
    a3 = (s32) ((u32) v0 + 0x4U);
    a0 = (s32) ((u32) s4 + (u32) a0);
    a2 = a5;
    a7 = (s32) ((u32) a0 + 0x4U);
    a4 = a7;
L_003228A0:;
    a1 = (*(volatile s16 *) (u32) a4);
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    a0 = (*(volatile s16 *) (u32) (a4 + 2));
    (*(volatile u16 *) (u32) a3) = (u16) a1;
    a4 = (s32) ((u32) a4 + 0x4U);
    (*(volatile u16 *) (u32) (a3 + 2)) = (u16) a0;
    { s32 c_ = a2 > 0; a3 = (s32) ((u32) a3 + 0x4U); if (c_) goto L_003228A0; }
    a2 = a5;
    a3 = a6;
L_003228C8:;
    a1 = (*(volatile s16 *) (u32) a3);
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    a0 = (*(volatile s16 *) (u32) (a3 + 2));
    (*(volatile u16 *) (u32) a7) = (u16) a1;
    (*(volatile u16 *) (u32) (a7 + 2)) = (u16) a0;
    a3 = (s32) ((u32) a3 + 0x4U);
    { s32 c_ = a2 > 0; a7 = (s32) ((u32) a7 + 0x4U); if (c_) goto L_003228C8; }
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = v1 < 19;
    { s32 c_ = a0 != 0; v0 = (s32) ((u32) v0 + 0x10U); if (c_) goto L_00322810; }
    a0 = s4; func_00321E40(a0);
    func_00321D40(a0, a1, a2, a3);
    a0 = s4; func_00320D90(a0);
L_00322910:;
L_00322914:;
    return;
}
