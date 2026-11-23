/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
void func_003139F0(s32, s32);
s32 func_00333740(s32, s32);
s32 func_00339440(s32, s32, s32);
s32 func_00340C80(f32);

s32 func_00358D60(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    a1 = 5;
    a2 = (s32) ((u32) sp + 0x9cU);
    s5 = a0;
    s4 = (s32) ((u32) sp + 0x80U);
    a0 = s4;
    Pes6BitSet_Initialize(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s5 + 48));
    a0 = s4; func_003139F0(a0, a1);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7705));
    s6 = (*(volatile s32 *) (u32) (s5 + 64));
    v0 = 255;
    { s32 c_ = v1 == v0; s3 = (*(volatile s32 *) (u32) (s5 + 68)); if (c_) goto L_00358DD4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
    v0 = (s32) ((u32) a0 << 3); goto L_00358DDC;
L_00358DD4:;
    a0 = 1;
    v0 = (s32) ((u32) a0 << 3);
L_00358DDC:;
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a1 = (s32) ((u32) a0 << 6);
    v0 = (*(volatile s32 *) (u32) (s5 + 48));
    s0 = (s32) ((u32) v1 + (u32) a1);
    a0 = s4;
    v1 = (*(volatile u8 *) (u32) (s0 + 18));
    a1 = 1;
    a2 = v1 ^ v0;
    a2 = (u64) a2 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s0 + 18));
    a0 = s4;
    v0 = (*(volatile s32 *) (u32) (s5 + 48));
    a1 = 2;
    a2 = v1 ^ v0;
    a2 = (u64) 0 < (u64) a2; Pes6BitSet_Write(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s0 + 18));
    s2 = 0;
    v0 = (*(volatile s32 *) (u32) (s5 + 48));
    { s32 c_ = a1 == v0; s1 = 0; if (c_) goto L_00358E54; }
    a0 = s3; v0 = func_00333740(a0, a1);
    at = v0 < 13;
    if (at == 0) goto L_00358E54;
    s1 = 1;
L_00358E54:;
    if (s1 == 0) { a2 = s2; goto L_00358E98; }
    v0 = (*(volatile s32 *) (u32) (s5 + 48));
    a0 = s6;
    a1 = 7;
    a2 = v0 ^ 0x1; v0 = func_00339440(a0, a1, a2);
    s1 = v0;
    v0 = (s32) 0x41f00000U;
    f12.i = (s32) v0;
    v0 = func_00340C80(f12.f);
    at = s1 < v0;
    if (at == 0) goto L_00358E94;
    s2 = 1;
L_00358E94:;
    a2 = s2;
L_00358E98:;
    a0 = s4;
    a1 = 3; Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 1; v0 = Pes6BitSet_Lookup(a0, a1);
    if (v0 == 0) { s0 = (*(volatile u8 *) (u32) (s0 + 18)); goto L_00358EBC; }
    s0 = (*(volatile s32 *) (u32) (s5 + 48));
L_00358EBC:;
    v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s0;
    a1 = s4;
    a0 = 84;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    v0 = 1;
    return v0;
}
