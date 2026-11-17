/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00288580(void);
s32 func_002DCA30(void);
s32 func_009EE580(s32);
s32 func_00BBB8C0(s32);

void func_009F1390(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 hi = 0, lo = 0;

    v0 = 255;
    if (a0 == v0) goto L_009F13B8;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi; goto L_009F13BC;
L_009F13B8:;
    a0 = 1;
L_009F13BC:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = 10;
    s0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00BBB8C0(a0);
    at = (u64) v0 < (u64) (s64) 10;
    if (at == 0) goto L_009F1404;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffab90U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x9f1404U) goto L_009F1404; if (t_ == 0x9f140cU) goto L_009F140C; }
L_009F1404:;
    (*(volatile u32 *) (u32) (s0 + 148)) = (u32) 0; goto L_009F1414;
L_009F140C:;
    v0 = 1;
    (*(volatile u32 *) (u32) (s0 + 148)) = (u32) v0;
L_009F1414:;
    v0 = func_00288580();
    if (v0 == 0) goto L_009F1440;
    v1 = (*(volatile s32 *) (u32) (s0 + 148));
    v0 = 2;
    if (v1 == v0) { v0 = 1; goto L_009F143C; }
    goto L_009F1440;
L_009F143C:;
    (*(volatile u32 *) (u32) (s0 + 148)) = (u32) v0;
L_009F1440:;
    v0 = func_002DCA30();
    if (v0 != 0) { (*(volatile u32 *) (u32) (s0 + 148)) = (u32) 0; goto L_009F1450; }
L_009F1450:;
    a0 = s0; v0 = func_009EE580(a0);
    (*(volatile u32 *) (u32) (s0 + 144)) = (u32) v0;
    return;
}
