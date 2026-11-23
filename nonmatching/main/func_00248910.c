/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_GetUnavailableFlag(void);
void SD_call(s32);
s32 func_001B9DF0(void);
void func_0023EC10(s32, s32);
s32 func_0024E650(void);

s32 func_00248910(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s1 = 0; v0 = func_0024E650();
    s0 = v0; v0 = func_001B9DF0();
    if (v0 != 0) goto L_00248988;
    v0 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc270U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = 2;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_0024897C; }
    v0 = 1;
    if (v1 == v0) { v0 = (s32) 0x84020000U; goto L_0024896C; }
    goto L_00248988;
L_0024896C:;
    a0 = v0 | 0x8400; SD_call(a0);
    s1 = 2; goto L_00248988;
L_0024897C:;
    a0 = v0 | 0x8401; SD_call(a0);
    s1 = 1;
L_00248988:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 != 0) { v0 = s1; goto L_00248A14; }
    v0 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffc230U);
    v1 = (s32) ((u32) v0 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v0 = 128;
    if (v1 == v0) goto L_002489C0;
    goto L_00248A10;
L_002489C0:;
    v0 = (s32) 0x540000U;
    a2 = 5;
    v0 = (s32) ((u32) v0 + 0xffffcb40U);
    a1 = 4;
    v1 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) s0 << 1);
    (*(volatile u32 *) (u32) v1) = (u32) a2;
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (s32) ((u32) gp + 0xffffa7a0U);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + (u32) s0);
    v0 = (s32) ((u32) v0 + 0xffffa200U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) v0) = (u8) a2; func_0023EC10(a0, a1);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
L_00248A10:;
    v0 = s1;
L_00248A14:;
    return v0;
}
