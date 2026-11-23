/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00105160(void);
s32 func_001051F0(void);
s32 func_00105250(void);
s32 func_00105360(void);
s32 func_001064A0(s32, s32);
s32 func_0010A1E8(void);
void func_00113718(s32, s32);
void func_002CDCA0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002CE0F0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002CE1B0(void);

void func_002CDF80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x5e0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 23804));
    if (v1 == 0) goto L_002CE0A0;
    v1 = v1 & 0x1;
    if (v1 != 0) goto L_002CDFAC;
    goto L_002CE0A4;
L_002CDFAC:;
    v0 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 23792)) = (u32) a0;
    v0 = (s32) 0x5e0000U;
    a0 = (s32) ((u32) sp + 0x10U);
    (*(volatile u8 *) (u32) (v0 + 23805)) = (u8) 0;
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 20)) = (u32) v0; v0 = func_00105360();
    v1 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v1 + 23800)) = (u32) v0; v0 = func_00105250();
    a0 = v0;
    v0 = (s32) 0x5e0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + 23792)); v0 = func_001051F0();
    v0 = 8192;
    v1 = (s32) ((u32) gp + 0x0U);
    (*(volatile u32 *) (u32) (sp + 60)) = (u32) v0;
    a0 = (s32) ((u32) sp + 0x30U);
    v0 = (s32) 0x2d0000U;
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v1;
    v0 = (s32) ((u32) v0 + 0xffffe0c0U);
    v1 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (sp + 52)) = (u32) v0;
    v1 = (s32) ((u32) v1 + 0x3cf0U);
    v0 = 10;
    (*(volatile u32 *) (u32) (sp + 56)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v0; v0 = func_00105160();
    v1 = (s32) 0x5e0000U;
    a0 = v0;
    (*(volatile u32 *) (u32) (v1 + 23796)) = (u32) v0;
    v0 = (s32) 0x5e0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + 23800)); v0 = func_001064A0(a0, a1);
    v0 = (s32) 0x5e0000U;
    a0 = (s32) 0x2d0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + 23800));
    a0 = (s32) ((u32) a0 + 0xffffe0b0U); func_00113718(a0, a1);
    v1 = (s32) 0x5e0000U;
    a0 = 255;
    v1 = (*(volatile u8 *) (u32) (v1 + 23804));
    if (v1 != a0) goto L_002CE0A0;
L_002CE068:;
    v0 = func_0010A1E8();
    if (v0 < 0) goto L_002CE068;
    func_002CDCA0(a0, a1, a2, a3, a4, a5, a6, a7);
    func_002CE1B0();
    func_002CE0F0(a0, a1, a2, a3, a4, a5, a6, a7);
L_002CE0A0:;
L_002CE0A4:;
    return;
}
