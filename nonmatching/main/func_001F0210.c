/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Free(s32, s32);

s32 func_001F0210(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    v1 = (s32) 0x530000U;
    s2 = (*(volatile s32 *) (u32) (v1 + -19936));
    if (s2 == 0) goto L_001F0318;
L_001F0238:;
    v1 = (*(volatile s32 *) (u32) s2);
    if (v1 != a0) goto L_001F024C;
    goto L_001F025C;
L_001F024C:;
    s2 = (*(volatile s32 *) (u32) (s2 + 16));
    if (s2 != 0) goto L_001F0238;
    s2 = 0;
L_001F025C:;
    if (s2 == 0) goto L_001F0358;
    a0 = (*(volatile s32 *) (u32) (s2 + 12));
    { s32 c_ = a0 == 0; v1 = (*(volatile s32 *) (u32) (s2 + 16)); if (c_) goto L_001F0320; }
    (*(volatile u32 *) (u32) (a0 + 16)) = (u32) v1;
L_001F0274:;
    if (v1 == 0) goto L_001F032C;
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) a0;
L_001F0280:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    at = 0 < v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_001F0300; }
    s0 = 0;
L_001F0294:;
    v0 = (*(volatile s32 *) (u32) (s2 + 8));
    v0 = (s32) ((u32) v0 + (u32) s0);
    s1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) s1);
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) s1) = (u8) v0;
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_001F02E8;
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    { s32 c_ = a0 == 0; v1 = (*(volatile s32 *) (u32) (s1 + 12)); if (c_) goto L_001F0338; }
    (*(volatile u32 *) (u32) (a0 + 12)) = (u32) v1;
L_001F02C8:;
    if (v1 == 0) goto L_001F0348;
    (*(volatile u32 *) (u32) (v1 + 8)) = (u32) a0;
L_001F02D8:;
    a0 = (*(volatile s32 *) (u32) (s1 + 4)); v0 = Pes6Heap_Free(a0, a1);
    a0 = s1; v0 = Pes6Heap_Free(a0, a1);
L_001F02E8:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001F0294; }
L_001F0300:;
    a0 = (*(volatile s32 *) (u32) (s2 + 8)); v0 = Pes6Heap_Free(a0, a1);
    a0 = s2; v0 = Pes6Heap_Free(a0, a1);
    goto L_001F0358;
L_001F0318:;
    s2 = 0; goto L_001F025C;
L_001F0320:;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -19936)) = (u32) v1; goto L_001F0274;
L_001F032C:;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -19932)) = (u32) a0; goto L_001F0280;
L_001F0338:;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -19928)) = (u32) v1; goto L_001F02C8;
L_001F0348:;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -19924)) = (u32) a0; goto L_001F02D8;
L_001F0358:;
    return v0;
}
