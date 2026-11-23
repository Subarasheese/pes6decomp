/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Enter_BuildShotMask(void);
void func_009080F0(void);
s32 func_00908250(void);
void func_00908650(s32, s32, s32, s32);

void func_00908E60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    func_00908650(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -22856));
    v0 = 12;
    if (v1 != v0) goto L_00908E94;
    v0 = func_00908250();
    v0 = v0 & 0xffff;
    (*(volatile u32 *) (u32) (gp + -22856)) = (u32) v0; goto L_00908E9C;
L_00908E94:;
    v0 = func_00908250();
L_00908E9C:;
    func_009080F0();
    v0 = (s32) 0x930000U;
    a0 = (s32) 0x930000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -3892));
    a5 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xffffc640U);
    v1 = 0;
    a5 = (s32) ((u32) a5 + 0xffff8fd0U);
    a4 = 2;
    a1 = (s32) ((u32) a1 << 2);
    v0 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    v0 = (s32) ((u32) v0 + 0xfffff0a0U); goto L_00908F58;
L_00908EDC:;
    a6 = v1 & 0xff;
L_00908EE0:;
    a3 = (s32) ((u32) v0 + (u32) a6);
    a2 = (s32) ((u32) a6 << 2);
    (*(volatile u8 *) (u32) (a3 + 95)) = (u8) a1;
    a2 = (s32) ((u32) v0 + (u32) a2);
    a1 = (*(volatile u16 *) (u32) a0);
    a1 = (s32) ((u32) a1 << 2);
    a1 = (s32) ((u32) a5 + (u32) a1);
    (*(volatile u32 *) (u32) (a2 + 128)) = (u32) a1;
    a1 = (*(volatile u8 *) (u32) (a0 + 3));
    { s32 c_ = a1 != 0; a3 = (s32) ((u32) a2 + 0x80U); if (c_) goto L_00908F14; }
    a2 = 0; goto L_00908F18;
L_00908F14:;
    a2 = a4;
L_00908F18:;
    a1 = (*(volatile s32 *) (u32) a3);
    { s32 c_ = a6 <= 0; (*(volatile u8 *) (u32) (a1 + 3)) = (u8) a2; if (c_) goto L_00908F48; }
    a2 = (*(volatile s32 *) (u32) a3);
    a1 = (s32) ((u32) a6 << 2);
    a1 = (s32) ((u32) v0 + (u32) a1);
    a3 = (*(volatile s32 *) (u32) (a1 + 124));
    a3 = (*(volatile u8 *) (u32) (a3 + 3));
    a1 = (*(volatile u8 *) (u32) (a2 + 3));
    a3 = (u64) 0 < (u64) a3;
    a1 = a1 | a3;
    (*(volatile u8 *) (u32) (a2 + 3)) = (u8) a1;
L_00908F48:;
    v1 = (s32) ((u32) v1 + 0x1U);
    v1 = v1 & 0xff;
    a0 = (s32) ((u32) a0 + 0x4U);
L_00908F58:;
    a1 = (*(volatile u16 *) (u32) a0);
    if (a1 != 0) { a6 = v1 & 0xff; goto L_00908EE0; }
    a2 = v1 & 0xff;
    at = a2 < 33;
    if (at == 0) goto L_00908EDC;
    at = a2 < 33;
    if (at == 0) goto L_00908FA8;
    a1 = (s32) 0x930000U;
    a1 = (s32) ((u32) a1 + 0xfffff0a0U);
L_00908F88:;
    v0 = (s32) ((u32) v1 + 0x1U);
    a0 = (s32) ((u32) a1 + (u32) a2);
    v1 = v0 & 0xff;
    (*(volatile u8 *) (u32) (a0 + 95)) = (u8) 0;
    v0 = v1 < 33;
    { s32 c_ = v0 != 0; a2 = v1; if (c_) goto L_00908F88; }
L_00908FA8:;
    Pes6Enter_BuildShotMask();
    return;
}
