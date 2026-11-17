/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00255E40(s32);
void func_00270580(s32);
void func_009B5DB0(void);
void func_009B5FD0(s32, s32, f32, f32, f32);

void func_009B5D20(s32 a0, s32 a1, f32 fa12, f32 fa13, f32 fa14) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };

    s1 = (s32) 0x590000U;
    s1 = (s32) ((u32) s1 + 0xffffe5b0U);
    s0 = 0;
L_009B5D3C:;
    a0 = s1;
    a1 = s0; func_009B5FD0(a0, a1, f12.f, f13.f, f14.f);
    v0 = (s32) ((u32) s0 + 0x1U);
    s0 = v0 & 0xffff;
    v0 = s0 < 23;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_009B5D3C; }
    func_009B5DB0();
    v0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + -22016));
    v1 = (s32) ((u32) v1 + 0xffffafd8U);
    v0 = (s32) ((u32) a0 << 1);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile u8 *) (u32) (v0 + 849)); func_00255E40(a0);
    a0 = 1; func_00270580(a0);
    return;
}
