/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00103E80(s64, s64);
s64 func_00129BE0(s64, s64, s64, s64);
void func_00141BA0(void);
void func_00142B80(s64, s64, s64, s64);
void func_00143140(void);
void func_00144860(void);
void func_00144BC0(void);
void sceVu0CopyMatrix(s64, s64);

void func_00142A60(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0;
    u64 qh_v0 = 0;
    s64 frame[6];
    s64 sp = (s32) (u32) frame;

    a0 = 2;
    a1 = 1; func_00144BC0();
    func_00144860();
    func_00141BA0();
    func_00142B80(a0, a1, a2, a3);
    v0 = func_00129BE0(a0, a1, a2, a3);
    a0 = (s32) 0x500000U;
    a1 = v0;
    a0 = (s32) ((u32) a0 + 0xffffdec0U); sceVu0CopyMatrix(a0, a1);
    v0 = (s32) 0x400000U;
    a1 = (s32) ((u32) sp + 0x20U);
    { u32 a_ = (u32) (v0 + -20320) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) ((u32) sp + 0x10U);
    { u32 a_ = (u32) (sp + 32) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } func_00103E80(a0, a1);
    a0 = (*(volatile s32 *) (u32) (sp + 20));
    v0 = (s32) 0x500000U;
    a1 = (*(volatile s32 *) (u32) (sp + 24));
    v1 = (*(volatile s32 *) (u32) (sp + 16));
    a0 = (s32) ((u32) a0 << 8);
    a1 = (s32) ((u32) a1 << 16);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) a1 + (u32) v1);
    (*(volatile u32 *) (u32) (v0 + -8440)) = (u32) v1; func_00143140();
    return;
}
