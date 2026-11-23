/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Keyboard_Acquire(s32, s32, s32, s32);
void Pes6Keyboard_Release(s32, s32, s32, s32, s32, s32, s32, s32);
void SD_call(s32);
s32 func_001CDAA0(void);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_002DB160(s32, s32, s32, s32);
s32 func_002E8560(void);
s32 func_002E8C60(s32, s32, s32, s32);
void func_002E8CB0(s32, s32);
void func_002E9170(s32, s32);
s32 func_002E9310(void);
void func_002F2ED0(s32, s32, s32, s32, f32);
void func_002F3A00(s32);
void func_002F3BF0(s32, s32);
void func_002F4980(s32, s32, s32, s32);
void func_002F4E10(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_002F4E90(s32, s32, s32, s32);
void func_00931D70(s32, s32, s32, s32);

void func_00932D90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v0 = (*(volatile s32 *) (u32) (gp + -18760));
    v1 = 1;
    { s32 c_ = v0 == v1; s0 = a0; if (c_) goto L_00932EAC; }
    if (v0 == 0) goto L_00932DBC;
    goto L_00932F80;
L_00932DBC:;
    v0 = func_002DB160(a0, a1, a2, a3);
    v1 = 1;
    { s32 c_ = v0 != v1; (*(volatile u32 *) (u32) (gp + -18752)) = (u32) v0; if (c_) goto L_00932E14; }
    v0 = func_002E8560();
    if (v0 != 0) { a0 = 30; goto L_00932DEC; }
    v0 = 5;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00932F80;
L_00932DEC:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 1;
    a1 = a0; func_002E9170(a0, a1);
    a0 = 47;
    a1 = 0; func_002E8CB0(a0, a1);
    goto L_00932E94;
L_00932E14:;
    v0 = (s32) 0x960000U;
    v1 = (s32) 0x960000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -10992));
    a0 = (s32) 0x960000U;
    (*(volatile u32 *) (u32) (gp + -18748)) = (u32) 0;
    v0 = (s32) 0x960000U;
    (*(volatile u32 *) (u32) (v1 + 27660)) = (u32) a1;
    a3 = (*(volatile s32 *) (u32) (v0 + -10988));
    v1 = (s32) 0x960000U;
    a1 = (s32) 0x960000U;
    (*(volatile u32 *) (u32) (v1 + 27876)) = (u32) 0;
    v0 = (s32) 0x960000U;
    (*(volatile u32 *) (u32) (a0 + 27664)) = (u32) a3;
    a2 = (*(volatile s32 *) (u32) (v0 + -10984));
    a0 = 23;
    v0 = (s32) 0x960000U;
    (*(volatile u32 *) (u32) (a1 + 27668)) = (u32) a2;
    (*(volatile u32 *) (u32) (v0 + 27880)) = (u32) 0; v0 = func_002F4E90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18756)) = (u32) v0;
    a0 = v0;
    a1 = 1; func_002F3BF0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -18756));
    a1 = (s32) 0x960000U;
    a1 = (s32) ((u32) a1 + 0x6c00U); func_002F4980(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18756)); func_002F3A00(a0);
    v0 = (s32) 0x8c000000U;
    a0 = v0 | 0x8005; SD_call(a0);
L_00932E94:;
    Pes6Keyboard_Release(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (gp + -18760));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18760)) = (u32) v0; goto L_00932F80;
L_00932EAC:;
    v0 = (*(volatile s32 *) (u32) (gp + -18752));
    if (v0 != v1) goto L_00932F04;
    v0 = func_002E8C60(a0, a1, a2, a3);
    if (v0 == 0) goto L_00932F80;
    Pes6Keyboard_Acquire(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18760)) = (u32) 0; v0 = func_002E9310();
    v1 = 6;
    if (v0 != v1) { a0 = 0; goto L_00932EF0; }
    v0 = 5;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00932F80;
L_00932EF0:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 4;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00932F80;
L_00932F04:;
    v0 = (s32) 0x8e0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -15760));
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (gp + -18756)); goto L_00932F48; }
    v0 = func_001CDAA0();
    a0 = (s32) 0x3c0000U;
    v1 = (*(volatile s32 *) (u32) (gp + -18748));
    a0 = (s32) ((u32) a0 + 0x54c0U);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile u8 *) (u32) v0);
    v0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v0 << 1);
    if (v1 != v0) { v0 = (s32) ((u32) v1 + 0x1U); goto L_00932F68; }
    a0 = (*(volatile s32 *) (u32) (gp + -18756));
L_00932F48:;
    func_002F4E10(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 4;
    (*(volatile u32 *) (u32) (gp + -18756)) = (u32) 0;
    (*(volatile u32 *) (u32) s0) = (u32) v0; Pes6Keyboard_Acquire(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18760)) = (u32) 0; goto L_00932F6C;
L_00932F68:;
    (*(volatile u32 *) (u32) (gp + -18748)) = (u32) v0;
L_00932F6C:;
    a0 = (*(volatile s32 *) (u32) (gp + -18756));
    if (a0 == 0) goto L_00932F80;
    func_002F2ED0(a0, a1, a2, a3, f12.f);
L_00932F80:;
    func_00931D70(a0, a1, a2, a3);
    return;
}
