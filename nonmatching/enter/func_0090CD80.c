/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
void func_001A58E0(s32, s32);
void func_00909DB0(s32, s32, s32, s32);
void func_00909E60(s32, s32, s32, s32);
void func_00BA1950(s32, s32, s32, s32);
void func_00BA19C0(s32, s32, s32, s32);

void func_0090CD80(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x930000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -4030));
    s0 = (s32) 0x590000U;
    at = (u64) v0 < (u64) (s64) 10;
    { s32 c_ = at == 0; s0 = (s32) ((u32) s0 + 0xffffe5b0U); if (c_) goto L_0090CEC8; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffdb90U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x90cdc0U) goto L_0090CDC0; if (t_ == 0x90cde8U) goto L_0090CDE8; if (t_ == 0x90ce20U) goto L_0090CE20; if (t_ == 0x90ce68U) goto L_0090CE68; if (t_ == 0x90ce70U) goto L_0090CE70; if (t_ == 0x90ce90U) goto L_0090CE90; if (t_ == 0x90cec0U) goto L_0090CEC0; if (t_ == 0x90cec8U) goto L_0090CEC8; }
L_0090CDC0:;
    v0 = 2;
    if (a0 != v0) { v1 = 7; goto L_0090CDDC; }
    v1 = 1;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1; goto L_0090CEC8;
L_0090CDDC:;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1; goto L_0090CEC8;
L_0090CDE8:;
    a0 = s0; func_00BA19C0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v0 + 44)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile u8 *) (u32) (v0 + 44)); func_001A58E0(a0, a1);
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -4030));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1; goto L_0090CEC8;
L_0090CE20:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) { v0 = 0; goto L_0090CECC; }
    a0 = s0; func_00BA1950(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u8 *) (u32) (v0 + 44)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile u8 *) (u32) (v0 + 44)); func_001A58E0(a0, a1);
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -4030));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1; goto L_0090CEC8;
L_0090CE68:;
    v0 = 1; goto L_0090CECC;
L_0090CE70:;
    func_00909E60(a0, a1, a2, a3);
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -4030));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1; goto L_0090CEC8;
L_0090CE90:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_0090CEC8;
    func_00909DB0(a0, a1, a2, a3);
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -4030));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1; goto L_0090CEC8;
L_0090CEC0:;
    v0 = 1; goto L_0090CECC;
L_0090CEC8:;
    v0 = 0;
L_0090CECC:;
    return;
}
