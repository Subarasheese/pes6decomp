/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
void Pes6MatchContext_SetByteC08(s32);
void Pes6MatchFlow_SetState(s32, s32);
s32 Pes6Module_Load(s32);
void Pes6Scene_Set(s32, s32);
void SD_call(s32);
void func_00147F90(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001BD800(s32, s32, s32, s32);
s32 func_00342360(void);
void func_009B4630(s32);

void func_002684E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -22272));
    v0 = 4;
    if (v1 == v0) goto L_002685A4;
    v0 = 3;
    if (v1 == v0) { a0 = 1; goto L_00268588; }
    v0 = 2;
    if (v1 == v0) goto L_00268568;
    v0 = 1;
    if (v1 == v0) { a0 = 17; goto L_00268538; }
    v0 = func_001BD800(a0, a1, a2, a3);
    if (v0 == 0) { ; goto L_002685E0; }
    v1 = (*(volatile s32 *) (u32) (gp + -22272));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22272)) = (u32) v1; goto L_002685DC;
L_00268538:;
    v0 = Pes6Module_Load(a0);
    if (v0 == 0) goto L_002685DC;
    v0 = func_00342360();
    if (v0 == 0) goto L_002685DC;
    v1 = (*(volatile s32 *) (u32) (gp + -22272));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22272)) = (u32) v1; goto L_002685DC;
L_00268568:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_002685DC;
    v1 = (*(volatile s32 *) (u32) (gp + -22272));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22272)) = (u32) v1; goto L_002685DC;
L_00268588:;
    a1 = 115;
    a2 = 80; func_00147F90(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s32 *) (u32) (gp + -22272));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22272)) = (u32) v1; goto L_002685DC;
L_002685A4:;
    v0 = (s32) 0x82000000U;
    a0 = v0 | 0x10; SD_call(a0);
    a0 = 0;
    a1 = 0; Pes6MatchFlow_SetState(a0, a1);
    a0 = 3; Pes6MatchContext_SetByteC08(a0);
    a0 = 0;
    a1 = 8; Pes6Scene_Set(a0, a1);
    a0 = 11; func_009B4630(a0);
    (*(volatile u32 *) (u32) (gp + -22272)) = (u32) 0;
L_002685DC:;
L_002685E0:;
    return;
}
