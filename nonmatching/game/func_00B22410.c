/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00207390(s32, s32);
void func_00209A00(s32, s32, s32);
s32 func_009B30B0(s32, s32);
s32 func_009B32D0(s32, s32, s32);
void func_00B22630(s32, s32, s32, f32, f32);
void func_00C01E60(s32, s32, s32, s32, f32, f32);

void func_00B22410(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    at = (u64) a1 < (u64) (s64) 6;
    s1 = a0;
    { s32 c_ = at == 0; s0 = a2; if (c_) goto L_00B225D4; }
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb680U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb2244cU) goto L_00B2244C; if (t_ == 0xb224d0U) goto L_00B224D0; if (t_ == 0xb224e8U) goto L_00B224E8; if (t_ == 0xb225acU) goto L_00B225AC; if (t_ == 0xb225c4U) goto L_00B225C4; }
L_00B2244C:;
    a0 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = 144;
    v1 = (*(volatile u16 *) (u32) (a0 + 48));
    if (v1 == v0) goto L_00B22480;
    v0 = 139;
    if (v1 == v0) goto L_00B22480;
    v0 = 118;
    if (v1 == v0) goto L_00B22480;
    a1 = 382; goto L_00B2248C;
L_00B22480:;
    v0 = (*(volatile u8 *) (u32) (a0 + 45));
    s0 = v0 ^ 0x1;
    a1 = 382;
L_00B2248C:;
    a2 = 6; func_00209A00(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 4));
    a1 = 8; func_00207390(a0, a1);
    a1 = (*(volatile u16 *) (u32) (s1 + 40));
    a0 = (*(volatile u16 *) (u32) (s1 + 38)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 33;
    if (at != 0) { a0 = (*(volatile u16 *) (u32) (s1 + 40)); goto L_00B22604; }
L_00B224BC:;
    v1 = 16;
    v0 = 98;
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v1;
    (*(volatile u16 *) (u32) (s1 + 24)) = (u16) v0; goto L_00B225D4;
L_00B224D0:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    a2 = (*(volatile u8 *) (u32) (v0 + 45));
    a1 = 4; func_00B22630(a0, a1, a2, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) (s1 + 4)); goto L_00B225D8;
L_00B224E8:;
    a2 = (*(volatile u16 *) (u32) (s1 + 40));
    v1 = (s32) 0x10000U;
    a3 = (*(volatile u16 *) (u32) (s1 + 38));
    a1 = 0x8001;
    a0 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = 143;
    a2 = (s32) ((u32) a2 - (u32) a3);
    a2 = (s32) ((u32) a2 + (u32) v1);
    v1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = a2 & 0xffff;
    { s32 c_ = v1 == v0; s0 = a2 < a1; if (c_) goto L_00B22554; }
    v0 = 138;
    if (v1 == v0) { v1 = 1; goto L_00B22538; }
    v0 = 142;
    if (v1 == v0) goto L_00B2257C;
    v1 = 1; goto L_00B22560;
L_00B22538:;
    v0 = -1;
    if (s0 != 0) v1 = v0;
    v0 = (s32) ((u32) v1 << 12);
    v0 = v0 & 0xffff;
    v0 = (s32) ((u32) a3 - (u32) v0);
    (*(volatile u16 *) (u32) (s1 + 38)) = (u16) v0; goto L_00B2257C;
L_00B22554:;
    v0 = (*(volatile u8 *) (u32) (a0 + 45));
    s0 = v0 ^ 0x1; goto L_00B2257C;
L_00B22560:;
    v0 = -1;
    if (s0 != 0) v1 = v0;
    v0 = (*(volatile u16 *) (u32) (s1 + 38));
    v1 = (s32) ((u32) v1 << 14);
    v1 = v1 & 0xffff;
    v0 = (s32) ((u32) v0 - (u32) v1);
    (*(volatile u16 *) (u32) (s1 + 38)) = (u16) v0;
L_00B2257C:;
    a0 = (*(volatile s32 *) (u32) (s1 + 4));
    a1 = 383;
    a2 = 0; func_00209A00(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s1 + 4));
    a1 = 8; func_00207390(a0, a1);
    v1 = 16;
    v0 = 99;
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v1;
    (*(volatile u16 *) (u32) (s1 + 24)) = (u16) v0; goto L_00B225D4;
L_00B225AC:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    a2 = (*(volatile u8 *) (u32) (v0 + 45));
    a1 = 0; func_00B22630(a0, a1, a2, f12.f, f13.f);
    goto L_00B225D4;
L_00B225C4:;
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    a2 = (*(volatile u8 *) (u32) (v0 + 45));
    a1 = 0; func_00C01E60(a0, a1, a2, a3, f12.f, f13.f);
L_00B225D4:;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
L_00B225D8:;
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 10));
    at = v1 < v0;
    if (at != 0) { (*(volatile u32 *) (u32) (s1 + 32)) = (u32) v0; goto L_00B225F4; }
    (*(volatile u32 *) (u32) (s1 + 28)) = (u32) v1;
L_00B225F4:;
    v1 = (*(volatile s32 *) (u32) (s1 + 4));
    v0 = 1;
    (*(volatile u8 *) (u32) (v1 + 45)) = (u8) s0; goto L_00B22618;
L_00B22604:;
    a1 = (*(volatile u16 *) (u32) (s1 + 38));
    a2 = 6144; v0 = func_009B32D0(a0, a1, a2);
    (*(volatile u16 *) (u32) (s1 + 38)) = (u16) v0; goto L_00B224BC;
L_00B22618:;
    return;
}
