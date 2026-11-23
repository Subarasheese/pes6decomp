/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_00623430(void);
s32 func_00630ED0(s32, s32, s32, s32);
void func_0063BEB0(s32, s32, s32);
void func_0063BF80(s32, s32);
void func_0063BFE0(s32, s32);

s32 func_0063BC60(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    s2 = a1;
    s1 = (s32) 0x660000U;
    s1 = (s32) ((u32) s1 + 0xffffd850U);
    s0 = 0; v0 = func_00623430();
    v0 = v0 & 0x1;
    if (v0 == 0) { (*(volatile u8 *) (u32) (s1 + 14)) = (u8) 0; goto L_0063BCA4; }
    v0 = 1;
    (*(volatile u8 *) (u32) (s1 + 14)) = (u8) v0;
L_0063BCA4:;
    v0 = func_00623430();
    v0 = v0 & 0x2;
    if (v0 == 0) { (*(volatile u8 *) (u32) (s1 + 15)) = (u8) 0; goto L_0063BCC0; }
    v0 = 1;
    (*(volatile u8 *) (u32) (s1 + 15)) = (u8) v0;
L_0063BCC0:;
    v1 = (*(volatile s32 *) (u32) (s1 + 8));
    v0 = 4;
    if (v1 == v0) { s0 = (*(volatile s32 *) (u32) (s1 + 4)); goto L_0063BE8C; }
    v0 = 3;
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) (s1 + 12)); goto L_0063BE68; }
    v0 = 2;
    if (v1 == v0) goto L_0063BD4C;
    a2 = 1;
    if (v1 == a2) { a0 = (*(volatile u8 *) (u32) (s1 + 12)); goto L_0063BD1C; }
    v1 = (*(volatile s16 *) (u32) s3);
    a1 = s2;
    v0 = (*(volatile s16 *) (u32) (s3 + 2));
    a0 = s1;
    (*(volatile u16 *) (u32) s1) = (u16) v1;
    (*(volatile u16 *) (u32) (s1 + 2)) = (u16) v0; func_0063BFE0(a0, a1);
    v0 = 1;
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) v0; goto L_0063BE90;
L_0063BD1C:;
    a1 = s2; v0 = func_00630ED0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v0 = s0; goto L_0063BE94; }
    v0 = 2;
    v1 = (*(volatile u8 *) (u32) (s1 + 14));
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 15));
    (*(volatile u8 *) (u32) (s1 + 16)) = (u8) v1;
    (*(volatile u8 *) (u32) (s1 + 17)) = (u8) v0; goto L_0063BE90;
L_0063BD4C:;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile u8 *) (u32) (s1 + 12));
    v1 = (*(volatile s32 *) (u32) (v0 + -6560));
    v0 = 512;
    { s32 c_ = v1 == v0; (*(volatile u8 *) (u32) (s1 + 13)) = (u8) a0; if (c_) goto L_0063BDE0; }
    v0 = 256;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_0063BDB8; }
    v0 = 32;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_0063BD94; }
    v0 = 16;
    if (v1 == v0) goto L_0063BD90;
    a0 = (*(volatile u8 *) (u32) (s1 + 12)); goto L_0063BE10;
L_0063BD90:;
    v0 = (s32) 0x84000000U;
L_0063BD94:;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = (s32) 0x660000U;
    a0 = s1;
    a2 = (*(volatile s32 *) (u32) (v0 + -6560));
    a1 = s2; func_0063BEB0(a0, a1, a2);
    goto L_0063BE0C;
L_0063BDB8:;
    a0 = v0 | 0x8401; SD_call(a0);
    a1 = (*(volatile u8 *) (u32) (s1 + 12));
    a0 = s3; func_0063BF80(a0, a1);
    v1 = 1;
    v0 = 3;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v1;
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) v0; goto L_0063BE0C;
L_0063BDE0:;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
    a1 = (*(volatile s16 *) (u32) s1);
    v1 = 2;
    a0 = (*(volatile s16 *) (u32) (s1 + 2));
    v0 = 3;
    (*(volatile u16 *) (u32) s3) = (u16) a1;
    (*(volatile u16 *) (u32) (s3 + 2)) = (u16) a0;
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) v1;
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) v0;
L_0063BE0C:;
    a0 = (*(volatile u8 *) (u32) (s1 + 12));
L_0063BE10:;
    v0 = (*(volatile u8 *) (u32) (s1 + 13));
    if (v0 != a0) { (*(volatile u8 *) (u32) (s1 + 13)) = (u8) a0; goto L_0063BE40; }
    v1 = (*(volatile u8 *) (u32) (s1 + 16));
    v0 = (*(volatile u8 *) (u32) (s1 + 14));
    if (v1 != v0) goto L_0063BE3C;
    v1 = (*(volatile u8 *) (u32) (s1 + 17));
    v0 = (*(volatile u8 *) (u32) (s1 + 15));
    if (v1 == v0) goto L_0063BE90;
L_0063BE3C:;
    (*(volatile u8 *) (u32) (s1 + 13)) = (u8) a0;
L_0063BE40:;
    a1 = s2;
    v1 = (*(volatile u8 *) (u32) (s1 + 14));
    a2 = 1;
    v0 = (*(volatile u8 *) (u32) (s1 + 15));
    a0 = (*(volatile u8 *) (u32) (s1 + 12));
    (*(volatile u8 *) (u32) (s1 + 16)) = (u8) v1;
    (*(volatile u8 *) (u32) (s1 + 17)) = (u8) v0; v0 = func_00630ED0(a0, a1, a2, a3);
    goto L_0063BE90;
L_0063BE68:;
    a1 = s2;
    a2 = 0; v0 = func_00630ED0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_0063BE90;
    v0 = 4;
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) v0; goto L_0063BE90;
L_0063BE8C:;
    (*(volatile u32 *) (u32) (s1 + 8)) = (u32) 0;
L_0063BE90:;
    v0 = s0;
L_0063BE94:;
    return v0;
}
