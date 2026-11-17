/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00C35500(s32);
s32 func_00C35520(void);
s32 func_00C35540(void);
void memset(s32, s32, s32);

void func_00C39630(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;

    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffb8f0U);
    a1 = 0;
    a2 = 124; memset(a0, a1, a2);
    v0 = func_00C35540();
    v1 = 2;
    if (v0 != v1) goto L_00C39674;
    a0 = 7;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v1 + -18192)) = (u32) a0;
L_00C3966C:;
    goto L_00C39760;
L_00C39674:;
    v0 = func_00C35520();
    a0 = v0; v0 = func_00C35500(a0);
    v1 = (s32) ((u32) v0 + 0xfffffffdU);
    at = (u64) v1 < (u64) (s64) 6;
    if (at == 0) goto L_00C396B0;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x4660U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xc396b0U) goto L_00C396B0; if (t_ == 0xc396dcU) goto L_00C396DC; if (t_ == 0xc39728U) goto L_00C39728; }
L_00C396B0:;
    v1 = (s32) 0xcd0000U;
    a0 = 1;
    v1 = (*(volatile s32 *) (u32) (v1 + -18208));
    v1 = v1 ^ 0x1;
    v1 = (u64) v1 < (u64) (s64) 1;
    if (v1 != a0) goto L_00C396D0;
    a0 = 2;
L_00C396D0:;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v1 + -18192)) = (u32) a0; goto L_00C3966C;
L_00C396DC:;
    v1 = (s32) 0xcd0000U;
    a0 = 1;
    v1 = (*(volatile s32 *) (u32) (v1 + -18208));
    v1 = v1 ^ 0x1;
    v1 = (u64) v1 < (u64) (s64) 1;
    if (v1 == a0) { a0 = 2; goto L_00C39754; }
    v1 = (s32) 0xcd0000U;
    a0 = 2;
    v1 = (*(volatile s32 *) (u32) (v1 + -18204));
    if (v1 != a0) { a0 = 3; goto L_00C3971C; }
    a0 = 4;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v1 + -18192)) = (u32) a0; goto L_00C3966C;
L_00C3971C:;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v1 + -18192)) = (u32) a0; goto L_00C3966C;
L_00C39728:;
    v1 = (s32) 0xcd0000U;
    a0 = 1;
    v1 = (*(volatile s32 *) (u32) (v1 + -18208));
    v1 = v1 ^ 0x1;
    v1 = (u64) v1 < (u64) (s64) 1;
    if (v1 != a0) { a0 = 5; goto L_00C39748; }
    a0 = 6;
L_00C39748:;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v1 + -18192)) = (u32) a0; goto L_00C3966C;
L_00C39754:;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v1 + -18192)) = (u32) a0; goto L_00C3966C;
L_00C39760:;
    return;
}
