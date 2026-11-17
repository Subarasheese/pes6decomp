/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_009B4090(s32 a0) {
    s32 v0 = 0, v1 = 0;

    v0 = 2;
    if (a0 == v0) goto L_009B4170;
    v0 = 1;
    if (a0 == v0) goto L_009B4144;
    v0 = -2;
    if (a0 == v0) goto L_009B4114;
    v0 = -1;
    if (a0 == v0) goto L_009B40E8;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + -22016));
    v1 = (s32) ((u32) v1 + 0xffffafd4U);
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0); goto L_009B419C;
L_009B40E8:;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + -22016));
    v1 = (s32) ((u32) v1 + 0xffffafd0U);
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4)); goto L_009B419C;
L_009B4114:;
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
    v0 = (*(volatile s32 *) (u32) (v0 + 4)); goto L_009B419C;
L_009B4144:;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + -22016));
    v1 = (s32) ((u32) v1 + 0xffffafd8U);
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4)); goto L_009B419C;
L_009B4170:;
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
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
L_009B419C:;
    v0 = (s32) ((u32) v0 + 0x33cU); return v0;
}
