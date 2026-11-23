/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0093D180(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0093EA70(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0093EAE0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0093F090(s32, s32, s32, s32);
void func_0093F2B0(s32, s32, s32, s32);
void func_009410F0(s32, s32, s32, s32);
void func_009413C0(s32, s32, s32, s32);

void func_0093A640(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v1 = (s32) 0x540000U;
    a0 = 1;
    v1 = (*(volatile s32 *) (u32) (v1 + -15600));
    s0 = (s32) 0x540000U;
    v1 = v1 & 0x1;
    { s32 c_ = v1 != a0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_0093A678; }
    func_009413C0(a0, a1, a2, a3);
    func_009410F0(a0, a1, a2, a3);
L_0093A678:;
    a0 = (*(volatile s32 *) (u32) (s0 + 16));
    v1 = 2;
    a0 = a0 & 0x2;
    if (a0 != v1) { a0 = (*(volatile s32 *) (u32) (s0 + 16)); goto L_0093A6A8; }
    func_0093F2B0(a0, a1, a2, a3);
    func_0093F090(a0, a1, a2, a3);
    func_0093EAE0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s0 + 16));
L_0093A6A8:;
    v1 = 4;
    a0 = a0 & 0x4;
    if (a0 != v1) { a0 = (*(volatile s32 *) (u32) (s0 + 16)); goto L_0093A6CC; }
    func_0093F090(a0, a1, a2, a3);
    func_0093EA70(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s0 + 16));
L_0093A6CC:;
    v1 = 8;
    a0 = a0 & 0x8;
    if (a0 != v1) { (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0; goto L_0093A758; }
    v1 = (s32) 0x960000U;
    a0 = 5;
    a1 = (*(volatile s8 *) (u32) (v1 + 31384));
    if (a1 == a0) { a0 = 13; goto L_0093A74C; }
    a0 = 6;
    if (a1 == a0) { a0 = 11; goto L_0093A73C; }
    v1 = 7;
    if (a1 == v1) goto L_0093A72C;
    a0 = 1;
    if (a1 == a0) goto L_0093A71C;
    goto L_0093A754;
L_0093A71C:;
    v0 = func_0093D180(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0093A754;
L_0093A72C:;
    v0 = func_0093D180(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0093A754;
L_0093A73C:;
    v0 = func_0093D180(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0093A754;
L_0093A74C:;
    v0 = func_0093D180(a0, a1, a2, a3, a4, a5, a6, a7);
L_0093A754:;
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) 0;
L_0093A758:;
    return;
}
