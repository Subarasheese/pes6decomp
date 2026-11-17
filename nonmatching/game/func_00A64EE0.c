/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0098F290(s64);
s64 func_0098F7E0(s64);
s64 func_009B30B0(s64, s64);
s64 func_009B3480(s64, s64, s64, s64, f32, f32);
s64 func_00A1B990(s64);
s64 func_00AFBAB0(s64);
s64 func_00BBB8C0(s64);

s64 func_00A64EE0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 fcc = 0;
    s64 frame[12];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x46260000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    f13.i = (s32) 0;
    s3 = a0;
    v0 = (*(volatile s16 *) (u32) (a0 + 20));
    (*(volatile u8 *) (u32) (sp + 88)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 89)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 90)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 91)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 92)) = (u8) 0;
    f1.i = (s32) v0;
    (*(volatile u8 *) (u32) (sp + 93)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 94)) = (u8) 0;
    f1.f = (f32) f1.i;
    (*(volatile u8 *) (u32) (sp + 95)) = (u8) 0;
    f12.f = f0.f * f1.f; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    s1 = v0 & 0xffff;
    a0 = s3; v0 = func_0098F7E0(a0);
    if (v0 == 0) { a0 = s3; goto L_00A64F5C; }
    v0 = s1; goto L_00A65258;
L_00A64F5C:;
    v0 = func_0098F290(a0);
    v0 = v0 & 0xff;
    if (v0 != 0) { a0 = 8; goto L_00A64F78; }
L_00A64F70:;
    v0 = s1; goto L_00A65258;
L_00A64F78:;
    v0 = func_00BBB8C0(a0);
    if (v0 != 0) goto L_00A64F70;
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBAB0(a0);
    v1 = v0 & 0xff;
    v0 = 255;
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v1 == v0) { a0 = 1; goto L_00A64FB4; }
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBAB0(a0);
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) v0 + 0x1U);
L_00A64FB4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s0 = 0;
    s2 = (s32) ((u32) v0 + (u32) v1);
L_00A64FD0:;
    if (s3 == s2) goto L_00A65058;
    a0 = s2; v0 = func_00A1B990(a0);
    if (v0 != 0) goto L_00A65058;
    a0 = (*(volatile u8 *) (u32) s2);
    at = (s32) 0x1000000U;
    at = at | 0x1;
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) s3 + (u32) v0);
    v1 = (*(volatile s32 *) (u32) (v0 + 344));
    at = (u64) v1 < (u64) at;
    if (at == 0) goto L_00A65058;
    v0 = (s32) 0x100000U;
    v0 = (u64) v1 < (u64) v0;
    if (v0 != 0) goto L_00A65058;
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) s3 + (u32) v0);
    v0 = (*(volatile u16 *) (u32) (v0 + 296));
    v0 = (s32) ((u32) v0 + 0x1000U);
    v0 = v0 & 0xffff;
    v1 = (s32) ((u32) v0 >> 13);
    { s32 c_ = v1 >= 0; v0 = v1 & 0x7; if (c_) goto L_00A65048; }
    if (v0 == 0) goto L_00A65048;
    v0 = (s32) ((u32) v0 + 0xfffffff8U);
L_00A65048:;
    v1 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile u8 *) (u32) (v1 + 88));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (v1 + 88)) = (u8) v0;
L_00A65058:;
    v0 = (s32) ((u32) s0 + 0x1U);
    s0 = v0 & 0xff;
    v0 = s0 < 10;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_00A64FD0; }
    v0 = (*(volatile u8 *) (u32) (s3 + 19));
    { s32 c_ = v0 != 0; v1 = (s64) ((u64) 0 + (u64) (s64) 255); if (c_) goto L_00A65104; }
    a0 = (*(volatile u8 *) (u32) (sp + 88));
    if (a0 == 0) { a0 = (*(volatile u8 *) (u32) (sp + 89)); goto L_00A6508C; }
    v1 = 0; goto L_00A6518C;
L_00A6508C:;
    if (a0 == 0) { a0 = (*(volatile u8 *) (u32) (sp + 95)); goto L_00A6509C; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00A6518C;
L_00A6509C:;
    if (a0 == 0) { f1.f = (*(volatile f32 *) (u32) (s3 + 232)); goto L_00A650AC; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 7); goto L_00A6518C;
L_00A650AC:;
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    if (fcc) { a0 = (*(volatile u8 *) (u32) (sp + 94)); goto L_00A650E4; }
    a0 = (*(volatile u8 *) (u32) (sp + 90));
    if (a0 == 0) { a0 = (*(volatile u8 *) (u32) (sp + 91)); goto L_00A650D4; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00A6518C;
L_00A650D4:;
    if (a0 == 0) goto L_00A6518C;
    v1 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_00A6518C;
L_00A650E4:;
    if (a0 == 0) { a0 = (*(volatile u8 *) (u32) (sp + 93)); goto L_00A650F4; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 6); goto L_00A6518C;
L_00A650F4:;
    if (a0 == 0) goto L_00A6518C;
    v1 = (s64) ((u64) 0 + (u64) (s64) 5); goto L_00A6518C;
L_00A65104:;
    a0 = (*(volatile u8 *) (u32) (sp + 92));
    if (a0 == 0) { a0 = (*(volatile u8 *) (u32) (sp + 91)); goto L_00A65118; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 4); goto L_00A6518C;
L_00A65118:;
    if (a0 == 0) { a0 = (*(volatile u8 *) (u32) (sp + 93)); goto L_00A65128; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_00A6518C;
L_00A65128:;
    if (a0 == 0) { f1.f = (*(volatile f32 *) (u32) (s3 + 232)); goto L_00A65138; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 5); goto L_00A6518C;
L_00A65138:;
    f0.i = (s32) 0;
    fcc = f1.f <= f0.f;
    if (fcc) { a0 = (*(volatile u8 *) (u32) (sp + 94)); goto L_00A65170; }
    a0 = (*(volatile u8 *) (u32) (sp + 90));
    if (a0 == 0) { a0 = (*(volatile u8 *) (u32) (sp + 89)); goto L_00A65160; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00A6518C;
L_00A65160:;
    if (a0 == 0) goto L_00A6518C;
    v1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00A6518C;
L_00A65170:;
    if (a0 == 0) { a0 = (*(volatile u8 *) (u32) (sp + 95)); goto L_00A65180; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 6); goto L_00A6518C;
L_00A65180:;
    if (a0 == 0) goto L_00A6518C;
    v1 = (s64) ((u64) 0 + (u64) (s64) 7);
L_00A6518C:;
    a1 = v1 & 0xff;
    a0 = 255;
    if (a1 != a0) goto L_00A651D8;
    a2 = 0;
L_00A651A0:;
    a1 = a2 & 0xff;
    a0 = (s32) ((u32) a1 + (u32) sp);
    a0 = (*(volatile u8 *) (u32) (a0 + 88));
    a0 = (u64) 0 < (u64) a0;
    a0 = a0 ^ 0x1;
    if (a0 != 0) { a0 = (s32) ((u32) a2 + 0x1U); goto L_00A651C4; }
    v1 = a1; goto L_00A651D8;
L_00A651C4:;
    a2 = a0 & 0xff;
    a0 = a2 < 8;
    if (a0 != 0) goto L_00A651A0;
L_00A651D8:;
    a0 = v1 & 0xff;
    v1 = 255;
    if (a0 == v1) goto L_00A651F0;
    v1 = (s32) ((u32) a0 << 13);
    s1 = v1 & 0xffff;
L_00A651F0:;
    v1 = v0 & 0xff;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0x1e90U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f0.f = (*(volatile f32 *) (u32) v0);
    f1.f = (*(volatile f32 *) (u32) (s3 + 224));
    f0.f = f1.f - f0.f;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_00A65224; }
L_00A65224:;
    at = v0 < 3073;
    if (at != 0) { a1 = (*(volatile u16 *) (u32) (s3 + 42)); goto L_00A65238; }
L_00A65230:;
    v0 = s1; goto L_00A65258;
L_00A65238:;
    a0 = s1; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 96;
    if (v0 != 0) goto L_00A65230;
    s1 = (*(volatile u16 *) (u32) (s3 + 42)); goto L_00A65230;
L_00A65258:;
    return v0;
}
