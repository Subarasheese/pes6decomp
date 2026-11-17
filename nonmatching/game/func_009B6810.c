/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001A5F20(s32);
s32 func_00208210(s32);
s32 func_0093FD30(s32, s32, s32, s32, s32, s32);
void func_0099F490(s32, s32, s32, s32, f32);
void func_009A7240(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_009B5C10(void);
s32 func_009B5CA0(void);
void func_009B6920(s32);
void func_00BCE2A0(s32, s32, s32, s32);
void func_00BD1220(s32, s32, s32, s32, s32);
void func_00BD17B0(s32, s32, s32, s32, s32);

void func_009B6810(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -22002));
    at = (u64) v1 < (u64) (s64) 7;
    if (at == 0) goto L_009B6908;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffa5a0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x9b6850U) goto L_009B6850; if (t_ == 0x9b6860U) goto L_009B6860; if (t_ == 0x9b68b8U) goto L_009B68B8; if (t_ == 0x9b68c8U) goto L_009B68C8; if (t_ == 0x9b68e8U) goto L_009B68E8; if (t_ == 0x9b68f0U) goto L_009B68F0; }
L_009B6850:;
    func_00BCE2A0(a0, a1, a2, a3);
    goto L_009B68F0;
L_009B6860:;
    v0 = func_0093FD30(a0, a1, a2, a3, a4, a5);
    if (v0 != 0) goto L_009B6908;
    v0 = func_009B5CA0();
    s1 = v0;
    a0 = 4; v0 = func_001A5F20(a0);
    a0 = v0; v0 = func_00208210(a0);
    s0 = v0; v0 = func_009B5C10();
    v1 = 0xffff;
    if (s1 == v1) goto L_009B68F8;
    if (s1 == s0) goto L_009B68F8;
    a0 = 3;
    v1 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -22002)) = (u8) a0; goto L_009B68F0;
L_009B68B8:;
    func_009B6920(a0);
    goto L_009B68F0;
L_009B68C8:;
    func_00BD1220(a0, a1, a2, a3, a4);
    func_0099F490(a0, a1, a2, a3, f12.f);
    func_009A7240(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_009B68F0;
L_009B68E8:;
    func_00BD17B0(a0, a1, a2, a3, a4);
L_009B68F0:;
    goto L_009B690C;
L_009B68F8:;
    a0 = 4;
    v1 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v1 + -22002)) = (u8) a0; goto L_009B68F0;
L_009B6908:;
L_009B690C:;
    return;
}
