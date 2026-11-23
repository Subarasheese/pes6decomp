/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Process_Create(s32, s32, s32, s32, s32);
void Pes6Process_Start(s32, s32, s32, s32);
void func_001B8600(s32, s32, s32, s32);
s32 func_001B86B0(s32, s32, s32, s32);
void func_001D4F40(s32, s32, s32, s32);
s32 func_001D5A10(s32);
void func_001D7D60(s32, s32);
void func_001D7E40(s32, s32, s32, s32);
s32 func_001D7F90(s32, s32, s32, s32);

void func_001B9030(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;

    v0 = (s32) 0x3a0000U;
    fp = a1;
    s7 = a2;
    s6 = a0;
    s5 = (s32) 0x3a0000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -31692));
    v0 = (s32) 0x3a0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -31744));
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + 0xffff8400U); if (c_) goto L_001B90F0; }
    v0 = (s32) 0x10000U;
    a0 = v0 | 0x3f; v0 = func_001D5A10(a0);
    s4 = v0;
    if (s4 == 0) goto L_001B90F0;
    a0 = s4; func_001D4F40(a0, a1, a2, a3);
    s1 = (s32) 0x3a0000U;
    s3 = 0;
    s2 = s5;
    s1 = (s32) ((u32) s1 + 0xffff8440U);
L_001B90B4:;
    a0 = s4; v0 = func_001D7F90(a0, a1, a2, a3);
    a1 = (*(volatile s32 *) (u32) s1);
    a0 = v0;
    (*(volatile u32 *) (u32) s2) = (u32) v0; func_001D7E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = 1; func_001D7D60(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v0 = s3 < 4;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_001B90B4; }
L_001B90F0:;
    if (s0 != 0) { a0 = (*(volatile s32 *) (u32) s5); goto L_001B912C; }
    a1 = (s32) 0x1c0000U;
    a5 = (s32) 0x3d0000U;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0xffff9240U);
    a2 = 0;
    a3 = 0;
    a4 = 0;
    a5 = (s32) ((u32) a5 + 0x1510U); v0 = Pes6Process_Create(a0, a1, a2, a3, a4);
    (*(volatile u32 *) (u32) (s5 + 28)) = (u32) v0;
    a0 = v0; Pes6Process_Start(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s5);
L_001B912C:;
    if (a0 == 0) { v0 = 1; goto L_001B9140; }
    a1 = 0; func_001D7D60(a0, a1);
    v0 = 1;
L_001B9140:;
    s0 = (s32) 0x3a0000U;
    (*(volatile u32 *) (u32) (s5 + 52)) = (u32) v0;
    a0 = s6;
    s0 = (s32) ((u32) s0 + 0xffff8400U); v0 = func_001B86B0(a0, a1, a2, a3);
    if (v0 == 0) { a0 = fp; goto L_001B917C; }
    v0 = (*(volatile s32 *) (u32) (s0 + 52));
    if (v0 == 0) goto L_001B9178;
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    if (v0 == s6) goto L_001B9178;
    (*(volatile u32 *) (u32) (s0 + 32)) = (u32) s6;
L_001B9178:;
    a0 = fp;
L_001B917C:;
    func_001B8600(a0, a1, a2, a3);
    v1 = (s32) 0x3a0000U;
    s0 = (s32) 0x3a0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -31692));
    { s32 c_ = v1 == 0; s0 = (s32) ((u32) s0 + 0xffff8400U); if (c_) goto L_001B91E4; }
    v1 = (*(volatile s32 *) (u32) (s0 + 32));
    v0 = 2;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) s0); goto L_001B91C8; }
    v0 = 1;
    if (v1 == v0) goto L_001B91C4;
    if (v1 == 0) goto L_001B91C4;
    a0 = (*(volatile s32 *) (u32) (s0 + 20)); goto L_001B91D8;
L_001B91C4:;
    a0 = (*(volatile s32 *) (u32) s0);
L_001B91C8:;
    a1 = s7; func_001D7D60(a0, a1);
    (*(volatile u8 *) (u32) (s0 + 44)) = (u8) s7; goto L_001B91E4;
L_001B91D8:;
    a1 = s7; func_001D7D60(a0, a1);
    (*(volatile u8 *) (u32) (s0 + 44)) = (u8) s7;
L_001B91E4:;
    v1 = (s32) 0x3a0000U;
    s0 = (s32) 0x3a0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -31692));
    { s32 c_ = v1 == 0; s0 = (s32) ((u32) s0 + 0xffff8400U); if (c_) goto L_001B9208; }
    a0 = (*(volatile s32 *) (u32) (s0 + 8));
    a1 = 0; func_001D7D60(a0, a1);
    (*(volatile u8 *) (u32) (s0 + 45)) = (u8) 0;
L_001B9208:;
    v1 = (*(volatile s32 *) (u32) (s5 + 52));
    (*(volatile u8 *) (u32) (s5 + 47)) = (u8) v1;
    return;
}
