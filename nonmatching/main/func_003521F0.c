/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Job_SetDone(s32);
s32 func_00311FB0(s32, s32, s32, s32);
s32 func_00312000(s32, s32);
s32 func_003121F0(s32, s32);
s32 func_00333030(s32, s32, s32, s32, s32, s32, s32);
s32 func_003332D0(s32, s32, s32, s32);
s32 func_00340C80(f32);
s32 func_00992AE0(s32, s32, s32, s32);
s32 func_00992B70(s32, s32, s32, s32);
s32 func_00BD9680(s32, s32, s32, s32);
s32 func_00BD98D0(s32, s32, s32, s32);
s32 func_00BF6270(s32, s32, s32, s32);
s32 func_00BF6280(s32, s32, s32, s32);

s32 func_003521F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a1 = 15;
    a2 = (s32) ((u32) sp + 0x88U);
    s3 = a0;
    s2 = (s32) ((u32) sp + 0x60U);
    a0 = s2;
    v0 = Pes6BitSet_Initialize(a0, a1, a2);
    v0 = func_00BD98D0(a0, a1, a2, a3);
    if (v0 != 0) goto L_0035227C;
    v0 = func_00BD9680(a0, a1, a2, a3);
    if (v0 != 0) goto L_0035227C;
    v1 = (*(volatile s32 *) (u32) (s3 + 44));
    v0 = (s32) 0x41a00000U;
    f12.i = (s32) v0;
    s0 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s3 + 44)) = (u32) s0; v0 = func_00340C80(f12.f);
    v0 = s0 < v0;
    if (v0 != 0) { v0 = 0; goto L_00352408; }
    a0 = s3; v0 = Pes6Job_SetDone(a0);
    v0 = 0;
    goto L_00352408;
L_0035227C:;
    v0 = func_00BF6280(a0, a1, a2, a3);
    v1 = 13;
    if (v0 == v1) goto L_00352298;
    a0 = (s32) ((u32) sp + 0x8fU); goto L_003522B8;
L_00352298:;
    v0 = func_00BF6270(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (sp + 143)) = (u8) v0;
    s0 = (*(volatile u8 *) (u32) (sp + 143)); v0 = Pes6Job_GetManager();
    (*(volatile u8 *) (u32) (v0 + 4096)) = (u8) s0;
    s1 = 2; goto L_003522E0;
L_003522B8:;
    v0 = func_00311FB0(a0, a1, a2, a3);
    s0 = (*(volatile u8 *) (u32) (sp + 143));
    v0 = 255;
    if (s0 == v0) { s1 = 0; goto L_003522E0; }
    v0 = Pes6Job_GetManager();
    (*(volatile u8 *) (u32) (v0 + 4096)) = (u8) s0;
    s1 = 1;
L_003522E0:;
    v0 = func_00992B70(a0, a1, a2, a3);
    s4 = v0 & 0xff; v0 = func_00992AE0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 143));
    s0 = v0 & 0xff;
    a0 = (s32) ((u32) sp + 0x80U); v0 = func_00312000(a0, a1);
    a1 = (*(volatile s32 *) (u32) (sp + 128));
    a0 = (s32) ((u32) sp + 0x84U); v0 = func_003121F0(a0, a1);
    a0 = 12000; v0 = func_00333030(a0, a1, a2, a3, a4, a5, a6);
    a0 = v0; v0 = func_003332D0(a0, a1, a2, a3);
    a0 = s2;
    a1 = 0;
    a2 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s4 ^ 0;
    a2 = (u64) a2 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s2; goto L_00352348; }
    v0 = s1 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s2;
L_00352348:;
    a1 = 1; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s4 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s2; goto L_0035236C; }
    v0 = s1 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s2;
L_0035236C:;
    a1 = 4; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s2; goto L_00352394; }
    v0 = (*(volatile s32 *) (u32) (sp + 132));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s2;
L_00352394:;
    a1 = 7; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 143));
    v0 = v0 ^ 0xff;
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s2; goto L_003523BC; }
    v0 = s1 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s2;
L_003523BC:;
    a1 = 10; v0 = Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x1;
    a0 = s2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 11; v0 = Pes6BitSet_Write(a0, a1, a2);
    a2 = s0 ^ 0;
    a0 = s2;
    a2 = (u64) a2 < (u64) (s64) 1;
    a1 = 12; v0 = Pes6BitSet_Write(a0, a1, a2);
    a1 = s2;
    a0 = 69;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3, a4, a5, a6);
    a0 = s3; v0 = Pes6Job_SetDone(a0);
    v0 = 1;
L_00352408:;
    return v0;
}
