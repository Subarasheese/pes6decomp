/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_009B41B0(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0;

    v0 = 2;
    if (a0 == v0) goto L_009B4290;
    v0 = 1;
    if (a0 == v0) goto L_009B4264;
    v0 = -2;
    if (a0 == v0) goto L_009B4234;
    v0 = -1;
    if (a0 == v0) goto L_009B4208;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + -22016));
    v1 = (s32) ((u32) v1 + 0xffffafd4U);
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); goto L_009B42BC;
L_009B4208:;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + -22016));
    v1 = (s32) ((u32) v1 + 0xffffafd0U);
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); goto L_009B42BC;
L_009B4234:;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + -22016));
    v1 = (s32) ((u32) v1 + 0xffffafd0U);
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); goto L_009B42BC;
L_009B4264:;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + -22016));
    v1 = (s32) ((u32) v1 + 0xffffafd8U);
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); goto L_009B42BC;
L_009B4290:;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + -22016));
    v1 = (s32) ((u32) v1 + 0xffffafd8U);
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 8));
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
L_009B42BC:;
    v1 = (s64) ((u64) a1 << 56);
    v1 = v1 >> 56;
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) a0 + (u32) v0); return v0;
}
