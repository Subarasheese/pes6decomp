/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_IsUnavailable(void);
s32 func_00226240(void);
s32 func_00226710(void);
s32 func_00229460(void);

s32 func_00235960(void) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v0 = func_00229460();
    s0 = v0; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_00235990;
    s0 = 0; goto L_0023599C;
L_00235990:;
    if (s0 != 0) { s0 = (*(volatile u8 *) (u32) (s0 + 5873)); goto L_0023599C; }
    s0 = 0;
L_0023599C:;
    s1 = s0 & 0xff; v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) goto L_002359B8;
    v0 = 0; goto L_00235B4C;
L_002359B8:;
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 56;
    if (v1 == v0) goto L_00235A94;
    v0 = 51;
    if (v1 == v0) { v0 = s1; goto L_00235A7C; }
    v0 = 44;
    if (v1 == v0) { v0 = s1; goto L_00235A64; }
    v0 = 41;
    if (v1 == v0) { v0 = s1; goto L_00235B4C; }
    v0 = 37;
    if (v1 == v0) { v0 = s1; goto L_00235A4C; }
    v0 = 36;
    if (v1 == v0) { v0 = s1; goto L_00235A34; }
    v0 = 16;
    if (v1 == v0) { v0 = s1; goto L_00235A20; }
    goto L_00235B48;
L_00235A20:;
    if (v0 <= 0) goto L_00235B48;
    v0 = (s32) ((u32) s1 + 0xffffffffU);
    s1 = v0 & 0xff; goto L_00235B48;
L_00235A34:;
    v0 = v0 < 5;
    if (v0 != 0) goto L_00235B48;
    v0 = (s32) ((u32) s1 + 0xfffffffbU);
    s1 = v0 & 0xff; goto L_00235B48;
L_00235A4C:;
    v0 = v0 < 9;
    if (v0 != 0) goto L_00235B48;
    v0 = (s32) ((u32) s1 + 0xfffffff7U);
    s1 = v0 & 0xff; goto L_00235B48;
L_00235A64:;
    v0 = v0 < 2;
    if (v0 != 0) goto L_00235B48;
    v0 = (s32) ((u32) s1 + 0xfffffffeU);
    s1 = v0 & 0xff; goto L_00235B48;
L_00235A7C:;
    v0 = v0 < 8;
    if (v0 != 0) goto L_00235B48;
    v0 = (s32) ((u32) s1 + 0xfffffff8U);
    s1 = v0 & 0xff; goto L_00235B48;
L_00235A94:;
    v0 = func_00226240();
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_00235B48;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8800U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x235ac8U) goto L_00235AC8; if (t_ == 0x235ae4U) goto L_00235AE4; if (t_ == 0x235b00U) goto L_00235B00; if (t_ == 0x235b18U) goto L_00235B18; if (t_ == 0x235b30U) goto L_00235B30; if (t_ == 0x235b48U) goto L_00235B48; }
L_00235AC8:;
    v0 = s1;
    v0 = v0 < 2;
    if (v0 != 0) goto L_00235B48;
    v0 = (s32) ((u32) s1 + 0xfffffffeU);
    s1 = v0 & 0xff; goto L_00235B48;
L_00235AE4:;
    v0 = s1;
    v0 = v0 < 10;
    if (v0 != 0) goto L_00235B48;
    v0 = (s32) ((u32) s1 + 0xfffffff6U);
    s1 = v0 & 0xff; goto L_00235B48;
L_00235B00:;
    v0 = s1;
    if (v0 <= 0) goto L_00235B48;
    v0 = (s32) ((u32) s1 + 0xffffffffU);
    s1 = v0 & 0xff; goto L_00235B48;
L_00235B18:;
    v0 = s1;
    if (v0 <= 0) goto L_00235B48;
    v0 = (s32) ((u32) s1 + 0xffffffffU);
    s1 = v0 & 0xff; goto L_00235B48;
L_00235B30:;
    v0 = s1;
    v0 = v0 < 2;
    if (v0 != 0) goto L_00235B48;
    v0 = (s32) ((u32) s1 + 0xfffffffeU);
    s1 = v0 & 0xff;
L_00235B48:;
    v0 = s1;
L_00235B4C:;
    return v0;
}
