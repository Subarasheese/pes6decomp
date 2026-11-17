/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00997EF0(s32);

s32 func_00A16B50(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    v1 = 255;
    s0 = a0;
    a0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (a0 == v1) { v0 = 1; goto L_00A16BBC; }
    { s32 c_ = a0 == v1; a1 = (*(volatile u8 *) (u32) (s0 + 19)); if (c_) goto L_00A16B90; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi; goto L_00A16B94;
L_00A16B90:;
    a0 = 1;
L_00A16B94:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 19));
    if (a1 != v0) { v0 = 1; goto L_00A16BBC; }
    v0 = 0;
L_00A16BBC:;
    if (v0 != 0) goto L_00A16BDC;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 == 0) goto L_00A16BDC;
    v0 = 1; goto L_00A16CB4;
L_00A16BDC:;
    v1 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1efdU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_00A16CB0;
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + 0x1f16U);
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 == v0) goto L_00A16CA8;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1f17U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 == v0) goto L_00A16CA8;
    v0 = 0;
L_00A16C34:;
    if (v0 != 0) goto L_00A16CB0;
    a0 = s0; v0 = func_00997EF0(a0);
    if (v0 != 0) goto L_00A16CB0;
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    v0 = (*(volatile s32 *) (u32) (gp + -31080));
    v1 = a0 ^ 0x1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_00A16CB0;
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + 0x1e4fU);
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 == v0) goto L_00A16CB0;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e50U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 == v0) goto L_00A16CB0;
    v0 = 1; goto L_00A16CB4;
L_00A16CA8:;
    v0 = 1; goto L_00A16C34;
L_00A16CB0:;
    v0 = 0;
L_00A16CB4:;
    return v0;
}
