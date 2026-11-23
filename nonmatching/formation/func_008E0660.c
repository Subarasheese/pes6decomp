/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_008D3F30(s32, s32, s32, s32, s32);
void func_008E13E0(s32, s32);
s32 func_008E13F0(s32);
s32 func_008E1400(s32);
s32 func_008E1410(s32);

void func_008E0660(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    { s32 c_ = s0 == 0; s2 = a1; if (c_) goto L_008E06EC; }
    a0 = (*(volatile s8 *) (u32) (s0 + 8));
    v1 = 2;
    if (a0 != v1) { ; goto L_008E06F0; }
    a0 = (s32) ((u32) s0 + 0xd4U); v0 = func_008E13F0(a0);
    (*(volatile u16 *) (u32) (sp + 76)) = (u16) v0;
    a0 = (s32) ((u32) s0 + 0xd4U); v0 = func_008E1410(a0);
    s1 = v0;
    a0 = (s32) ((u32) s0 + 0xd4U); v0 = func_008E1400(a0);
    a1 = s2;
    a3 = s1;
    a0 = (s32) ((u32) sp + 0x48U);
    a2 = 0;
    a4 = v0; v0 = func_008D3F30(a0, a1, a2, a3, a4);
    v1 = 3;
    if (v0 != v1) goto L_008E06EC;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    a1 = (*(volatile u8 *) (u32) (sp + 76));
    a0 = (s32) ((u32) s0 + 0xd4U); func_008E13E0(a0, a1);
L_008E06EC:;
L_008E06F0:;
    return;
}
