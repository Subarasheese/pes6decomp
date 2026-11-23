/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void SD_stop(s32);
s32 func_00181360(s32, s32, s32, s32);
void func_00181370(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001CDA40(s32);
void func_0024F3E0(s32, s32, s32, s32);
void func_0024F440(s32, s32, s32, s32);
void func_00251500(void);
s32 func_0026DA40(s32);
s32 func_002CBF10(void);
void func_002D33D0(s32, s32, s32, s32);
s32 func_008F7160(s32);

s32 func_008F6FF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v0 = (*(volatile s32 *) (u32) (gp + -19804));
    at = (u64) v0 < (u64) (s64) 8;
    s1 = a0;
    { s32 c_ = at == 0; s0 = 0; if (c_) goto L_008F7030; }
    v1 = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9f00U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8f7030U) goto L_008F7030; if (t_ == 0x8f7050U) goto L_008F7050; if (t_ == 0x8f7074U) goto L_008F7074; if (t_ == 0x8f70b0U) goto L_008F70B0; if (t_ == 0x8f70e0U) goto L_008F70E0; if (t_ == 0x8f711cU) goto L_008F711C; if (t_ == 0x8f7130U) goto L_008F7130; if (t_ == 0x8f713cU) goto L_008F713C; }
L_008F7030:;
    v0 = func_002CBF10();
    v1 = 1;
    if (v0 != v1) { v0 = (s32) 0x9a080000U; goto L_008F7054; }
    v0 = 3;
    (*(volatile u32 *) (u32) (gp + -19804)) = (u32) v0; goto L_008F7144;
L_008F7050:;
    v0 = (s32) 0x9a080000U;
L_008F7054:;
    a0 = v0 | 0x400; SD_stop(a0);
    a0 = 3;
    a1 = 50; func_002D33D0(a0, a1, a2, a3);
    v0 = 2;
    (*(volatile u32 *) (u32) (gp + -19804)) = (u32) v0; goto L_008F7144;
L_008F7074:;
    a0 = 1; v0 = func_0026DA40(a0);
    if (v0 != 0) { v0 = s0; goto L_008F7148; }
    a0 = 3; v0 = func_0026DA40(a0);
    if (v0 != 0) goto L_008F7144;
    func_00251500();
    func_0024F3E0(a0, a1, a2, a3);
    v0 = 3;
    (*(volatile u32 *) (u32) (gp + -19804)) = (u32) v0; goto L_008F7144;
L_008F70B0:;
    v0 = (s32) 0x900000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -24416)); v0 = func_008F7160(a0);
    a0 = v0; v0 = func_001CDA40(a0);
    a1 = v0;
    a2 = s1;
    a0 = 0; func_00181370(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 4;
    (*(volatile u32 *) (u32) (gp + -19804)) = (u32) v0; goto L_008F7144;
L_008F70E0:;
    v0 = func_00181360(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) goto L_008F7144;
    v0 = func_002CBF10();
    v1 = 1;
    if (v0 != v1) { v0 = 5; goto L_008F7114; }
    v0 = 7;
    (*(volatile u32 *) (u32) (gp + -19804)) = (u32) v0; goto L_008F7144;
L_008F7114:;
    (*(volatile u32 *) (u32) (gp + -19804)) = (u32) v0; goto L_008F7144;
L_008F711C:;
    func_0024F440(a0, a1, a2, a3);
    v0 = 6;
    (*(volatile u32 *) (u32) (gp + -19804)) = (u32) v0; goto L_008F7144;
L_008F7130:;
    v0 = (s32) 0x9a080000U;
    a0 = v0 | 0x400; SD_call(a0);
L_008F713C:;
    (*(volatile u32 *) (u32) (gp + -19804)) = (u32) 0;
    s0 = 1;
L_008F7144:;
    v0 = s0;
L_008F7148:;
    return v0;
}
