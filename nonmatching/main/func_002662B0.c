/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D9AB0(s32);
s32 func_001D9AD0(s32);
s32 memcpy(s32, s32, s32);

s32 func_002662B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    union { f32 f; s32 i; } f0 = { 0 };

    s3 = a1;
    s2 = a2;
    s1 = a3;
    v1 = (*(volatile s32 *) (u32) (a0 + 20));
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_00266330; }
    if (s3 == 0) goto L_00266300;
    a0 = (*(volatile s32 *) (u32) (v1 + 20)); v0 = func_001D9AD0(a0);
    a0 = s3;
    a1 = v0;
    a2 = 48; v0 = memcpy(a0, a1, a2);
L_00266300:;
    if (s2 == 0) { s0 = (*(volatile s32 *) (u32) (s0 + 36)); goto L_002663A8; }
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    a0 = (*(volatile s32 *) (u32) (v0 + 20)); v0 = func_001D9AB0(a0);
    a0 = s2;
    a1 = v0;
    a2 = 16; v0 = memcpy(a0, a1, a2);
    s0 = (*(volatile s32 *) (u32) (s0 + 36));
    goto L_002663A8;
L_00266330:;
    a0 = (*(volatile s32 *) (u32) (s0 + 32));
    v1 = a0 < 292;
    if (v1 != 0) { s0 = 2; goto L_00266358; }
    at = a0 < 444;
    if (at == 0) goto L_00266354;
    s0 = (*(volatile s32 *) (u32) (s0 + 36)); goto L_00266358;
L_00266354:;
    s0 = 2;
L_00266358:;
    if (s3 == 0) goto L_00266384;
    v0 = (s32) ((u32) s0 << 1);
    a0 = s3;
    v1 = (s32) ((u32) v0 + (u32) s0);
    a2 = 48;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + 0xffffb070U);
    a1 = (s32) ((u32) v0 + (u32) v1); v0 = memcpy(a0, a1, a2);
L_00266384:;
    if (s2 == 0) goto L_002663A8;
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) s0 << 4);
    v0 = (s32) ((u32) v0 + 0xffffb040U);
    a0 = s2;
    a2 = 16;
    a1 = (s32) ((u32) v0 + (u32) v1); v0 = memcpy(a0, a1, a2);
L_002663A8:;
    if (s1 == 0) { ; goto L_00266400; }
    v1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) s1) = (u32) 0;
    a1 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb028U);
    a0 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) 0;
    a0 = (*(volatile s16 *) (u32) a0);
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xffffb02aU);
    v1 = (s32) ((u32) v1 + (u32) a1);
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s1 + 8)) = f0.f;
    v1 = (*(volatile s16 *) (u32) v1);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    (*(volatile f32 *) (u32) (s1 + 12)) = f0.f;
L_00266400:;
    return v0;
}
