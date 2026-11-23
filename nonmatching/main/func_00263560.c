/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00262360(s32, s32, s32, s32);
void func_002623B0(s32);
s32 func_00262B50(s32, s32, s32, s32);
void func_00262BA0(s32);
s32 func_002643B0(s32, s32, s32, s32);
void func_00264400(s32);
s32 func_002644A0(s32, s32, s32, s32);
void func_002644F0(s32);
void func_00264590(void);
s32 func_002D9020(s32, s32, s32, s32);
s32 func_002D9060(void);
void func_002D9070(s32);
s32 func_00364070(s32, s32, s32, s32);
void func_003640C0(s32);
s32 func_00CDC550(s32, s32, s32, s32);
void func_00CDC5A0(s32, s32, s32, s32);
s32 func_00CDCD30(s32, s32, s32, s32);
void func_00CDCD80(s32, s32, s32, s32);
s32 func_00CF6D90(s32, s32, s32, s32);
void func_00CF6DE0(s32, s32, s32, s32);
s32 func_00CF93B0(s32, s32, s32, s32);
void func_00CF9400(s32, s32, s32, s32);

void func_00263560(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    s0 = a1; func_00264590();
    v0 = func_002D9060();
    if (v0 != 0) { at = (u64) s1 < (u64) (s64) 10; goto L_002635A0; }
    v0 = func_002D9020(a0, a1, a2, a3);
    a0 = v0; func_002D9070(a0);
    at = (u64) s1 < (u64) (s64) 10;
L_002635A0:;
    if (at == 0) { ; goto L_002636AC; }
    a0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) s1 << 2);
    a0 = (s32) ((u32) a0 + 0xffff9290U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x2635c4U) goto L_002635C4; if (t_ == 0x2635dcU) goto L_002635DC; if (t_ == 0x2635f4U) goto L_002635F4; if (t_ == 0x263650U) goto L_00263650; if (t_ == 0x263668U) goto L_00263668; if (t_ == 0x263680U) goto L_00263680; if (t_ == 0x263698U) goto L_00263698; if (t_ == 0x2636a8U) goto L_002636A8; }
L_002635C4:;
    v0 = func_00262B50(a0, a1, a2, a3);
    a0 = v0; func_00262BA0(a0);
    goto L_002636A8;
L_002635DC:;
    v0 = func_00262360(a0, a1, a2, a3);
    a0 = v0; func_002623B0(a0);
    goto L_002636A8;
L_002635F4:;
    v0 = func_00CDCD30(a0, a1, a2, a3);
    a0 = v0; func_00CDCD80(a0, a1, a2, a3);
    v1 = 1;
    if (s0 == v1) goto L_00263638;
    if (s0 == 0) goto L_00263620;
    goto L_002636A8;
L_00263620:;
    v0 = func_002644A0(a0, a1, a2, a3);
    a0 = v0; func_002644F0(a0);
    goto L_002636A8;
L_00263638:;
    v0 = func_002643B0(a0, a1, a2, a3);
    a0 = v0; func_00264400(a0);
    goto L_002636A8;
L_00263650:;
    v0 = func_00CF93B0(a0, a1, a2, a3);
    a0 = v0; func_00CF9400(a0, a1, a2, a3);
    goto L_002636A8;
L_00263668:;
    v0 = func_00CDC550(a0, a1, a2, a3);
    a0 = v0; func_00CDC5A0(a0, a1, a2, a3);
    goto L_002636A8;
L_00263680:;
    v0 = func_00364070(a0, a1, a2, a3);
    a0 = v0; func_003640C0(a0);
    goto L_002636A8;
L_00263698:;
    v0 = func_00CF6D90(a0, a1, a2, a3);
    a0 = v0; func_00CF6DE0(a0, a1, a2, a3);
L_002636A8:;
L_002636AC:;
    return;
}
