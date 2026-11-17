/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32, s32);
s32 func_0014AAB0(s32, s32, s32, s32);
s32 func_00153FE0(s32, s32);
s32 func_00154070(s32);
void func_001CDAD0(s32);
void memcpy(s32, s32, s32);

void func_001A28D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    s1 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 68));
    s2 = (s32) ((u32) s0 + 0x20U);
    a0 = s2; func_001CDAD0(a0);
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = v0 & 0x1;
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s1 + 4)); goto L_001A29B0; }
    v0 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (*(volatile u16 *) (u32) (v0 + -168));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    s3 = (*(volatile s32 *) (u32) v0);
    if (s3 != 0) { v0 = (*(volatile s32 *) (u32) (s3 + 4)); goto L_001A293C; }
    s3 = (*(volatile s32 *) (u32) v1);
    v0 = (*(volatile s32 *) (u32) (s3 + 4));
L_001A293C:;
    s5 = (s32) ((u32) v0 + 0x20U);
    a0 = s5; v0 = func_00154070(a0);
    s4 = v0;
    a1 = s3;
    a2 = s5;
    a0 = s4; memcpy(a0, a1, a2);
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + 916)) = (u32) s4;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 == 0) goto L_001A29AC;
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s16 *) (u32) (v0 + -80));
    a1 = (*(volatile s32 *) (u32) (s4 + 8)); v0 = func_00153FE0(a0, a1);
    s3 = v0;
    a0 = s4;
    a1 = s3; v0 = func_0014AAB0(a0, a1, a2, a3);
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 916));
    (*(volatile u32 *) (u32) (v1 + -112)) = (u32) s3; Pes6Heap_Free(a0, a1);
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + 916)) = (u32) 0;
L_001A29AC:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
L_001A29B0:;
    v0 = v0 & 0x2;
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s1 + 4)); goto L_001A2A58; }
    v0 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (*(volatile u16 *) (u32) (v0 + -164));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    s3 = (*(volatile s32 *) (u32) v0);
    if (s3 != 0) { v0 = (*(volatile s32 *) (u32) (s3 + 4)); goto L_001A29E4; }
    s3 = (*(volatile s32 *) (u32) v1);
    v0 = (*(volatile s32 *) (u32) (s3 + 4));
L_001A29E4:;
    s5 = (s32) ((u32) v0 + 0x20U);
    a0 = s5; v0 = func_00154070(a0);
    s4 = v0;
    a1 = s3;
    a2 = s5;
    a0 = s4; memcpy(a0, a1, a2);
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + 920)) = (u32) s4;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 == 0) goto L_001A2A54;
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s16 *) (u32) (v0 + -80));
    a1 = (*(volatile s32 *) (u32) (s4 + 8)); v0 = func_00153FE0(a0, a1);
    s3 = v0;
    a0 = s4;
    a1 = s3; v0 = func_0014AAB0(a0, a1, a2, a3);
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 920));
    (*(volatile u32 *) (u32) (v1 + -108)) = (u32) s3; Pes6Heap_Free(a0, a1);
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + 920)) = (u32) 0;
L_001A2A54:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
L_001A2A58:;
    v0 = v0 & 0x4;
    if (v0 == 0) { a0 = s0; goto L_001A2B00; }
    v0 = (s32) 0x520000U;
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (*(volatile u16 *) (u32) (v0 + -160));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    s3 = (*(volatile s32 *) (u32) v0);
    if (s3 != 0) { v0 = (*(volatile s32 *) (u32) (s3 + 4)); goto L_001A2A8C; }
    s3 = (*(volatile s32 *) (u32) v1);
    v0 = (*(volatile s32 *) (u32) (s3 + 4));
L_001A2A8C:;
    s4 = (s32) ((u32) v0 + 0x20U);
    a0 = s4; v0 = func_00154070(a0);
    s2 = v0;
    a1 = s3;
    a2 = s4;
    a0 = s2; memcpy(a0, a1, a2);
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + 924)) = (u32) s2;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 == 0) goto L_001A2AFC;
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s16 *) (u32) (v0 + -80));
    a1 = (*(volatile s32 *) (u32) (s2 + 8)); v0 = func_00153FE0(a0, a1);
    s1 = v0;
    a0 = s2;
    a1 = s1; v0 = func_0014AAB0(a0, a1, a2, a3);
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 924));
    (*(volatile u32 *) (u32) (v1 + -104)) = (u32) s1; Pes6Heap_Free(a0, a1);
    v0 = (s32) 0x520000U;
    (*(volatile u32 *) (u32) (v0 + 924)) = (u32) 0;
L_001A2AFC:;
    a0 = s0;
L_001A2B00:;
    Pes6Heap_Free(a0, a1);
    return;
}
