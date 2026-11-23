/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001BC3D0(s32, s32, s32, s32);
void func_002C40B0(s32, s32, s32, s32);
void func_002E4400(s32, s32, s32, s32);
void func_008FA100(s32, f32, f32);
void func_00C75440(s32, s32, s32, s32);

void func_008FA5B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, a5 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    if (s2 == 0) goto L_008FA5D8;
    v1 = 1;
    if (s2 != v1) { ; goto L_008FA8F8; }
L_008FA5D8:;
    v1 = (s32) 0x3b0000U;
    a0 = 3;
    a1 = (*(volatile s8 *) (u32) (v1 + -5776));
    if (a1 == a0) goto L_008FA8F4;
    v1 = 4;
    if (a1 == v1) goto L_008FA8F4;
    v1 = 11;
    if (a1 != v1) { v1 = a1 < 5; goto L_008FA610; }
    goto L_008FA8F4;
    v1 = a1 < 5;
L_008FA610:;
    if (v1 != 0) goto L_008FA624;
    at = a1 < 11;
    if (at != 0) goto L_008FA8F4;
L_008FA624:;
    v1 = (s32) 0xcb0000U;
    a0 = s2 & 0xff;
    a1 = (*(volatile s32 *) (u32) (v1 + 13056));
    v1 = (s32) ((u32) a0 << 6);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s16 *) (u32) (a0 + 8));
    if (v1 == 0) goto L_008FA8F4;
    { s32 c_ = v1 <= 0; s1 = 1; if (c_) goto L_008FA7D0; }
    s0 = (s32) ((u32) a0 + 0x8U);
    a1 = s2 & 0xff;
L_008FA664:;
    a0 = (s32) ((u32) sp + 0x40U);
    a2 = s1; func_002C40B0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (sp + 72));
    v1 = 2;
    if (a0 == v1) goto L_008FA7B8;
    a2 = (*(volatile s32 *) (u32) (gp + -19632));
    a4 = 0;
    v1 = (*(volatile s32 *) (u32) (a2 + 400));
    { s32 c_ = v1 <= 0; a1 = (s32) ((u32) a2 + 0x190U); if (c_) goto L_008FA6D8; }
    a0 = (*(volatile u8 *) (u32) (sp + 65));
    a3 = a2;
L_008FA6A0:;
    v1 = (*(volatile s8 *) (u32) (a3 + 408));
    if (v1 != a0) goto L_008FA6C0;
    a0 = (s32) ((u32) a2 + (u32) a4);
    v1 = (*(volatile s8 *) (u32) (a0 + 426));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (a0 + 426)) = (u8) v1; goto L_008FA6D8;
L_008FA6C0:;
    v1 = (*(volatile s32 *) (u32) a1);
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < v1;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x1U); if (c_) goto L_008FA6A0; }
L_008FA6D8:;
    a0 = (*(volatile s32 *) (u32) (gp + -19632));
    v1 = (*(volatile s32 *) (u32) (a0 + 400));
    if (a4 != v1) goto L_008FA718;
    a1 = (*(volatile u8 *) (u32) (sp + 65));
    v1 = (s32) ((u32) a0 + (u32) a4);
    a0 = 1;
    (*(volatile u8 *) (u32) (v1 + 408)) = (u8) a1;
    v1 = (*(volatile s32 *) (u32) (gp + -19632));
    v1 = (s32) ((u32) v1 + (u32) a4);
    (*(volatile u8 *) (u32) (v1 + 426)) = (u8) a0;
    a0 = (*(volatile s32 *) (u32) (gp + -19632));
    v1 = (*(volatile s32 *) (u32) (a0 + 400));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 400)) = (u32) v1;
L_008FA718:;
    a2 = (*(volatile u8 *) (u32) (sp + 66));
    v1 = 255;
    if (a2 == v1) goto L_008FA7B8;
    a1 = (*(volatile s32 *) (u32) (gp + -19632));
    a3 = 0;
    v1 = (*(volatile s32 *) (u32) (a1 + 404));
    { s32 c_ = v1 <= 0; a0 = (s32) ((u32) a1 + 0x194U); if (c_) goto L_008FA778; }
    a4 = a1;
L_008FA740:;
    v1 = (*(volatile s8 *) (u32) (a4 + 444));
    if (v1 != a2) goto L_008FA760;
    a0 = (s32) ((u32) a1 + (u32) a3);
    v1 = (*(volatile s8 *) (u32) (a0 + 462));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (a0 + 462)) = (u8) v1; goto L_008FA778;
L_008FA760:;
    v1 = (*(volatile s32 *) (u32) a0);
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < v1;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x1U); if (c_) goto L_008FA740; }
L_008FA778:;
    a0 = (*(volatile s32 *) (u32) (gp + -19632));
    v1 = (*(volatile s32 *) (u32) (a0 + 404));
    if (a3 != v1) goto L_008FA7B8;
    a1 = (*(volatile u8 *) (u32) (sp + 66));
    v1 = (s32) ((u32) a0 + (u32) a3);
    a0 = 1;
    (*(volatile u8 *) (u32) (v1 + 444)) = (u8) a1;
    v1 = (*(volatile s32 *) (u32) (gp + -19632));
    v1 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u8 *) (u32) (v1 + 462)) = (u8) a0;
    a0 = (*(volatile s32 *) (u32) (gp + -19632));
    v1 = (*(volatile s32 *) (u32) (a0 + 404));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 404)) = (u32) v1;
L_008FA7B8:;
    v1 = (*(volatile s16 *) (u32) s0);
    s1 = (s32) ((u32) s1 + 0x1U);
    at = v1 < s1;
    if (at == 0) { a1 = s2 & 0xff; goto L_008FA664; }
L_008FA7D0:;
    a1 = (*(volatile s32 *) (u32) (gp + -19632));
    v1 = (*(volatile s32 *) (u32) (a1 + 400));
    if (v1 == 0) goto L_008FA8F4;
    v0 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a1 + 0x1ecU);
    a3 = (*(volatile s32 *) (u32) (v0 + -5732));
    a4 = (s32) 0x930000U;
    a1 = (s32) ((u32) a1 + 0x1fcU);
    a2 = 0;
    a4 = (s32) ((u32) a4 + 0xffffdee0U);
    a5 = 13; func_00C75440(a0, a1, a2, a3);
    a2 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (s32) 0x2e8b0000U;
    a1 = v0 | 0xa2e9;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (a2 + 400));
    v0 = (s32) ((u32) v0 + 0xaU);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    v1 = (s32) ((u32) v0 >> 31);
    v0 = hi;
    v0 = (s32) v0 >> 1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) (a2 + 392)) = (u32) v0;
    a2 = (*(volatile s32 *) (u32) (gp + -19632));
    v1 = (*(volatile s32 *) (u32) (a2 + 404));
    v0 = (*(volatile s32 *) (u32) (a2 + 392));
    v1 = (s32) ((u32) v1 + 0xaU);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) v1 >> 31);
    v1 = hi;
    v1 = (s32) v1 >> 1;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) (a2 + 396)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    (*(volatile u32 *) (u32) (v0 + 488)) = (u32) s2; func_008FA100(a0, f12.f, f13.f);
    a0 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (*(volatile s32 *) (u32) (a0 + 396));
    at = v0 < 2;
    if (at != 0) { v1 = -1; goto L_008FA8D8; }
    v0 = (s32) 0x590000U;
    a3 = (s32) 0x900000U;
    a0 = (*(volatile s8 *) (u32) (v0 + 7606));
    a1 = 7;
    a2 = 1;
    a3 = (s32) ((u32) a3 + 0xffffa4c0U); v0 = func_001BC3D0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -19632));
    a3 = (s32) 0x900000U;
    v1 = (s32) 0x590000U;
    a1 = 8;
    a2 = 1;
    (*(volatile u32 *) (u32) (a0 + 480)) = (u32) v0;
    a0 = (*(volatile s8 *) (u32) (v1 + 7606));
    a3 = (s32) ((u32) a3 + 0xffffa4c0U); v0 = func_001BC3D0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -19632));
    (*(volatile u32 *) (u32) (v1 + 484)) = (u32) v0; goto L_008FA8F4;
    v1 = -1;
L_008FA8D8:;
    (*(volatile u32 *) (u32) (a0 + 484)) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    (*(volatile u32 *) (u32) (v0 + 480)) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a0 = (*(volatile s32 *) (u32) (v0 + 500));
    a1 = 0; func_002E4400(a0, a1, a2, a3);
L_008FA8F4:;
L_008FA8F8:;
    return;
}
