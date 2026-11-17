/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_IsUnavailable(void);
s32 func_00225720(void);
s32 func_0022F190(void);
s32 func_00237530(s32);

s32 func_00229600(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s0 = a0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) { s1 = s0 & 0xffff; goto L_00229630; }
    v0 = 255; goto L_00229738;
L_00229630:;
    v0 = s1 < 28768;
    if (v0 != 0) goto L_00229698;
    at = s1 < 28832;
    if (at == 0) goto L_00229698;
    v0 = func_00225720();
    a0 = v0; v0 = func_00237530(a0);
    if (v0 != 0) { a1 = 0; goto L_00229668; }
    v0 = 255; goto L_00229738;
L_00229668:;
    a0 = v0;
L_0022966C:;
    v1 = (*(volatile u16 *) (u32) (a0 + 4404));
    if (s1 != v1) { a1 = (s32) ((u32) a1 + 0x1U); goto L_00229688; }
    v1 = (s32) ((u32) a1 << 1);
    v0 = (s32) ((u32) v1 + (u32) v0);
    s0 = (*(volatile u16 *) (u32) (v0 + 4340)); goto L_00229698;
L_00229688:;
    v1 = a1 < 32;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x2U); if (c_) goto L_0022966C; }
L_00229698:;
    s1 = s0 & 0xffff;
    s2 = 0;
L_002296A0:;
    v0 = func_0022F190();
    s0 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_002296C8;
    v0 = 0; goto L_00229708;
L_002296C8:;
    if (s0 != 0) goto L_002296D8;
    v0 = 0; goto L_00229708;
L_002296D8:;
    v1 = s2 & 0xff;
    v0 = v1 < 37;
    if (v0 != 0) goto L_002296F0;
    v0 = 0; goto L_00229708;
L_002296F0:;
    v0 = (s32) ((u32) v1 << 7);
    at = (s32) 0x80000U;
    v0 = (s32) ((u32) s0 + (u32) v0);
    at = at | 0xa310;
    v0 = (s32) ((u32) v0 + (u32) at);
L_00229708:;
    if (v0 == 0) { s2 = (s32) ((u32) s2 + 0x1U); goto L_00229728; }
    v0 = (*(volatile u16 *) (u32) (v0 + 126));
    if (s1 != v0) goto L_00229724;
    v0 = s2 & 0xff; goto L_00229738;
L_00229724:;
    s2 = (s32) ((u32) s2 + 0x1U);
L_00229728:;
    v0 = s2 < 32;
    if (v0 != 0) goto L_002296A0;
    v0 = 255;
L_00229738:;
    return v0;
}
