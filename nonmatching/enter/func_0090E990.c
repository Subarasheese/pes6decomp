/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001863D0(void);
void func_00186550(s32);
void func_0018C1B0(s32);
void func_001A3800(s32);
void func_001DD560(s32, s32, s32, s32);
void func_00255F30(s32, s32, s32, s32);
void func_00342AB0(s32, s32, s32, s32);
void func_0035A290(s32, s32, s32, s32);
void func_00900420(s32, s32, s32, s32);
void func_009090B0(void);
void func_0090A050(void);
void func_009179C0(s32, s32, s32, s32);

s32 func_0090E990(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0;

    func_009179C0(a0, a1, a2, a3);
    a0 = 1; func_001A3800(a0);
    v0 = (s32) 0x20000U;
    a0 = v0 | 0x1c9e; func_00186550(a0);
    func_001863D0();
    a0 = 4; func_0018C1B0(a0);
    func_0090A050();
    func_009090B0();
    func_00900420(a0, a1, a2, a3);
    func_0035A290(a0, a1, a2, a3);
    func_00342AB0(a0, a1, a2, a3);
    func_00255F30(a0, a1, a2, a3);
    a0 = 33; func_001DD560(a0, a1, a2, a3);
    a0 = 24; func_001DD560(a0, a1, a2, a3);
    v0 = 1;
    return v0;
}
