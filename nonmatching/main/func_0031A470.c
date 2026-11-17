/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 Pes6MatchPlayer_GetTeamRelativeXZ(s32, s32, s32);
s32 func_003139C0(s32, s32);
s32 func_003260A0(s32, s32);
s32 func_003324A0(void);
s32 func_00338640(s32, s32);
s32 func_00340590(f32, f32);
s32 func_003405E0(f32, f32);
s32 func_00340880(f32, f32);
s32 func_00340980(f32, f32);

s32 func_0031A470(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12, f32 fa13) {
    s32 v0 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    a1 = (s32) ((u32) sp + 0xa4U);
    s5 = (*(volatile s32 *) (u32) (a0 + 60));
    s0 = a0;
    a2 = (*(volatile u8 *) (u32) (a0 + 48));
    a0 = (s32) ((u32) sp + 0xa8U); v0 = Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    f13.f = (*(volatile f32 *) (u32) (sp + 164));
    f12.f = (*(volatile f32 *) (u32) (sp + 168)); v0 = func_00340880(f12.f, f13.f);
    f12.f = (*(volatile f32 *) (u32) (sp + 168));
    f13.f = (*(volatile f32 *) (u32) (sp + 164));
    s4 = v0; v0 = func_00340590(f12.f, f13.f);
    f12.f = (*(volatile f32 *) (u32) (sp + 168));
    f13.f = (*(volatile f32 *) (u32) (sp + 164));
    s3 = v0; v0 = func_003405E0(f12.f, f13.f);
    s2 = (*(volatile s32 *) (u32) (s0 + 44));
    s1 = (*(volatile s32 *) (u32) (s0 + 48));
    s6 = v0; v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4124)) = (u32) s1;
    a1 = 8;
    s1 = (s32) ((u32) sp + 0x80U);
    a2 = (s32) ((u32) sp + 0xacU);
    a0 = s1; v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s0 + 48));
    a0 = s1; v0 = func_003139C0(a0, a1);
    a2 = (u64) 0 < (u64) s2;
    if (a2 == 0) { a0 = s1; goto L_0031A528; }
    v0 = s3 | s6;
    v0 = s4 | v0;
    a2 = (u64) 0 < (u64) v0;
    a0 = s1;
L_0031A528:;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) goto L_0031A548;
    v0 = s2 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
L_0031A548:;
    if (a2 == 0) { a0 = s1; goto L_0031A568; }
    f13.f = (*(volatile f32 *) (u32) (sp + 164));
    f12.f = (*(volatile f32 *) (u32) (sp + 168)); v0 = func_00340980(f12.f, f13.f);
    v0 = s4 | v0;
    a2 = (u64) 0 < (u64) v0;
    a0 = s1;
L_0031A568:;
    a1 = 2; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s1; goto L_0031A58C; }
    v0 = (u64) 0 < (u64) s4;
    a2 = v0 ^ 0x1;
    a0 = s1;
L_0031A58C:;
    a1 = 3; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s1; goto L_0031A5B0; }
    v0 = (u64) 0 < (u64) s4;
    a2 = v0 ^ 0x1;
    a0 = s1;
L_0031A5B0:;
    a1 = 4; v0 = Pes6BitSet_Write(a0, a1, a2);
    f13.f = (*(volatile f32 *) (u32) (sp + 164));
    f12.f = (*(volatile f32 *) (u32) (sp + 168)); v0 = func_00340880(f12.f, f13.f);
    v0 = (u64) 0 < (u64) v0;
    a0 = s1;
    a2 = v0 ^ 0x1;
    a1 = 5; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = (*(volatile s32 *) (u32) (s0 + 48));
    a0 = s5; v0 = func_003260A0(a0, a1);
    a2 = v0;
    a0 = s1;
    a1 = 6; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = func_003324A0();
    if (v0 != 0) { a0 = s0; goto L_0031A62C; }
    a1 = s1;
    a0 = 76;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) goto L_0031A628;
    a0 = (*(volatile s32 *) (u32) (s0 + 12));
    a1 = 180; v0 = func_00338640(a0, a1);
L_0031A628:;
    a0 = s0;
L_0031A62C:;
    v0 = Pes6Job_SetDone(a0);
    v0 = 0;
    return v0;
}
