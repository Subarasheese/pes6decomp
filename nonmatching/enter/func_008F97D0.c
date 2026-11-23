/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288670(s32, s32);
s32 func_0030D990(s32);

s32 func_008F97D0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s2 = 0;
    s0 = (s32) ((u32) sp + 0x68U);
L_008F97F8:;
    if (s2 == 0) { v0 = 1; goto L_008F9804; }
    v0 = 12;
L_008F9804:;
    if (v0 == 0) { a0 = 1; goto L_008F9818; }
    if (s2 == 0) { a0 = 1; goto L_008F9818; }
    a0 = 12;
L_008F9818:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) v0 << 6);
    s3 = 0;
    v0 = 1;
    s1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) s0) = (u32) v0;
L_008F9840:;
    a0 = (*(volatile u8 *) (u32) s1); v0 = func_0030D990(a0);
    v1 = 3;
    if (v0 != v1) goto L_008F98C8;
    a2 = (*(volatile u8 *) (u32) (s1 + 18));
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    a0 = (s32) ((u32) a0 + 0x2980U);
    a1 = 50;
    v0 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) a2 << 3);
    a2 = (s32) ((u32) v0 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 << 8);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 111));
    a0 = v0 & 0x7f; v0 = func_00288670(a0, a1);
    at = v0 < 91;
    if (at != 0) goto L_008F98C0;
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = v0 & 0x1;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_008F98C8;
L_008F98C0:;
    (*(volatile u32 *) (u32) s0) = (u32) 0;
L_008F98C8:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 11;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_008F9840; }
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008F97F8; }
    a0 = (*(volatile s32 *) (u32) (sp + 104));
    v0 = 2;
    v1 = (*(volatile s32 *) (u32) (sp + 108));
    v1 = (s32) ((u32) a0 + (u32) v1);
    if (v1 == v0) { v0 = 2; goto L_008F9934; }
    v0 = 1;
    if (v1 == v0) { a0 = s4 & 0xff; goto L_008F9914; }
    v0 = 0; goto L_008F9934;
L_008F9914:;
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) sp);
    v1 = (*(volatile s32 *) (u32) (v1 + 104));
    if (a0 != v1) goto L_008F9930;
    goto L_008F9934;
L_008F9930:;
    v0 = 2;
L_008F9934:;
    return v0;
}
