/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6HeapZone_Close(s64);
s64 Pes6OptionData_GetBlock304(void);
s64 func_0013E280(void);
s64 func_001540B0(s64, s64);
s64 func_0020A680(s64, s64, s64, s64);
s64 func_0023AE40(s64, s64, s64, s64);
s64 func_002726D0(s64, s64, s64, s64);
s64 func_0027A7B0(s64);
s64 func_0027AA00(s64);
s64 func_00288570(void);
s64 func_002BDA20(s64, s64, s64, s64);
s64 func_002CBAF0(s64, s64, s64, s64);
s64 func_002DCA30(void);
s64 func_0084FBE0(s64, s64, s64, s64);
s64 func_009A0B10(s64, s64, s64, s64);
s64 func_009A6B90(s64, s64, s64, s64);
s64 func_009AB650(s64, s64, s64, s64);
s64 func_009B4610(s64, s64, s64, s64);
s64 func_009E1D30(s64, s64, s64, s64);
s64 func_00B2A4C0(s64, s64, s64, s64);
s64 func_00B2A4E0(s64, s64, s64, s64);
s64 func_00BA1820(s64, s64, s64, s64);
s64 func_00BC5CF0(s64, s64, s64, s64);

s64 func_001F8F10(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0;

    a0 = 0; v0 = func_0027AA00(a0);
    v0 = func_0013E280();
    v1 = (s32) 0x590000U;
    a0 = 1;
    (*(volatile u32 *) (u32) (v1 + 7644)) = (u32) v0;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7648)) = (u8) a0; v0 = func_009A6B90(a0, a1, a2, a3);
    v0 = func_002726D0(a0, a1, a2, a3);
    a0 = 12; v0 = Pes6HeapZone_Close(a0);
    a0 = 12; v0 = func_002CBAF0(a0, a1, a2, a3);
    v0 = func_00BC5CF0(a0, a1, a2, a3);
    a0 = 12;
    a1 = 0; v0 = func_001540B0(a0, a1);
    v0 = (s32) 0x10000U;
    a0 = v0 | 0x261; v0 = func_00BA1820(a0, a1, a2, a3);
    v0 = func_00288570();
    v0 = func_009A0B10(a0, a1, a2, a3);
    a0 = 1; v0 = func_0020A680(a0, a1, a2, a3);
    v0 = func_00B2A4E0(a0, a1, a2, a3);
    a0 = (s32) 0x120000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x10b0U);
    a2 = 1; v0 = func_00B2A4C0(a0, a1, a2, a3);
    v0 = func_0023AE40(a0, a1, a2, a3);
    a0 = 1; v0 = func_0027A7B0(a0);
    v0 = func_002DCA30();
    if (v0 == 0) { a0 = -1; goto L_001F9000; }
    v0 = func_0084FBE0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { a0 = -1; goto L_001F8FF0; }
    a0 = -17; v0 = func_002BDA20(a0, a1, a2, a3);
    goto L_001F9008;
L_001F8FF0:;
    v0 = func_002BDA20(a0, a1, a2, a3);
    goto L_001F9008;
L_001F9000:;
    v0 = func_002BDA20(a0, a1, a2, a3);
L_001F9008:;
    v0 = func_009AB650(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    v1 = 205;
    (*(volatile u8 *) (u32) (v0 + 7637)) = (u8) 0;
    a0 = 0;
    v0 = (s32) 0x590000U;
    a1 = 0;
    (*(volatile u8 *) (u32) (v0 + 9075)) = (u8) v1; v0 = func_009E1D30(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 9376)) = (u32) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + 9380)) = (u32) 0;
    v1 = (s32) 0x200000U;
    (*(volatile u32 *) (u32) (v0 + 9384)) = (u32) 0;
    v1 = (s32) ((u32) v1 + 0xffff8de0U);
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 9388)) = (u32) v1; v0 = Pes6OptionData_GetBlock304();
    v0 = (*(volatile u8 *) (u32) (v0 + 10));
    v0 = (s64) ((u64) v0 << 62);
    a0 = (s64) ((u64) v0 >> 63); v0 = func_009B4610(a0, a1, a2, a3);
    v0 = 1;
    return v0;
}
