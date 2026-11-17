/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
void Pes6Job_SetDone(s32);
void Pes6MatchPlayer_GetTeamRelativeXZ(s32, s32, s32);
s32 func_0030DBA0(void);
f32 func_0030F6B0(s32);
f32 func_0030F720(s32);
s32 func_00310C40(s32);
void func_003139C0(s32, s32);
s32 func_00333030(s32, s32, s32, s32, s32, s32, s32);
s32 func_00333600(s32);
void func_00338640(s32, s32);
s32 func_00340680(s32, s32, s32, s32, f32, f32, f32);
s32 func_00341440(s32);
s32 func_009B3070(s32, s32, s32, s32);

s32 func_00351160(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12, f32 fa13, f32 fa14) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s2 = 0;
    s0 = a0;
    s1 = (*(volatile s32 *) (u32) (a0 + 60));
    a0 = 3; v0 = func_00333600(a0);
    s2 = s2 | v0;
    a0 = 11; v0 = func_00333600(a0);
    s2 = s2 | v0;
    a0 = 9; v0 = func_00333600(a0);
    s2 = s2 | v0; v0 = func_0030DBA0();
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    v0 = s2 | v0;
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s1 + 8)); goto L_003511DC; }
    a0 = s0; Pes6Job_SetDone(a0);
    v0 = 1; goto L_00351424;
L_003511DC:;
    if (v0 != 0) { s3 = (s32) ((u32) s1 + 0x74U); goto L_003511EC; }
    v0 = 0; goto L_00351424;
L_003511EC:;
    a0 = s3; v0 = func_00341440(a0);
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (gp + -21480)); goto L_0035120C; }
    a0 = s0; Pes6Job_SetDone(a0);
    v0 = 0; goto L_00351424;
L_0035120C:;
    if (v0 != 0) { a0 = s0; goto L_00351418; }
    a2 = (*(volatile u8 *) (u32) (s3 + 4));
    a0 = (s32) ((u32) sp + 0x9cU);
    a1 = (s32) ((u32) sp + 0x98U); Pes6MatchPlayer_GetTeamRelativeXZ(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s3 + 4)); f0.f = func_0030F720(a0);
    a0 = (*(volatile u8 *) (u32) (s3 + 4));
    f20.i = f0.i; f0.f = func_0030F6B0(a0);
    f1.f = (*(volatile f32 *) (u32) (sp + 156));
    a0 = (*(volatile u8 *) (u32) (s3 + 4));
    f21.f = f20.f - f1.f;
    f20.f = f1.f - f0.f; v0 = func_00310C40(a0);
    v1 = (*(volatile u8 *) (u32) (s3 + 4));
    s2 = v0 & 0xffff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0035126C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0035126C:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    s4 = (s32) ((u32) sp + 0x70U);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = s4;
    s1 = (s32) ((u32) v0 + (u32) v1);
    a1 = 3;
    a2 = (s32) ((u32) sp + 0x94U); Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s3 + 4));
    a0 = s4; func_003139C0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (s1 + 22));
    v0 = v0 ^ 0x2;
    v0 = (u64) v0 < (u64) (s64) 1;
    { s32 c_ = v0 == 0; s3 = 0; if (c_) goto L_003512C4; }
    v0 = (*(volatile u16 *) (u32) (s1 + 24));
    v0 = v0 ^ 0x58;
    v0 = (u64) v0 < (u64) (s64) 1;
L_003512C4:;
    if (v0 == 0) { v0 = (s32) 0x45d80000U; goto L_003512F0; }
    a1 = (*(volatile u16 *) (u32) (s1 + 44));
    a0 = (*(volatile u16 *) (u32) (s1 + 42)); v0 = func_009B3070(a0, a1, a2, a3);
    v0 = v0 & 0xffff;
    at = v0 < 8193;
    if (at == 0) goto L_003512EC;
    s3 = 1;
L_003512EC:;
    v0 = (s32) 0x45d80000U;
L_003512F0:;
    v0 = v0 | 0xc800;
    f12.f = (*(volatile f32 *) (u32) (sp + 156));
    f14.f = (*(volatile f32 *) (u32) (sp + 152));
    f13.i = (s32) v0;
    a0 = 4; v0 = func_00340680(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s4; goto L_00351324; }
    a0 = 12000; v0 = func_00333030(a0, a1, a2, a3, a4, a5, a6);
    a2 = (u64) 0 < (u64) v0;
    a0 = s4;
L_00351324:;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    fcc = f21.f < f20.f;
    { s32 c_ = fcc; a2 = 1; if (c_) goto L_0035133C; }
    a2 = 0;
L_0035133C:;
    a0 = s4;
    a1 = 1; Pes6BitSet_Write(a0, a1, a2);
    f0.i = (s32) 0;
    a2 = 0;
    fcc = f20.f <= f0.f;
    { s32 c_ = !fcc; v1 = 1; if (c_) goto L_00351360; }
    v1 = 0;
L_00351360:;
    fcc = f21.f <= f20.f;
    { s32 c_ = !fcc; v0 = 1; if (c_) goto L_00351370; }
    v0 = 0;
L_00351370:;
    v0 = v1 & v0;
    if (v0 == 0) { a0 = s4; goto L_003513B4; }
    v0 = s2 & 0xffff;
    at = v0 < 8193;
    { s32 c_ = at != 0; v1 = 0; if (c_) goto L_003513A0; }
    at = 0xe000;
    at = v0 < at;
    if (at == 0) { v0 = s3 | v1; goto L_003513A4; }
    v1 = 1;
L_003513A0:;
    v0 = s3 | v1;
L_003513A4:;
    if (v0 == 0) goto L_003513B0;
    a2 = 1;
L_003513B0:;
    a0 = s4;
L_003513B4:;
    a1 = 2; Pes6BitSet_Write(a0, a1, a2);
    a1 = s4;
    a0 = 41;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) goto L_00351414;
    v0 = (s32) 0x80000000U;
    a1 = 3;
    a0 = v0 | 0xb; func_00338640(a0, a1);
    v0 = (s32) 0x80000000U;
    a1 = 3;
    a0 = v0 | 0x11; func_00338640(a0, a1);
    v0 = (s32) 0x80000000U;
    a1 = 3;
    a0 = v0 | 0xc; func_00338640(a0, a1);
    v0 = (s32) 0x80000000U;
    a1 = 3;
    a0 = v0 | 0x12; func_00338640(a0, a1);
L_00351414:;
    a0 = s0;
L_00351418:;
    Pes6Job_SetDone(a0);
    v0 = 1;
L_00351424:;
    return v0;
}
