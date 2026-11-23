/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void Pes6Heap_Free(s32);
s32 func_001F08B0(s32);
void func_002F1970(s32, s32, s32, s32);
void func_002F1A00(s32, s32, s32, s32, s32, s32);

void func_002F5FF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v1 = 8;
    s1 = a0;
    a0 = (s32) ((u32) sp + 0x78U);
    { s32 c_ = a0 == 0; s0 = a1; if (c_) goto L_002F6040; }
L_002F6024:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_002F6024;
L_002F6040:;
    if (s1 == 0) { ; goto L_002F61A4; }
    if (s0 != 0) { v0 = (*(volatile s8 *) (u32) (s1 + 5)); goto L_002F605C; }
    goto L_002F61A0;
    v0 = (*(volatile s8 *) (u32) (s1 + 5));
L_002F605C:;
    v1 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = v1 >= 0; v0 = v1 & 0x1; if (c_) goto L_002F6074; }
    if (v0 == 0) { v0 = (s32) ((u32) v0 << 3); goto L_002F6078; }
    v0 = (s32) ((u32) v0 + 0xfffffffeU);
L_002F6074:;
    v0 = (s32) ((u32) v0 << 3);
L_002F6078:;
    v0 = (s32) ((u32) s1 + (u32) v0);
    s2 = (s32) ((u32) v0 + 0xb8U);
    v0 = (*(volatile s32 *) (u32) (v0 + 188));
    { s32 c_ = v0 <= 0; s4 = 0; if (c_) goto L_002F60B8; }
    s3 = 0;
L_002F6090:;
    v0 = (*(volatile s32 *) (u32) s2);
    a1 = 0;
    a0 = (s32) ((u32) v0 + (u32) s3); func_002F1970(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < v0;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x24U); if (c_) goto L_002F6090; }
L_002F60B8:;
    a0 = (*(volatile s32 *) (u32) s2); Pes6Heap_Free(a0);
    (*(volatile u32 *) (u32) s2) = (u32) 0;
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    if (a0 >= 0) goto L_002F60D8;
    a0 = 0;
L_002F60D8:;
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) a0;
    a1 = 36; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s2) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    { s32 c_ = v1 <= 0; s5 = 0; if (c_) goto L_002F6198; }
    s4 = 0;
    s3 = 0;
L_002F60FC:;
    a0 = (*(volatile s32 *) (u32) s0);
    v1 = 2;
    a0 = (s32) ((u32) a0 + (u32) s4);
    a1 = (*(volatile s32 *) (u32) a0);
    a0 = (*(volatile s32 *) (u32) a1);
    if (a0 == v1) goto L_002F6158;
    v1 = 1;
    if (a0 == v1) goto L_002F6130;
    goto L_002F6180;
L_002F6130:;
    a5 = (*(volatile s32 *) (u32) (a1 + 4));
    v0 = (*(volatile s32 *) (u32) s2);
    a2 = 17;
    a4 = (*(volatile s8 *) (u32) (s1 + 4));
    a3 = (*(volatile s32 *) (u32) (s1 + 168));
    a1 = 3;
    a0 = (s32) ((u32) v0 + (u32) s3); func_002F1A00(a0, a1, a2, a3, a4, a5);
    goto L_002F6180;
L_002F6158:;
    a0 = (*(volatile s32 *) (u32) (a1 + 8)); v0 = func_001F08B0(a0);
    v1 = (*(volatile s32 *) (u32) s2);
    a1 = 3;
    a4 = (*(volatile s8 *) (u32) (s1 + 4));
    a2 = 17;
    a3 = (*(volatile s32 *) (u32) (s1 + 168));
    a5 = v0;
    a0 = (s32) ((u32) v1 + (u32) s3); func_002F1A00(a0, a1, a2, a3, a4, a5);
L_002F6180:;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    s5 = (s32) ((u32) s5 + 0x1U);
    s4 = (s32) ((u32) s4 + 0x4U);
    v1 = s5 < v1;
    { s32 c_ = v1 != 0; s3 = (s32) ((u32) s3 + 0x24U); if (c_) goto L_002F60FC; }
L_002F6198:;
    v1 = 1;
    (*(volatile u8 *) (u32) (s1 + 1)) = (u8) v1;
L_002F61A0:;
L_002F61A4:;
    return;
}
