/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6HeapZone_Close(s32);
void Pes6HeapZone_Open(s32, s32, s32, s32);
s32 Pes6Process_Create(s32, s32, s32, s32, s32);
void func_001BBC50(s32, s32, s32, s32);
s32 func_001CDA50(s32);
void func_0023F3A0(s32, s32, s32, s32);
void func_0023F510(s32, s32, s32, s32);
void func_002405D0(s32, s32, s32, s32);
void func_008B3000(s32, s32, s32, s32);
s32 func_008B33C0(s32, s32, s32, s32);

void func_00933E30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    func_0023F3A0(a0, a1, a2, a3);
    a0 = 344;
    a1 = 20427; func_008B3000(a0, a1, a2, a3);
    a0 = 344;
    a1 = 20190; func_008B3000(a0, a1, a2, a3);
    a0 = 5; Pes6HeapZone_Close(a0);
    a0 = 5; Pes6HeapZone_Open(a0, a1, a2, a3);
    a0 = 1; v0 = func_001CDA50(a0);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0xffffda20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_008B33C0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18728)) = (u32) v0;
    a0 = (s32) ((u32) gp + 0xffffb6d4U);
    a1 = 13;
    a2 = 4; func_002405D0(a0, a1, a2, a3);
    v1 = (s32) 0x960000U;
    a1 = 0;
    v1 = (s32) ((u32) v1 + 0x6cf0U);
    a0 = 9;
L_00933EAC:;
    (*(volatile u8 *) (u32) v1) = (u8) a0;
    a1 = (s32) ((u32) a1 + 0x5U);
    (*(volatile u8 *) (u32) (v1 + 1)) = (u8) a0;
    v0 = a1 < 6;
    (*(volatile u8 *) (u32) (v1 + 2)) = (u8) a0;
    (*(volatile u8 *) (u32) (v1 + 3)) = (u8) a0;
    (*(volatile u8 *) (u32) (v1 + 4)) = (u8) a0;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x5U); if (c_) goto L_00933EAC; }
    v1 = (s32) 0x960000U;
    v0 = (*(volatile s32 *) (u32) (gp + -18736));
    v1 = (s32) ((u32) v1 + 0x6cf0U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) v1) = (u8) a0; if (c_) goto L_00933EF0; }
    a0 = 1; func_0023F510(a0, a1, a2, a3);
L_00933EF0:;
    v0 = 1;
    a1 = (s32) 0x930000U;
    (*(volatile u8 *) (u32) (gp + -32363)) = (u8) v0;
    a5 = (s32) 0x960000U;
    v0 = -1;
    a0 = 0;
    (*(volatile u8 *) (u32) (gp + -18740)) = (u8) v0;
    a1 = (s32) ((u32) a1 + 0x3a10U);
    a2 = 0;
    a3 = 0;
    a4 = 0;
    a5 = (s32) ((u32) a5 + 0x63b0U);
    (*(volatile u8 *) (u32) (gp + -32364)) = (u8) 0; v0 = Pes6Process_Create(a0, a1, a2, a3, a4);
    (*(volatile u32 *) (u32) (gp + -18744)) = (u32) v0;
    a0 = v0; func_001BBC50(a0, a1, a2, a3);
    return;
}
