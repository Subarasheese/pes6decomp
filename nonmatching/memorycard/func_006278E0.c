/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6MemRegion_IsResident(s32);
s32 Pes6Module_Load(s32);
s32 func_001D5A10(s32);
void func_001D5F80(s32);
s32 func_001E7100(s32);
void func_001E7610(s32);
s32 func_001F01D0(s32);
void func_001F0590(s32);
s32 func_0021DF90(s32);
s32 func_0021E000(s32);
void func_002CADA0(s32, s32, s32, s32);
s32 func_002E8BD0(void);
void memset(s32, s32, s32);

void func_006278E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = func_002E8BD0();
    v1 = 51;
    if (v0 == v1) { v1 = 1; goto L_00627924; }
    v1 = 46;
    if (v0 == v1) goto L_00627920;
    v1 = 47;
    if (v0 == v1) goto L_00627920;
    v1 = 43;
    if (v0 != v1) { v1 = 0; goto L_00627924; }
L_00627920:;
    v1 = 1;
L_00627924:;
    if (v1 == 0) { ; goto L_00627A10; }
    a0 = (s32) ((u32) gp + 0xffffad8cU);
    a1 = 0;
    a2 = 4; memset(a0, a1, a2);
    a0 = 11; v0 = Pes6MemRegion_IsResident(a0);
    if (v0 != 0) { a0 = 356; goto L_00627980; }
    v0 = func_002E8BD0();
    v1 = 51;
    if (v0 != v1) { a0 = 35; goto L_0062796C; }
    func_002CADA0(a0, a1, a2, a3);
    a0 = 35;
L_0062796C:;
    v0 = Pes6Module_Load(a0);
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -21108)) = (u8) v0;
    a0 = 356;
L_00627980:;
    v0 = func_0021E000(a0);
    a0 = v0; v0 = func_001E7100(a0);
    if (v0 != 0) { a0 = 27; goto L_006279B4; }
    a0 = 356; v0 = func_0021E000(a0);
    a0 = v0; func_001E7610(a0);
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -21107)) = (u8) v0;
    a0 = 27;
L_006279B4:;
    v0 = func_0021DF90(a0);
    a0 = v0; v0 = func_001F01D0(a0);
    if (v0 != 0) { v0 = (s32) 0x10000U; goto L_006279E8; }
    a0 = 27; v0 = func_0021DF90(a0);
    a0 = v0; func_001F0590(a0);
    v0 = 1;
    (*(volatile u8 *) (u32) (gp + -21106)) = (u8) v0;
    v0 = (s32) 0x10000U;
L_006279E8:;
    a0 = v0 | 0x3d6; v0 = func_001D5A10(a0);
    if (v0 != 0) goto L_00627A0C;
    v0 = (s32) 0x10000U;
    a0 = v0 | 0x3d6; func_001D5F80(a0);
    v1 = 1;
    (*(volatile u8 *) (u32) (gp + -21105)) = (u8) v1;
L_00627A0C:;
L_00627A10:;
    return;
}
