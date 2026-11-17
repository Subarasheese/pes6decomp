/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009E1C90(s32);
s32 func_009E62D0(s32, s32);
void func_00C98090(s32, s32, s32, s32);
void func_00C983D0(s32, s32, s32, s32);
void func_00C985F0(s32, s32, s32, s32);
void func_00C98780(s32, s32, s32, s32, f32);

void func_00C988A0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s32 hi = 0, lo = 0;

    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v0 + -16892));
    v0 = 255;
    if (v1 == v0) { v1 = 1; goto L_00C988D0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
L_00C988D0:;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    a1 = (s32) ((u32) v1 << 6);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7705));
    v0 = 255;
    { s32 c_ = v1 == v0; s1 = (s32) ((u32) a0 + (u32) a1); if (c_) goto L_00C9890C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_00C98914;
L_00C9890C:;
    a0 = 1;
    v1 = (s32) ((u32) a0 << 3);
L_00C98914:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a0 = 2;
    s0 = (s32) ((u32) v0 + (u32) v1); v0 = func_009E1C90(a0);
    v1 = v0 & 0xff;
    v0 = 7;
    if (v1 != v0) { a0 = 2; goto L_00C98950; }
    func_00C98780(a0, a1, a2, a3, f12.f);
    goto L_00C98A60;
L_00C98950:;
    v0 = func_009E1C90(a0);
    a0 = v0 & 0xff;
    v1 = 9;
    if (a0 != v1) { a0 = 2; goto L_00C98A38; }
    v1 = (s32) 0xcc0000U;
    a0 = 1;
    v1 = (*(volatile u8 *) (u32) (v1 + -16896));
    if (v1 != a0) goto L_00C989A8;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 13056));
    a1 = (*(volatile s16 *) (u32) (v0 + 768));
    a0 = (*(volatile s16 *) (u32) (v0 + 12)); v0 = func_009E62D0(a0, a1);
    if (v0 != 0) goto L_00C989A8;
    func_00C985F0(a0, a1, a2, a3);
    goto L_00C98A5C;
L_00C989A8:;
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -16896));
    if (v1 != 0) goto L_00C989D4;
    v0 = (s32) 0xcb0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 13056));
    a1 = (*(volatile s16 *) (u32) (v0 + 768));
    a0 = (*(volatile s16 *) (u32) (v0 + 12)); v0 = func_009E62D0(a0, a1);
    if (v0 == 0) goto L_00C98A10;
L_00C989D4:;
    v1 = (s32) 0xcc0000U;
    a0 = 255;
    v1 = (*(volatile u8 *) (u32) (v1 + -16896));
    if (v1 != a0) goto L_00C98A5C;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) (a0 + 7700));
    a0 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    at = (u64) v1 < (u64) a1;
    if (at == 0) goto L_00C98A5C;
L_00C98A10:;
    if (s1 != s0) goto L_00C98A28;
    func_00C983D0(a0, a1, a2, a3);
    goto L_00C98A5C;
L_00C98A28:;
    func_00C98090(a0, a1, a2, a3);
    goto L_00C98A5C;
L_00C98A38:;
    v0 = func_009E1C90(a0);
    a0 = v0 & 0xff;
    v1 = 10;
    if (a0 != v1) goto L_00C98A5C;
    a0 = 1;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 10048)) = (u8) a0;
L_00C98A5C:;
L_00C98A60:;
    return;
}
