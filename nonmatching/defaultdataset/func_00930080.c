/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
s32 func_0017F8A0(s32);
s32 func_0021DF90(s32);
s32 func_0021FDC0(void);
void func_0021FE50(s32);
void func_002CB600(s32, s32, s32, s32);
void func_002CD170(s32, s32, s32, s32);
void func_009301F0(void);
void func_009303B0(s32, s32, s32, s32);
void func_00930630(s32, s32, s32, s32, s32, s32, s32);
void func_00930D50(s32, s32, s32, s32);
s32 func_00930F20(s32, s32, s32, s32);
s32 func_00931220(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00930080(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v0 = (*(volatile s32 *) (u32) (gp + -18172));
    at = (u64) v0 < (u64) (s64) 7;
    s1 = a0;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_009300C0; }
    v1 = (s32) 0x9d0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffa800U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x9300c0U) goto L_009300C0; if (t_ == 0x9300f8U) goto L_009300F8; if (t_ == 0x93013cU) goto L_0093013C; if (t_ == 0x930170U) goto L_00930170; if (t_ == 0x930194U) goto L_00930194; if (t_ == 0x9301bcU) goto L_009301BC; if (t_ == 0x9301ccU) goto L_009301CC; }
L_009300C0:;
    if (s1 != 0) { a0 = 12; goto L_009300D4; }
    func_009303B0(a0, a1, a2, a3);
    a0 = 12;
L_009300D4:;
    func_002CB600(a0, a1, a2, a3);
    a0 = 12; func_0021FE50(a0);
    func_00930D50(a0, a1, a2, a3);
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -18172)) = (u32) v0; goto L_009301D4;
L_009300F8:;
    v0 = func_0021FDC0();
    if (v0 != 0) { a0 = 0; goto L_00930110; }
    v0 = 0; goto L_0093012C;
L_00930110:;
    v0 = func_0021DF90(a0);
    a0 = v0; v0 = func_0017F8A0(a0);
    if (v0 != 0) { v0 = 1; goto L_0093012C; }
    v0 = 0;
L_0093012C:;
    if (v0 == 0) { v0 = s0; goto L_009301D8; }
    v0 = 2;
    (*(volatile u32 *) (u32) (gp + -18172)) = (u32) v0;
L_0093013C:;
    if (s1 != 0) goto L_00930148;
    (*(volatile u32 *) (u32) (gp + -32424)) = (u32) 0;
L_00930148:;
    func_00930630(a0, a1, a2, a3, a4, a5, a6);
    if (s1 != 0) { v0 = 3; goto L_00930168; }
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -32424)) = (u32) v0; func_009301F0();
    v0 = 3;
L_00930168:;
    (*(volatile u32 *) (u32) (gp + -18172)) = (u32) v0; goto L_009301D4;
L_00930170:;
    v0 = func_00931220(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_009301D4;
    a0 = 5; func_002CD170(a0, a1, a2, a3);
    v0 = 4;
    (*(volatile u32 *) (u32) (gp + -18172)) = (u32) v0; goto L_009301D4;
L_00930194:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_009301D4;
    if (s1 == 0) { v0 = 5; goto L_009301B8; }
    v0 = 6;
    (*(volatile u32 *) (u32) (gp + -18172)) = (u32) v0; goto L_009301D4;
L_009301B8:;
    (*(volatile u32 *) (u32) (gp + -18172)) = (u32) v0;
L_009301BC:;
    v0 = func_00930F20(a0, a1, a2, a3);
    if (v0 == 0) goto L_009301D4;
L_009301CC:;
    (*(volatile u32 *) (u32) (gp + -18172)) = (u32) 0;
    s0 = 1;
L_009301D4:;
    v0 = s0;
L_009301D8:;
    return v0;
}
