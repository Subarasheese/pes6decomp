/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_CopyPayloadOut(s32, s32, s32);
s32 Pes6Job_Create(s32, s32, s32);
s32 Pes6Job_GetArg(s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetArg(s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 Pes6Job_SetField4(s32, s32);
s32 Pes6MatchPlayer_GetTeamRelativeZ(s32, s32);
s32 func_0030E5A0(s32, s32, s32, s32);
s32 func_003109C0(s32);
s32 func_00310A50(s32, s32, s32, s32);
s32 func_00310B10(s32);
s32 func_00310C80(s32);
s32 func_003139C0(s32, s32);
s32 func_00333600(s32);
s32 func_00338530(s32);
s32 func_00353BC0(void);

s32 func_003201D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    a1 = 1;
    s2 = a0;
    v0 = Pes6Job_GetArg(a0, a1);
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x6fU); goto L_00320238; }
    v0 = (s32) 0x80000000U;
    a1 = (s32) 0x320000U;
    a3 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0xffffef90U);
    a0 = v0 | 0x2a;
    a2 = 22;
    a3 = (s32) ((u32) a3 + 0x15c8U); v0 = Pes6Job_Create(a0, a1, a2);
    a0 = v0;
    a1 = s2; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
    a1 = 1;
    a0 = s2;
    a2 = a1; v0 = Pes6Job_SetArg(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x6fU);
L_00320238:;
    a1 = 8; v0 = func_00310A50(a0, a1, a2, a3);
    v0 = (s32) 0x80000000U;
    a0 = v0 | 0x40; v0 = func_00338530(a0);
    if (v0 != 0) { a0 = s2; goto L_00320268; }
    a0 = 44; v0 = func_00338530(a0);
    if (v0 == 0) { a0 = s2; goto L_00320278; }
    a0 = s2;
L_00320268:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 1; goto L_00320498;
L_00320278:;
    a1 = 2; v0 = Pes6Job_GetArg(a0, a1);
    if (v0 != 0) { a0 = 3; goto L_00320390; }
    a0 = s2;
    a1 = 1; v0 = Pes6Job_GetArg(a0, a1);
    if (v0 == 0) goto L_0032038C;
    a0 = (*(volatile u8 *) (u32) (sp + 111)); v0 = func_00310C80(a0);
    if (v0 == 0) goto L_0032038C;
    v0 = func_00353BC0();
    if (v0 != 0) goto L_0032038C;
    s1 = (s32) ((u32) sp + 0x40U);
    a1 = 3;
    a0 = s1;
    a2 = (s32) ((u32) sp + 0x68U); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (sp + 111));
    a0 = s1; v0 = func_003139C0(a0, a1);
    a0 = (*(volatile u8 *) (u32) (sp + 111));
    s0 = 0; v0 = func_003109C0(a0);
    if (v0 == 0) { a2 = s0; goto L_00320360; }
    v1 = (*(volatile u8 *) (u32) (sp + 111));
    v0 = 255;
    if (v1 == v0) { v1 = 1; goto L_0032030C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
L_0032030C:;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffe5c4U);
    a1 = (s32) ((u32) v1 << 6);
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) 0x45d20000U;
    a0 = (*(volatile s16 *) (u32) a0);
    v1 = v1 | 0x6400;
    f1.f = (*(volatile f32 *) (u32) (v0 + 7768));
    f0.i = (s32) v1;
    f2.i = (s32) a0;
    f2.f = (f32) f2.i;
    f1.f = f1.f * f2.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_0032035C;
    s0 = 1;
L_0032035C:;
    a2 = s0;
L_00320360:;
    a0 = s1;
    a1 = 2; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s1;
    a0 = 35;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s2;
    a1 = 2;
    a2 = 1; v0 = Pes6Job_SetArg(a0, a1, a2);
L_0032038C:;
    a0 = 3;
L_00320390:;
    v0 = func_00333600(a0);
    if (v0 != 0) { v0 = 1; goto L_00320498; }
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 6;
    a2 = (s32) ((u32) sp + 0x64U); v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (sp + 111));
    a0 = (s32) ((u32) sp + 0x40U); v0 = func_003139C0(a0, a1);
    a1 = (*(volatile u8 *) (u32) (sp + 111));
    a0 = (s32) ((u32) sp + 0x60U); v0 = Pes6MatchPlayer_GetTeamRelativeZ(a0, a1);
    v0 = func_0030E5A0(a0, a1, a2, a3);
    a2 = v0;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (sp + 111)); v0 = func_00310B10(a0);
    a2 = v0;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 2; v0 = Pes6BitSet_Write(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 96));
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    { s32 c_ = !fcc; a2 = 1; if (c_) goto L_00320414; }
    a2 = 0;
L_00320414:;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 4; v0 = Pes6BitSet_Write(a0, a1, a2);
    f1.f = (*(volatile f32 *) (u32) (sp + 96));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; a2 = 1; if (c_) goto L_0032043C; }
    a2 = 0;
L_0032043C:;
    a0 = (s32) ((u32) sp + 0x40U);
    a1 = 5; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = 36;
    a1 = (s32) ((u32) sp + 0x40U);
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s2;
    a1 = 2; v0 = Pes6Job_GetArg(a0, a1);
    if (v0 != 0) { a0 = s2; goto L_0032048C; }
    a1 = (s32) 0x320000U;
    a2 = (s32) 0x3e0000U;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0xd0U);
    a2 = (s32) ((u32) a2 + 0x15c8U); v0 = Pes6Job_SetField4(a0, a1);
    goto L_00320494;
L_0032048C:;
    v0 = Pes6Job_SetDone(a0);
L_00320494:;
    v0 = 1;
L_00320498:;
    return v0;
}
