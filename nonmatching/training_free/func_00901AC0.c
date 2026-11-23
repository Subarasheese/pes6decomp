/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_0026B580(s32, s32, s32, s32);
void func_00901FA0(s32, s32, s32, s32);
void func_00C74FA0(s32, s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00901AC0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, s0 = 0, s1 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401;
    s1 = a3;
    s0 = 0; SD_call(a0);
    v0 = (s32) 0x3b0000U;
    v1 = 1;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) (a0 + 56));
    if (v0 == v1) { t5 = 11; goto L_00901B04; }
    a2 = s1; goto L_00901BAC;
L_00901B04:;
    a5 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (a0 + 40)) = (u32) t5;
    v0 = (s32) 0x3b0000U;
    t4 = (*(volatile s32 *) (u32) (v0 + -5680));
    a4 = (s32) 0x590000U;
    a1 = (s32) 0x930000U;
    a3 = (s32) 0x3b0000U;
    a6 = -1;
    a2 = (s32) 0x3b0000U;
    a7 = (*(volatile s32 *) (u32) (t4 + 32));
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x590000U;
    a5 = (s32) ((u32) a5 + 0x1ef8U);
    a4 = (s32) ((u32) a4 + 0x1ef6U);
    a0 = (s32) ((u32) sp + 0x30U);
    if ((s32) t5 != 0) { s64 q_ = (s32) ((s32) a7 / (s32) t5); hi = (s32) ((s32) a7 % (s32) t5); lo = q_; }
    a1 = (s32) ((u32) a1 + 0xffffe238U);
    a7 = hi;
    (*(volatile u32 *) (u32) (t4 + 32)) = (u32) a7;
    a3 = (*(volatile s32 *) (u32) (a3 + -5680));
    (*(volatile u32 *) (u32) (a3 + 52)) = (u32) a6;
    a2 = (*(volatile s32 *) (u32) (a2 + -5680));
    (*(volatile u32 *) (u32) (a2 + 56)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    a3 = (*(volatile u8 *) (u32) (v0 + 7107));
    v0 = (*(volatile s32 *) (u32) (v1 + 48));
    v1 = (s32) ((u32) a5 + (u32) v0);
    v0 = (s32) ((u32) a4 + (u32) v0);
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    a2 = (s32) ((u32) v1 + (u32) v0); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) sp + 0x30U);
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (s32) ((u32) v0 + 0x98U); func_00C74FA0(a0, a1, a2, a3);
    func_00901FA0(a0, a1, a2, a3);
    v0 = s0; goto L_00901BCC;
L_00901BAC:;
    a1 = 8; func_0026B580(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v1 = -1;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    s0 = 2;
    (*(volatile u8 *) (u32) (v0 + 62)) = (u8) v1;
    v0 = s0;
L_00901BCC:;
    return v0;
}
