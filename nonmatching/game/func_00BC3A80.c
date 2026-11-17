/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B30B0(s32, s32);
s32 func_009B3440(s32, s32, s32, s32, f32, f32);
s32 func_009B4420(void);
s32 func_009E1C90(s32);
s32 func_00AFBAB0(s32);
s32 func_00B29640(s32, s32, s32, s32);
void func_00B63090(s32, f32, f32);
s32 func_00BC3D00(s32);
s32 func_00BDB8B0(s32);

void func_00BC3A80(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    v1 = (s32) 0xcc0000U;
    s3 = a0;
    v1 = (*(volatile u16 *) (u32) (v1 + -11616));
    v1 = 0 < v1;
    { s32 c_ = v1 != 0; s0 = 0; if (c_) goto L_00BC3CD0; }
    v1 = (s32) 0xcc0000U;
    a0 = (s32) 0xcc0000U;
    (*(volatile u16 *) (u32) (v1 + -11616)) = (u16) 0;
    (*(volatile u16 *) (u32) (a0 + -11680)) = (u16) 0;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 7177));
    v1 = 5;
    { s32 c_ = a0 == v1; a1 = 0; if (c_) goto L_00BC3C90; }
L_00BC3AD4:;
    if (a1 != 0) goto L_00BC3CD0;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 9981));
    if (v1 != 0) { a0 = 1; goto L_00BC3CA4; }
L_00BC3AEC:;
    v1 = (s32) 0xcc0000U;
    v1 = (*(volatile u16 *) (u32) (v1 + -12824));
    v1 = 0 < v1;
    if (v1 != 0) goto L_00BC3CD0;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) s3);
    v1 = (*(volatile u8 *) (u32) (v1 + 7705));
    if (a0 != v1) goto L_00BC3CD0;
    v0 = func_00AFBAB0(a0);
    a0 = v0 & 0xff;
    v1 = 255;
    if (a0 == v1) { a1 = 1; goto L_00BC3B44; }
    a0 = (*(volatile u8 *) (u32) s3); v0 = func_00AFBAB0(a0);
    a0 = v0 & 0xff;
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    a1 = hi;
L_00BC3B44:;
    a0 = (s32) ((u32) a1 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    s1 = 0;
    s2 = (s32) ((u32) v1 + (u32) a0);
L_00BC3B60:;
    a0 = (*(volatile u8 *) (u32) s2);
    v1 = (*(volatile u8 *) (u32) s3);
    v1 = a0 ^ v1;
    v1 = (u64) 0 < (u64) v1;
    if (v1 == 0) goto L_00BC3B84;
    a0 = s2; v0 = func_00BDB8B0(a0);
    v1 = (u64) 0 < (u64) v0;
L_00BC3B84:;
    if (v1 == 0) goto L_00BC3C78;
    v1 = (*(volatile s16 *) (u32) (s3 + 20));
    f1.f = (*(volatile f32 *) (u32) (s2 + 224));
    f0.f = (*(volatile f32 *) (u32) (s3 + 224));
    f2.i = (s32) v1;
    f2.f = (f32) f2.i;
    f1.f = f2.f * f1.f;
    f0.f = f2.f * f0.f;
    fcc = f1.f <= f0.f;
    if (fcc) goto L_00BC3C78;
    a0 = s2; v0 = func_00BC3D00(a0);
    if (v0 == 0) goto L_00BC3C78;
    v0 = (s32) 0xcc0000U;
    a0 = (s32) 0xcc0000U;
    (*(volatile u32 *) (u32) (v0 + -11676)) = (u32) 0;
    v1 = (s32) 0xcc0000U;
    a3 = (*(volatile u8 *) (u32) s3);
    v0 = 1;
    a1 = (s32) ((u32) v0 << (s1 & 31));
    v0 = (s32) 0xcc0000U;
    a2 = a1 & 0xffff;
    a1 = (*(volatile u16 *) (u32) (v0 + -11680));
    (*(volatile u8 *) (u32) (a0 + -11670)) = (u8) a3;
    a3 = (*(volatile u8 *) (u32) (s3 + 19));
    v0 = (s32) 0xcc0000U;
    a0 = a1 | a2;
    (*(volatile u8 *) (u32) (v1 + -11672)) = (u8) a3;
    (*(volatile u16 *) (u32) (v0 + -11680)) = (u16) a0; v0 = func_009B4420();
    v1 = v0 & 0xffff;
    if (v1 != 0) goto L_00BC3C20;
    a0 = 299; goto L_00BC3C30;
L_00BC3C20:;
    v0 = func_009B4420();
    v1 = v0 & 0xffff;
    a0 = (s32) ((u32) v1 + 0xffffffffU);
L_00BC3C30:;
    v1 = (s32) 0xcc0000U;
    { s32 c_ = s0 != 0; (*(volatile u16 *) (u32) (v1 + -11614)) = (u16) a0; if (c_) goto L_00BC3C78; }
    f12.f = (*(volatile f32 *) (u32) (s2 + 224));
    f13.f = (*(volatile f32 *) (u32) (s2 + 232));
    a0 = (*(volatile s32 *) (u32) (gp + -32252)); v0 = func_009B3440(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = (*(volatile u16 *) (u32) (v1 + 88));
    a1 = v0; v0 = func_009B30B0(a0, a1);
    v1 = v0 & 0xffff;
    at = v1 < 17;
    if (at == 0) goto L_00BC3C78;
    a0 = (*(volatile u8 *) (u32) s2); func_00B63090(a0, f12.f, f13.f);
    s0 = 1;
L_00BC3C78:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 11;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x240U); if (c_) goto L_00BC3B60; }
    goto L_00BC3CD4;
L_00BC3C90:;
    v0 = func_00B29640(a0, a1, a2, a3);
    v1 = (u64) 0 < (u64) v0;
    a1 = v1 ^ 0x1; goto L_00BC3AD4;
L_00BC3CA4:;
    v0 = func_009E1C90(a0);
    a0 = v0 & 0xff;
    v1 = 14;
    if (a0 != v1) goto L_00BC3CD0;
    v1 = (s32) 0x590000U;
    a0 = 4;
    v1 = (*(volatile u8 *) (u32) (v1 + 9983));
    if (v1 == a0) goto L_00BC3AEC;
L_00BC3CD0:;
L_00BC3CD4:;
    return;
}
