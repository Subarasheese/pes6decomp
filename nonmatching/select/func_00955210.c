/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002F2ED0(s32, s32, s32, s32, f32);
s32 func_002F3850(s32);
void func_002F38E0(s32, s32, s32, s32);
void func_002F39A0(s32);
void func_002F3A00(s32);
void func_002F4D80(s32, s32);

void func_00955210(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[40];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x960000U;
    v1 = (s32) ((u32) sp + 0x50U);
    s2 = (*(volatile s32 *) (u32) (v0 + 8768));
    v0 = (s32) 0x960000U;
    s1 = (*(volatile s32 *) (u32) (v0 + 8772));
    { s32 c_ = v1 == 0; v0 = 240; if (c_) goto L_00955260; }
L_00955244:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_00955244;
L_00955260:;
    v0 = (s32) 0x970000U;
    s0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcff0U);
    v1 = (s32) ((u32) v0 + (u32) s0);
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = 7;
    if (v1 == v0) goto L_00955288;
    v0 = (s32) 0x970000U; goto L_0095530C;
L_00955288:;
    v0 = (s32) 0x970000U;
    v0 = (s32) ((u32) v0 + 0xffffd2b8U);
    s3 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) s3); v0 = func_002F3850(a0);
    v1 = 2;
    if (v0 == v1) { a0 = (*(volatile s32 *) (u32) s3); goto L_0095534C; }
    v0 = (s32) 0x590000U;
    v1 = 3;
    v0 = (*(volatile u8 *) (u32) (v0 + 7980));
    if (v0 != v1) { v0 = (s32) 0x12c0000U; goto L_009552C8; }
    v0 = (s32) 0x12c0000U;
    v1 = v0 | 0x80; goto L_009552CC;
L_009552C8:;
    v1 = v0 | 0x7f;
L_009552CC:;
    v0 = (s32) 0x970000U;
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) v1;
    v0 = (s32) ((u32) v0 + 0xffffd2b8U);
    a1 = (s32) ((u32) sp + 0x50U);
    s0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) s2;
    a0 = (*(volatile s32 *) (u32) s0);
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) s1; func_002F38E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s0); func_002F3A00(a0);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 1; func_002F4D80(a0, a1);
    goto L_00955348;
L_0095530C:;
    v0 = (s32) ((u32) v0 + 0xffffd2b8U);
    s3 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) s3); v0 = func_002F3850(a0);
    v1 = 4;
    if (v0 == v1) goto L_00955348;
    v0 = (s32) 0x970000U;
    v0 = (s32) ((u32) v0 + 0xffffd2b8U);
    s0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) s0); func_002F39A0(a0);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; func_002F4D80(a0, a1);
L_00955348:;
    a0 = (*(volatile s32 *) (u32) s3);
L_0095534C:;
    func_002F2ED0(a0, a1, a2, a3, f12.f);
    return;
}
