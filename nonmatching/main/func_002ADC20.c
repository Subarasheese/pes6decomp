/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00BBB8C0(s32, s32, s32, s32);

s32 func_002ADC20(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    s2 = a2;
    a2 = a5 & 0xff;
    s1 = a4;
    at = 0 < a2;
    s0 = 0;
    a0 = 0;
    { s32 c_ = at == 0; a4 = 0; if (c_) goto L_002ADCD0; }
    v1 = a1 & 0xff;
    a5 = 1;
    v0 = (s32) ((u32) s1 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0xffffffffU);
L_002ADC6C:;
    a1 = a0 < v1;
    if (a1 != 0) goto L_002ADCA0;
    a6 = (s32) ((u32) s1 + (u32) a4);
    a1 = (*(volatile u8 *) (u32) v0);
    a6 = (*(volatile u8 *) (u32) a6);
    a1 = (s32) ((u32) a3 + (u32) a1);
    a6 = (s32) ((u32) a3 + (u32) a6);
    a1 = (*(volatile u8 *) (u32) a1);
    a6 = (*(volatile u8 *) (u32) a6);
    if (a6 != a1) goto L_002ADCD0;
L_002ADCA0:;
    a1 = (s32) ((u32) s1 + (u32) a4);
    a1 = (*(volatile u8 *) (u32) a1);
    a1 = (s32) ((u32) a5 << (a1 & 31));
    a1 = s2 & a1;
    if (a1 == 0) goto L_002ADCC0;
    a0 = (s32) ((u32) a0 + 0x1U);
    s0 = (s32) ((u32) a4 + 0x1U);
L_002ADCC0:;
    a4 = (s32) ((u32) a4 + 0x1U);
    a1 = a4 < a2;
    if (a1 != 0) goto L_002ADC6C;
L_002ADCD0:;
    if (a0 != 0) goto L_002ADCE0;
    v0 = 0; goto L_002ADD3C;
L_002ADCE0:;
    v0 = func_00BBB8C0(a0, a1, a2, a3);
    at = 0 < s0;
    { s32 c_ = at == 0; a2 = 0; if (c_) goto L_002ADD30; }
    a0 = 1;
L_002ADCF8:;
    v1 = (s32) ((u32) s1 + (u32) a2);
    a1 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) a0 << (a1 & 31));
    v1 = s2 & v1;
    if (v1 == 0) goto L_002ADD20;
    if (v0 == 0) { (*(volatile u8 *) (u32) s3) = (u8) a1; goto L_002ADD38; }
    v0 = (s32) ((u32) v0 + 0xffffffffU);
L_002ADD20:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < s0;
    if (v1 != 0) goto L_002ADCF8;
L_002ADD30:;
    v0 = 0; goto L_002ADD3C;
L_002ADD38:;
    v0 = a0;
L_002ADD3C:;
    return v0;
}
