/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 Pes6MatchContext_GetHalf(void);
s32 func_0030EA70(void);
void func_00310F30(s32, s32, s32);
s32 func_00326040(s32, s32);
s32 func_00335390(void);
s32 func_00339470(s32, s32, s32, s32);
s32 func_00339540(s32, s32, s32, s32);
s32 func_00340C80(f32);
s32 func_003414D0(s32, s32, s32, s32);

s32 func_0034C150(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a1 = 25;
    a2 = (s32) ((u32) sp + 0x88U);
    s3 = (s32) ((u32) sp + 0x60U);
    s0 = a0;
    a0 = s3; Pes6BitSet_Initialize(a0, a1, a2);
    s1 = (*(volatile s32 *) (u32) (s0 + 72));
    s2 = (*(volatile s32 *) (u32) (s0 + 84));
    s0 = (*(volatile s32 *) (u32) (s0 + 80)); v0 = func_0030EA70();
    s4 = v0 & 0xff; v0 = Pes6MatchContext_GetHalf();
    a0 = 1;
    if (v0 == a0) { v1 = s4 & 0xff; goto L_0034C1BC; }
    if (v0 == 0) goto L_0034C1B8;
    v1 = s4 & 0xff; goto L_0034C1DC;
L_0034C1B8:;
    v1 = s4 & 0xff;
L_0034C1BC:;
    v0 = 45;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 10;
    if (v0 != 0) { a0 = 0; goto L_0034C200; }
    a0 = 1; goto L_0034C200;
L_0034C1DC:;
    v0 = 15;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 5;
    if (v0 != 0) goto L_0034C1FC;
    goto L_0034C200;
L_0034C1FC:;
    a0 = 0;
L_0034C200:;
    if (a0 != 0) { a0 = (s32) ((u32) sp + 0x8fU); goto L_0034C210; }
    v0 = 0; goto L_0034C5C8;
L_0034C210:;
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 143));
    a0 = s1; v0 = func_00326040(a0, a1);
    a2 = (*(volatile u8 *) (u32) (sp + 143));
    s1 = v0;
    a0 = (s32) ((u32) sp + 0x84U);
    a1 = (s32) ((u32) sp + 0x80U); func_00310F30(a0, a1, a2);
    a0 = s3;
    a1 = 4;
    a2 = s1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 143));
    a0 = s3;
    a1 = 5;
    a2 = v0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 143));
    a0 = s3;
    a1 = 6;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    s4 = (*(volatile u8 *) (u32) (sp + 143));
    a0 = (s32) ((u32) sp + 0x7cU);
    a1 = s2;
    a2 = 7;
    a3 = s4; v0 = func_00339540(a0, a1, a2, a3);
    if (v0 != 0) { a2 = s4 & 0xff; goto L_0034C2A4; }
    a2 = 0; goto L_0034C2F8;
L_0034C2A4:;
    a1 = s2;
    a0 = (s32) ((u32) sp + 0x78U);
    a3 = 0; v0 = func_00339470(a0, a1, a2, a3);
    if (v0 == 0) { a2 = 0; goto L_0034C2F8; }
    a0 = (*(volatile s32 *) (u32) (sp + 120));
    v0 = 3;
    v1 = (*(volatile s32 *) (u32) a0);
    if (v1 != v0) goto L_0034C2F4;
    v0 = (s32) 0x41000000U;
    f12.i = (s32) v0;
    s2 = (*(volatile s32 *) (u32) (a0 + 4)); v0 = func_00340C80(f12.f);
    at = v0 < s2;
    if (at == 0) goto L_0034C2F4;
    a2 = 1; goto L_0034C2F8;
L_0034C2F4:;
    a2 = 0;
L_0034C2F8:;
    a0 = s3;
    a1 = 8; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 143));
    v1 = (s32) 0xc71d0000U;
    a1 = 0;
    v0 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 << 4);
    a0 = (s32) ((u32) s0 + (u32) v0);
    v0 = (s32) 0x45a00000U;
    f0.i = (s32) v0;
    v0 = v1 | 0xcb00;
    f1.i = (s32) v0;
L_0034C32C:;
    f2.f = (*(volatile f32 *) (u32) (a0 + 24));
    fcc = f1.f == f2.f;
    if (!fcc) goto L_0034C344;
    a2 = 0; goto L_0034C368;
L_0034C344:;
    fcc = f2.f < f0.f;
    if (!fcc) { a1 = (s32) ((u32) a1 + 0x1U); goto L_0034C358; }
    a2 = 0; goto L_0034C368;
L_0034C358:;
    v0 = a1 < 4;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_0034C32C; }
    a2 = 1;
L_0034C368:;
    a0 = s3;
    a1 = 9; Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 10;
    a2 = s1; Pes6BitSet_Write(a0, a1, a2);
    { s32 c_ = s1 != 0; v0 = (*(volatile u8 *) (u32) (sp + 143)); if (c_) goto L_0034C394; }
    a2 = 0; goto L_0034C3B4;
L_0034C394:;
    v0 = v0 & 0xff;
    v0 = v0 ^ 0x1;
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 73));
    at = v0 < 8;
    if (at != 0) { a2 = 0; goto L_0034C3B4; }
    a2 = 1;
L_0034C3B4:;
    a0 = s3;
    a1 = 12; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (sp + 128));
    v0 = 7;
    { s32 c_ = v1 == v0; a2 = 1; if (c_) goto L_0034C3E0; }
    v0 = 6;
    if (v1 == v0) { a0 = s3; goto L_0034C3E4; }
    a2 = 0;
L_0034C3E0:;
    a0 = s3;
L_0034C3E4:;
    a1 = 14; Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 15;
    a2 = s1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 132));
    a0 = s3;
    a1 = 18;
    v0 = v0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 132));
    a0 = s3;
    a1 = 19;
    v0 = v0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 18; v0 = Pes6BitSet_Lookup(a0, a1);
    s2 = v0;
    a0 = s3;
    a1 = 19; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = s2 | v0;
    a0 = s3;
    a1 = 17; Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 14; v0 = Pes6BitSet_Lookup(a0, a1);
    s2 = v0;
    a0 = s3;
    a1 = 17; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = s2 | v0;
    a0 = s3;
    a1 = 13; Pes6BitSet_Write(a0, a1, a2);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7120));
    v0 = (*(volatile s32 *) (u32) (s0 + 796));
    v1 = (s32) ((u32) v1 << 2);
    v0 = v0 < v1;
    { s32 c_ = v0 != 0; a0 = (*(volatile u8 *) (u32) (sp + 143)); if (c_) goto L_0034C514; }
    v0 = (*(volatile s32 *) (u32) (s0 + 800));
    v0 = v0 < v1;
    if (v0 != 0) { a2 = 0; goto L_0034C518; }
    v0 = a0 & 0xff;
    v1 = (s32) 0xc71d0000U;
    v0 = (s32) ((u32) v0 << 4);
    a1 = 0;
    a0 = (s32) ((u32) s0 + (u32) v0);
    v0 = (s32) 0x45700000U;
    f0.i = (s32) v0;
    v0 = v1 | 0xcb00;
    f1.i = (s32) v0;
L_0034C4D4:;
    f2.f = (*(volatile f32 *) (u32) (a0 + 24));
    fcc = f1.f == f2.f;
    if (!fcc) goto L_0034C4EC;
    a2 = 0; goto L_0034C518;
L_0034C4EC:;
    fcc = f2.f <= f0.f;
    if (fcc) { a1 = (s32) ((u32) a1 + 0x1U); goto L_0034C500; }
    a2 = 0; goto L_0034C518;
L_0034C500:;
    v0 = a1 < 4;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_0034C4D4; }
    a2 = 1; goto L_0034C518;
L_0034C514:;
    a2 = 0;
L_0034C518:;
    a0 = s3;
    a1 = 21; Pes6BitSet_Write(a0, a1, a2);
    a2 = s1;
    a0 = s3;
    a1 = 22; Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 8; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s3;
    a1 = 9; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = s0 | v0;
    a0 = s3;
    a1 = 12; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0 | s0;
    a0 = s3;
    a1 = 13; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0 | s0;
    a0 = s3;
    a1 = 21; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = v0 | s0;
    a0 = s3;
    a1 = 7; Pes6BitSet_Write(a0, a1, a2);
    v0 = func_00335390();
    s0 = v0;
    a0 = s3;
    a1 = 7; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = s0 & v0;
    a0 = s3;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    a1 = s3;
    a0 = 166;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
L_0034C5C8:;
    return v0;
}
