/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002CD320(s32);

s32 func_008CBE60(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a1 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffeeeU);
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_008CBE90;
    v1 = (s32) 0x8e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffaa00U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8cbea8U) goto L_008CBEA8; }
L_008CBE90:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + 0x1bb0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u16 *) (u32) v0) = (u16) a1; goto L_008CBEC0;
L_008CBEA8:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + 0x1bb0U);
    a1 = 284;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u16 *) (u32) v0) = (u16) a1;
L_008CBEC0:;
    v0 = func_002CD320(a0); return v0;
}
