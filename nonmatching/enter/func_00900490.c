/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
void Pes6HeapZone_Close(s32);
s32 func_001540E0(s32);
void func_001A5E00(s32, s32, s32, s32);
void func_001BD0E0(void);
void func_00237BE0(s32, s32, s32, s32);
s32 func_00909FA0(s32, s32, s32, s32);
s32 func_0090D430(s32, s32, s32, s32);
s32 func_0090D5F0(void);

s32 func_00900490(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x930000U;
    a1 = (*(volatile u8 *) (u32) (v0 + -3932));
    at = (u64) a1 < (u64) (s64) 7;
    if (at == 0) { v0 = 0; goto L_00900610; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0xffffadd0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x9004c8U) goto L_009004C8; if (t_ == 0x9004e4U) goto L_009004E4; if (t_ == 0x90051cU) goto L_0090051C; if (t_ == 0x90055cU) goto L_0090055C; if (t_ == 0x900598U) goto L_00900598; if (t_ == 0x9005d4U) goto L_009005D4; if (t_ == 0x9005fcU) goto L_009005FC; }
L_009004C8:;
    func_001BD0E0();
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -3932));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -3932)) = (u8) v1;
L_009004E4:;
    a0 = 1;
    a1 = -1; v0 = func_00909FA0(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 != v0) goto L_0090060C;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (gp + -20048)) = (u8) 0;
    v1 = (*(volatile u8 *) (u32) (v0 + -3932));
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -3932)) = (u8) v1; goto L_0090060C;
L_0090051C:;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s16 *) (u32) (v1 + -3846));
    v1 = (*(volatile u8 *) (u32) (v0 + 7140));
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (*(volatile u8 *) (u32) (gp + -20048));
    at = v1 < v0;
    if (at == 0) { v0 = (*(volatile u8 *) (u32) (gp + -20048)); goto L_00900550; }
    v1 = (s32) ((u32) a1 + 0x1U);
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -3932)) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) (gp + -20048));
L_00900550:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -20048)) = (u8) v0; goto L_0090060C;
L_0090055C:;
    v0 = func_0090D430(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 1;
    if (v1 != v0) goto L_0090060C;
    v0 = func_0090D5F0();
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_0090060C;
    v1 = 6;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -3932)) = (u8) v1; goto L_0090060C;
L_00900598:;
    a0 = 10; v0 = func_001540E0(a0);
    v1 = 1;
    if (v0 != v1) { a0 = 3; goto L_009005B8; }
    a0 = 10; Pes6HeapZone_Close(a0);
    a0 = 3;
L_009005B8:;
    func_001A5E00(a0, a1, a2, a3);
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -3932));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -3932)) = (u8) v1;
L_009005D4:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_0090060C;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -3932));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -3932)) = (u8) v1; goto L_0090060C;
L_009005FC:;
    func_00237BE0(a0, a1, a2, a3);
    v0 = 1; goto L_00900610;
L_0090060C:;
    v0 = 0;
L_00900610:;
    return v0;
}
