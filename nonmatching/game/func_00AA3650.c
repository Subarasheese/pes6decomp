/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00AA3650(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    a3 = (*(volatile u8 *) (u32) (a0 + 19));
    a6 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a6 = (s32) ((u32) a6 + 0x1e53U);
    v1 = (s32) ((u32) v1 + 0x1e54U);
    v0 = 255;
    a5 = a3 ^ 0x1;
    a4 = (s32) ((u32) a5 << 2);
    a3 = (s32) ((u32) a5 << 1);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a3 = (s32) ((u32) a6 + (u32) a3);
    a4 = (s32) ((u32) a4 << 1);
    a4 = (s32) ((u32) a4 + (u32) a5);
    a4 = (s32) ((u32) a4 + (u32) a0);
    a4 = (*(volatile u8 *) (u32) (a4 + 436));
    (*(volatile u8 *) (u32) a3) = (u8) a4;
    a3 = (*(volatile u8 *) (u32) (a0 + 19));
    a5 = a3 ^ 0x1;
    a3 = (s32) ((u32) a5 << 1);
    a4 = (s32) ((u32) a5 << 2);
    v1 = (s32) ((u32) v1 + (u32) a3);
    a3 = (s32) ((u32) a4 + (u32) a5);
    a3 = (s32) ((u32) a3 << 1);
    a3 = (s32) ((u32) a3 + (u32) a5);
    a3 = (s32) ((u32) a3 + (u32) a0);
    a3 = (*(volatile u8 *) (u32) (a3 + 437));
    (*(volatile u8 *) (u32) v1) = (u8) a3;
    v1 = (*(volatile u8 *) (u32) (a0 + 19));
    v1 = v1 ^ 0x1;
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) a6 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { a3 = 1; goto L_00AA36E4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a3 = hi;
L_00AA36E4:;
    v1 = (s32) ((u32) a3 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a3);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a3 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) a3);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) v0 < (u64) a2;
    if (at == 0) goto L_00AA3738;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) a0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v1 != v0) { a1 = (*(volatile u16 *) (u32) (a3 + 268)); goto L_00AA3738; }
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) a3);
    a1 = (*(volatile u16 *) (u32) (v0 + 296));
L_00AA3738:;
    v0 = a1; return v0;
}
