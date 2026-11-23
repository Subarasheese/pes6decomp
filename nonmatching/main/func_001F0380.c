/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);

void func_001F0380(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v1 = (s32) 0x530000U;
    s2 = (*(volatile s32 *) (u32) (v1 + -19936));
    if (s2 == 0) goto L_001F0488;
L_001F03A8:;
    v1 = (*(volatile s32 *) (u32) s2);
    if (v1 != a0) goto L_001F03BC;
    goto L_001F03CC;
L_001F03BC:;
    s2 = (*(volatile s32 *) (u32) (s2 + 16));
    if (s2 != 0) goto L_001F03A8;
    s2 = 0;
L_001F03CC:;
    if (s2 == 0) goto L_001F04C8;
    a0 = (*(volatile s32 *) (u32) (s2 + 12));
    { s32 c_ = a0 == 0; v1 = (*(volatile s32 *) (u32) (s2 + 16)); if (c_) goto L_001F0490; }
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) v1;
L_001F03E4:;
    if (v1 == 0) goto L_001F049C;
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) a0;
L_001F03F0:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    at = 0 < v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_001F0470; }
    s0 = 0;
L_001F0404:;
    v0 = (*(volatile s32 *) (u32) (s2 + 8));
    v0 = (s32) ((u32) v0 + (u32) s0);
    s1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) s1) = (u8) v0;
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_001F0458;
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    { s32 c_ = a0 == 0; v1 = (*(volatile s32 *) (u32) (s1 + 12)); if (c_) goto L_001F04A8; }
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) v1;
L_001F0438:;
    if (v1 == 0) goto L_001F04B8;
    (*(volatile u32 *) (u32) (v1 + 8)) = (u32) a0;
L_001F0448:;
    a0 = (*(volatile s32 *) (u32) (s1 + 4)); Pes6Heap_Free(a0);
    a0 = s1; Pes6Heap_Free(a0);
L_001F0458:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001F0404; }
L_001F0470:;
    a0 = (*(volatile s32 *) (u32) (s2 + 8)); Pes6Heap_Free(a0);
    a0 = s2; Pes6Heap_Free(a0);
    goto L_001F04C8;
L_001F0488:;
    s2 = 0; goto L_001F03CC;
L_001F0490:;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -19936)) = (u32) v1; goto L_001F03E4;
L_001F049C:;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -19932)) = (u32) a0; goto L_001F03F0;
L_001F04A8:;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -19928)) = (u32) v1; goto L_001F0438;
L_001F04B8:;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -19924)) = (u32) a0; goto L_001F0448;
L_001F04C8:;
    return;
}
