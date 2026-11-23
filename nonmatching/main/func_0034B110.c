/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 Pes6MatchContext_GetHalf(void);
s32 func_0030DAF0(s32);
s32 func_0030E200(void);
s32 func_0030EA70(void);
void func_003115C0(s32, s32, s32, s32, s32, s32);
void func_003139A0(s32);
s32 func_00333740(s32, s32);
s32 func_003414D0(s32, s32, s32, s32);
s32 func_0034BD60(s32, s32, s32, s32);

s32 func_0034B110(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s1 = 0;
    s0 = a0; v0 = func_0030EA70();
    s3 = v0; v0 = Pes6MatchContext_GetHalf();
    a0 = 1;
    if (v0 == a0) { v1 = s3 & 0xff; goto L_0034B160; }
    if (v0 == 0) goto L_0034B15C;
    v1 = s3 & 0xff; goto L_0034B180;
L_0034B15C:;
    v1 = s3 & 0xff;
L_0034B160:;
    v0 = 45;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 10;
    if (v0 != 0) { a0 = 0; goto L_0034B1A4; }
    a0 = 1; goto L_0034B1A4;
L_0034B180:;
    v0 = 15;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = v0 < 5;
    if (v0 != 0) goto L_0034B1A0;
    goto L_0034B1A4;
L_0034B1A0:;
    a0 = 0;
L_0034B1A4:;
    if (a0 != 0) { s4 = (s32) ((u32) sp + 0x60U); goto L_0034B1B4; }
    v0 = 0; goto L_0034B358;
L_0034B1B4:;
    s0 = (*(volatile s32 *) (u32) (s0 + 64));
    a0 = s4;
    a1 = 5;
    a2 = (s32) ((u32) sp + 0x98U); Pes6BitSet_Initialize(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x9fU);
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a1 = (*(volatile u8 *) (u32) (sp + 159));
    a0 = s0; v0 = func_00333740(a0, a1);
    s2 = v0;
    a0 = 0; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 148)) = (u16) v0;
    a0 = 1; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 150)) = (u16) v0; v0 = func_0030E200();
    s0 = v0 & 0xff;
    v0 = 3;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    v0 = 2;
    v1 = hi;
    if (v1 != v0) { (*(volatile u32 *) (u32) (sp + 136)) = (u32) 0; goto L_0034B264; }
    a4 = (s32) ((u32) s0 + 0xffffffffU);
    a0 = (s32) ((u32) sp + 0x88U);
    a1 = (s32) ((u32) sp + 0x8cU);
    a2 = 0;
    a3 = 5;
    a5 = a4; func_003115C0(a0, a1, a2, a3, a4, a5);
    a4 = (s32) ((u32) s0 + 0xfffffffeU);
    a0 = (s32) ((u32) sp + 0x80U);
    a1 = (s32) ((u32) sp + 0x84U);
    a2 = 0;
    a3 = 5;
    a5 = a4; func_003115C0(a0, a1, a2, a3, a4, a5);
    v0 = (*(volatile u8 *) (u32) (sp + 159)); goto L_0034B274;
L_0034B264:;
    (*(volatile u32 *) (u32) (sp + 140)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 128)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 132)) = (u32) 0;
    v0 = (*(volatile u8 *) (u32) (sp + 159));
L_0034B274:;
    a0 = s4;
    a1 = 1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (*(volatile s32 *) (u32) (v0 + 136));
    v0 = (*(volatile s32 *) (u32) (v0 + 128));
    a2 = v0 < v1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 159));
    a0 = s4;
    a1 = 2;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (*(volatile s32 *) (u32) (v0 + 136));
    v0 = (*(volatile s32 *) (u32) (v0 + 128));
    a2 = v1 < v0; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 159));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a0 = (*(volatile s32 *) (u32) (v0 + 128));
    v1 = (*(volatile s32 *) (u32) (v0 + 136));
    v0 = (s32) ((u32) v1 - (u32) a0);
    { s32 c_ = v0 <= 0; a2 = 0; if (c_) goto L_0034B2E0; }
    at = v0 < 14; goto L_0034B2E8;
L_0034B2E0:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    at = v0 < 14;
L_0034B2E8:;
    if (at != 0) { a0 = s4; goto L_0034B300; }
    if (v1 == a0) goto L_0034B2FC;
    a2 = 1;
L_0034B2FC:;
    a0 = s4;
L_0034B300:;
    a1 = 0; v0 = Pes6BitSet_Write(a0, a1, a2);
    if (v0 == 0) { v0 = s1; goto L_0034B358; }
    s0 = (*(volatile u8 *) (u32) (sp + 159)); v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s0;
    a1 = s3;
    a0 = (*(volatile u8 *) (u32) (sp + 159));
    a2 = s2;
    a3 = (s32) ((u32) sp + 0x94U); v0 = func_0034BD60(a0, a1, a2, a3);
    if (v0 == 0) { a1 = s4; goto L_0034B344; }
    a0 = s4; func_003139A0(a0);
    a1 = s4;
L_0034B344:;
    a0 = 181;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    s1 = v0;
    v0 = s1;
L_0034B358:;
    return v0;
}
