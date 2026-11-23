/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008C5230(s32, s32, s32, s32, f32);
void func_008D1DD0(s32, s32, s32, s32);
void func_008D1E50(s32, s32);
void func_008D1F40(s32, s32);
void func_008D2080(s32, s32);
void func_008D2950(s32);
void func_008D2BB0(s32, s32, s32, s32);

void func_008C9800(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    s0 = a1;
    a0 = (s32) ((u32) s1 + 0x35cU); func_008D2950(a0);
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 2;
    a2 = s0; func_008C5230(a0, a1, a2, a3, f12.f);
    if (s0 != 0) { a2 = 0; goto L_008C9840; }
    a2 = 1;
L_008C9840:;
    a0 = (s32) ((u32) s1 + 0x35cU);
    a1 = (s32) ((u32) sp + 0x30U);
    a3 = 1; func_008D2BB0(a0, a1, a2, a3);
    a0 = (s32) ((u32) s1 + 0x35cU);
    a1 = 1; func_008D1E50(a0, a1);
    a0 = (s32) ((u32) s1 + 0x35cU);
    a1 = 10; func_008D2080(a0, a1);
    a0 = (s32) ((u32) s1 + 0x35cU);
    a1 = 11; func_008D1F40(a0, a1);
    a0 = (s32) ((u32) s1 + 0x35cU);
    a1 = 1; func_008D1DD0(a0, a1, a2, a3);
    return;
}
