/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00152130(s64, s64);
void func_001E6ED0(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_001E7100(s64);
void func_001EDBA0(s64, s64, s64, s64);
void func_001EDD90(s64, s64, s64, s64);
void func_001EEDA0(s64, s64);
void func_001F87B0(void);
s64 func_001F87C0(void);
s64 func_0021E000(s64);

s64 func_001B68B0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;

    v1 = 3;
    a0 = (*(volatile s8 *) (u32) (gp + -23140));
    { s32 c_ = a0 == v1; s0 = 0; if (c_) goto L_001B68E0; }
    v0 = 2;
    if (a0 == v0) { (*(volatile u8 *) (u32) (gp + -23140)) = (u8) v1; goto L_001B68E0; }
    goto L_001B69B4;
L_001B68E0:;
    v1 = (*(volatile s32 *) (u32) (gp + -23136));
    v0 = 1;
    if (v1 == v0) { a0 = 0; goto L_001B6964; }
    v0 = (*(volatile s16 *) (u32) (gp + -23144));
    v0 = (s32) ((u32) v0 + 0xffffffd6U);
    (*(volatile u16 *) (u32) (gp + -23144)) = (u16) v0;
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    if (v0 >= 0) { a1 = (*(volatile u8 *) (u32) (gp + -23144)); goto L_001B6914; }
    (*(volatile u16 *) (u32) (gp + -23144)) = (u16) 0;
    a1 = (*(volatile u8 *) (u32) (gp + -23144));
L_001B6914:;
    a0 = (*(volatile s32 *) (u32) (gp + -23148)); func_001EEDA0(a0, a1);
    v0 = (*(volatile s16 *) (u32) (gp + -23144));
    if (v0 != 0) { v0 = 1; goto L_001B69D4; }
    a1 = (*(volatile s32 *) (u32) (gp + -23148));
    if (a1 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -23152)); goto L_001B6944; }
    a0 = (*(volatile s32 *) (u32) (gp + -23152)); func_001EDBA0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -23148)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (gp + -23152));
L_001B6944:;
    if (a0 == 0) { (*(volatile u8 *) (u32) (gp + -23140)) = (u8) 0; goto L_001B695C; }
    func_001EDD90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -23152)) = (u32) 0;
    (*(volatile u8 *) (u32) (gp + -23140)) = (u8) 0;
L_001B695C:;
    s0 = 1; goto L_001B69D0;
L_001B6964:;
    a1 = 42; v0 = func_00152130(a0, a1);
    v1 = 1;
    if (v0 != v1) goto L_001B69D0;
    a1 = (*(volatile s32 *) (u32) (gp + -23148));
    if (a1 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -23152)); goto L_001B6994; }
    a0 = (*(volatile s32 *) (u32) (gp + -23152)); func_001EDBA0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -23148)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (gp + -23152));
L_001B6994:;
    if (a0 == 0) { (*(volatile u8 *) (u32) (gp + -23140)) = (u8) 0; goto L_001B69AC; }
    func_001EDD90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -23152)) = (u32) 0;
    (*(volatile u8 *) (u32) (gp + -23140)) = (u8) 0;
L_001B69AC:;
    s0 = 1; goto L_001B69D0;
L_001B69B4:;
    v0 = func_001F87C0();
    if (v0 != 0) { s0 = 1; goto L_001B69D0; }
    func_001F87B0();
    s0 = 1;
L_001B69D0:;
    v0 = 1;
L_001B69D4:;
    if (s0 != v0) { v0 = s0; goto L_001B6A18; }
    a0 = (*(volatile s32 *) (u32) (gp + -32488));
    v0 = -1;
    if (a0 == v0) goto L_001B6A14;
    v0 = func_0021E000(a0);
    a0 = v0; v0 = func_001E7100(a0);
    a1 = (*(volatile s32 *) (u32) (gp + -32484));
    a0 = v0; func_001E6ED0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = -1;
    (*(volatile u32 *) (u32) (gp + -32484)) = (u32) v0;
    (*(volatile u32 *) (u32) (gp + -32488)) = (u32) v0;
L_001B6A14:;
    v0 = s0;
L_001B6A18:;
    return v0;
}
