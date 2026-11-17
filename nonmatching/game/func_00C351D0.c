/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B3070(s64, s64);
s64 func_009B3480(s64, s64, s64, s64, f32, f32);
s64 func_00BB1310(s64, s64, s64, s64);
s64 func_00BBB8C0(s64);
s64 func_00C35490(void);
s64 func_00C35500(s64);

s64 func_00C351D0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = 0;
    s3 = 0;
    s2 = 0;
    s1 = 0;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    a0 = (s32) ((u32) v0 + 0x4cU);
    v0 = (*(volatile u8 *) (u32) (v0 + 76));
    { s32 c_ = v0 != 0; (*(volatile u64 *) (u32) (sp + 120)) = (u64) a1; if (c_) goto L_00C35394; }
    v1 = (*(volatile s32 *) (u32) s5);
    f0.f = (*(volatile f32 *) (u32) (v1 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x46420000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00C353A4;
    f0.f = (*(volatile f32 *) (u32) (v1 + 232));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45f00000U;
    v0 = v0 | 0xc800;
    f0.i = (s32) v0;
    fcc = f1.f <= f0.f;
    if (!fcc) goto L_00C353A4;
    a0 = (*(volatile u8 *) (u32) (v1 + 18)); v0 = func_00C35500(a0);
    a0 = (*(volatile s32 *) (u32) s5);
    f12.f = (*(volatile f32 *) (u32) (sp + 120));
    f13.f = (*(volatile f32 *) (u32) (sp + 124));
    v1 = 1;
    s0 = (s32) ((u32) v1 << (v0 & 31)); v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a0 = v0 & 0xffff;
    v0 = (*(volatile s32 *) (u32) s5);
    a1 = (*(volatile u16 *) (u32) (v0 + 38)); v0 = func_009B3070(a0, a1);
    a1 = v0 & 0xffff;
    v1 = 2;
    v0 = (*(volatile s32 *) (u32) (s5 + 4));
    a0 = (*(volatile u8 *) (u32) (v0 + 12));
    if (a0 == v1) { v0 = a1 & 0xffff; goto L_00C35344; }
    v0 = 1;
    if (a0 == v0) { v0 = a1 & 0xffff; goto L_00C35300; }
    if (a0 == 0) { v0 = a1 & 0xffff; goto L_00C352C8; }
    goto L_00C35368;
L_00C352C8:;
    at = v0 < 20481;
    if (at == 0) goto L_00C353AC;
    at = v0 < 8193;
    if (at != 0) goto L_00C352F0;
    s4 = (s32) 0xca0000U;
    s3 = 8;
    s4 = (s32) ((u32) s4 + 0x70f0U); goto L_00C35368;
L_00C352F0:;
    s4 = (s32) 0xca0000U;
    s3 = 4;
    s4 = (s32) ((u32) s4 + 0x7130U); goto L_00C35368;
L_00C35300:;
    at = v0 < 20481;
    if (at == 0) goto L_00C353BC;
    at = v0 < 8193;
    if (at == 0) goto L_00C353CC;
    at = v0 < 4096;
    if (at == 0) goto L_00C35368;
    v0 = func_00C35490();
    if (v0 != 0) { a0 = 100; goto L_00C353DC; }
L_00C35334:;
    s4 = (s32) 0xca0000U;
    s3 = 8;
    s4 = (s32) ((u32) s4 + 0x7170U); goto L_00C35368;
L_00C35344:;
    at = v0 < 20481;
    if (at == 0) goto L_00C35414;
    at = v0 < 8193;
    if (at != 0) goto L_00C35368;
    s4 = (s32) 0xca0000U;
    s3 = 7;
    s4 = (s32) ((u32) s4 + 0x7040U);
L_00C35368:;
    if (s3 != 0) { a0 = s3; goto L_00C35424; }
L_00C35370:;
    if (s1 == 0) goto L_00C3538C;
    if (s2 == 0) goto L_00C3538C;
    a0 = s1 & 0xffff; v0 = func_00BB1310(a0, a1, a2, a3);
    s1 = v0 & 0xffff;
L_00C3538C:;
    v0 = s1; goto L_00C3544C;
L_00C35394:;
    v1 = (s32) ((u32) v0 + 0xffffffffU);
    v0 = 0;
    (*(volatile u8 *) (u32) a0) = (u8) v1; goto L_00C3544C;
L_00C353A4:;
    v0 = 0; goto L_00C3544C;
L_00C353AC:;
    s4 = (s32) 0xca0000U;
    s3 = 14;
    s4 = (s32) ((u32) s4 + 0x7080U); goto L_00C35368;
L_00C353BC:;
    s4 = (s32) 0xca0000U;
    s3 = v1;
    s4 = (s32) ((u32) s4 + 0x7150U); goto L_00C35368;
L_00C353CC:;
    s4 = (s32) 0xca0000U;
    s3 = v1;
    s4 = (s32) ((u32) s4 + 0x7160U); goto L_00C35368;
L_00C353DC:;
    v0 = func_00BBB8C0(a0);
    { s32 c_ = v0 >= 0; v1 = v0 & 0x1; if (c_) goto L_00C353F8; }
    if (v1 == 0) goto L_00C353F8;
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
L_00C353F8:;
    if (v1 == 0) goto L_00C35334;
    s4 = (s32) 0xca0000U;
    s3 = 5;
    s4 = (s32) ((u32) s4 + 0x71b0U);
    s2 = 1; goto L_00C35368;
L_00C35414:;
    s4 = (s32) 0xca0000U;
    s3 = 11;
    s4 = (s32) ((u32) s4 + 0x6fe0U); goto L_00C35368;
L_00C35424:;
    v0 = func_00BBB8C0(a0);
    v0 = (s32) ((u32) v0 << 3);
    v1 = (s32) ((u32) v0 + (u32) s4);
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    v0 = s0 & v0;
    if (v0 == 0) goto L_00C35370;
    s1 = (*(volatile u16 *) (u32) v1); goto L_00C35370;
L_00C3544C:;
    return v0;
}
