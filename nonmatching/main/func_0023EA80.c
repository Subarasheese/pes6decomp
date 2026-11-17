/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6OptionData_GetBlock2CC(void);
s64 Pes6OptionData_GetBlock304(void);
s64 Pes6Scene_Get(s64);
s64 Pes6Settings_Get_B02_b2_w5_2(s64, s64, s64, s64);
s64 func_0020B600(s64);
s64 func_00245390(s64, s64, s64, s64);
s64 func_002623C0(void);
s64 func_00263170(void);
s64 func_00351E90(s64);

s64 func_0023EA80(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;

    v0 = Pes6OptionData_GetBlock304();
    v1 = (*(volatile u8 *) (u32) v0);
    s0 = v0;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7097)) = (u8) v1; v0 = Pes6OptionData_GetBlock2CC();
    a1 = (*(volatile u8 *) (u32) (v0 + 15));
    v1 = (s32) 0x590000U;
    a0 = 5;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    { s32 c_ = v0 == a0; (*(volatile u8 *) (u32) (v1 + 7098)) = (u8) a1; if (c_) goto L_0023EB4C; }
    a0 = 0; v0 = Pes6Scene_Get(a0);
    v1 = 12;
    if (v0 == v1) goto L_0023EB4C;
    v0 = (s32) 0x590000U;
    v1 = 1;
    a0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (a0 == v1) { v1 = 1; goto L_0023EB10; }
    v0 = 4;
    if (a0 == v0) goto L_0023EB0C;
    v0 = 2;
    if (a0 == v0) goto L_0023EB0C;
    v0 = 14;
    if (a0 != v0) { v1 = 0; goto L_0023EB10; }
L_0023EB0C:;
    v1 = 1;
L_0023EB10:;
    v0 = 1;
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) (gp + -22772)); goto L_0023EB30; }
    v0 = Pes6Settings_Get_B02_b2_w5_2(a0, a1, a2, a3);
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7114)) = (u8) v0; goto L_0023EB4C;
L_0023EB30:;
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 != 0) goto L_0023EB4C;
    v1 = (*(volatile u8 *) (u32) (s0 + 1));
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7114)) = (u8) v1;
L_0023EB4C:;
    v0 = (s32) 0x590000U;
    v1 = 2;
    v0 = (*(volatile u8 *) (u32) (v0 + 7095));
    if (v0 != v1) goto L_0023EB94;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7092)); v0 = func_00351E90(a0);
    a0 = 1;
    if (v0 != a0) goto L_0023EB94;
    v0 = (s32) 0x590000U;
    v1 = 12;
    v0 = (*(volatile u8 *) (u32) (v0 + 7114));
    if (v0 == v1) goto L_0023EB94;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7114)) = (u8) a0;
L_0023EB94:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7114)); v0 = func_0020B600(a0);
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (s0 + 2));
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    v1 = (s32) 0x590000U;
    a0 = 5;
    { s32 c_ = v0 != a0; (*(volatile u8 *) (u32) (v1 + 7115)) = (u8) a1; if (c_) goto L_0023EBEC; }
    v0 = func_00263170();
    if (v0 == 0) goto L_0023EBE0;
    v0 = func_002623C0();
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7118)) = (u8) v0; goto L_0023EBF8;
L_0023EBE0:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7118)) = (u8) 0; goto L_0023EBF8;
L_0023EBEC:;
    v1 = (*(volatile u8 *) (u32) (s0 + 3));
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7118)) = (u8) v1;
L_0023EBF8:;
    v0 = func_00245390(a0, a1, a2, a3);
    return v0;
}
