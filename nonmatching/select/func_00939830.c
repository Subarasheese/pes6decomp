/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
void func_001403C0(s64, s64);
void func_002F2ED0(s64, s64, s64, s64, f32);

s64 func_00939830(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v0 = 1;
    s2 = 0;
    s1 = 0;
    s0 = (s32) 0x540000U;
    { s32 c_ = a0 != v0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_009399A0; }
    v1 = (s32) 0x8e0000U;
    a0 = 128;
    a1 = (*(volatile s32 *) (u32) (v1 + -15824));
    if (a1 == a0) { a0 = (*(volatile s16 *) (u32) (gp + -18560)); goto L_00939908; }
    v1 = 64;
    if (a1 == v1) { a0 = (*(volatile s16 *) (u32) (gp + -18560)); goto L_009398E4; }
    v1 = 32;
    if (a1 == v1) { a0 = (*(volatile s16 *) (u32) (gp + -18564)); goto L_009398C0; }
    v1 = 16;
    if (a1 == v1) { a0 = (*(volatile s16 *) (u32) (gp + -18564)); goto L_0093989C; }
    goto L_00939928;
L_0093989C:;
    v1 = -15;
    if (a0 == v1) goto L_00939928;
    v1 = (s32) ((u32) a0 + 0xffffffffU);
    s1 = (s64) ((u64) v0 << 56);
    s2 = v0 & 0xff;
    (*(volatile u16 *) (u32) (gp + -18564)) = (u16) v1;
    s1 = s1 >> 56; goto L_00939928;
L_009398C0:;
    v1 = 15;
    if (a0 == v1) goto L_00939928;
    v1 = (s32) ((u32) a0 + 0x1U);
    s1 = (s64) ((u64) v0 << 56);
    s2 = v0 & 0xff;
    (*(volatile u16 *) (u32) (gp + -18564)) = (u16) v1;
    s1 = s1 >> 56; goto L_00939928;
L_009398E4:;
    v1 = -15;
    if (a0 == v1) goto L_00939928;
    v1 = (s32) ((u32) a0 + 0xffffffffU);
    s1 = (s64) ((u64) v0 << 56);
    s2 = v0 & 0xff;
    (*(volatile u16 *) (u32) (gp + -18560)) = (u16) v1;
    s1 = s1 >> 56; goto L_00939928;
L_00939908:;
    v1 = 15;
    if (a0 == v1) goto L_00939928;
    v1 = (s32) ((u32) a0 + 0x1U);
    s1 = (s64) ((u64) v0 << 56);
    s2 = v0 & 0xff;
    (*(volatile u16 *) (u32) (gp + -18560)) = (u16) v1;
    s1 = s1 >> 56;
L_00939928:;
    v0 = (s32) 0x8e0000U;
    v1 = 2;
    a0 = (*(volatile s32 *) (u32) (v0 + -15760));
    if (a0 == v1) { v0 = (s32) 0x84000000U; goto L_0093998C; }
    v0 = 8;
    if (a0 == v0) { v0 = (s32) 0x84000000U; goto L_00939970; }
    v0 = 1;
    if (a0 == v0) { v0 = (s32) 0x84020000U; goto L_0093995C; }
    v1 = s2 & 0xff; goto L_009399A4;
L_0093995C:;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 2;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v0; goto L_009399F4;
L_00939970:;
    (*(volatile u16 *) (u32) (gp + -18564)) = (u16) 0;
    a0 = v0 | 0x8401;
    s1 = 1;
    (*(volatile u16 *) (u32) (gp + -18560)) = (u16) 0; SD_call(a0);
    goto L_009399A0;
L_0093998C:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 9)) = (u8) v0; goto L_009399F4;
L_009399A0:;
    v1 = s2 & 0xff;
L_009399A4:;
    v0 = 1;
    if (v1 != v0) { v1 = (s64) ((u64) s1 << 56); goto L_009399C0; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v1 = (s64) ((u64) s1 << 56);
L_009399C0:;
    v0 = 1;
    v1 = v1 >> 56;
    if (v1 != v0) { a0 = (*(volatile s32 *) (u32) (gp + -18572)); goto L_009399E0; }
    a1 = (*(volatile s16 *) (u32) (gp + -18564));
    a0 = (*(volatile s16 *) (u32) (gp + -18560)); func_001403C0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -18572));
L_009399E0:;
    if (a0 == 0) { v0 = 0; goto L_009399F4; }
    func_002F2ED0(a0, a1, a2, a3, f12.f);
    v0 = 0;
L_009399F4:;
    return v0;
}
