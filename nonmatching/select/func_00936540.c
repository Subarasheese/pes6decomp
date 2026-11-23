/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
void func_0023F510(s32, s32, s32, s32);
void func_0024CAE0(s32);
void func_0024D1B0(s32);
s32 func_002E8C60(s32, s32, s32, s32);
s32 func_002E9310(void);
s32 func_00941B40(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00936540(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[54];
    s32 sp = (s32) (u32) frame;

    v1 = (*(volatile u8 *) (u32) (gp + -18636));
    v0 = 4;
    if (v1 == v0) goto L_0093666C;
    v0 = 3;
    if (v1 == v0) goto L_0093664C;
    v0 = 2;
    if (v1 == v0) goto L_00936600;
    v0 = 1;
    if (v1 == v0) { a0 = 0; goto L_009365DC; }
    if (v1 == 0) { v1 = 7; goto L_00936588; }
    v0 = 0; goto L_0093668C;
L_00936588:;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) v1;
    a0 = (s32) ((u32) sp + 0x10U); func_0024CAE0(a0);
    v0 = -1;
    a0 = (s32) ((u32) sp + 0x10U);
    (*(volatile u8 *) (u32) (sp + 17)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 69)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 121)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 173)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 225)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 277)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 329)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 381)) = (u8) 0; func_0024D1B0(a0);
    a0 = 6; func_0023F510(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (gp + -18636));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18636)) = (u8) v0; goto L_00936688;
L_009365DC:;
    v0 = func_00941B40(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_00936688;
    v0 = (*(volatile u8 *) (u32) (gp + -18636));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18636)) = (u8) v0; goto L_00936688;
L_00936600:;
    v0 = func_002E8C60(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_00936688;
    v0 = func_002E9310();
    v1 = 5;
    if (v0 != v1) { a0 = 6; goto L_00936634; }
    (*(volatile u8 *) (u32) (gp + -18636)) = (u8) 0;
    v0 = 2; goto L_0093668C;
L_00936634:;
    func_0023F510(a0, a1, a2, a3);
    v0 = (*(volatile u8 *) (u32) (gp + -18636));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18636)) = (u8) v0; goto L_00936688;
L_0093664C:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_00936688;
    v0 = (*(volatile u8 *) (u32) (gp + -18636));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (gp + -18636)) = (u8) v0; goto L_00936688;
L_0093666C:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_00936688;
    (*(volatile u8 *) (u32) (gp + -18636)) = (u8) 0;
    v0 = 1; goto L_0093668C;
L_00936688:;
    v0 = 0;
L_0093668C:;
    return v0;
}
