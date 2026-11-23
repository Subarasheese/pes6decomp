/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B4BF0(s32);
void func_001B4C50(s32);
void func_001EDAE0(s32, s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002DF8E0(s32, s32, s32, s32);
void func_002E3210(s32, s32);
void func_002E4400(s32, s32, s32, s32);
void func_002F2ED0(s32, s32, s32, s32, f32);
void func_002F39A0(s32);
void func_002F3A00(s32);
void func_002F4D80(s32, s32);
void func_008B2E50(s32, s32, s32, s32);
void func_008B31A0(s32, s32, s32, s32);

void func_00940E60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    s1 = (s32) 0x540000U;
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    s0 = a0;
    a1 = s0;
    a0 = (*(volatile s32 *) (u32) (v0 + 24));
    s1 = (s32) ((u32) s1 + 0xffffc300U); func_008B31A0(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 31384));
    at = (u64) v0 < (u64) (s64) 9;
    if (at == 0) { a0 = (*(volatile s32 *) (u32) (gp + -18336)); goto L_00940FCC; }
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6820U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x940ec4U) goto L_00940EC4; if (t_ == 0x940ee8U) goto L_00940EE8; if (t_ == 0x940f00U) goto L_00940F00; if (t_ == 0x940f34U) goto L_00940F34; if (t_ == 0x940f68U) goto L_00940F68; if (t_ == 0x940f80U) goto L_00940F80; if (t_ == 0x940fc8U) goto L_00940FC8; }
L_00940EC4:;
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a0 = (*(volatile s32 *) (u32) (v0 + 28));
    a1 = s0; func_008B31A0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18340));
    a1 = s0 & 0xff; func_002E4400(a0, a1, a2, a3);
    goto L_00940FC8;
L_00940EE8:;
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a0 = (*(volatile s32 *) (u32) (v0 + 32));
    a1 = s0; func_008B31A0(a0, a1, a2, a3);
    goto L_00940FC8;
L_00940F00:;
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a0 = (*(volatile s32 *) (u32) (v0 + 36));
    a1 = s0; func_008B31A0(a0, a1, a2, a3);
    v0 = 1;
    if (s0 != v0) goto L_00940FC8;
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a0 = (*(volatile s32 *) (u32) (v0 + 24));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    goto L_00940FC8;
L_00940F34:;
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a0 = (*(volatile s32 *) (u32) (v0 + 44));
    a1 = s0; func_008B31A0(a0, a1, a2, a3);
    v0 = 1;
    if (s0 != v0) goto L_00940FC8;
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a0 = (*(volatile s32 *) (u32) (v0 + 24));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    goto L_00940FC8;
L_00940F68:;
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a0 = (*(volatile s32 *) (u32) (v0 + 48));
    a1 = s0; func_008B31A0(a0, a1, a2, a3);
    goto L_00940FC8;
L_00940F80:;
    v0 = 1;
    if (s0 != v0) goto L_00940FA0;
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32316)); func_002F3A00(a0);
    goto L_00940FAC;
L_00940FA0:;
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32316)); func_002F39A0(a0);
L_00940FAC:;
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32316));
    a1 = s0 & 0xff; func_002F4D80(a0, a1);
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32316)); func_002F2ED0(a0, a1, a2, a3, f12.f);
L_00940FC8:;
    a0 = (*(volatile s32 *) (u32) (gp + -18336));
L_00940FCC:;
    a1 = s0 & 0xff; func_002DF8E0(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    v1 = 1;
    v0 = (*(volatile s8 *) (u32) (v0 + 31384));
    if (v0 != v1) { s2 = 66; goto L_00941060; }
    s3 = 38;
    s2 = 152;
L_00940FF0:;
    v0 = (*(volatile s32 *) (u32) (s1 + 20));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_008B2E50(a0, a1, a2, a3);
    s3 = (s32) ((u32) s3 + 0x1U);
    at = s3 < 52;
    { s32 c_ = at != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_00940FF0; }
    a0 = (*(volatile s32 *) (u32) (gp + -18344));
    a1 = s0 & 0xff; func_001EDAE0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -18352));
    a1 = s0 & 0xff; func_002E3210(a0, a1);
    v0 = 1;
    if (s0 != v0) goto L_0094104C;
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32240)); func_001B4BF0(a0);
    goto L_00941094;
L_0094104C:;
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32240)); func_001B4C50(a0);
    goto L_00941094;
L_00941060:;
    s3 = 264;
L_00941064:;
    v0 = (*(volatile s32 *) (u32) (s1 + 20));
    v0 = (s32) ((u32) v0 + (u32) s3);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_008B2E50(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s2 < 80;
    { s32 c_ = at != 0; s3 = (s32) ((u32) s3 + 0x4U); if (c_) goto L_00941064; }
    a0 = (*(volatile s32 *) (u32) (gp + -18344));
    a1 = 0; func_001EDAE0(a0, a1);
L_00941094:;
    v1 = (s32) 0x960000U;
    a0 = 7;
    v1 = (*(volatile s8 *) (u32) (v1 + 31384));
    if (v1 != a0) { ; goto L_009410D0; }
    v0 = 1;
    if (s0 != v0) { a0 = 2; goto L_009410C4; }
    a0 = 26; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_009410CC;
L_009410C4:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
L_009410CC:;
L_009410D0:;
    return;
}
