/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002DCA30(void);
s64 func_0084C6D0(s64, s64, s64, s64);
void func_0084CC80(s64, s64, s64, s64);
void func_00928720(s64, s64, s64, s64);
void func_009877D0(s64, s64, s64, f32, f32);
s64 func_00B244D0(void);
void func_00B798F0(s64, s64, s64);

s64 func_00BFAD70(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 hi = 0, lo = 0;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    s1 = 0; v0 = func_00B244D0();
    if (v0 == 0) goto L_00BFAF34;
L_00BFAD90:;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7757));
    if (a0 == v1) { a0 = 1; goto L_00BFADB0; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BFADB0:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    a2 = (s32) 0x590000U;
    a0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s1 = 0;
    a3 = 0;
    s0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (s32) ((u32) a2 + 0x2800U);
    a0 = (s32) ((u32) a0 + 0x62b0U);
    a1 = 255;
L_00BFADE4:;
    v1 = (*(volatile u8 *) (u32) (a2 + 1));
    if (v1 == a1) goto L_00BFAF4C;
    v0 = (*(volatile u8 *) (u32) (s0 + 18));
    if (v0 != v1) goto L_00BFAF4C;
    v1 = (*(volatile u8 *) (u32) a2);
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (*(volatile s32 *) (u32) (v0 + 8));
    v0 = v1 & 0x800;
    if (v0 == 0) goto L_00BFAF4C;
    v0 = v1 & 0x400;
    if (v0 == 0) goto L_00BFAF4C;
    s1 = 1; v0 = func_002DCA30();
    if (v0 == 0) goto L_00BFAE64;
    v0 = (s32) 0x8b0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 5324));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) goto L_00BFAE64;
    a0 = 10; v0 = func_0084C6D0(a0, a1, a2, a3);
    v0 = (u64) 0 < (u64) v0;
    s1 = v0 ^ 0x1;
L_00BFAE64:;
    v0 = func_002DCA30();
    if (v0 == 0) goto L_00BFAE8C;
    v0 = (s32) 0x8b0000U;
    v1 = (*(volatile u16 *) (u32) (v0 + 5232));
    v0 = 10;
    { s32 c_ = v1 != v0; s1 = 0; if (c_) goto L_00BFAE8C; }
    s1 = 1;
L_00BFAE8C:;
    a0 = 1;
    if (s1 != a0) goto L_00BFAF2C;
    a2 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (v0 + -16828)) = (u8) a0;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + 7700)) = (u32) 0;
    a0 = (s32) ((u32) sp + 0x3cU);
    (*(volatile u16 *) (u32) (v0 + 8938)) = (u16) 0;
    a1 = (s32) ((u32) sp + 0x38U); func_00B798F0(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s0 + 19));
    f12.f = (*(volatile f32 *) (u32) (sp + 60));
    f13.f = (*(volatile f32 *) (u32) (sp + 56));
    a1 = 0;
    a2 = 1; func_009877D0(a0, a1, a2, f12.f, f13.f);
    a1 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e53U);
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) v1);
    (*(volatile u8 *) (u32) (v0 + 7757)) = (u8) v1; v0 = func_002DCA30();
    if (v0 == 0) goto L_00BFAF24;
    v0 = (s32) 0x8b0000U;
    v1 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (v0 + 5345));
    v0 = (s32) 0x8b0000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 5232));
    (*(volatile u8 *) (u32) (v1 + 7757)) = (u8) a1; func_0084CC80(a0, a1, a2, a3);
L_00BFAF24:;
    func_00928720(a0, a1, a2, a3);
L_00BFAF2C:;
    v0 = s1; goto L_00BFAF64;
L_00BFAF34:;
    v0 = func_002DCA30();
    if (v0 == 0) goto L_00BFAF2C;
    goto L_00BFAD90;
L_00BFAF4C:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < 8;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x28U); if (c_) goto L_00BFADE4; }
    goto L_00BFAE64;
L_00BFAF64:;
    return v0;
}
