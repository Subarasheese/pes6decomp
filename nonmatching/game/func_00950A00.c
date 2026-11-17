/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00950A00(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, a3 = 0, a4 = 0, a5 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f4 = { 0 };
    union { f32 f; s32 i; } f5 = { 0 };
    s64 frame[4];
    s64 sp = (s32) (u32) frame;

    v0 = a0 & 0xffff;
    v1 = (s32) ((u32) v0 + 0x1000U);
    v0 = (s32) 0xca0000U;
    f1.f = (*(f32 *) (u32) (v0 + -23696));
    v0 = (s32) 0xca0000U;
    f5.f = (*(f32 *) (u32) (v0 + -23692));
    (*(f32 *) (u32) sp) = f1.f;
    v0 = (s32) 0xca0000U;
    f0.f = (*(f32 *) (u32) (v0 + -23688));
    (*(f32 *) (u32) (sp + 4)) = f5.f;
    v0 = (s32) 0xca0000U;
    f4.f = (*(f32 *) (u32) (v0 + -23684));
    (*(f32 *) (u32) (sp + 8)) = f0.f;
    v0 = (s32) 0xca0000U;
    f3.f = (*(f32 *) (u32) (v0 + -23680));
    (*(f32 *) (u32) (sp + 12)) = f4.f;
    v0 = (s32) 0xca0000U;
    f2.f = (*(f32 *) (u32) (v0 + -23676));
    (*(f32 *) (u32) (sp + 16)) = f3.f;
    v0 = (s32) 0xca0000U;
    f1.f = (*(f32 *) (u32) (v0 + -23672));
    (*(f32 *) (u32) (sp + 20)) = f2.f;
    v0 = (s32) 0xca0000U;
    f0.f = (*(f32 *) (u32) (v0 + -23668));
    (*(f32 *) (u32) (sp + 24)) = f1.f;
    v0 = v1 & 0xffff;
    { s32 c_ = v1 >= 0; (*(f32 *) (u32) (sp + 28)) = f0.f; if (c_) goto L_00950A80; }
    if (v0 == 0) goto L_00950A80;
    v0 = (s32) ((u32) v0 + 0x0U);
L_00950A80:;
    v0 = (s32) v0 >> 13;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    a3 = a1 & 0xff;
    v0 = (s32) ((u32) v0 + (u32) sp);
    a2 = a2 & 0xff;
    a4 = (*(s32 *) (u32) v0);
    a5 = 0;
    a0 = 255;
    v1 = (s32) ((u32) v1 + 0x52a0U);
L_00950AA8:;
    v0 = a5 < a3;
    if (v0 != 0) { v0 = (s32) ((u32) a4 + (u32) a5); goto L_00950AC0; }
    v0 = 0xffff;
    v0 = v0 & 0xffff; goto L_00950AE8;
L_00950AC0:;
    a1 = (*(u8 *) (u32) v0);
    if (a1 == a0) { v0 = 0xffff; goto L_00950AF0; }
    v0 = (s32) ((u32) v1 + (u32) a1);
    v0 = (*(u8 *) (u32) (v0 + 212));
    at = a2 < v0;
    if (at == 0) goto L_00950AF8;
    a5 = (s32) ((u32) a5 + 0x1U); goto L_00950AA8;
L_00950AE8:;
    goto L_00950B10;
L_00950AF0:;
    v0 = v0 & 0xffff; goto L_00950AE8;
L_00950AF8:;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v0 + 0xffff9950U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u16 *) (u32) v0); goto L_00950AE8;
L_00950B10:;
    return v0;
}
