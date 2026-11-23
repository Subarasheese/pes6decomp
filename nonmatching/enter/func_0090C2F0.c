/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
void func_0027C230(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0090B7A0(s32);

void func_0090C2F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) 0x930000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -4030));
    if (v0 == 0) { a0 = 1; goto L_0090C310; }
    goto L_0090C3B8;
L_0090C310:;
    v0 = func_0090B7A0(a0);
    a0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (a0 + -4060)) = (u32) v0;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -4064));
    v0 = (*(volatile s32 *) (u32) (v0 + -4068));
    v0 = (s32) ((u32) v1 + (u32) v0);
    if (v0 != 0) goto L_0090C36C;
    a0 = 0; v0 = func_0090B7A0(a0);
    if (v0 == 0) goto L_0090C36C;
    a0 = 0; v0 = func_0090B7A0(a0);
    v1 = (s32) 0x930000U;
    a0 = 7;
    (*(volatile u32 *) (u32) (v1 + -4060)) = (u32) v0;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) a0; goto L_0090C3B8;
L_0090C36C:;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -4060));
    if (v1 == 0) { v0 = 1; goto L_0090C4D0; }
    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -4064));
    if (v1 == v0) goto L_0090C3AC;
    v0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -4068));
    if (v1 == v0) goto L_0090C3AC;
    v1 = 1;
    v0 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1; goto L_0090C3B8;
L_0090C3AC:;
    v0 = 1;
    goto L_0090C4D0;
L_0090C3B8:;
    v0 = (s32) 0x930000U;
    v1 = 9;
    a0 = (*(volatile u8 *) (u32) (v0 + -4030));
    if (a0 == v1) goto L_0090C4B4;
    v0 = 8;
    if (a0 == v0) goto L_0090C490;
    v0 = 7;
    if (a0 == v0) goto L_0090C46C;
    a1 = 3;
    if (a0 == a1) goto L_0090C454;
    v0 = 2;
    if (a0 == v0) goto L_0090C430;
    v0 = 1;
    if (a0 == v0) goto L_0090C410;
    v0 = 0; goto L_0090C4D0;
L_0090C410:;
    v0 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -4060)); func_0027C230(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -4030));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1;
L_0090C430:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_0090C4CC;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -4030));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1;
L_0090C454:;
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -4060));
    v0 = 1;
    (*(volatile u32 *) (u32) (v1 + -4064)) = (u32) a0; goto L_0090C4D0;
L_0090C46C:;
    v0 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -4060));
    a1 = 2; func_0027C230(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -4030));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1;
L_0090C490:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_0090C4CC;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -4030));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -4030)) = (u8) v1;
L_0090C4B4:;
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -4060));
    v0 = 1;
    (*(volatile u32 *) (u32) (v1 + -4068)) = (u32) a0; goto L_0090C4D0;
L_0090C4CC:;
    v0 = 0;
L_0090C4D0:;
    return;
}
