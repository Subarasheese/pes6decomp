/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
s64 func_00246550(s64);
void func_00269DF0(s64, s64, s64, s64, s64, s64, s64, s64);
s64 func_0026AD80(void);

void func_002691E0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0;
    s64 hi = 0, lo = 0;

    v0 = (s32) 0x3b0000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) (v0 + 32));
    { s32 c_ = v0 == v1; s0 = a0; if (c_) goto L_00269350; }
    if (v0 == 0) goto L_00269214;
    goto L_00269400;
L_00269214:;
    v0 = (s32) 0x3b0000U;
    a0 = 13;
    a1 = (*(volatile s8 *) (u32) (v0 + -5766));
    v1 = 12;
    a1 = (s32) ((u32) a1 + (u32) s0);
    v0 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a1 + 0xdU);
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) a0); hi = (s32) ((s32) a1 % (s32) a0); lo = q_; }
    a0 = hi;
    (*(volatile u8 *) (u32) (v0 + -5766)) = (u8) a0;
    v0 = (s64) ((u64) a0 << 56);
    v0 = v0 >> 56;
    if (v0 != v1) goto L_002692A8;
    a0 = 169; v0 = func_00246550(a0);
    if (v0 == 0) goto L_00269284;
    v0 = func_0026AD80();
    v1 = 1;
    if (v0 != v1) goto L_00269284;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s8 *) (u32) (v0 + 192));
    if (v0 == 0) goto L_002692A8;
L_00269284:;
    v0 = (s32) 0x3b0000U;
    v1 = 13;
    a0 = (*(volatile s8 *) (u32) (v0 + -5766));
    a0 = (s32) ((u32) a0 + (u32) s0);
    v0 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + 0xdU);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    v1 = hi;
    (*(volatile u8 *) (u32) (v0 + -5766)) = (u8) v1;
L_002692A8:;
    v0 = (s32) 0x3b0000U;
    v1 = 4;
    v0 = (*(volatile s8 *) (u32) (v0 + -5766));
    if (v0 != v1) goto L_00269304;
    a0 = 168; v0 = func_00246550(a0);
    if (v0 == 0) goto L_002692E0;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -5776));
    v0 = v0 < 11;
    if (v0 != 0) goto L_00269304;
L_002692E0:;
    v0 = (s32) 0x3b0000U;
    v1 = 13;
    a0 = (*(volatile s8 *) (u32) (v0 + -5766));
    a0 = (s32) ((u32) a0 + (u32) s0);
    v0 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + 0xdU);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    v1 = hi;
    (*(volatile u8 *) (u32) (v0 + -5766)) = (u8) v1;
L_00269304:;
    v0 = (s32) 0x3b0000U;
    v1 = 7;
    a0 = (*(volatile s8 *) (u32) (v0 + -5766));
    if (a0 != v1) goto L_00269400;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -5776));
    v0 = v0 < 11;
    if (v0 != 0) goto L_00269400;
    v0 = (s32) ((u32) a0 + (u32) s0);
    v1 = 13;
    a0 = (s32) ((u32) v0 + 0xdU);
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v1); hi = (s32) ((s32) a0 % (s32) v1); lo = q_; }
    v0 = (s32) 0x3b0000U;
    v1 = hi;
    (*(volatile u8 *) (u32) (v0 + -5766)) = (u8) v1; goto L_00269400;
L_00269350:;
    v0 = (s32) 0x3b0000U;
    a0 = 9;
    a1 = (*(volatile s8 *) (u32) (v0 + -5765));
    v1 = 8;
    a1 = (s32) ((u32) a1 + (u32) s0);
    v0 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a1 + 0x9U);
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) a1 / (s32) a0); hi = (s32) ((s32) a1 % (s32) a0); lo = q_; }
    a0 = hi;
    (*(volatile u8 *) (u32) (v0 + -5765)) = (u8) a0;
    a0 = (s64) ((u64) a0 << 56);
    a0 = a0 >> 56;
    if (a0 == v1) goto L_00269400;
    if (a0 < 0) goto L_002693A0;
    v0 = a0 < 8;
    if (v0 != 0) goto L_002693A8;
L_002693A0:;
    v0 = 0; goto L_002693F0;
L_002693A8:;
    a1 = (s32) 0x590000U;
    a2 = 0;
    a1 = (s32) ((u32) a1 + 0x2800U);
    v1 = 255;
L_002693B8:;
    v0 = (*(volatile u8 *) (u32) a1);
    if (a0 != v0) goto L_002693D8;
    v0 = (*(volatile u8 *) (u32) (a1 + 12));
    if (v0 == v1) goto L_002693D8;
    v0 = 1; goto L_002693F0;
L_002693D8:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < 8;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x28U); if (c_) goto L_002693B8; }
    v0 = 0;
L_002693F0:;
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) goto L_00269350;
L_00269400:;
    v0 = (s32) 0x3b0000U;
    a2 = (*(volatile s32 *) (u32) (v0 + -5680));
    a3 = 2;
    v1 = (s32) 0x84000000U;
    a1 = 1;
    a0 = v1 | 0xf803;
    v0 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (a2 + 197)) = (u8) a3;
    (*(volatile u8 *) (u32) (v0 + -5763)) = (u8) a1; SD_call(a0);
    func_00269DF0(a0, a1, a2, a3, a4, a5, a6, a7);
    return;
}
