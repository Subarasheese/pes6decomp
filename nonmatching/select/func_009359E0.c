/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetBlock304(void);
void func_0023E780(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_009359E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    a0 = (s32) 0x960000U;
    a0 = (s32) ((u32) a0 + 0x6d10U);
    a1 = 0;
    a2 = 80; memset(a0, a1, a2);
    v0 = (s32) 0x960000U;
    v1 = 1;
    (*(volatile u16 *) (u32) (v0 + 27940)) = (u16) 0;
    v0 = (s32) 0x960000U;
    (*(volatile u16 *) (u32) (v0 + 27944)) = (u16) v1; v0 = Pes6OptionData_GetBlock304();
    a4 = (*(volatile u8 *) (u32) (v0 + 20));
    v1 = (s32) 0x960000U;
    a2 = (s32) 0x960000U;
    a1 = (s32) 0x960000U;
    a3 = 1;
    a0 = (s32) 0x960000U;
    v0 = (s32) 0x960000U;
    (*(volatile u16 *) (u32) (v1 + 27992)) = (u16) 0;
    (*(volatile u16 *) (u32) (v0 + 27936)) = (u16) a4;
    v1 = (s32) 0x960000U;
    v0 = (s32) 0x960000U;
    (*(volatile u16 *) (u32) (a2 + 27984)) = (u16) 0;
    (*(volatile u8 *) (u32) (v0 + 27997)) = (u8) a3;
    a2 = (s32) 0x960000U;
    v0 = (s32) 0x960000U;
    (*(volatile u16 *) (u32) (v1 + 27976)) = (u16) 0;
    (*(volatile u16 *) (u32) (v0 + 27960)) = (u16) 0;
    v1 = (s32) 0x960000U;
    v0 = (s32) 0x960000U;
    (*(volatile u8 *) (u32) (a0 + 27949)) = (u8) a3;
    (*(volatile u16 *) (u32) (v0 + 27938)) = (u16) a4;
    a0 = (s32) 0x960000U;
    a4 = (*(volatile s16 *) (u32) (a2 + 27920));
    v0 = (s32) 0x960000U;
    (*(volatile u16 *) (u32) (a1 + 27972)) = (u16) 0;
    a3 = (*(volatile s16 *) (u32) (v1 + 27952));
    a1 = 58;
    (*(volatile u16 *) (u32) (a0 + 27956)) = (u16) 0;
    a2 = (*(volatile s16 *) (u32) (v0 + 27968));
    a0 = (s32) 0x960000U;
    (*(volatile u32 *) (u32) (gp + -18644)) = (u32) a1;
    v1 = (s32) 0x960000U;
    a1 = (s32) 0x960000U;
    (*(volatile u16 *) (u32) (a0 + 27922)) = (u16) a4;
    v0 = (s32) 0x960000U;
    a0 = (s32) 0x960000U;
    (*(volatile u16 *) (u32) (a1 + 27954)) = (u16) a3;
    a0 = (s32) ((u32) a0 + 0x6d63U);
    (*(volatile u16 *) (u32) (v1 + 27970)) = (u16) a2;
    a1 = 0;
    a2 = 13;
    (*(volatile u16 *) (u32) (v0 + 27986)) = (u16) 0; memset(a0, a1, a2);
    a0 = (s32) 0x960000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x6d70U);
    a2 = 13; memset(a0, a1, a2);
    a0 = (s32) 0x960000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x6d7dU);
    a2 = 13; memset(a0, a1, a2);
    a0 = (s32) 0x960000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x6d8aU);
    a2 = 13; memset(a0, a1, a2);
    v1 = (s32) 0x960000U;
    a1 = 3;
    (*(volatile u8 *) (u32) (v1 + 28000)) = (u8) 0;
    a0 = (s32) 0x960000U;
    v1 = (s32) 0x960000U;
    (*(volatile u8 *) (u32) (a0 + 28001)) = (u8) a1;
    (*(volatile u8 *) (u32) (v1 + 28029)) = (u8) 0;
    a0 = 4;
    v1 = (s32) 0x960000U;
    (*(volatile u8 *) (u32) (v1 + 28042)) = (u8) a0;
    v1 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 4048));
    { s32 c_ = v1 != a0; (*(volatile u8 *) (u32) (gp + -18640)) = (u8) 0; if (c_) goto L_00935B70; }
    v1 = (*(volatile s32 *) (u32) (gp + -18784));
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    at = (u64) v1 < (u64) (s64) 3;
    if (at == 0) goto L_00935B58;
    a0 = 1;
    v1 = (s32) 0x960000U;
    (*(volatile u8 *) (u32) (v1 + 27904)) = (u8) a0; goto L_00935B80;
L_00935B58:;
    v0 = (s32) 0x960000U;
    a0 = (s32) 0x30000U;
    (*(volatile u8 *) (u32) (v0 + 27904)) = (u8) 0; func_0023E780(a0, a1, a2, a3);
    goto L_00935B84;
L_00935B70:;
    v0 = (s32) 0x960000U;
    a0 = (s32) 0x30000U;
    (*(volatile u8 *) (u32) (v0 + 27904)) = (u8) 0; func_0023E780(a0, a1, a2, a3);
L_00935B80:;
L_00935B84:;
    return;
}
