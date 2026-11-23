/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6File_AllChannelsIdle(void);
void Pes6MatchContext_SetByteC08(s64);
void Pes6MemRegion_Release(s64);
s64 Pes6Module_Load(s64);
void func_00147F90(s64, s64, s64, s64, s64, s64, s64, s64);
void func_0020CFB0(s64, s64, s64, s64);
void func_00266A30(s64, s64, s64, s64, s64, s64, s64, s64);
void func_00270580(s64);
void func_002CB600(s64, s64, s64, s64);
void func_002D9230(s64, s64, s64, s64, s64, s64, s64, s64);
void func_00342340(void);
void func_009A24A0(s64);
s64 func_009A2A80(void);
void func_00C74810(void);

s64 func_00360B40(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;

    v0 = 3;
    v1 = (*(volatile u8 *) (u32) (gp + -21380));
    { s32 c_ = v1 == v0; s0 = 0; if (c_) goto L_00360C48; }
    v0 = 2;
    if (v1 == v0) goto L_00360C28;
    a0 = 1;
    if (v1 == a0) { a1 = 0; goto L_00360C04; }
    if (v1 == 0) { a0 = (*(volatile u8 *) (u32) (gp + -21364)); goto L_00360B84; }
    v0 = s0; goto L_00360C60;
L_00360B84:;
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (gp + -21368));
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7631)) = (u8) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 10051)) = (u8) a0;
    a0 = 0;
    (*(volatile u8 *) (u32) (v0 + 10052)) = (u8) a1; func_00270580(a0);
    v0 = func_009A2A80();
    if (v0 != 0) { a0 = 0; goto L_00360BCC; }
    a0 = 0; func_009A24A0(a0);
    func_00C74810();
    a0 = 0;
L_00360BCC:;
    func_00266A30(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 1; func_00266A30(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 12; func_002CB600(a0, a1, a2, a3);
    func_00342340();
    func_0020CFB0(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (gp + -21380));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -21380)) = (u8) v0; goto L_00360C5C;
L_00360C04:;
    a2 = 0; func_00147F90(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 4; Pes6MemRegion_Release(a0);
    a0 = 3; v0 = Pes6Module_Load(a0);
    v0 = (*(volatile u8 *) (u32) (gp + -21380));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -21380)) = (u8) v0;
L_00360C28:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_00360C5C;
    v0 = (*(volatile u8 *) (u32) (gp + -21380));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -21380)) = (u8) v0; goto L_00360C5C;
L_00360C48:;
    func_002D9230(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0; Pes6MatchContext_SetByteC08(a0);
    s0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00360C5C:;
    v0 = s0;
L_00360C60:;
    return v0;
}
