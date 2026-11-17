/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Ball_Update(f32, f32, f32, f32, f32, f32, f32, f32);
s32 func_00207920(s32);
void func_009832C0(s32, s32, s32, s32);
void func_00AD0A20(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_00BBB8C0(s32);
s32 func_00BF6270(void);
s32 func_00BF7550(s32, s32, s32, s32, f32, f32);

s32 func_00BA5040(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };
    s32 hi = 0, lo = 0;

    s1 = 0; v0 = func_00BF6270();
    v1 = 255;
    if (v0 == v1) { a0 = 1; goto L_00BA5080; }
    v0 = func_00BF6270();
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a0 = hi;
L_00BA5080:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s2 = 1;
    s0 = (s32) ((u32) v0 + (u32) v1);
L_00BA509C:;
    v0 = 255;
    if (s2 == v0) { a0 = 1; goto L_00BA50B4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s2 / (s32) v0); hi = (s32) ((s32) s2 % (s32) v0); lo = q_; }
    a0 = hi;
L_00BA50B4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s3 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (s3 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_00BA5114;
    v1 = (*(volatile u8 *) (u32) (s3 + 22));
    v0 = 81;
    if (v1 == v0) goto L_00BA5114;
    a0 = s3; v0 = func_00BF7550(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_00BA5114;
    a0 = s3;
    a1 = 55; func_009832C0(a0, a1, a2, a3);
    v0 = 81;
    (*(volatile u8 *) (u32) (s3 + 22)) = (u8) v0;
    (*(volatile u16 *) (u32) (s3 + 24)) = (u16) 0;
L_00BA5114:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 23;
    if (v0 != 0) goto L_00BA509C;
    func_00AD0A20(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f);
    Pes6Ball_Update(f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f);
    v1 = (*(volatile u16 *) (u32) (s0 + 24));
    v0 = 14;
    if (v1 == v0) goto L_00BA519C;
    v0 = 13;
    if (v1 == v0) goto L_00BA519C;
    v0 = 3;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00BA5164; }
    v0 = (s32) 0x590000U; goto L_00BA51A4;
L_00BA5164:;
    v0 = func_00207920(a0);
    at = v0 < 5001;
    if (at != 0) goto L_00BA51CC;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v1 << 1);
    a0 = (s32) ((u32) v0 + (u32) v1); v0 = func_00BBB8C0(a0);
    if (v0 != 0) goto L_00BA51CC;
    s1 = 1; goto L_00BA51CC;
L_00BA519C:;
    s1 = 1; goto L_00BA51CC;
L_00BA51A4:;
    a0 = (*(volatile u16 *) (u32) (gp + -19458));
    v1 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u16 *) (u32) (gp + -19458)) = (u16) v0;
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = a0 < v0;
    if (v0 != 0) goto L_00BA51CC;
    s1 = 1;
L_00BA51CC:;
    v0 = s1;
    return v0;
}
