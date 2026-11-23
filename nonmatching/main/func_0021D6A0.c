/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
s32 func_00154070(s32);
s32 func_0021DA80(s32, s32, s32, s32, s32);

void func_0021D6A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    s4 = a2;
    s3 = a0;
    s2 = a1;
    a0 = (s32) ((u32) s2 << 2);
    v0 = func_00154070(a0);
    s1 = v0;
    a0 = 8; v0 = func_00154070(a0);
    { s32 c_ = s3 == 0; s0 = v0; if (c_) goto L_0021D9F0; }
L_0021D6E4:;
    v0 = 4;
L_0021D6E8:;
    at = 0 < s2;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
    a2 = 0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v0; if (c_) goto L_0021DA24; }
    at = s2 < 9;
    { s32 c_ = at != 0; a0 = (s32) ((u32) s2 + 0xfffffff8U); if (c_) goto L_0021D7C0; }
    at = s2 < 0;
    a1 = 0;
    { s32 c_ = at != 0; v0 = 0; if (c_) goto L_0021DA14; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = s2 < at;
    if (at == 0) goto L_0021DA14;
    v0 = 1; goto L_0021DA14;
    v0 = (s32) 0x80000000U;
L_0021D738:;
    v0 = s2 & v0;
    { s32 c_ = v0 != 0; v1 = 1; if (c_) goto L_0021D750; }
    if (v0 == 0) goto L_0021D750;
    v1 = 0;
L_0021D750:;
    if (v1 == 0) goto L_0021D75C;
    a1 = 1;
L_0021D75C:;
    if (a1 == 0) goto L_0021D7C0;
    a1 = s1;
    v1 = -1;
L_0021D76C:;
    (*(volatile u16 *) (u32) a1) = (u16) v1;
    a2 = (s32) ((u32) a2 + 0x8U);
    (*(volatile u16 *) (u32) (a1 + 2)) = (u16) v1;
    v0 = a2 < a0;
    (*(volatile u16 *) (u32) (a1 + 4)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 6)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 8)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 10)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 12)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 14)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 16)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 18)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 20)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 22)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 24)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 26)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 28)) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 30)) = (u16) v1;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x20U); if (c_) goto L_0021D76C; }
L_0021D7C0:;
    at = a2 < s2;
    if (at == 0) goto L_0021DA24;
    v0 = (s32) ((u32) a2 << 2);
    v1 = -1;
    a0 = (s32) ((u32) s1 + (u32) v0);
L_0021D7D8:;
    (*(volatile u16 *) (u32) a0) = (u16) v1;
    a2 = (s32) ((u32) a2 + 0x1U);
    (*(volatile u16 *) (u32) (a0 + 2)) = (u16) v1;
    v0 = a2 < s2;
    a0 = (s32) ((u32) a0 + 0x4U);
    if (v0 != 0) goto L_0021D7D8;
    v0 = 2; goto L_0021DA28;
L_0021D7FC:;
    v0 = 1;
L_0021D800:;
    a0 = (s32) ((u32) sp + 0x68U);
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) v0;
    a1 = 0;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) v0;
    a2 = s1;
    a3 = s2;
    a4 = 2; v0 = func_0021DA80(a0, a1, a2, a3, a4);
    at = 0 < s2; goto L_0021D88C;
L_0021D828:;
    v0 = 1;
    a0 = (s32) ((u32) sp + 0x60U);
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) v0;
    a1 = 0;
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) v0;
    a2 = s1;
    a3 = s2;
    a4 = 2; v0 = func_0021DA80(a0, a1, a2, a3, a4);
    v1 = (s32) ((u32) v0 << 2);
    a3 = (s32) ((u32) s2 - (u32) v0);
    a2 = (s32) ((u32) s1 + (u32) v1);
    a0 = s0;
    a1 = 1;
    a4 = 2; v0 = func_0021DA80(a0, a1, a2, a3, a4);
    goto L_0021D888;
L_0021D870:;
    a0 = s0;
    a1 = 0;
    a2 = s1;
    a3 = s2;
    a4 = 2; v0 = func_0021DA80(a0, a1, a2, a3, a4);
L_0021D888:;
    at = 0 < s2;
L_0021D88C:;
    { s32 c_ = at == 0; a1 = 0; if (c_) goto L_0021D9D8; }
    at = s2 < 9;
    { s32 c_ = at != 0; v0 = (s32) ((u32) s2 + 0xfffffff8U); if (c_) goto L_0021D998; }
    at = s2 < 0;
    a2 = 0;
    { s32 c_ = at != 0; v1 = 0; if (c_) goto L_0021DA4C; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = s2 < at;
    if (at == 0) goto L_0021DA4C;
    v1 = 1; goto L_0021DA4C;
    v1 = (s32) 0x80000000U;
L_0021D8D0:;
    v1 = s2 & v1;
    { s32 c_ = v1 != 0; a0 = 1; if (c_) goto L_0021D8E8; }
    if (v1 == 0) goto L_0021D8E8;
    a0 = 0;
L_0021D8E8:;
    if (a0 == 0) goto L_0021D8F4;
    a2 = 1;
L_0021D8F4:;
    if (a2 == 0) goto L_0021D998;
    a0 = s1;
    v1 = s3;
L_0021D904:;
    a3 = (*(volatile s16 *) (u32) a0);
    a1 = (s32) ((u32) a1 + 0x8U);
    a2 = a1 < v0;
    (*(volatile u16 *) (u32) v1) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 2));
    (*(volatile u16 *) (u32) (v1 + 2)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 4));
    (*(volatile u16 *) (u32) (v1 + 16)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 6));
    (*(volatile u16 *) (u32) (v1 + 18)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 8));
    (*(volatile u16 *) (u32) (v1 + 32)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 10));
    (*(volatile u16 *) (u32) (v1 + 34)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 12));
    (*(volatile u16 *) (u32) (v1 + 48)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 14));
    (*(volatile u16 *) (u32) (v1 + 50)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 16));
    (*(volatile u16 *) (u32) (v1 + 64)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 18));
    (*(volatile u16 *) (u32) (v1 + 66)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 20));
    (*(volatile u16 *) (u32) (v1 + 80)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 22));
    (*(volatile u16 *) (u32) (v1 + 82)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 24));
    (*(volatile u16 *) (u32) (v1 + 96)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 26));
    (*(volatile u16 *) (u32) (v1 + 98)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 28));
    (*(volatile u16 *) (u32) (v1 + 112)) = (u16) a3;
    a3 = (*(volatile s16 *) (u32) (a0 + 30));
    (*(volatile u16 *) (u32) (v1 + 114)) = (u16) a3;
    a0 = (s32) ((u32) a0 + 0x20U);
    { s32 c_ = a2 != 0; v1 = (s32) ((u32) v1 + 0x80U); if (c_) goto L_0021D904; }
L_0021D998:;
    at = a1 < s2;
    if (at == 0) goto L_0021D9D8;
    v1 = (s32) ((u32) a1 << 2);
    v0 = (s32) ((u32) a1 << 4);
    a0 = (s32) ((u32) s3 + (u32) v0);
    a2 = (s32) ((u32) s1 + (u32) v1);
L_0021D9B4:;
    v1 = (*(volatile s16 *) (u32) a2);
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < s2;
    (*(volatile u16 *) (u32) a0) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a2 + 2));
    (*(volatile u16 *) (u32) (a0 + 2)) = (u16) v1;
    a2 = (s32) ((u32) a2 + 0x4U);
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x10U); if (c_) goto L_0021D9B4; }
L_0021D9D8:;
    a0 = s0; Pes6Heap_Free(a0);
    a0 = s1; Pes6Heap_Free(a0);
    goto L_0021DA60;
L_0021D9F0:;
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -32252));
    at = 0 < v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_0021D6E4; }
    v0 = (s32) 0x540000U;
    s3 = (*(volatile s32 *) (u32) (v0 + -32256));
    v0 = 4; goto L_0021D6E8;
L_0021DA14:;
    if (v0 == 0) goto L_0021D75C;
    v0 = (s32) 0x80000000U; goto L_0021D738;
L_0021DA24:;
    v0 = 2;
L_0021DA28:;
    if (s4 == v0) goto L_0021D870;
    v0 = 1;
    if (s4 == v0) goto L_0021D828;
    if (s4 == 0) goto L_0021D7FC;
    v0 = 1; goto L_0021D800;
L_0021DA4C:;
    if (v1 == 0) goto L_0021D8F4;
    v1 = (s32) 0x80000000U; goto L_0021D8D0;
L_0021DA60:;
    return;
}
