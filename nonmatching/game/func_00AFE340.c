/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00207390(s32, s32);
void func_00209A00(s32, s32, s32);
s32 func_009B30B0(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);

s32 func_00AFE340(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 707;
    s4 = a0;
    s3 = a1;
    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    { s32 c_ = v1 == v0; s2 = a2; if (c_) goto L_00AFE440; }
    v0 = 422;
    if (v1 == v0) goto L_00AFE440;
    v0 = 421;
    if (v1 == v0) goto L_00AFE440;
    v0 = 420;
    if (v1 == v0) goto L_00AFE440;
    v0 = 700;
    if (v1 == v0) goto L_00AFE440;
    if (v1 == 0) goto L_00AFE440;
    v0 = 978;
    if (v1 == v0) goto L_00AFE440;
    v0 = 299;
    if (v1 == v0) goto L_00AFE440;
    v0 = 296;
    if (v1 == v0) goto L_00AFE440;
    v0 = 294;
    if (v1 == v0) goto L_00AFE440;
    v0 = 292;
    if (v1 == v0) goto L_00AFE440;
    v0 = 290;
    if (v1 == v0) goto L_00AFE440;
    v0 = 287;
    if (v1 == v0) goto L_00AFE440;
    v0 = 285;
    if (v1 == v0) goto L_00AFE440;
    v0 = 283;
    if (v1 == v0) goto L_00AFE440;
    v0 = 193;
    if (v1 == v0) goto L_00AFE440;
    v0 = 276;
    if (v1 == v0) goto L_00AFE440;
    v0 = 0; goto L_00AFE648;
L_00AFE440:;
    a0 = s3;
    a1 = s2; v0 = func_009B30B0(a0, a1);
    a1 = (*(volatile u16 *) (u32) (s4 + 40));
    s0 = v0 & 0xffff;
    a0 = s3; v0 = func_009B30B0(a0, a1);
    a1 = (*(volatile u16 *) (u32) (s4 + 66));
    s1 = v0 & 0xffff;
    a0 = s2; v0 = func_009B30B0(a0, a1);
    s0 = s0 & 0xffff;
    at = s0 < 80;
    { s32 c_ = at == 0; s5 = v0 & 0xffff; if (c_) goto L_00AFE598; }
    v0 = s0 < 32;
    if (v0 != 0) { v1 = s1 & 0xffff; goto L_00AFE540; }
    v0 = s5 & 0xffff;
    v0 = v0 < 96;
    if (v0 != 0) goto L_00AFE57C;
    a0 = (*(volatile u16 *) (u32) (s4 + 38));
    a1 = s3; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 33;
    if (at == 0) goto L_00AFE57C;
    v0 = s0 < 32;
    if (v0 != 0) goto L_00AFE57C;
    at = s0 < 97;
    if (at == 0) goto L_00AFE57C;
    a3 = (*(volatile u16 *) (u32) (s4 + 40));
    a1 = (s32) 0x10000U;
    a2 = (*(volatile u16 *) (u32) (s4 + 38));
    a0 = 0x8001;
    v1 = (*(volatile s32 *) (u32) (s4 + 4));
    v0 = 3;
    a2 = (s32) ((u32) a3 - (u32) a2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a1 = a1 & 0xffff;
    a0 = a1 < a0;
    (*(volatile u8 *) (u32) (v1 + 45)) = (u8) a0;
    (*(volatile u8 *) (u32) (s4 + 65)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s4 + 28));
    at = v0 < 5376;
    if (at == 0) { a0 = (*(volatile s32 *) (u32) (s4 + 4)); goto L_00AFE5E4; }
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = 276;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    v0 = (*(volatile u8 *) (u32) (v0 + 2));
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + 0x4U);
    a2 = v0 & 0xffff; func_00209A00(a0, a1, a2);
L_00AFE52C:;
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = 4; func_00207390(a0, a1);
    v0 = 1; goto L_00AFE648;
L_00AFE540:;
    v0 = v1 < 32;
    if (v0 != 0) goto L_00AFE57C;
    at = v1 < 97;
    if (at == 0) goto L_00AFE57C;
    a0 = (*(volatile u16 *) (u32) (s4 + 38));
    a1 = s3; v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 32;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s4 + 4)); goto L_00AFE620; }
    v0 = 0; goto L_00AFE648;
L_00AFE57C:;
    v0 = s5 & 0xffff;
    at = v0 < 81;
    if (at == 0) { v0 = 0; goto L_00AFE590; }
    v0 = 255;
L_00AFE590:;
    goto L_00AFE64C;
L_00AFE598:;
    v0 = s1 & 0xffff;
    at = v0 < 33;
    if (at == 0) { a0 = (*(volatile s32 *) (u32) (s4 + 4)); goto L_00AFE5CC; }
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = 289;
    a2 = 4; func_00209A00(a0, a1, a2);
L_00AFE5B8:;
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = 4; func_00207390(a0, a1);
    v0 = 1; goto L_00AFE648;
L_00AFE5CC:;
    a1 = 282;
    a2 = 0; func_00209A00(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s4 + 28));
    (*(volatile u32 *) (u32) (s4 + 32)) = (u32) v0; goto L_00AFE5B8;
L_00AFE5E4:;
    a1 = 295;
    a2 = 0; func_00209A00(a0, a1, a2);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (*(volatile u8 *) (u32) (v0 + 9952));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    f12.f = (*(volatile f32 *) (u32) (v0 + 1148));
    f13.f = (*(volatile f32 *) (u32) (v0 + 2940));
    a0 = s4; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    (*(volatile u16 *) (u32) (s4 + 52)) = (u16) v0;
    (*(volatile u16 *) (u32) (s4 + 54)) = (u16) s2; goto L_00AFE52C;
L_00AFE620:;
    a1 = 303;
    a2 = 0; func_00209A00(a0, a1, a2);
    (*(volatile u16 *) (u32) (s4 + 52)) = (u16) s3;
    v0 = (*(volatile s32 *) (u32) (s4 + 28));
    (*(volatile u32 *) (u32) (s4 + 32)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = 2; func_00207390(a0, a1);
    v0 = 1;
L_00AFE648:;
L_00AFE64C:;
    return v0;
}
