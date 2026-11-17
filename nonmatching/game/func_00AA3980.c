/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00207390(s64, s64);
s64 func_00207920(s64);
void func_00209540(s64, s64, s64);
void func_00209A00(s64, s64, s64);
void func_0097C490(s64, s64);
s64 func_009B30B0(s64, s64);
s64 func_009B3220(s64, s64, s64);
void func_00AA8B90(s64, s64, s64, s64, s64, f32, f32, f32, f32);

void func_00AA3980(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    v0 = 4352;
    s4 = a0;
    s3 = a1;
    a4 = (*(volatile u8 *) (u32) (a0 + 92));
    v1 = (*(volatile s32 *) (u32) (a0 + 28));
    a3 = (s32) ((u32) a4 << 1);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a3 << 2);
    v0 = (s32) ((u32) v0 - (u32) a3);
    at = v0 < v1;
    { s32 c_ = at != 0; s2 = a2; if (c_) goto L_00AA3B98; }
    a0 = s3;
    a1 = s2; v0 = func_009B30B0(a0, a1);
    a1 = (*(volatile u16 *) (u32) (s4 + 40));
    s1 = v0 & 0xffff;
    a0 = s2; v0 = func_009B30B0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    s0 = v0 & 0xffff;
    v0 = 277;
    a2 = (*(volatile u16 *) (u32) (a0 + 48));
    { s32 c_ = a2 == v0; a3 = 0; if (c_) goto L_00AA3A78; }
    v0 = 281;
    if (a2 == v0) { v1 = s1 & 0xffff; goto L_00AA3A38; }
    v0 = 279;
    if (a2 == v0) { v0 = s1 & 0xffff; goto L_00AA3A20; }
    v0 = s1 & 0xffff; goto L_00AA3A94;
L_00AA3A20:;
    at = v0 < 37;
    if (at == 0) goto L_00AA3A30;
    s1 = (s64) ((u64) 0 + (u64) (s64) 31);
L_00AA3A30:;
    a3 = 1; goto L_00AA3A90;
L_00AA3A38:;
    at = v1 < 33;
    { s32 c_ = at == 0; a3 = 1; if (c_) goto L_00AA3A58; }
    v0 = v1 < 28;
    if (v0 != 0) goto L_00AA3A58;
    s1 = (s64) ((u64) 0 + (u64) (s64) 33); goto L_00AA3A90;
L_00AA3A58:;
    v0 = v1 < 96;
    if (v0 != 0) goto L_00AA3A90;
    at = v1 < 101;
    if (at == 0) goto L_00AA3A90;
    s1 = (s64) ((u64) 0 + (u64) (s64) 95); goto L_00AA3A90;
L_00AA3A78:;
    v0 = s1 & 0xffff;
    v0 = v0 < 92;
    if (v0 != 0) goto L_00AA3A8C;
    s1 = (s64) ((u64) 0 + (u64) (s64) 97);
L_00AA3A8C:;
    a3 = 1;
L_00AA3A90:;
    v0 = s1 & 0xffff;
L_00AA3A94:;
    at = v0 < 97;
    if (at == 0) { a1 = 277; goto L_00AA3BB0; }
    at = v0 < 33;
    if (at != 0) { a1 = 279; goto L_00AA3B38; }
    a1 = 281;
    if (a2 != a1) { a2 = 0; goto L_00AA3C3C; }
    a2 = (*(volatile u8 *) (u32) (a0 + 45));
    a3 = s2 & 0xffff;
    v0 = s3 & 0xffff;
    v1 = (s32) 0x10000U;
    a1 = (s32) ((u32) v0 - (u32) a3);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v0 = 0x8001;
    v1 = v1 & 0xffff;
    v0 = v1 < v0;
    if (a2 == v0) goto L_00AA3B7C;
    v0 = (s32) ((u32) a3 + 0x7fffU);
    v0 = (s32) ((u32) v0 + 0x1U);
    s3 = v0 & 0xffff; v0 = func_00207920(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a2 = v0;
    a1 = 277; func_00209540(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (gp + -32420));
    v0 = (s32) 0x3fb30000U;
    a0 = v0 | 0x3333;
    f1.i = (s32) a0;
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    f0.f = (*(volatile f32 *) (u32) v1);
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (v0 + 40)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = 8; func_00207390(a0, a1);
    a0 = s4; goto L_00AA3B80;
L_00AA3B38:;
    if (a2 == a1) goto L_00AA3B7C;
    if (a3 == 0) { a2 = 0; goto L_00AA3B68; }
    v0 = func_00207920(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a2 = v0;
    a1 = 279; func_00209540(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s4 + 4)); goto L_00AA3B74;
L_00AA3B68:;
    func_00209A00(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
L_00AA3B74:;
    a1 = 4; func_00207390(a0, a1);
L_00AA3B7C:;
    a0 = s4;
L_00AA3B80:;
    a1 = s3;
    a2 = s0;
    a3 = 512; func_0097C490(a0, a1);
    goto L_00AA3CC8;
L_00AA3B98:;
    v0 = 3840;
    a4 = 256;
    a3 = (s32) ((u32) v0 - (u32) a3); func_00AA8B90(a0, a1, a2, a3, a4, f12.f, f13.f, f14.f, f15.f);
    goto L_00AA3CC4;
L_00AA3BB0:;
    if (a2 == a1) goto L_00AA3B7C;
    if (a3 == 0) { a2 = 0; goto L_00AA3BE0; }
    v0 = func_00207920(a0);
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a2 = v0;
    a1 = 277; func_00209540(a0, a1, a2);
    a1 = (*(volatile u16 *) (u32) (s4 + 38)); goto L_00AA3BEC;
L_00AA3BE0:;
    func_00209A00(a0, a1, a2);
    a1 = (*(volatile u16 *) (u32) (s4 + 38));
L_00AA3BEC:;
    v0 = s3 & 0xffff;
    v0 = (s32) ((u32) v0 + 0x7fffU);
    a2 = 4096;
    v0 = (s32) ((u32) v0 + 0x1U);
    a0 = v0 & 0xffff; v0 = func_009B3220(a0, a1, a2);
    (*(volatile u16 *) (u32) (s4 + 38)) = (u16) v0;
    v1 = (*(volatile s32 *) (u32) (gp + -32420));
    v0 = (s32) 0x3fb30000U;
    v0 = v0 | 0x3333;
    f1.i = (s32) v0;
    v0 = (*(volatile s32 *) (u32) (s4 + 4));
    f0.f = (*(volatile f32 *) (u32) v1);
    f0.f = f1.f * f0.f;
    (*(volatile f32 *) (u32) (v0 + 40)) = f0.f;
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = 4; func_00207390(a0, a1);
    goto L_00AA3B7C;
L_00AA3C3C:;
    func_00209A00(a0, a1, a2);
    a0 = (*(volatile u16 *) (u32) (s4 + 40));
    a1 = s3; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 48;
    if (at == 0) { (*(volatile u16 *) (u32) (s4 + 40)) = (u16) s3; goto L_00AA3CBC; }
L_00AA3C60:;
    v0 = s2 & 0xffff;
    a3 = s3 & 0xffff;
    v1 = (s32) ((u32) a3 - (u32) v0);
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    v0 = (s32) 0x10000U;
    v1 = (s32) ((u32) v1 + (u32) v0);
    v0 = 0x8001;
    v1 = v1 & 0xffff;
    a2 = v1 < v0;
    v1 = 1;
    v0 = -1;
    (*(volatile u8 *) (u32) (a0 + 45)) = (u8) a2;
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a0 = (*(volatile u8 *) (u32) (a0 + 45));
    if (a0 != 0) v1 = v0;
    v0 = (s32) ((u32) v1 << 14);
    v0 = (s32) ((u32) a3 + (u32) v0);
    (*(volatile u16 *) (u32) (s4 + 38)) = (u16) v0;
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = 4; func_00207390(a0, a1);
    goto L_00AA3B7C;
L_00AA3CBC:;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) 0; goto L_00AA3C60;
L_00AA3CC4:;
L_00AA3CC8:;
    return;
}
