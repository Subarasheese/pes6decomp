/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00C13B90(s32);
void func_00C176D0(void);
void func_00C179C0(void);
void func_00C17AC0(void);
void memset(s32, s32, s32);

void func_00C18240(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffae40U);
    (*(volatile u32 *) (u32) (gp + -19356)) = (u32) v0;
    a0 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffae98U);
    (*(volatile u16 *) (u32) (v0 + -20802)) = (u16) 0;
    a1 = 0;
    v0 = (s32) 0xcd0000U;
    a2 = 36;
    (*(volatile u16 *) (u32) (v0 + -20804)) = (u16) 0; memset(a0, a1, a2);
    v1 = 255;
    v0 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (v0 + -20841)) = (u8) v1;
    a1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a1 + 0xffffae40U);
    a3 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + -20842)) = (u8) v1;
    a4 = 0;
    a3 = (s32) ((u32) a3 + 0x1a90U);
    a2 = a1;
L_00C182A4:;
    v0 = (s32) ((u32) a1 + (u32) a4);
    a0 = (*(volatile u8 *) (u32) (a3 + 6));
    v1 = (s32) ((u32) v0 + 0x56U);
    v0 = (*(volatile u8 *) (u32) (v0 + 86));
    if (v0 != a0) { (*(volatile u8 *) (u32) v1) = (u8) a0; goto L_00C1832C; }
L_00C182C0:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < 2;
    a3 = (s32) ((u32) a3 + 0x8bU);
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x12U); if (c_) goto L_00C182A4; }
    a0 = (s32) 0xcd0000U;
    a0 = (s32) ((u32) a0 + 0xffffaf28U); func_00C13B90(a0);
    func_00C17AC0();
    func_00C179C0();
    func_00C176D0();
    v1 = (s32) 0x590000U;
    a2 = (s32) 0xcd0000U;
    a1 = (*(volatile u8 *) (u32) (v1 + -6142));
    a2 = (s32) ((u32) a2 + 0xffffaf24U);
    a3 = 1;
    a0 = 12;
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a2 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) (v1 + 194));
    (*(volatile u8 *) (u32) a1) = (u8) a3;
    v1 = (s32) ((u32) a2 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) a0; goto L_00C18348;
L_00C1832C:;
    v0 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) a2 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 88));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (v1 + 88)) = (u8) v0; goto L_00C182C0;
L_00C18348:;
    return;
}
