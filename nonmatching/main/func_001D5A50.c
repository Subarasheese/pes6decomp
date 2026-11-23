/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
void func_001D7F10(s32, s32, s32, s32);

void func_001D5A50(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    a1 = (*(volatile s32 *) (u32) (gp + -23092));
    if (a1 == 0) goto L_001D5BD0;
    s1 = a1;
L_001D5A7C:;
    v1 = (*(volatile s32 *) (u32) (s1 + 8));
    if (v1 != a0) goto L_001D5A90;
    goto L_001D5AA0;
L_001D5A90:;
    s1 = (*(volatile s32 *) (u32) (s1 + 4));
    if (s1 != 0) goto L_001D5A7C;
    s1 = 0;
L_001D5AA0:;
    if (s1 == 0) goto L_001D5C20;
    if (a1 == s1) goto L_001D5BD8;
    v0 = (*(volatile s32 *) (u32) (gp + -23088));
    if (v0 == s1) goto L_001D5BEC;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = (*(volatile s32 *) (u32) s1);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) v1;
L_001D5AD4:;
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
    at = 0 < v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_001D5BB8; }
    s0 = 0;
L_001D5AE8:;
    v0 = (*(volatile s32 *) (u32) (s1 + 16));
    v0 = (s32) ((u32) v0 + (u32) s0);
    s2 = (*(volatile s32 *) (u32) v0);
    if (s2 == 0) goto L_001D5B30;
    v0 = (*(volatile s32 *) (u32) (s2 + 28));
    if (v0 == 0) goto L_001D5B30;
    a0 = (*(volatile s32 *) (u32) (s2 + 32));
L_001D5B10:;
    s4 = (*(volatile s32 *) (u32) (a0 + 12)); func_001D7F10(a0, a1, a2, a3);
    a0 = s4;
    if (s4 != 0) goto L_001D5B10;
L_001D5B30:;
    v0 = (*(volatile s32 *) (u32) (gp + -23084));
    if (v0 == s2) goto L_001D5BFC;
    v0 = (*(volatile s32 *) (u32) (gp + -23080));
    if (v0 == s2) goto L_001D5C10;
    v1 = (*(volatile s32 *) (u32) s2);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (*(volatile s32 *) (u32) s2);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) v1;
L_001D5B60:;
    a0 = (*(volatile s32 *) (u32) (s2 + 12)); Pes6Heap_Free(a0);
    a0 = (*(volatile s32 *) (u32) (s2 + 20));
    if (a0 == 0) goto L_001D5B80;
    Pes6Heap_Free(a0);
L_001D5B80:;
    a0 = (*(volatile s32 *) (u32) (s2 + 24));
    if (a0 == 0) goto L_001D5B98;
    Pes6Heap_Free(a0);
L_001D5B98:;
    a0 = s2; Pes6Heap_Free(a0);
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001D5AE8; }
L_001D5BB8:;
    a0 = (*(volatile s32 *) (u32) (s1 + 16)); Pes6Heap_Free(a0);
    a0 = s1; Pes6Heap_Free(a0);
    goto L_001D5C20;
L_001D5BD0:;
    s1 = 0; goto L_001D5AA0;
L_001D5BD8:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (gp + -23092)) = (u32) v0; if (c_) goto L_001D5AD4; }
    (*(volatile u32 *) (u32) (gp + -23088)) = (u32) 0; goto L_001D5AD4;
L_001D5BEC:;
    v0 = (*(volatile s32 *) (u32) s1);
    (*(volatile u32 *) (u32) (gp + -23088)) = (u32) v0;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0; goto L_001D5AD4;
L_001D5BFC:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    { s32 c_ = v0 != 0; (*(volatile u32 *) (u32) (gp + -23084)) = (u32) v0; if (c_) goto L_001D5B60; }
    (*(volatile u32 *) (u32) (gp + -23080)) = (u32) 0; goto L_001D5B60;
L_001D5C10:;
    v0 = (*(volatile s32 *) (u32) s2);
    (*(volatile u32 *) (u32) (gp + -23080)) = (u32) v0;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0; goto L_001D5B60;
L_001D5C20:;
    return;
}
