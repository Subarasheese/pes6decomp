/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32, s32);
s32 func_00154070(s32);
void memcpy(s32, s32, s32);

void func_001EAF80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    v0 = 1;
    s4 = a0;
    s3 = a1;
    s2 = 0;
    if (s4 == v0) goto L_001EAFC4;
    v0 = 2;
    if (s4 == v0) { s2 = 256; goto L_001EAFC8; }
    s0 = (s32) ((u32) s2 << 2); goto L_001EAFCC;
L_001EAFC4:;
    s2 = 16;
L_001EAFC8:;
    s0 = (s32) ((u32) s2 << 2);
L_001EAFCC:;
    a0 = s0; v0 = func_00154070(a0);
    at = 0 < s2;
    s1 = v0;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_001EB098; }
    v0 = (s32) 0x3a0000U;
    a0 = s1;
    v0 = (s32) ((u32) v0 + 0xffff9390U);
    a4 = 255;
    a2 = 128;
    v1 = 2;
L_001EAFFC:;
    { s32 c_ = s4 == v1; a6 = a1 & 0xff; if (c_) goto L_001EB010; }
    a3 = a6 & 0xff; goto L_001EB048;
L_001EB010:;
    { s32 c_ = a6 >= 0; a5 = a6 & 0x1f; if (c_) goto L_001EB024; }
    if (a5 == 0) goto L_001EB024;
    a5 = (s32) ((u32) a5 + 0xffffffe0U);
L_001EB024:;
    { s32 c_ = a5 >= 0; a3 = (s32) a5 >> 3; if (c_) goto L_001EB034; }
    a3 = (s32) ((u32) a5 + 0x7U);
    a3 = (s32) a3 >> 3;
L_001EB034:;
    a3 = (s32) ((u32) a3 << 2);
    a3 = (s32) ((u32) v0 + (u32) a3);
    a3 = (*(volatile s32 *) (u32) a3);
    a3 = (s32) ((u32) a6 + (u32) a3);
    a3 = a3 & 0xff;
L_001EB048:;
    a3 = a3 & 0xff;
    a3 = (s32) ((u32) a3 << 2);
    a3 = (s32) ((u32) s3 + (u32) a3);
    a7 = (*(volatile u8 *) (u32) a3);
    a6 = (*(volatile u8 *) (u32) (a3 + 1));
    a5 = (*(volatile u8 *) (u32) (a3 + 2));
    a3 = (*(volatile u8 *) (u32) (a3 + 3));
    (*(volatile u8 *) (u32) a0) = (u8) a7;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) a6;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) a5;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a3;
    a3 = (*(volatile u8 *) (u32) (a0 + 3));
    if (a3 == a4) { (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a2; goto L_001EB088; }
    a3 = (s32) a3 >> 1;
    (*(volatile u8 *) (u32) (a0 + 3)) = (u8) a3;
L_001EB088:;
    a1 = (s32) ((u32) a1 + 0x1U);
    a3 = a1 < s2;
    { s32 c_ = a3 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_001EAFFC; }
L_001EB098:;
    a0 = s3;
    a2 = s0;
    a1 = s1; memcpy(a0, a1, a2);
    a0 = s1; Pes6Heap_Free(a0, a1);
    return;
}
