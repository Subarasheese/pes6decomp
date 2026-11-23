/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
void func_001A3340(s32);
void func_001A33C0(s32);
void func_001A3460(s32, s32, s32);
void func_001A34B0(s32, s32);
void func_001A34F0(s32);
s32 func_0021E750(s32, s32, s32, s32);
s32 func_0021EB30(s32, s32, s32, s32);
s32 func_002D2F90(void);

void func_002D2400(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    a0 = 0;
    v0 = func_0021EB30(a0, a1, a2, a3);
    s0 = v0 & 0xff;
    a0 = 1; v0 = func_0021EB30(a0, a1, a2, a3);
    a1 = v0 & 0xff;
    a0 = s0; func_001A34B0(a0, a1);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7088)); v0 = func_0021E750(a0, a1, a2, a3);
    s0 = v0;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7090)); v0 = func_0021E750(a0, a1, a2, a3);
    a0 = s0;
    a1 = v0;
    a2 = -1; func_001A3460(a0, a1, a2);
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u16 *) (u32) (v1 + 7090));
    v1 = (*(volatile u16 *) (u32) (v0 + 7088));
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7097));
    { s32 c_ = v0 == 0; a0 = 1; if (c_) goto L_002D24A0; }
    v0 = 53;
    if (v1 == v0) { a0 = 0; goto L_002D24A4; }
    if (a1 == v0) goto L_002D24A0;
    v0 = 55;
    if (v1 == v0) goto L_002D24A0;
    if (a1 != v0) goto L_002D24A4;
L_002D24A0:;
    a0 = 0;
L_002D24A4:;
    func_001A33C0(a0);
    a0 = 0; func_001A3340(a0);
    v0 = func_002D2F90();
    s0 = v0;
    v0 = 13;
    if (s0 != v0) { a0 = s0; goto L_002D2510; }
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7088)); v0 = Pes6Team_ResolveSpecialId(a0);
    v1 = v0 & 0xffff;
    v0 = 8;
    if (v1 != v0) goto L_002D24EC;
    s0 = 20;
L_002D24EC:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u16 *) (u32) (v0 + 7088)); v0 = Pes6Team_ResolveSpecialId(a0);
    v1 = v0 & 0xffff;
    v0 = 15;
    if (v1 != v0) goto L_002D250C;
    s0 = 22;
L_002D250C:;
    a0 = s0;
L_002D2510:;
    func_001A34F0(a0);
    return;
}
