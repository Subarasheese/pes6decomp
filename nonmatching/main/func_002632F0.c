/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00262350(s32, s32, s32, s32);
s32 func_002623A0(void);
void func_00262B40(s32, s32, s32, s32);
s32 func_00262B90(void);
void func_002643A0(s32, s32, s32, s32);
s32 func_002643F0(void);
void func_00264490(s32, s32, s32, s32);
s32 func_002644E0(void);
void func_00364060(s32, s32, s32, s32);
s32 func_003640B0(void);
void func_00CDC540(s32, s32, s32, s32);
s32 func_00CDC590(s32, s32, s32, s32);
s32 func_00CDCCB0(s32, s32, s32, s32);
void func_00CDCD20(s32, s32, s32, s32);
s32 func_00CDCD70(s32, s32, s32, s32);
void func_00CF6D80(s32, s32, s32, s32);
s32 func_00CF6DD0(s32, s32, s32, s32);
void func_00CF93A0(s32, s32, s32, s32);
s32 func_00CF93F0(s32, s32, s32, s32);

void func_002632F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;

    at = (u64) a0 < (u64) (s64) 10;
    if (at == 0) goto L_00263444;
    v1 = (s32) ((u32) a0 << 2);
    a0 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) a0 + 0xffff9260U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x26331cU) goto L_0026331C; if (t_ == 0x263334U) goto L_00263334; if (t_ == 0x26334cU) goto L_0026334C; if (t_ == 0x2633ecU) goto L_002633EC; if (t_ == 0x263404U) goto L_00263404; if (t_ == 0x26341cU) goto L_0026341C; if (t_ == 0x263434U) goto L_00263434; if (t_ == 0x263444U) goto L_00263444; }
L_0026331C:;
    v0 = func_00262B90();
    a0 = v0; func_00262B40(a0, a1, a2, a3);
    goto L_00263448;
L_00263334:;
    v0 = func_002623A0();
    a0 = v0; func_00262350(a0, a1, a2, a3);
    goto L_00263444;
L_0026334C:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = 5;
    { s32 c_ = v1 != v0; a0 = 10; if (c_) goto L_0026337C; }
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -11296));
    v1 = (s32) ((u32) v1 + 0xffffd3bcU);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
L_0026337C:;
    v0 = 4;
    if (a0 != v0) goto L_002633D4;
    v0 = func_00CDCCB0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) goto L_002633C4;
    if (v0 == 0) goto L_002633AC;
    goto L_002633D4;
L_002633AC:;
    v0 = func_002644E0();
    a0 = v0; func_00264490(a0, a1, a2, a3);
    goto L_002633D4;
L_002633C4:;
    v0 = func_002643F0();
    a0 = v0; func_002643A0(a0, a1, a2, a3);
L_002633D4:;
    v0 = func_00CDCD70(a0, a1, a2, a3);
    a0 = v0; func_00CDCD20(a0, a1, a2, a3);
    goto L_00263444;
L_002633EC:;
    v0 = func_00CF93F0(a0, a1, a2, a3);
    a0 = v0; func_00CF93A0(a0, a1, a2, a3);
    goto L_00263444;
L_00263404:;
    v0 = func_00CDC590(a0, a1, a2, a3);
    a0 = v0; func_00CDC540(a0, a1, a2, a3);
    goto L_00263444;
L_0026341C:;
    v0 = func_003640B0();
    a0 = v0; func_00364060(a0, a1, a2, a3);
    goto L_00263444;
L_00263434:;
    v0 = func_00CF6DD0(a0, a1, a2, a3);
    a0 = v0; func_00CF6D80(a0, a1, a2, a3);
L_00263444:;
L_00263448:;
    return;
}
