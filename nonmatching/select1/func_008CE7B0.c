/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_008CC830(void);
void func_008CDAC0(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_008CE7B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = func_008CC830();
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (v0 + 524)); goto L_008CE7D0; }
    v0 = 0; goto L_008CE86C;
L_008CE7D0:;
    a1 = 1;
    if (v1 != a1) { v1 = (*(volatile s32 *) (u32) (v0 + 168)); goto L_008CE7E4; }
    v0 = 0; goto L_008CE86C;
L_008CE7E4:;
    at = (u64) v1 < (u64) (s64) 7;
    if (at == 0) goto L_008CE854;
    a0 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffab10U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x8ce80cU) goto L_008CE80C; if (t_ == 0x8ce818U) goto L_008CE818; if (t_ == 0x8ce820U) goto L_008CE820; if (t_ == 0x8ce828U) goto L_008CE828; if (t_ == 0x8ce834U) goto L_008CE834; if (t_ == 0x8ce840U) goto L_008CE840; if (t_ == 0x8ce84cU) goto L_008CE84C; }
L_008CE80C:;
    (*(volatile u32 *) (u32) (v0 + 224)) = (u32) 0;
    (*(volatile u8 *) (u32) (v0 + 164)) = (u8) a1; goto L_008CE854;
L_008CE818:;
    (*(volatile u32 *) (u32) (v0 + 168)) = (u32) 0; goto L_008CE854;
L_008CE820:;
    (*(volatile u32 *) (u32) (v0 + 168)) = (u32) a1; goto L_008CE854;
L_008CE828:;
    v1 = 2;
    (*(volatile u32 *) (u32) (v0 + 168)) = (u32) v1; goto L_008CE854;
L_008CE834:;
    v1 = 3;
    (*(volatile u32 *) (u32) (v0 + 168)) = (u32) v1; goto L_008CE854;
L_008CE840:;
    v1 = 4;
    (*(volatile u32 *) (u32) (v0 + 168)) = (u32) v1; goto L_008CE854;
L_008CE84C:;
    v1 = 5;
    (*(volatile u32 *) (u32) (v0 + 168)) = (u32) v1;
L_008CE854:;
    func_008CDAC0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 0;
L_008CE86C:;
    return v0;
}
