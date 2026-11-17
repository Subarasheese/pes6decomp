/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetArg(s32, s32);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 func_0030D5B0(s32, s32, s32, s32, s32);
s32 func_0030D600(s32, s32, s32, s32, s32);
s32 func_0030EA70(s32, s32, s32, s32);
s32 func_0030EE80(s32);
s32 func_00310340(s32, s32);
s32 func_003139C0(s32, s32);
s32 func_00335390(void);

s32 func_00335400(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    a1 = 9;
    a2 = (s32) ((u32) sp + 0x98U);
    s2 = a0;
    s1 = (s32) ((u32) sp + 0x60U);
    s0 = (*(volatile s32 *) (u32) (a0 + 60));
    a0 = s1; v0 = Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s0 + 52));
    a0 = s1; v0 = func_003139C0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s0 + 72));
    v0 = 3;
    if (v1 != v0) { a2 = 0; goto L_00335484; }
    a0 = (s32) ((u32) sp + 0x80U); v0 = func_0030EE80(a0);
    f1.f = (*(volatile f32 *) (u32) (sp + 132));
    v0 = (s32) 0x441e0000U;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00335480;
    a2 = 1; goto L_00335484;
L_00335480:;
    a2 = 0;
L_00335484:;
    a0 = s1;
    a1 = 5; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s2;
    a1 = 0; v0 = Pes6Job_GetArg(a0, a1);
    s4 = v0; v0 = func_0030EA70(a0, a1, a2, a3);
    s3 = v0 & 0xff;
    at = s3 < 11;
    if (at == 0) { v0 = (s32) ((u32) s3 + 0xfffffff6U); goto L_003354BC; }
    a2 = 0; goto L_00335518;
L_003354BC:;
    a4 = (s32) 0x330000U;
    a0 = (s32) ((u32) sp + 0x90U);
    a2 = v0 & 0xff;
    a1 = s3;
    a3 = s4;
    a4 = (s32) ((u32) a4 + 0x53d0U); v0 = func_0030D600(a0, a1, a2, a3, a4);
    a4 = (s32) 0x330000U;
    a2 = s3;
    a0 = (s32) ((u32) sp + 0x94U);
    a1 = 0;
    a3 = s4;
    a4 = (s32) ((u32) a4 + 0x53a0U); v0 = func_0030D5B0(a0, a1, a2, a3, a4);
    a1 = s4 & 0xff;
    a0 = (s32) ((u32) sp + 0x9eU); v0 = func_00310340(a0, a1);
    v0 = (*(volatile s16 *) (u32) (sp + 158));
    a0 = (*(volatile s32 *) (u32) (sp + 144));
    v1 = (*(volatile s32 *) (u32) (sp + 148));
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    a2 = v0 < v1;
L_00335518:;
    a0 = s1;
    a1 = 6; v0 = Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s0 + 58));
    v0 = 10;
    if (v1 == v0) { a2 = (*(volatile u8 *) (u32) (s0 + 64)); goto L_00335558; }
    v0 = 5;
    if (v1 == v0) goto L_00335554;
    v0 = 1;
    if (v1 == v0) goto L_00335554;
    a2 = 0; goto L_00335558;
L_00335554:;
    a2 = (*(volatile u8 *) (u32) (s0 + 64));
L_00335558:;
    a0 = s1;
    a1 = 7; v0 = Pes6BitSet_Write(a0, a1, a2);
    a0 = s1;
    a1 = 5; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s1;
    a1 = 6; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = s0 | v0;
    a0 = s1;
    a1 = 7; v0 = Pes6BitSet_Lookup(a0, a1);
    v0 = v0 | s0;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s1; goto L_003355B0; }
    v0 = func_00335390();
    a2 = (u64) 0 < (u64) v0;
    a0 = s1;
L_003355B0:;
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s1;
    a0 = 138;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s2; v0 = Pes6Job_SetDone(a0);
    v0 = 1;
    return v0;
}
