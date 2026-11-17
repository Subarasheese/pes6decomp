/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32, s32);
s32 func_001454C0(s32);
s32 func_0014B220(s32, s32, s32, s32, s32, s32, s32);
s32 func_0014B5A0(s32, s32, s32, s32, s32, s32, s32);
s32 func_0014BAA0(s32, s32, s32, s32, s32, s32, s32);
s32 func_0014BCD0(s32, s32, s32, s32, s32, s32, s32);
s32 func_0014BF80(s32, s32, s32, s32, s32, s32, s32);
s32 func_0014C0A0(s32, s32, s32, s32, s32, s32, s32);
s32 func_0014C2A0(s32, s32, s32, s32, s32, s32, s32);
s32 func_0014C500(s32, s32, s32, s32, s32, s32, s32);
s32 func_0014C650(s32, s32, s32, s32, s32, s32, s32);
s32 func_0014C8B0(s32, s32, s32, s32, s32, s32, s32);
s32 func_0014CDE0(s32, s32, s32, s32, s32, s32, s32);
s32 func_0014CFD0(s32, s32, s32, s32, s32, s32, s32);
void func_0014D4F0(s32, s32, s32, s32, s32, s32, s32);

void func_0014AFA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a1;
    s2 = a2;
    v0 = func_001454C0(a0);
    { s32 c_ = v0 == 0; s1 = v0; if (c_) goto L_0014B1F0; }
    a0 = s3; v0 = func_001454C0(a0);
    if (v0 != 0) { v0 = 0; goto L_0014B200; }
    a2 = 0;
    at = a2 < 5;
    if (at == 0) goto L_0014B020;
    a0 = (*(volatile u8 *) (u32) (s1 + 25));
    v1 = (s32) 0x370000U;
    v1 = (s32) ((u32) v1 + 0x6a80U);
L_0014AFF8:;
    v0 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    if (a0 != v0) { a2 = (s32) ((u32) a2 + 0x1U); goto L_0014B014; }
    goto L_0014B024;
L_0014B014:;
    v0 = a2 < 5;
    if (v0 != 0) goto L_0014AFF8;
L_0014B020:;
    a2 = 0;
L_0014B024:;
    if (s2 == a2) { a0 = s1; goto L_0014B1F8; }
    a1 = 1;
    if (a2 == a1) { v0 = 2; goto L_0014B190; }
    a0 = 2;
    if (a2 == a0) goto L_0014B108;
    v1 = 3;
    if (a2 == v1) goto L_0014B0B4;
    v0 = 4;
    if (a2 == v0) goto L_0014B064;
    v0 = s0; goto L_0014B1E8;
L_0014B064:;
    if (s2 == a1) { a0 = s1; goto L_0014B0A4; }
    if (s2 == a0) { a0 = s1; goto L_0014B094; }
    if (s2 == v1) { a0 = s1; goto L_0014B084; }
    goto L_0014B1E4;
L_0014B084:;
    a1 = s3; v0 = func_0014C500(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0; goto L_0014B1E4;
L_0014B094:;
    a1 = s3; v0 = func_0014C2A0(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0; goto L_0014B1E4;
L_0014B0A4:;
    a1 = s3; v0 = func_0014C0A0(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0; goto L_0014B1E4;
L_0014B0B4:;
    if (s2 == a1) { a0 = s1; goto L_0014B0F8; }
    if (s2 == a0) { a0 = s1; goto L_0014B0E8; }
    v0 = 4;
    if (s2 == v0) { a0 = s1; goto L_0014B0D8; }
    goto L_0014B1E4;
L_0014B0D8:;
    a1 = s3; v0 = func_0014BF80(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0; goto L_0014B1E4;
L_0014B0E8:;
    a1 = s3; v0 = func_0014BCD0(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0; goto L_0014B1E4;
L_0014B0F8:;
    a1 = s3; v0 = func_0014BAA0(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0; goto L_0014B1E4;
L_0014B108:;
    if (s2 == a1) { a0 = s1; goto L_0014B150; }
    v0 = 3;
    if (s2 == v0) { a0 = s1; goto L_0014B140; }
    v0 = 4;
    if (s2 == v0) { a0 = s1; goto L_0014B130; }
    goto L_0014B1E4;
L_0014B130:;
    a1 = s3; v0 = func_0014CFD0(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0; goto L_0014B1E4;
L_0014B140:;
    a1 = s3; v0 = func_0014CDE0(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0; goto L_0014B1E4;
L_0014B150:;
    a1 = s3; v0 = func_0014B5A0(a0, a1, a2, a3, a4, a5, a6);
    { s32 c_ = v0 != 0; s0 = v0; if (c_) goto L_0014B1E4; }
    a0 = s1;
    a1 = -1; v0 = func_0014CFD0(a0, a1, a2, a3, a4, a5, a6);
    s1 = v0;
    a1 = s3;
    a0 = s1; v0 = func_0014C0A0(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0;
    a0 = s1; Pes6Heap_Free(a0, a1);
    goto L_0014B1E4;
L_0014B190:;
    if (s2 == v0) { a0 = s1; goto L_0014B1D8; }
    v0 = 3;
    if (s2 == v0) { a0 = s1; goto L_0014B1C8; }
    v0 = 4;
    if (s2 == v0) { a0 = s1; goto L_0014B1B8; }
    goto L_0014B1E4;
L_0014B1B8:;
    a1 = s3; v0 = func_0014C8B0(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0; goto L_0014B1E4;
L_0014B1C8:;
    a1 = s3; v0 = func_0014C650(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0; goto L_0014B1E4;
L_0014B1D8:;
    a1 = s3; v0 = func_0014B220(a0, a1, a2, a3, a4, a5, a6);
    s0 = v0;
L_0014B1E4:;
    v0 = s0;
L_0014B1E8:;
    goto L_0014B204;
L_0014B1F0:;
    v0 = 0; goto L_0014B200;
L_0014B1F8:;
    a1 = s3; func_0014D4F0(a0, a1, a2, a3, a4, a5, a6);
L_0014B200:;
L_0014B204:;
    return;
}
