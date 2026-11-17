/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
s32 func_002321B0(s32);
s32 func_00235360(s32);
s32 func_002355C0(s32);
s32 func_00235B60(void);
s32 func_00235CB0(s32, s32, s32);
s32 func_00235E30(s32);
s32 func_00235F70(s32);
s32 func_002360B0(s32);

void func_00324320(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    a3 = 0;
    s5 = a0;
    (*(volatile u16 *) (u32) (a0 + 2296)) = (u16) 0;
    s0 = (s32) ((u32) s5 + 0x8f8U);
    (*(volatile u8 *) (u32) (a0 + 2298)) = (u8) 0;
    a0 = s0;
    a2 = 0xffff;
    a1 = -1;
L_00324360:;
    (*(volatile u16 *) (u32) (a0 + 4)) = (u16) a2;
    a3 = (s32) ((u32) a3 + 0x1U);
    (*(volatile u16 *) (u32) (a0 + 6)) = (u16) a1;
    v1 = a3 < 20;
    (*(volatile u16 *) (u32) (a0 + 8)) = (u16) a1;
    (*(volatile u16 *) (u32) (a0 + 10)) = (u16) a1;
    (*(volatile u16 *) (u32) (a0 + 12)) = (u16) a1;
    (*(volatile u8 *) (u32) (a0 + 14)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 15)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 16)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 17)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 18)) = (u8) 0;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x10U); if (c_) goto L_00324360; }
    (*(volatile u16 *) (u32) (s0 + 324)) = (u16) a2;
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (s0 + 326)) = (u16) a1;
    a0 = 14;
    (*(volatile u16 *) (u32) (s0 + 328)) = (u16) a1;
    (*(volatile u16 *) (u32) (s0 + 340)) = (u16) a2;
    (*(volatile u16 *) (u32) (s0 + 342)) = (u16) a1;
    (*(volatile u16 *) (u32) (s0 + 344)) = (u16) a1;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (v1 == a0) { ; goto L_003245F4; }
    a0 = (*(volatile s32 *) (u32) s5);
    v1 = 6;
    if (a0 == v1) goto L_003243DC;
    goto L_003245F0;
L_003243DC:;
    v0 = func_00235B60();
    a0 = v0; v0 = func_002321B0(a0);
    a0 = v0 & 0xff;
    v1 = 1;
    (*(volatile u16 *) (u32) s0) = (u16) a0;
    (*(volatile u8 *) (u32) (s0 + 2)) = (u8) v1;
    v1 = (*(volatile s16 *) (u32) s0);
    { s32 c_ = v1 <= 0; s3 = 0; if (c_) goto L_00324530; }
    s4 = s0;
L_0032440C:;
    a0 = s3 & 0xff; v0 = func_00235360(a0);
    s2 = v0 & 0xffff;
    a0 = s3 & 0xff; v0 = func_002355C0(a0);
    (*(volatile u8 *) (u32) (s4 + 19)) = (u8) v0;
    s1 = v0 & 0xff;
    v0 = 295;
    if (s2 == v0) goto L_00324448;
    v0 = 294;
    if (s2 == v0) goto L_00324448;
    goto L_00324458;
L_00324448:;
    a0 = s2 & 0xffff; v0 = Pes6Team_ResolveSpecialId(a0);
    (*(volatile u16 *) (u32) (s4 + 4)) = (u16) v0; goto L_00324460;
L_00324458:;
    (*(volatile u16 *) (u32) (s4 + 4)) = (u16) s2;
L_00324460:;
    a0 = s1 & 0xff; v0 = func_00235E30(a0);
    v0 = v0 & 0xff;
    a0 = s1 & 0xff;
    (*(volatile u16 *) (u32) (s4 + 6)) = (u16) v0; v0 = func_00235CB0(a0, a1, a2);
    v0 = v0 & 0xff;
    a0 = s1 & 0xff;
    (*(volatile u16 *) (u32) (s4 + 8)) = (u16) v0; v0 = func_002360B0(a0);
    a0 = s1 & 0xff;
    (*(volatile u16 *) (u32) (s4 + 10)) = (u16) v0; v0 = func_00235F70(a0);
    (*(volatile u16 *) (u32) (s4 + 12)) = (u16) v0;
    a0 = (*(volatile u16 *) (u32) (s4 + 4));
    v1 = (*(volatile u16 *) (u32) (s5 + 58));
    if (a0 != v1) goto L_003244D8;
    a3 = (s32) ((u32) s4 + 0x4U);
    a2 = (s32) ((u32) s0 + 0x144U);
    a1 = 4;
L_003244B8:;
    a0 = (*(volatile s16 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s16 *) (u32) (a3 + 2));
    (*(volatile u16 *) (u32) a2) = (u16) a0;
    a3 = (s32) ((u32) a3 + 0x4U);
    (*(volatile u16 *) (u32) (a2 + 2)) = (u16) v1;
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_003244B8; }
L_003244D8:;
    a0 = (*(volatile u16 *) (u32) (s4 + 4));
    v1 = (*(volatile u16 *) (u32) (s5 + 60));
    if (a0 != v1) goto L_00324518;
    a3 = (s32) ((u32) s4 + 0x4U);
    a2 = (s32) ((u32) s0 + 0x154U);
    a1 = 4;
L_003244F8:;
    a0 = (*(volatile s16 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s16 *) (u32) (a3 + 2));
    (*(volatile u16 *) (u32) a2) = (u16) a0;
    a3 = (s32) ((u32) a3 + 0x4U);
    (*(volatile u16 *) (u32) (a2 + 2)) = (u16) v1;
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_003244F8; }
L_00324518:;
    v1 = (*(volatile s16 *) (u32) s0);
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < v1;
    { s32 c_ = v1 != 0; s4 = (s32) ((u32) s4 + 0x10U); if (c_) goto L_0032440C; }
L_00324530:;
    v1 = 0;
    a0 = s0;
    a3 = 1;
L_0032453C:;
    a4 = (*(volatile s16 *) (u32) (a0 + 328));
    if (a4 != a3) goto L_00324598;
    a2 = (*(volatile s16 *) (u32) s0);
    { s32 c_ = a2 <= 0; a5 = 0; if (c_) goto L_003245E0; }
    a4 = s0;
L_00324558:;
    a1 = (*(volatile s16 *) (u32) (a4 + 8));
    if (a1 == a3) goto L_00324580;
    a2 = (s32) ((u32) a5 << 4);
    a1 = (*(volatile s16 *) (u32) (a0 + 326));
    a2 = (s32) ((u32) s0 + (u32) a2);
    a2 = (*(volatile s16 *) (u32) (a2 + 6));
    a1 = (s32) ((u32) a1 - (u32) a2);
    (*(volatile u8 *) (u32) (a0 + 336)) = (u8) a1; goto L_003245E0;
L_00324580:;
    a5 = (s32) ((u32) a5 + 0x1U);
    a1 = a5 < a2;
    { s32 c_ = a1 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_00324558; }
    goto L_003245E0;
L_00324598:;
    a2 = (*(volatile s16 *) (u32) s0);
    { s32 c_ = a2 <= 0; a5 = 0; if (c_) goto L_003245E0; }
    a6 = s0;
L_003245A8:;
    a1 = (*(volatile s16 *) (u32) (a6 + 8));
    if (a1 != a4) goto L_003245D0;
    a2 = (s32) ((u32) a5 << 4);
    a1 = (*(volatile s16 *) (u32) (a0 + 326));
    a2 = (s32) ((u32) s0 + (u32) a2);
    a2 = (*(volatile s16 *) (u32) (a2 + -10));
    a1 = (s32) ((u32) a2 - (u32) a1);
    (*(volatile u8 *) (u32) (a0 + 336)) = (u8) a1; goto L_003245E0;
L_003245D0:;
    a5 = (s32) ((u32) a5 + 0x1U);
    a1 = a5 < a2;
    { s32 c_ = a1 != 0; a6 = (s32) ((u32) a6 + 0x10U); if (c_) goto L_003245A8; }
L_003245E0:;
    v1 = (s32) ((u32) v1 + 0x1U);
    a1 = v1 < 2;
    { s32 c_ = a1 != 0; a0 = (s32) ((u32) a0 + 0x10U); if (c_) goto L_0032453C; }
L_003245F0:;
L_003245F4:;
    return;
}
