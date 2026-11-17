/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0030DBA0(void);
s32 func_00BD9610(s32, s32, s32, s32);
s32 func_00BD96F0(s32, s32, s32, s32);
s32 func_00BD9770(s32, s32, s32, s32);
s32 func_00BD97D0(s32, s32, s32, s32);
s32 func_00BD9830(s32, s32, s32, s32);
s32 func_00BD99D0(s32, s32, s32, s32);
s32 func_00BDA030(s32, s32, s32, s32);
s32 func_00BDA260(s32, s32, s32, s32);

s32 func_00348C10(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0; v0 = func_0030DBA0();
    if (v0 == 0) goto L_00348C38;
    v0 = 1;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348C38:;
    v0 = func_00BD99D0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00348DB8;
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile s32 *) (u32) (s0 + 52));
    a0 = (*(volatile u8 *) (u32) (v0 + -13514));
    v0 = (s32) ((u32) v1 + 0x1U);
    at = (u64) a0 < (u64) (s64) 10;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (s0 + 52)) = (u32) v0; if (c_) goto L_00348E50; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0x6200U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x348c80U) goto L_00348C80; if (t_ == 0x348d28U) goto L_00348D28; if (t_ == 0x348d4cU) goto L_00348D4C; if (t_ == 0x348d70U) goto L_00348D70; if (t_ == 0x348d94U) goto L_00348D94; if (t_ == 0x348e50U) goto L_00348E50; }
L_00348C80:;
    v0 = (*(volatile u8 *) (u32) (s0 + 19));
    v1 = 1;
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (v0 + 24));
    if (a0 == v1) { v0 = (*(volatile s32 *) (u32) (s0 + 52)); goto L_00348D10; }
    v0 = 2;
    if (a0 == v0) goto L_00348CEC;
    v0 = 4;
    if (a0 == v0) goto L_00348CC8;
    v0 = 3;
    if (a0 == v0) goto L_00348CC8;
    goto L_00348E54;
L_00348CC8:;
    v0 = func_00BD9830(a0, a1, a2, a3);
    if (v0 != 0) { v0 = 2; goto L_00348CE4; }
    v0 = 1;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348CE4:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348CEC:;
    v0 = func_00BD96F0(a0, a1, a2, a3);
    if (v0 != 0) { v0 = 2; goto L_00348D08; }
    v0 = 1;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348D08:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348D10:;
    at = v0 < 151;
    if (at != 0) { (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v1; goto L_00348E50; }
    v0 = 2;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348D28:;
    v0 = func_00BD9770(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 1; goto L_00348D44; }
    v0 = 2;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348D44:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348D4C:;
    v0 = func_00BD96F0(a0, a1, a2, a3);
    if (v0 != 0) { v0 = 2; goto L_00348D68; }
    v0 = 1;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348D68:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348D70:;
    v0 = func_00BD97D0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = 1; goto L_00348D8C; }
    v0 = 2;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348D8C:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348D94:;
    v0 = (*(volatile s32 *) (u32) (s0 + 52));
    at = v0 < 151;
    if (at != 0) { v0 = 1; goto L_00348DB0; }
    v0 = 2;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348DB0:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348DB8:;
    v0 = func_00BD9610(a0, a1, a2, a3);
    if (v0 == 0) { a1 = (*(volatile s32 *) (u32) (s0 + 48)); goto L_00348DD4; }
    v0 = 3;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0; goto L_00348E50;
L_00348DD4:;
    a0 = 4;
    if (a1 == a0) goto L_00348E28;
    v0 = 3;
    if (a1 == v0) goto L_00348E28;
    v1 = 1;
    if (a1 == v1) { v0 = (*(volatile u8 *) (u32) (s0 + 19)); goto L_00348E0C; }
    v0 = 2;
    if (a1 == v0) { (*(volatile u32 *) (u32) (s0 + 48)) = (u32) a0; goto L_00348E50; }
    goto L_00348E50;
L_00348E0C:;
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 24));
    if (v0 != v1) { (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v1; goto L_00348E50; }
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) a0; goto L_00348E50;
L_00348E28:;
    v0 = func_00BDA030(a0, a1, a2, a3);
    if (v0 != 0) { v0 = 5; goto L_00348E4C; }
    v0 = func_00BDA260(a0, a1, a2, a3);
    if (v0 == 0) goto L_00348E50;
    v0 = 5;
L_00348E4C:;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v0;
L_00348E50:;
L_00348E54:;
    v0 = 1;
    return v0;
}
