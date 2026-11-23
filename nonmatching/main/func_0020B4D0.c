/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
void Pes6MatchContext_SetByteC08(s32);
void Pes6MatchFlow_SetState(s32, s32);
void Pes6MatchSession_Init(s32, s32, s32, s32, s32, s32, s32, s32);
s32 Pes6Module_Load(s32);
void Pes6Scene_Set(s32, s32);
void SD_call(s32);
void func_00147F90(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001BD970(s32, s32, s32, s32);
void func_002FE330(void);
s32 func_00342360(void);

void func_0020B4D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -22928));
    at = (u64) v1 < (u64) (s64) 6;
    if (at == 0) goto L_0020B500;
    a0 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x4190U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x20b500U) goto L_0020B500; if (t_ == 0x20b520U) goto L_0020B520; if (t_ == 0x20b540U) goto L_0020B540; if (t_ == 0x20b560U) goto L_0020B560; if (t_ == 0x20b580U) goto L_0020B580; if (t_ == 0x20b5b0U) goto L_0020B5B0; }
L_0020B500:;
    a0 = 17; v0 = Pes6Module_Load(a0);
    if (v0 == 0) { ; goto L_0020B5F4; }
    v1 = (*(volatile s32 *) (u32) (gp + -22928));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22928)) = (u32) v1; goto L_0020B5F0;
L_0020B520:;
    v0 = func_00342360();
    if (v0 == 0) goto L_0020B5F0;
    v1 = (*(volatile s32 *) (u32) (gp + -22928));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22928)) = (u32) v1; goto L_0020B5F0;
L_0020B540:;
    v0 = func_001BD970(a0, a1, a2, a3);
    if (v0 == 0) goto L_0020B5F0;
    v1 = (*(volatile s32 *) (u32) (gp + -22928));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22928)) = (u32) v1; goto L_0020B5F0;
L_0020B560:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_0020B5F0;
    v1 = (*(volatile s32 *) (u32) (gp + -22928));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22928)) = (u32) v1; goto L_0020B5F0;
L_0020B580:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -10332));
    if (v1 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -22928)); goto L_0020B5A4; }
    a0 = 1;
    a1 = 115;
    a2 = 80; func_00147F90(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s32 *) (u32) (gp + -22928));
L_0020B5A4:;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22928)) = (u32) v1; goto L_0020B5F0;
L_0020B5B0:;
    v0 = (s32) 0x82000000U;
    a0 = v0 | 0x10; SD_call(a0);
    Pes6MatchSession_Init(a0, a1, a2, a3, a4, a5, a6, a7);
    func_002FE330();
    a0 = 0;
    a1 = 0; Pes6MatchFlow_SetState(a0, a1);
    a0 = 2; Pes6MatchContext_SetByteC08(a0);
    a0 = 0;
    a1 = 8; Pes6Scene_Set(a0, a1);
    (*(volatile u32 *) (u32) (gp + -22928)) = (u32) 0;
L_0020B5F0:;
L_0020B5F4:;
    return;
}
