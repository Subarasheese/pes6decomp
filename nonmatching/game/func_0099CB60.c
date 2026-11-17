/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002DCA30(void);
void func_00849070(s32, s32, s32, s32);
void func_00849130(s32, s32, s32, s32);
s32 func_0099CC40(s32);
s32 func_00AFBAB0(s32);

s32 func_0099CB60(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[32];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s0 = (s32) 0xca0000U;
    s0 = (s32) ((u32) s0 + 0xffffa3a0U); v0 = func_002DCA30();
    if (v0 == 0) goto L_0099CB94;
    a0 = (s32) ((u32) sp + 0x40U); func_00849130(a0, a1, a2, a3);
L_0099CB94:;
    a0 = s2; v0 = func_0099CC40(a0);
    s1 = v0 & 0xff;
    v0 = 255;
    if (s1 != v0) { a0 = (*(volatile u8 *) (u32) s2); goto L_0099CBE0; }
    a0 = (*(volatile u8 *) (u32) s2); v0 = func_00AFBAB0(a0);
    s1 = v0 & 0xff;
L_0099CBB8:;
    v1 = (*(volatile u8 *) (u32) (s0 + 4));
    v0 = (*(volatile u8 *) (u32) s0);
    if (v1 != v0) { v0 = 1; goto L_0099CC10; }
L_0099CBC8:;
    v0 = func_002DCA30();
    if (v0 != 0) { a0 = (s32) ((u32) sp + 0x40U); goto L_0099CC18; }
L_0099CBD8:;
    v0 = s1; goto L_0099CC28;
L_0099CBE0:;
    v0 = func_00AFBAB0(a0);
    v1 = (*(volatile u8 *) (u32) (s0 + 4));
    v0 = v0 & 0xff;
    a0 = (s32) ((u32) s1 - (u32) v0);
    v0 = 255;
    { s32 c_ = v1 != v0; (*(volatile u8 *) (u32) s0) = (u8) a0; if (c_) goto L_0099CBB8; }
    v0 = (*(volatile u8 *) (u32) s0);
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) v0; goto L_0099CBB8;
L_0099CC10:;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v0; goto L_0099CBC8;
L_0099CC18:;
    func_00849070(a0, a1, a2, a3);
    goto L_0099CBD8;
L_0099CC28:;
    return v0;
}
