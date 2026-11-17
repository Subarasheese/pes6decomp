/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B356D0(s32, s32, s32);
s32 func_00BBB8C0(s32);
s32 func_00BD44E0(s32, s32);

s32 func_00BD6E60(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    s4 = a0;
    s3 = a1;
    a1 = 2;
    s2 = 0; v0 = func_00BD44E0(a0, a1);
    a3 = 1;
    if (v0 != a3) goto L_00BD70A8;
    a2 = (*(volatile s32 *) (u32) (s4 + 4));
    a0 = 2;
    s1 = 0;
    a1 = (*(volatile u8 *) (u32) (a2 + 12));
    { s32 c_ = a1 == a0; s0 = 0; if (c_) goto L_00BD7008; }
    v1 = 3;
    if (a1 == v1) goto L_00BD6FA0;
    v0 = 4;
    if (a1 == v0) goto L_00BD6F64;
    v0 = 5;
    if (a1 == v0) goto L_00BD6F64;
    v0 = 6;
    if (a1 == v0) goto L_00BD6EEC;
    goto L_00BD7068;
L_00BD6EEC:;
    if (s3 == a0) { v0 = (*(volatile u8 *) (u32) (a2 + 83)); goto L_00BD6F3C; }
    if (s3 == a3) goto L_00BD6F0C;
    if (s3 == 0) goto L_00BD6F0C;
    goto L_00BD7068;
L_00BD6F0C:;
    v1 = (*(volatile u8 *) (u32) (a2 + 83));
    v0 = 1;
    if (v1 != v0) goto L_00BD70B0;
    v0 = (*(volatile s32 *) (u32) a2);
    v0 = v0 & 0x20;
    if (v0 == 0) goto L_00BD70B0;
    s0 = (s32) 0xca0000U;
    s1 = 3;
    s0 = (s32) ((u32) s0 + 0xffffe950U); goto L_00BD7068;
L_00BD6F3C:;
    if (v0 != a3) goto L_00BD70BC;
    v0 = (*(volatile s32 *) (u32) a2);
    v0 = v0 & 0x20;
    if (v0 == 0) goto L_00BD70BC;
    s0 = (s32) 0xca0000U;
    s1 = v1;
    s0 = (s32) ((u32) s0 + 0xffffe958U); goto L_00BD7068;
L_00BD6F64:;
    v0 = 2;
    if (s3 == v0) { s1 = 1; goto L_00BD6F98; }
    v0 = 1;
    if (s3 == v0) goto L_00BD6F8C;
    if (s3 == 0) goto L_00BD6F8C;
    goto L_00BD7068;
L_00BD6F8C:;
    s1 = 1;
    s0 = (s32) ((u32) gp + 0xffff86fcU); goto L_00BD7068;
L_00BD6F98:;
    s0 = (s32) ((u32) gp + 0xffff8700U); goto L_00BD7068;
L_00BD6FA0:;
    if (s3 == a0) { s1 = a3; goto L_00BD7000; }
    if (s3 == a3) goto L_00BD6FC0;
    if (s3 == 0) goto L_00BD6FC0;
    goto L_00BD7068;
L_00BD6FC0:;
    v0 = (*(volatile s32 *) (u32) s4);
    f0.f = (*(volatile f32 *) (u32) (v0 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x463e0000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { s1 = 1; goto L_00BD6FF8; }
    s0 = (s32) 0xca0000U;
    s1 = 3;
    s0 = (s32) ((u32) s0 + 0xffffe960U); goto L_00BD7068;
L_00BD6FF8:;
    s0 = (s32) ((u32) gp + 0xffff8704U); goto L_00BD7068;
L_00BD7000:;
    s0 = (s32) ((u32) gp + 0xffff8708U); goto L_00BD7068;
L_00BD7008:;
    if (s3 == a0) { s1 = a3; goto L_00BD7064; }
    if (s3 == a3) goto L_00BD7028;
    if (s3 == 0) goto L_00BD7028;
    goto L_00BD7068;
L_00BD7028:;
    v0 = (*(volatile s32 *) (u32) s4);
    f0.f = (*(volatile f32 *) (u32) (v0 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x463e0000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { s1 = 2; goto L_00BD705C; }
    s1 = 1;
    s0 = (s32) ((u32) gp + 0xffff870cU); goto L_00BD7068;
L_00BD705C:;
    s0 = (s32) ((u32) gp + 0xffff8710U); goto L_00BD7068;
L_00BD7064:;
    s0 = (s32) ((u32) gp + 0xffff8714U);
L_00BD7068:;
    if (s0 == 0) goto L_00BD70A8;
    if (s1 == 0) goto L_00BD70A8;
L_00BD7078:;
    a0 = s1; v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 << 1);
    a2 = (s32) ((u32) s1 + 0xffffffffU);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = s4;
    s2 = (*(volatile u16 *) (u32) v0);
    a1 = s2; v0 = func_00B356D0(a0, a1, a2);
    if (v0 != 0) goto L_00BD7078;
L_00BD70A8:;
    v0 = s2; goto L_00BD70C8;
L_00BD70B0:;
    s1 = 1;
    s0 = (s32) ((u32) gp + 0xffff86f4U); goto L_00BD7068;
L_00BD70BC:;
    s1 = 1;
    s0 = (s32) ((u32) gp + 0xffff86f8U); goto L_00BD7068;
L_00BD70C8:;
    return v0;
}
