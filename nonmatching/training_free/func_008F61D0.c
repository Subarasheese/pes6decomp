/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6MatchFlow_SetState(s32, s32, s32, s32);
void func_0022F0A0(void);
s32 func_002631B0(void);
void func_0099B4F0(s32, s32, s32, s32);
void func_00B29C10(s32, s32, s32, s32);

void func_008F61D0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    a0 = 0;
    a1 = 0; Pes6MatchFlow_SetState(a0, a1, a2, a3);
    a0 = 0; func_00B29C10(a0, a1, a2, a3);
    v1 = 2047;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 8844)) = (u32) v1; v0 = func_002631B0();
    v1 = 1;
    if (v0 != v1) goto L_008F6218;
    v1 = 2047;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 8848)) = (u32) v1; goto L_008F6220;
L_008F6218:;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 8848)) = (u32) v1;
L_008F6220:;
    func_0099B4F0(a0, a1, a2, a3);
    a0 = (s32) 0x590000U;
    v1 = 0;
    a0 = (s32) ((u32) a0 + 0xb0U);
L_008F6234:;
    (*(volatile u8 *) (u32) (a0 + 477)) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0x5U);
    (*(volatile u8 *) (u32) (a0 + 1053)) = (u8) 0;
    v0 = (u64) v1 < (u64) (s64) 6;
    (*(volatile u8 *) (u32) (a0 + 1629)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 2205)) = (u8) 0;
    (*(volatile u8 *) (u32) (a0 + 2781)) = (u8) 0;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0xb40U); if (c_) goto L_008F6234; }
    v0 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (a0 + 477)) = (u8) 0;
    (*(volatile u32 *) (u32) (v0 + 14384)) = (u32) 0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 14372)) = (u32) 0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 14376)) = (u32) 0;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v0 + 14380)) = (u32) 0; v0 = func_002631B0();
    v1 = 1;
    if (v0 != v1) { ; goto L_008F6298; }
    func_0022F0A0();
L_008F6298:;
    return;
}
