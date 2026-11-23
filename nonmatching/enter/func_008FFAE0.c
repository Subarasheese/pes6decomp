/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00359F40(void);
void func_0035A040(s32, s32, s32, s32);

s32 func_008FFAE0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    v0 = (s32) 0x930000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -3924));
    v1 = (*(volatile u8 *) (u32) (a1 + 6));
    v0 = 1;
    if (v1 == v0) goto L_008FFB10;
    if (v1 == 0) goto L_008FFB40;
    goto L_008FFB40;
L_008FFB10:;
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -3844));
    v1 = (s32) ((u32) v1 + 0xfffff0ffU);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) (a1 + 4));
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) goto L_008FFB40;
    a0 = (*(volatile s32 *) (u32) a1);
    a1 = 0; func_0035A040(a0, a1, a2, a3);
L_008FFB40:;
    v0 = func_00359F40();
    if (v0 != 0) { v0 = 0; goto L_008FFB6C; }
    v0 = (s32) 0x930000U;
    v1 = (s32) 0x900000U;
    (*(volatile u8 *) (u32) (v0 + -3920)) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xfffffa80U);
    v0 = (s32) 0x930000U;
    (*(volatile u32 *) (u32) (v0 + -3928)) = (u32) v1;
    v0 = 1;
L_008FFB6C:;
    return v0;
}
