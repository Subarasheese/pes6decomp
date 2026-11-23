/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void Pes6Heap_Free(s32);
void func_001E0460(s32, s32, s32, s32);
void func_001E0490(s32, s32, s32, s32);
void func_001E45A0(s32, s32, s32, s32);
void func_001E45E0(s32, s32, s32, s32);

void func_001DDAE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, t8 = 0, t9 = 0;

    s1 = a0;
    { s32 c_ = s1 == 0; s0 = a1; if (c_) goto L_001DDD00; }
    if (s0 == 0) goto L_001DDD00;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -20976));
    if (v0 == 0) goto L_001DDB60;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -20972));
    if (v0 == 0) goto L_001DDB60;
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -20968)); Pes6Heap_Free(a0);
    v0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -20968)) = (u32) 0;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -20976)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + -20972)) = (u32) 0; func_001E0460(a0, a1, a2, a3);
    func_001E45A0(a0, a1, a2, a3);
L_001DDB60:;
    v1 = (s32) 0x530000U;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -20972)) = (u32) s0;
    a0 = s1;
    (*(volatile u32 *) (u32) (v1 + -20976)) = (u32) s1;
    a1 = 16; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0x530000U;
    at = 0 < s1;
    a0 = 0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (v1 + -20968)) = (u32) v0; if (c_) goto L_001DDCD8; }
    at = s1 < 9;
    { s32 c_ = at != 0; v0 = (s32) ((u32) s1 + 0xfffffff8U); if (c_) goto L_001DDCA8; }
    at = s1 < 0;
    a2 = 0;
    { s32 c_ = at != 0; v1 = 0; if (c_) goto L_001DDCF0; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = s1 < at;
    if (at == 0) goto L_001DDCF0;
    v1 = 1; goto L_001DDCF0;
    v1 = (s32) 0x80000000U;
L_001DDBCC:;
    v1 = s1 & v1;
    { s32 c_ = v1 != 0; a1 = 1; if (c_) goto L_001DDBE4; }
    if (v1 == 0) goto L_001DDBE4;
    a1 = 0;
L_001DDBE4:;
    if (a1 == 0) goto L_001DDBF0;
    a2 = 1;
L_001DDBF0:;
    if (a2 == 0) goto L_001DDCA8;
    v1 = 0;
    t4 = (s32) 0x530000U;
    a7 = (s32) 0x530000U;
    a6 = (s32) 0x530000U;
    a5 = (s32) 0x530000U;
    a4 = (s32) 0x530000U;
    a3 = (s32) 0x530000U;
    a2 = (s32) 0x530000U;
    a1 = (s32) 0x530000U;
L_001DDC1C:;
    t5 = (*(volatile s32 *) (u32) (t4 + -20968));
    s4 = (s32) ((u32) a0 + 0x1U);
    s3 = (s32) ((u32) a0 + 0x2U);
    s2 = (s32) ((u32) a0 + 0x3U);
    t9 = (s32) ((u32) a0 + 0x4U);
    t8 = (s32) ((u32) a0 + 0x5U);
    s0 = (s32) ((u32) a0 + 0x6U);
    t7 = (s32) ((u32) a0 + 0x7U);
    t5 = (s32) ((u32) t5 + (u32) v1);
    (*(volatile u32 *) (u32) (t5 + 4)) = (u32) a0;
    t6 = (*(volatile s32 *) (u32) (a7 + -20968));
    a0 = (s32) ((u32) a0 + 0x8U);
    t5 = a0 < v0;
    t6 = (s32) ((u32) t6 + (u32) v1);
    (*(volatile u32 *) (u32) (t6 + 20)) = (u32) s4;
    t6 = (*(volatile s32 *) (u32) (a6 + -20968));
    t6 = (s32) ((u32) t6 + (u32) v1);
    (*(volatile u32 *) (u32) (t6 + 36)) = (u32) s3;
    t6 = (*(volatile s32 *) (u32) (a5 + -20968));
    t6 = (s32) ((u32) t6 + (u32) v1);
    (*(volatile u32 *) (u32) (t6 + 52)) = (u32) s2;
    t6 = (*(volatile s32 *) (u32) (a4 + -20968));
    t6 = (s32) ((u32) t6 + (u32) v1);
    (*(volatile u32 *) (u32) (t6 + 68)) = (u32) t9;
    t6 = (*(volatile s32 *) (u32) (a3 + -20968));
    t6 = (s32) ((u32) t6 + (u32) v1);
    (*(volatile u32 *) (u32) (t6 + 84)) = (u32) t8;
    t6 = (*(volatile s32 *) (u32) (a2 + -20968));
    t6 = (s32) ((u32) t6 + (u32) v1);
    (*(volatile u32 *) (u32) (t6 + 100)) = (u32) s0;
    t6 = (*(volatile s32 *) (u32) (a1 + -20968));
    t6 = (s32) ((u32) t6 + (u32) v1);
    (*(volatile u32 *) (u32) (t6 + 116)) = (u32) t7;
    { s32 c_ = t5 != 0; v1 = (s32) ((u32) v1 + 0x80U); if (c_) goto L_001DDC1C; }
L_001DDCA8:;
    at = a0 < s1;
    if (at == 0) goto L_001DDCD8;
    a1 = (s32) ((u32) a0 << 4);
    v0 = (s32) 0x530000U;
L_001DDCBC:;
    v1 = (*(volatile s32 *) (u32) (v0 + -20968));
    v1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) a0;
    a0 = (s32) ((u32) a0 + 0x1U);
    v1 = a0 < s1;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x10U); if (c_) goto L_001DDCBC; }
L_001DDCD8:;
    a0 = s1; func_001E0490(a0, a1, a2, a3);
    a0 = s1; func_001E45E0(a0, a1, a2, a3);
    goto L_001DDD04;
L_001DDCF0:;
    if (v1 == 0) goto L_001DDBF0;
    v1 = (s32) 0x80000000U; goto L_001DDBCC;
L_001DDD00:;
L_001DDD04:;
    return;
}
