/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_009855F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    v1 = a0 & 0xff;
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) a0 + 0x1e54U);
    a0 = (s32) ((u32) a0 + (u32) v1);
    a4 = (*(volatile u8 *) (u32) a0);
    if (a4 <= 0) goto L_009856AC;
    at = a4 < 23;
    if (at == 0) goto L_009856AC;
    a1 = 255;
    if (a4 == a1) { a3 = 1; goto L_00985634; }
    a1 = 23;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a4 / (s32) a1); hi = (s32) ((s32) a4 % (s32) a1); lo = q_; }
    a3 = hi;
L_00985634:;
    a2 = (s32) ((u32) a3 << 3);
    a1 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffe5b4U);
    a2 = (s32) ((u32) a2 << 6);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile s32 *) (u32) a1);
    a1 = (*(volatile u8 *) (u32) (a1 + 44));
    if (a1 == 0) goto L_009856A4;
    a1 = 255;
    if (a4 == a1) { a3 = 1; goto L_00985674; }
    a1 = 23;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a4 / (s32) a1); hi = (s32) ((s32) a4 % (s32) a1); lo = q_; }
    a3 = hi;
L_00985674:;
    a1 = (s32) ((u32) a3 << 3);
    a2 = (s32) 0x590000U;
    a3 = (s32) ((u32) a1 + (u32) a3);
    a2 = (s32) ((u32) a2 + 0xffffe5b4U);
    a3 = (s32) ((u32) a3 << 6);
    a1 = 2;
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (*(volatile s32 *) (u32) a2);
    a2 = (*(volatile s32 *) (u32) a2);
    a2 = (*(volatile u8 *) (u32) (a2 + 1));
    if (a2 == a1) goto L_009856AC;
L_009856A4:;
    a1 = 255;
    (*(volatile u8 *) (u32) a0) = (u8) a1;
L_009856AC:;
    a1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x1e53U);
    v1 = (s32) ((u32) a1 + (u32) v1);
    a4 = (*(volatile u8 *) (u32) v1);
    if (a4 <= 0) goto L_00985760;
    at = a4 < 23;
    if (at == 0) goto L_00985760;
    a1 = 255;
    if (a4 == a1) { a3 = 1; goto L_009856E8; }
    a1 = 23;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a4 / (s32) a1); hi = (s32) ((s32) a4 % (s32) a1); lo = q_; }
    a3 = hi;
L_009856E8:;
    a2 = (s32) ((u32) a3 << 3);
    a1 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffe5b4U);
    a2 = (s32) ((u32) a2 << 6);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile s32 *) (u32) a1);
    a1 = (*(volatile u8 *) (u32) (a1 + 44));
    if (a1 == 0) goto L_00985758;
    a1 = 255;
    if (a4 == a1) { a3 = 1; goto L_00985728; }
    a1 = 23;
    if ((s32) a1 != 0) { s64 q_ = (s32) ((s32) a4 / (s32) a1); hi = (s32) ((s32) a4 % (s32) a1); lo = q_; }
    a3 = hi;
L_00985728:;
    a1 = (s32) ((u32) a3 << 3);
    a2 = (s32) 0x590000U;
    a3 = (s32) ((u32) a1 + (u32) a3);
    a2 = (s32) ((u32) a2 + 0xffffe5b4U);
    a3 = (s32) ((u32) a3 << 6);
    a1 = 2;
    a2 = (s32) ((u32) a2 + (u32) a3);
    a2 = (*(volatile s32 *) (u32) a2);
    a2 = (*(volatile s32 *) (u32) a2);
    a2 = (*(volatile u8 *) (u32) (a2 + 1));
    if (a2 == a1) goto L_00985760;
L_00985758:;
    a0 = (*(volatile u8 *) (u32) a0);
    (*(volatile u8 *) (u32) v1) = (u8) a0;
L_00985760:;
    return;
}
