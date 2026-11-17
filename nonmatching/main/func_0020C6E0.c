/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 Pes6Heap_Free(s64, s64);
s64 func_001DBB70(s64);
s64 func_001DBB80(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_001DBD70(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_001DC980(s64, s64, s64, s64, s64, s64, s64, s64);

s64 func_0020C6E0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s64 frame[28];
    s64 sp = (s32) (u32) frame;

    s5 = a2;
    s2 = a6;
    s1 = a4;
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) a0;
    s0 = a3;
    (*(volatile u32 *) (u32) (sp + 204)) = (u32) a1;
    a0 = 1;
    (*(volatile u8 *) (u32) (sp + 203)) = (u8) a5;
    a1 = 8; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    fp = v0;
    v0 = (*(volatile s8 *) (u32) (sp + 203));
    v0 = v0;
    { s32 c_ = fp == 0; s6 = v0 < 0; if (c_) goto L_0020C900; }
    v0 = (*(volatile s32 *) (u32) (sp + 204));
    a0 = 1;
    a1 = (s32) ((u32) v0 << 2); v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) fp) = (u32) v0; if (c_) goto L_0020C8EC; }
    v0 = (*(volatile s32 *) (u32) (sp + 204));
    { s32 c_ = v0 <= 0; (*(volatile u32 *) (u32) (sp + 176)) = (u32) 0; if (c_) goto L_0020C8E0; }
    s1 = s1 & 0xffff;
    s0 = s0 & 0xffff;
    s7 = s2 & 0xffff;
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) 0;
    v0 = (*(volatile s32 *) (u32) (sp + 208));
L_0020C780:;
    s2 = (*(volatile s32 *) (u32) v0);
    if (s2 == 0) goto L_0020C7A0;
    if (s2 == 0) goto L_0020C7A8;
    v0 = (*(volatile s8 *) (u32) s2);
    if (v0 != 0) goto L_0020C7A8;
L_0020C7A0:;
    s2 = (s32) 0x3d0000U;
    s2 = (s32) ((u32) s2 + 0x41e8U);
L_0020C7A8:;
    v0 = (*(volatile s8 *) (u32) (sp + 203));
    s3 = (s64) ((u64) s6 << 56);
    s3 = s3 >> 56;
    { s32 c_ = s6 == 0; s4 = v0; if (c_) goto L_0020C838; }
L_0020C7C0:;
    a0 = s4 & 0xff; v0 = func_001DBB70(a0);
    a0 = s5;
    a1 = s0;
    a2 = s1;
    a3 = s2; v0 = func_001DBD70(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = v0;
    v0 = (*(volatile u16 *) (u32) (v0 + 20));
    at = s7 < v0;
    if (at != 0) goto L_0020C7F8;
    s3 = 0; goto L_0020C808;
L_0020C7F8:;
    v0 = (s32) ((u32) s4 + 0xffffffffU);
    s4 = (s64) ((u64) v0 << 56);
    s4 = s4 >> 56;
L_0020C808:;
    v0 = func_001DC980(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0; v0 = func_001DBB70(a0);
    v0 = (s64) ((u64) s4 << 56);
    v0 = v0 >> 56;
    at = v0 < -10;
    if (at == 0) goto L_0020C830;
    s3 = 0;
L_0020C830:;
    if (s3 != 0) goto L_0020C7C0;
L_0020C838:;
    if (s6 == 0) goto L_0020C880;
    a0 = s4 & 0xff; v0 = func_001DBB70(a0);
    a3 = s2;
    a0 = s5;
    a1 = s0;
    a2 = s1;
    a4 = 20; v0 = func_001DBB80(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (*(volatile s32 *) (u32) fp);
    a0 = 0;
    v1 = (*(volatile s32 *) (u32) (sp + 160));
    v1 = (s32) ((u32) a1 + (u32) v1);
    (*(volatile u32 *) (u32) v1) = (u32) v0; v0 = func_001DBB70(a0);
    goto L_0020C8A8;
L_0020C880:;
    a3 = s2;
    a0 = s5;
    a1 = s0;
    a2 = s1;
    a4 = 20; v0 = func_001DBB80(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) fp);
    v1 = (*(volatile s32 *) (u32) (sp + 160));
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
L_0020C8A8:;
    v0 = (*(volatile s32 *) (u32) (sp + 208));
    v0 = (s32) ((u32) v0 + 0x4U);
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (sp + 160));
    v0 = (s32) ((u32) v0 + 0x4U);
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (sp + 176));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0;
    v1 = v0;
    v0 = (*(volatile s32 *) (u32) (sp + 204));
    v0 = v1 < v0;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (sp + 208)); goto L_0020C780; }
L_0020C8E0:;
    v0 = (*(volatile s32 *) (u32) (sp + 204));
    (*(volatile u32 *) (u32) (fp + 4)) = (u32) v0; goto L_0020C900;
L_0020C8EC:;
    if (fp == 0) { fp = 0; goto L_0020C900; }
    a0 = fp; v0 = Pes6Heap_Free(a0, a1);
    fp = 0;
L_0020C900:;
    v0 = fp;
    return v0;
}
