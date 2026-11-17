/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Job_CopyPayloadOut(s64, s64, s64);
s64 Pes6Job_Create(s64, s64, s64);
s64 Pes6Job_GetArg(s64, s64);
s64 Pes6Job_SetArg(s64, s64, s64);
s64 func_002DCA30(void);
s64 func_0030F290(s64);
s64 func_00310680(s64, s64, s64, s64);
s64 func_00326040(s64, s64);
s64 func_00333030(s64, s64, s64, s64, s64, s64, s64);
s64 func_00340630(f32, f32);
s64 func_003549C0(s64, s64, s64, s64);

s64 func_00354C00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7926));
    { s32 c_ = v0 != 0; s4 = a0; if (c_) goto L_00354C3C; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7927));
    if (v0 == 0) { v0 = 1; goto L_00354E04; }
L_00354C3C:;
    a0 = s4;
    a1 = 0; v0 = Pes6Job_GetArg(a0, a1);
    if (v0 != 0) goto L_00354E00;
    v0 = func_002DCA30();
    if (v0 == 0) { s3 = (*(volatile s32 *) (u32) (s4 + 68)); goto L_00354C68; }
    v0 = 0; goto L_00354E04;
L_00354C68:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 255);
    s2 = 0;
    s0 = (s32) ((u32) sp + 0x60U);
L_00354C74:;
    a0 = s2; v0 = func_00310680(a0, a1, a2, a3);
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) s0) = (u32) v0; if (c_) goto L_00354CA0; }
    a0 = s3;
    a1 = s2; v0 = func_00326040(a0, a1);
    if (v0 == 0) goto L_00354CA0;
    s1 = s2 & 0xff;
L_00354CA0:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 2;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00354C74; }
    v0 = (*(volatile s32 *) (u32) (sp + 96));
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x68U); goto L_00354CCC; }
    v0 = (*(volatile s32 *) (u32) (sp + 100));
    if (v0 == 0) goto L_00354E00;
    a0 = (s32) ((u32) sp + 0x68U);
L_00354CCC:;
    v0 = func_0030F290(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f12.f = (*(volatile f32 *) (u32) (v1 + 16));
    f1.i = f12.i & 0x7FFFFFFF;
    v0 = (s32) 0x45f80000U;
    v0 = v0 | 0xc800;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00354E00;
    f13.f = (*(volatile f32 *) (u32) (v1 + 24)); v0 = func_00340630(f12.f, f13.f);
    if (v0 == 0) goto L_00354E00;
    v0 = (s32) 0x46ff0000U;
    v0 = v0 | 0xfe00;
    f1.f = (*(volatile f32 *) (u32) (sp + 104));
    f0.i = (s32) v0;
    fcc = f0.f == f1.f;
    if (fcc) { a0 = 24000; goto L_00354D58; }
    f1.i = f1.i & 0x7FFFFFFF;
    v0 = (s32) 0x45f80000U;
    v0 = v0 | 0xc800;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00354D54;
    v0 = 0; goto L_00354E04;
L_00354D54:;
    a0 = 24000;
L_00354D58:;
    v0 = func_00333030(a0, a1, a2, a3, a4, a5, a6);
    if (v0 == 0) goto L_00354E00;
    a2 = s3;
    a0 = (s32) ((u32) sp + 0x6cU);
    a1 = s1; v0 = func_003549C0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00354E00;
    a1 = (*(volatile s32 *) (u32) (sp + 108));
    v0 = (s32) 0x80000000U;
    v1 = (s32) 0x3b0000U;
    a0 = v0 | 0x4d;
    a3 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 + 0x7a88U);
    v0 = (s32) ((u32) a1 << 2);
    a2 = (*(volatile s32 *) (u32) (s4 + 8));
    v0 = (s32) ((u32) v1 + (u32) v0);
    a1 = (*(volatile s32 *) (u32) v0);
    a3 = (s32) ((u32) a3 + 0x6448U); v0 = Pes6Job_Create(a0, a1, a2);
    s0 = v0;
    a1 = s4;
    a0 = s0; v0 = Pes6Job_CopyPayloadOut(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 96));
    a0 = s0;
    a1 = 0; v0 = Pes6Job_SetArg(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 100));
    a0 = s0;
    a1 = 1; v0 = Pes6Job_SetArg(a0, a1, a2);
    a2 = s1 & 0xff;
    a0 = s0;
    a1 = 2; v0 = Pes6Job_SetArg(a0, a1, a2);
    a0 = s4;
    a1 = 0;
    a2 = 1; v0 = Pes6Job_SetArg(a0, a1, a2);
L_00354E00:;
    v0 = 1;
L_00354E04:;
    return v0;
}
