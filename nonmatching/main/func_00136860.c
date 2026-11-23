/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 sceSdRemote(s64, s64, s64, s64, s64, s64, s64, s64);

void func_00136860(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v1 = 3;
    s0 = a0;
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 == v1) goto L_00136A6C;
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    s1 = 0;
L_0013688C:;
    a2 = s1 | 0x980;
    a0 = 1;
    a1 = 0x8010;
    a3 = 0; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    a2 = s1 | 0xa80;
    a0 = 1;
    a1 = 0x8010;
    a3 = 0; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 2;
    if (v0 != 0) goto L_0013688C;
    a0 = 1;
    a1 = 0x8010;
    a2 = 3968;
    a3 = 0; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 1;
    a1 = 0x8010;
    a2 = 4224;
    a3 = 0; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x10000000U;
    a0 = 1;
    s1 = (*(volatile u16 *) (u32) v0);
    a1 = 0x80e0;
    a2 = 0;
    a3 = 2;
    a4 = 0;
    a5 = 0; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 < 0) { s1 = s1 & 0xffff; goto L_001369D8; }
L_00136918:;
    if (v0 < 0) { (*(volatile u32 *) (u32) (s0 + 80)) = (u32) 0; goto L_00136934; }
    v1 = (s64) ((u64) v0 << 40);
    v0 = (*(volatile s32 *) (u32) (s0 + 68));
    v1 = (s64) ((u64) v1 >> 40);
    v0 = (s32) ((u32) v1 - (u32) v0);
    (*(volatile u32 *) (u32) (s0 + 80)) = (u32) v0;
L_00136934:;
    v0 = (s32) 0x10000000U;
    a4 = (*(volatile s32 *) (u32) (s0 + 88));
    s1 = (*(volatile u16 *) (u32) v0);
    a0 = 1;
    a1 = 0x80d0;
    a2 = 0;
    a3 = 0;
    a5 = 16384;
    a6 = 2048; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 < 0) { s1 = s1 & 0xffff; goto L_00136A20; }
L_00136964:;
    v0 = (s32) 0x10000000U;
L_00136968:;
    a0 = 1;
    s0 = (*(volatile u16 *) (u32) v0);
    a1 = 0x80f0;
    a2 = 0;
    a3 = 0; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 == v1) goto L_001369D0;
    s0 = s0 & 0xffff;
L_00136990:;
    v1 = (s32) 0x10000000U;
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 - (u32) s0);
    v1 = v1 & 0xffff;
    at = v1 < 1051;
    if (at == 0) goto L_001369D0;
    a0 = 1;
    a1 = 0x80f0;
    a2 = 0;
    a3 = 0; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_00136990;
L_001369D0:;
    goto L_00136A70;
L_001369D8:;
    v1 = (s32) 0x10000000U;
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 - (u32) s1);
    v1 = v1 & 0xffff;
    at = v1 < 1051;
    if (at == 0) goto L_00136918;
    a0 = 1;
    a1 = 0x80e0;
    a2 = 0;
    a3 = 2;
    a4 = 0;
    a5 = 0; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 < 0) goto L_001369D8;
    goto L_00136918;
L_00136A20:;
    v0 = (s32) 0x10000000U;
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 - (u32) s1);
    v0 = v0 & 0xffff;
    at = v0 < 1051;
    if (at == 0) goto L_00136964;
    a4 = (*(volatile s32 *) (u32) (s0 + 88));
    a0 = 1;
    a1 = 0x80d0;
    a2 = 0;
    a3 = 0;
    a5 = 16384;
    a6 = 2048; v0 = sceSdRemote(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 < 0) goto L_00136A20;
    v0 = (s32) 0x10000000U; goto L_00136968;
L_00136A6C:;
L_00136A70:;
    return;
}
