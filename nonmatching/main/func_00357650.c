/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6BitSet_Initialize(s64, s64, s64);
s64 Pes6BitSet_Lookup(s64, s64);
s64 Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_GetArg(s64, s64);
s64 Pes6Job_SendMessage(s64, s64, s64, s64, s64, s64, s64);
s64 Pes6Job_SetDone(s64);
s64 Pes6Job_SetField4(s64, s64);
s64 func_0030FE30(s64, s64);
s64 func_003139C0(s64, s64);
s64 func_00333320(s64, s64, s64, s64);
s64 func_00333620(s64, s64);
s64 func_00341910(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_009E62D0(s64, s64, s64, s64);

s64 func_00357650(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[40];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0xcc0000U;
    v1 = 255;
    s7 = (*(volatile u8 *) (u32) (v0 + -16896));
    { s32 c_ = s7 != v1; s6 = a0; if (c_) goto L_00357698; }
    v0 = 0; goto L_00357C90;
L_00357698:;
    a0 = 0;
    a1 = 5;
    a2 = 10; v0 = func_00341910(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = v0; v0 = func_00333320(a0, a1, a2, a3);
    v0 = (s32) 0xcb0000U;
    (*(volatile u8 *) (u32) (gp + -21432)) = (u8) s7;
    s0 = (*(volatile s32 *) (u32) (v0 + 13056));
    a0 = (s32) ((u32) sp + 0x13cU);
    a1 = 0;
    v0 = (*(volatile s16 *) (u32) (s0 + 12));
    (*(volatile u16 *) (u32) (sp + 176)) = (u16) v0; v0 = func_0030FE30(a0, a1);
    v0 = (*(volatile s32 *) (u32) (sp + 316));
    v0 = (*(volatile u8 *) (u32) (v0 + 4));
    (*(volatile u8 *) (u32) (gp + -21436)) = (u8) v0;
    a1 = (*(volatile s16 *) (u32) (s0 + 768));
    a0 = (*(volatile s16 *) (u32) (sp + 176)); v0 = func_009E62D0(a0, a1, a2, a3);
    s4 = v0 & 0xff;
    v1 = 64;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -16895));
    if (v0 == v1) { v1 = (s64) ((u64) 0 + (u64) (s64) 4); goto L_00357740; }
    v1 = 16;
    if (v0 == v1) { v1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00357740; }
    v1 = 32;
    if (v0 == v1) { v1 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00357740; }
    v1 = 128;
    if (v0 == v1) { v1 = 0; goto L_00357740; }
    v1 = 96;
    if (v0 == v1) { v1 = (s64) ((u64) 0 + (u64) (s64) 5); goto L_00357740; }
    v1 = 192;
    if (v0 == v1) { v1 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_00357740; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00357740:;
    a1 = (*(volatile s32 *) (u32) (sp + 316));
    v1 = v1 & 0xff;
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    v1 = 11;
    a0 = (*(volatile s32 *) (u32) a1);
    { s32 c_ = a0 != v1; a3 = 0; if (c_) goto L_00357784; }
    a0 = (*(volatile u8 *) (u32) (a1 + 32));
    v1 = 2;
    { s32 c_ = a0 == v1; a2 = 1; if (c_) goto L_00357778; }
    if (a0 == a2) goto L_00357778;
    a2 = 0;
L_00357778:;
    if (a2 == 0) { f0.f = (*(volatile f32 *) (u32) (a1 + 20)); goto L_00357788; }
    a3 = 1;
L_00357784:;
    f0.f = (*(volatile f32 *) (u32) (a1 + 20));
L_00357788:;
    f1.i = f0.i & 0x7FFFFFFF;
    v1 = (s32) 0x445e0000U;
    v1 = v1 | 0x4000;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; a0 = 1; if (c_) goto L_003577AC; }
    a0 = 0;
L_003577AC:;
    v1 = (s32) 0xcc0000U;
    fp = a3 & a0;
    s0 = (*(volatile u8 *) (u32) (v1 + -16897));
    a0 = (s32) 0xcc0000U;
    s2 = (*(volatile u8 *) (u32) (a0 + -16899));
    a2 = (s32) ((u32) sp + 0xe0U);
    a1 = 18;
    v1 = (u64) 0 < (u64) fp;
    v1 = v1 ^ 0x1;
    v1 = a3 & v1;
    a3 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v1;
    a3 = (s32) ((u32) a3 + 0x7ac0U);
L_003577E0:;
    a0 = (*(volatile s8 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s8 *) (u32) (a3 + 1));
    (*(volatile u8 *) (u32) a2) = (u8) a0;
    (*(volatile u8 *) (u32) (a2 + 1)) = (u8) v1;
    a3 = (s32) ((u32) a3 + 0x2U);
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_003577E0; }
    v1 = 64;
    if (v0 == v1) { v0 = (s64) ((u64) 0 + (u64) (s64) 4); goto L_0035784C; }
    v1 = 16;
    if (v0 == v1) { v0 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0035784C; }
    v1 = 32;
    if (v0 == v1) { v0 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_0035784C; }
    v1 = 128;
    if (v0 == v1) { v0 = 0; goto L_0035784C; }
    v1 = 96;
    if (v0 == v1) { v0 = (s64) ((u64) 0 + (u64) (s64) 5); goto L_0035784C; }
    v1 = 192;
    if (v0 == v1) { v0 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_0035784C; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_0035784C:;
    a0 = s0 & 0xff;
    v0 = v0 & 0xff;
    v1 = (s32) ((u32) a0 << 1);
    s5 = (s32) ((u32) sp + 0x110U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = 41;
    v1 = (s32) ((u32) v1 << 1);
    a0 = s5;
    v1 = (s32) ((u32) v1 + (u32) sp);
    a2 = (s32) ((u32) sp + 0x130U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 224));
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0; v0 = Pes6BitSet_Initialize(a0, a1, a2);
    v0 = (s32) 0xcc0000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -16892));
    a0 = s5; v0 = func_003139C0(a0, a1);
    v0 = s7 ^ 0x1;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 2;
    a2 = s4; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (u64) 0 < (u64) s2;
    s3 = v0 ^ 0x1;
    { s32 c_ = s3 != 0; a2 = 1; if (c_) goto L_003578D8; }
    v0 = s2 & 0xff;
    if (v0 == a2) { a0 = s5; goto L_003578DC; }
    a2 = 0;
L_003578D8:;
    a0 = s5;
L_003578DC:;
    a1 = 3; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 4;
    a2 = s3; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 176));
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s5; goto L_00357914; }
    v0 = s2 & 0xff;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_00357914:;
    a1 = 5; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s6;
    a1 = 1; v0 = Pes6Job_GetArg(a0, a1);
    a2 = v0;
    a0 = s5;
    a1 = 6; v0 = Pes6BitSet_Write(a0, a1, a2);
    s1 = s0 & 0xff;
    v0 = 5;
    { s32 c_ = s1 == v0; a2 = 1; if (c_) goto L_00357958; }
    v0 = 2;
    if (s1 == v0) { a0 = s5; goto L_0035795C; }
    a2 = 0;
L_00357958:;
    a0 = s5;
L_0035795C:;
    a1 = 8; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x5;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) { a0 = s5; goto L_00357980; }
    v0 = s1 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_00357980:;
    a1 = 9; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x5;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 10; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x2;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 11; v0 = Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s0 = v0 & 0xff;
    v0 = 5;
    { s32 c_ = s0 == v0; a2 = 1; if (c_) goto L_003579D4; }
    v0 = 2;
    if (s0 == v0) { a0 = s5; goto L_003579D8; }
    a2 = 0;
L_003579D4:;
    a0 = s5;
L_003579D8:;
    a1 = 12; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) { a0 = s5; goto L_003579FC; }
    a2 = s1 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    a0 = s5;
L_003579FC:;
    a1 = 14; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) { a0 = s5; goto L_00357A20; }
    a2 = s1 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    a0 = s5;
L_00357A20:;
    a1 = 15; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x3;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 16; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s1 ^ 0;
    a0 = s5;
    a2 = (u64) a2 < (u64) (s64) 1;
    a1 = 17; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x3;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) { a0 = s5; goto L_00357A6C; }
    a2 = s0 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    a0 = s5;
L_00357A6C:;
    a1 = 18; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) { a0 = s5; goto L_00357A90; }
    v0 = s1 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_00357A90:;
    a1 = 20; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x1;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 21; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x4;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 22; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 192));
    a0 = s5;
    a1 = 23; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x1;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 24; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (u64) 0 < (u64) s7;
    a0 = s5;
    a2 = v0 ^ 0x1;
    a1 = 26; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (sp + 316));
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -16891));
    a0 = s5;
    a1 = 27;
    v1 = (*(volatile u8 *) (u32) (v1 + 4));
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    s2 = s2 & 0xff;
    a0 = s6;
    v0 = s2 & 0x1;
    a1 = (s32) ((u32) v0 + 0x2U); v0 = Pes6Job_GetArg(a0, a1);
    v0 = v0 ^ 0x1;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 28; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) { a0 = s5; goto L_00357B60; }
    v0 = s0 ^ 0x4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_00357B60:;
    a1 = 29; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 27; v0 = Pes6BitSet_Lookup(a0, a1);
    v1 = (*(volatile s32 *) (u32) (sp + 208));
    a0 = s5;
    a1 = 31;
    v1 = v1 | fp;
    v0 = v1 | v0;
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = (u64) 0 < (u64) s3;
    if (a2 != 0) { a0 = s5; goto L_00357BAC; }
    v0 = s2 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_00357BAC:;
    a1 = 32; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s3;
    a0 = s5;
    a1 = 33; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s16 *) (u32) (sp + 176));
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    if (a2 == 0) { a0 = s5; goto L_00357BE4; }
    v0 = s2 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s5;
L_00357BE4:;
    a1 = 34; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x1;
    a0 = s5;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 35; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 208));
    a0 = s5;
    a1 = 37; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = fp;
    a0 = s5;
    a1 = 38; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 39;
    a2 = s4; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s5;
    a1 = 40;
    a2 = s4; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s5;
    a0 = 66;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    if (s4 == 0) goto L_00357C74;
    a0 = 19;
    a1 = 0; v0 = func_00333620(a0, a1);
    a0 = s6; v0 = Pes6Job_SetDone(a0);
    v0 = 0; goto L_00357C90;
L_00357C74:;
    a1 = (s32) 0x350000U;
    a2 = (s32) 0x3e0000U;
    a0 = s6;
    a1 = (s32) ((u32) a1 + 0x7180U);
    a2 = (s32) ((u32) a2 + 0x6490U); v0 = Pes6Job_SetField4(a0, a1);
    v0 = 0;
L_00357C90:;
    return v0;
}
