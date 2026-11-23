/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
s32 Pes6TeamAssets_Poll(s32, s32, s32, s32);
void Pes6TeamAssets_Reset(void);
void func_001A58E0(s32, s32);
void func_0020B660(s32);
void func_0020C240(s32, s32, s32, s32);
s32 func_0020C2C0(void);
void func_0020C370(s32, s32, s32, s32);
s32 func_00266430(s32, s32, s32, s32);
void func_00266730(s32, s32, s32, s32);
void func_002667C0(s32, s32, s32, s32);

s32 func_001BD800(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v1 = (*(volatile s32 *) (u32) (gp + -23112));
    v0 = 4;
    { s32 c_ = v1 == v0; s0 = 0; if (c_) goto L_001BD8E8; }
    v0 = 3;
    if (v1 == v0) goto L_001BD8B4;
    v0 = 2;
    if (v1 == v0) goto L_001BD87C;
    v0 = 1;
    if (v1 == v0) goto L_001BD864;
    Pes6TeamAssets_Reset();
    func_002667C0(a0, a1, a2, a3);
    a0 = 0; func_0020B660(a0);
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -23112)) = (u32) v0; goto L_001BD954;
L_001BD864:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) { v0 = s0; goto L_001BD958; }
    v0 = 2;
    (*(volatile u32 *) (u32) (gp + -23112)) = (u32) v0;
L_001BD87C:;
    v0 = func_00266430(a0, a1, a2, a3);
    if (v0 != 0) goto L_001BD89C;
    func_0020C370(a0, a1, a2, a3);
    goto L_001BD954;
L_001BD89C:;
    Pes6TeamAssets_Reset();
    a0 = 0; func_0020B660(a0);
    v0 = 3;
    (*(volatile u32 *) (u32) (gp + -23112)) = (u32) v0;
L_001BD8B4:;
    v0 = func_0020C2C0();
    if (v0 == 0) { v0 = 4; goto L_001BD8E0; }
    v0 = Pes6TeamAssets_Poll(a0, a1, a2, a3);
    if (v0 == 0) goto L_001BD8DC;
    a0 = 1; func_0020B660(a0);
L_001BD8DC:;
    v0 = 4;
L_001BD8E0:;
    (*(volatile u32 *) (u32) (gp + -23112)) = (u32) v0; goto L_001BD954;
L_001BD8E8:;
    func_00266730(a0, a1, a2, a3);
    func_0020C240(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -23112)) = (u32) 0;
    s0 = 1;
    v0 = 255;
L_001BD904:;
    if (s0 == v0) { a0 = 1; goto L_001BD918; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s0 / (s32) v0); hi = (s32) ((s32) s0 % (s32) v0); lo = q_; }
    a0 = hi;
L_001BD918:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_001A58E0(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    at = s0 < 23;
    if (at != 0) { v0 = 255; goto L_001BD904; }
    s0 = 1;
L_001BD954:;
    v0 = s0;
L_001BD958:;
    return v0;
}
