/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Free(s32, s32);
s32 func_0014AAB0(s32, s32, s32, s32);
s32 func_00153FE0(s32, s32);
s32 func_001CDAD0(s32);

s32 func_001A30D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    a1 = (s32) 0x520000U;
    a1 = (s32) ((u32) a1 + 0x378U);
    s1 = (*(s32 *) (u32) (a0 + 4));
    v1 = (*(s32 *) (u32) (a0 + 68));
    a2 = (s32) ((u32) s1 << 2);
    s0 = (s32) ((u32) a1 + (u32) a2);
    (*(u32 *) (u32) s0) = (u32) v1;
    v1 = (*(s32 *) (u32) a0);
    if (v1 == 0) { ; goto L_001A31B0; }
    s3 = (*(s32 *) (u32) s0);
    v0 = (s32) 0x520000U;
    a1 = (*(s32 *) (u32) (s3 + 8));
    a0 = (*(s16 *) (u32) (v0 + -80)); v0 = func_00153FE0(a0, a1);
    s2 = v0;
    a0 = s3;
    a1 = s2; v0 = func_0014AAB0(a0, a1, a2, a3);
    a0 = s2; v0 = func_001CDAD0(a0);
    v0 = 6;
    if (s1 == v0) goto L_001A3194;
    v0 = 5;
    if (s1 == v0) goto L_001A3188;
    v0 = 4;
    if (s1 == v0) goto L_001A317C;
    if (s1 == 0) goto L_001A3170;
    a0 = (*(s32 *) (u32) s0); goto L_001A31A0;
L_001A3170:;
    v0 = (s32) 0x520000U;
    (*(u32 *) (u32) (v0 + -156)) = (u32) s2; goto L_001A319C;
L_001A317C:;
    v0 = (s32) 0x520000U;
    (*(u32 *) (u32) (v0 + -100)) = (u32) s2; goto L_001A319C;
L_001A3188:;
    v0 = (s32) 0x520000U;
    (*(u32 *) (u32) (v0 + -96)) = (u32) s2; goto L_001A319C;
L_001A3194:;
    v0 = (s32) 0x520000U;
    (*(u32 *) (u32) (v0 + -92)) = (u32) s2;
L_001A319C:;
    a0 = (*(s32 *) (u32) s0);
L_001A31A0:;
    v0 = Pes6Heap_Free(a0, a1);
    (*(u32 *) (u32) s0) = (u32) 0;
L_001A31B0:;
    return v0;
}
