/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
s32 Pes6OptionData_GetBlock2F5(void);
s32 Pes6OptionData_GetBlock304(void);
s32 func_002211A0(void);
s32 func_00221230(s32);
s32 func_00221280(s32);
void func_0026E130(s32);
void func_0026E140(s32);
void func_0026E190(s32);

void func_009301F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    s1 = 0;
    s0 = 0;
L_00930208:;
    a0 = s1; v0 = func_00221280(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -18168));
    a1 = 27;
    a2 = (s32) ((u32) v1 + (u32) s0);
L_00930220:;
    a0 = (*(volatile s8 *) (u32) a2);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) v0) = (u8) a0;
    a2 = (s32) ((u32) a2 + 0x2U);
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) v1;
    { s32 c_ = a1 > 0; v0 = (s32) ((u32) v0 + 0x2U); if (c_) goto L_00930220; }
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = (u64) s1 < (u64) (s64) 8;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x36U); if (c_) goto L_00930208; }
    v0 = Pes6OptionData_GetBlock2F5();
    s0 = v0;
    a0 = 6;
    v0 = (*(volatile s32 *) (u32) (gp + -18168));
    a1 = s0;
    a2 = (s32) ((u32) v0 + 0x1b0U);
L_0093026C:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    a2 = (s32) ((u32) a2 + 0x2U);
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_0093026C; }
    a0 = (*(volatile u8 *) (u32) (s0 + 2)); func_0026E190(a0);
    a0 = (*(volatile u8 *) (u32) (s0 + 3)); func_0026E140(a0);
    a0 = (*(volatile u8 *) (u32) (s0 + 4)); func_0026E130(a0);
    v0 = Pes6OptionData_GetBlock304();
    a0 = (*(volatile s32 *) (u32) (gp + -18168));
    v1 = (s32) 0x590000U;
    s0 = 0;
    s1 = 0;
    a0 = (*(volatile u8 *) (u32) (a0 + 448));
    (*(volatile u8 *) (u32) (v0 + 4)) = (u8) a0;
    a0 = (*(volatile s32 *) (u32) (gp + -18168));
    a0 = (*(volatile u8 *) (u32) (a0 + 449));
    (*(volatile u8 *) (u32) (v0 + 5)) = (u8) a0;
    a0 = (*(volatile s32 *) (u32) (gp + -18168));
    a0 = (*(volatile u8 *) (u32) (a0 + 450));
    (*(volatile u8 *) (u32) (v0 + 6)) = (u8) a0;
    a0 = (*(volatile s32 *) (u32) (gp + -18168));
    a0 = (*(volatile u16 *) (u32) (a0 + 452));
    (*(volatile u16 *) (u32) (v0 + 8)) = (u16) a0;
    a1 = (*(volatile u16 *) (u32) (v0 + 8));
    a0 = (*(volatile s32 *) (u32) (gp + -18168));
    (*(volatile u16 *) (u32) (v1 + 7662)) = (u16) a1;
    v1 = (*(volatile s16 *) (u32) (a0 + 460));
    (*(volatile u16 *) (u32) (v0 + 16)) = (u16) v1;
    v1 = (*(volatile s32 *) (u32) (gp + -18168));
    v1 = (*(volatile s16 *) (u32) (v1 + 462));
    (*(volatile u16 *) (u32) (v0 + 18)) = (u16) v1;
L_00930308:;
    a0 = s0; v0 = func_00221230(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -21516));
    a1 = 12;
    a4 = (*(volatile s8 *) (u32) (v0 + 2));
    a2 = v0;
    a3 = (s32) ((u32) v1 + (u32) s1);
L_00930328:;
    a0 = (*(volatile s8 *) (u32) a3);
    a1 = (s32) ((u32) a1 + 0xffffffffU);
    v1 = (*(volatile s8 *) (u32) (a3 + 1));
    (*(volatile u8 *) (u32) a2) = (u8) a0;
    a3 = (s32) ((u32) a3 + 0x2U);
    (*(volatile u8 *) (u32) (a2 + 1)) = (u8) v1;
    { s32 c_ = a1 > 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_00930328; }
    (*(volatile u8 *) (u32) (v0 + 2)) = (u8) a4;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = (u64) s0 < (u64) (s64) 8;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x18U); if (c_) goto L_00930308; }
    v0 = func_002211A0();
    a0 = (*(volatile s32 *) (u32) (gp + -18168));
    a2 = 16;
    a3 = (s32) ((u32) a0 + 0x1f8U);
L_00930370:;
    a1 = (*(volatile s32 *) (u32) a3);
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    v1 = (*(volatile s32 *) (u32) (a3 + 4));
    (*(volatile u32 *) (u32) v0) = (u32) a1;
    a3 = (s32) ((u32) a3 + 0x8U);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) v1;
    { s32 c_ = a2 > 0; v0 = (s32) ((u32) v0 + 0x8U); if (c_) goto L_00930370; }
    Pes6Heap_Free(a0);
    (*(volatile u32 *) (u32) (gp + -18168)) = (u32) 0;
    return;
}
