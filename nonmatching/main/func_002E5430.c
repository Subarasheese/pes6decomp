/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00257000(s64, s64);
void func_002E5A90(s64, s64, s64, s64, s64, s64, s64, s64);
void func_002E6390(s64);
void func_002E69E0(s64);
void func_002E7360(s64, s64, s64, s64, s64, s64, s64, s64);
void func_002E75F0(s64, s64, s64, s64);
void func_002E77F0(s64, s64);
void func_002E79A0(s64, s64);

void func_002E5430(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s0 = a0;
    if (s0 == 0) { ; goto L_002E5634; }
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    at = (u64) v1 < (u64) (s64) 7;
    if (at == 0) goto L_002E5630;
    a1 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0xffffc710U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x2e5478U) goto L_002E5478; if (t_ == 0x2e5488U) goto L_002E5488; if (t_ == 0x2e5504U) goto L_002E5504; if (t_ == 0x2e5514U) goto L_002E5514; if (t_ == 0x2e5588U) goto L_002E5588; if (t_ == 0x2e55fcU) goto L_002E55FC; if (t_ == 0x2e560cU) goto L_002E560C; }
L_002E5478:;
    func_002E7360(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_002E5630;
L_002E5488:;
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 16));
    if (a0 != 0) { v0 = (*(volatile s32 *) (u32) (v0 + 20)); goto L_002E54A4; }
    s1 = 0;
    v0 = 0; goto L_002E54DC;
L_002E54A4:;
    if (v0 != 0) { a1 = (*(volatile s32 *) (u32) (s0 + 12)); goto L_002E54C0; }
    a1 = (*(volatile s32 *) (u32) (s0 + 12)); v0 = func_00257000(a0, a1);
    s1 = v0;
    v0 = 0; goto L_002E54DC;
L_002E54C0:;
    v0 = func_00257000(a0, a1);
    s1 = v0;
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 20));
    a1 = (*(volatile s32 *) (u32) (s0 + 12)); v0 = func_00257000(a0, a1);
L_002E54DC:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) s1;
    a0 = s0;
    (*(volatile u32 *) (u32) (s0 + 64)) = (u32) v0;
    a1 = 0; func_002E77F0(a0, a1);
    a0 = s0;
    a1 = 1; func_002E77F0(a0, a1);
    goto L_002E5630;
L_002E5504:;
    func_002E69E0(a0);
    goto L_002E5630;
L_002E5514:;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = (*(volatile s32 *) (u32) (v0 + 16));
    if (v1 != 0) { v0 = (*(volatile s32 *) (u32) (v0 + 20)); goto L_002E5530; }
    a0 = 0;
    v1 = 0; goto L_002E5560;
L_002E5530:;
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (v1 + 1)); goto L_002E554C; }
    v0 = (*(volatile u8 *) (u32) (v1 + 1));
    v0 = (s64) ((u64) v0 << 56);
    v1 = 0;
    a0 = (s64) ((u64) v0 >> 60); goto L_002E5560;
L_002E554C:;
    v0 = (*(volatile u8 *) (u32) (v0 + 1));
    v1 = (s64) ((u64) v1 << 56);
    a0 = (s64) ((u64) v1 >> 60);
    v0 = (s64) ((u64) v0 << 56);
    v1 = (s64) ((u64) v0 >> 60);
L_002E5560:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) a0;
    a1 = 0;
    a0 = s0;
    (*(volatile u32 *) (u32) (s0 + 64)) = (u32) v1; func_002E75F0(a0, a1, a2, a3);
    a0 = s0;
    a1 = 1; func_002E75F0(a0, a1, a2, a3);
    goto L_002E5630;
L_002E5588:;
    v0 = (*(volatile s32 *) (u32) s0);
    v1 = (*(volatile s32 *) (u32) (v0 + 16));
    if (v1 != 0) { v0 = (*(volatile s32 *) (u32) (v0 + 20)); goto L_002E55A4; }
    a0 = 0;
    v1 = 0; goto L_002E55D4;
L_002E55A4:;
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (v1 + 28)); goto L_002E55C0; }
    v0 = (*(volatile u8 *) (u32) (v1 + 28));
    v0 = (s64) ((u64) v0 << 56);
    v1 = 0;
    a0 = (s64) ((u64) v0 >> 62); goto L_002E55D4;
L_002E55C0:;
    v0 = (*(volatile u8 *) (u32) (v0 + 28));
    v1 = (s64) ((u64) v1 << 56);
    a0 = (s64) ((u64) v1 >> 62);
    v0 = (s64) ((u64) v0 << 56);
    v1 = (s64) ((u64) v0 >> 62);
L_002E55D4:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) a0;
    a1 = 0;
    a0 = s0;
    (*(volatile u32 *) (u32) (s0 + 64)) = (u32) v1; func_002E79A0(a0, a1);
    a0 = s0;
    a1 = 1; func_002E79A0(a0, a1);
    goto L_002E5630;
L_002E55FC:;
    func_002E6390(a0);
    goto L_002E5630;
L_002E560C:;
    s1 = 0;
L_002E5610:;
    a0 = s0;
    a1 = s1; func_002E5A90(a0, a1, a2, a3, a4, a5, a6, a7);
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 2;
    if (v1 != 0) goto L_002E5610;
L_002E5630:;
L_002E5634:;
    return;
}
