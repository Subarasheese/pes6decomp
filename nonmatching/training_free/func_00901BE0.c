/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_00901FA0(s32, s32, s32, s32);
s32 func_009027E0(s32, s32, s32, s32, f32, f32);
void func_00C74FA0(s32, s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00901BE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s32 hi = 0, lo = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    a1 = 1;
    a2 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) (a2 + 56));
    if (v0 == a1) goto L_00901C48;
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (a2 + 44)); goto L_00901C10; }
    goto L_00901D44;
L_00901C10:;
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (a2 + 40)) = (u32) a0;
    a0 = (*(volatile s32 *) (u32) (v1 + -5680));
    v1 = (*(volatile s32 *) (u32) (a0 + 32));
    (*(volatile u32 *) (u32) (a0 + 52)) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    (*(volatile u32 *) (u32) (v0 + 56)) = (u32) a1; func_00901FA0(a0, a1, a2, a3);
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    goto L_00901D40;
L_00901C48:;
    v0 = func_009027E0(a0, a1, a2, a3, f12.f, f13.f);
    v1 = 1;
    if (v0 == v1) { v0 = (s32) 0x8c000000U; goto L_00901D28; }
    t5 = -1;
    if (v0 == t5) goto L_00901C70;
    v0 = (s32) 0x84020000U; goto L_00901D38;
L_00901C70:;
    v0 = (s32) 0x3b0000U;
    a5 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    t4 = 11;
    a4 = (s32) 0x590000U;
    a1 = (s32) 0x930000U;
    a3 = (s32) 0x3b0000U;
    a2 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (a0 + 40)) = (u32) t4;
    v0 = (s32) 0x3b0000U;
    a7 = (*(volatile s32 *) (u32) (v0 + -5680));
    v1 = (s32) 0x3b0000U;
    a5 = (s32) ((u32) a5 + 0x1ef8U);
    a4 = (s32) ((u32) a4 + 0x1ef6U);
    a0 = (s32) ((u32) sp + 0x10U);
    a1 = (s32) ((u32) a1 + 0xffffe238U);
    a6 = (*(volatile s32 *) (u32) (a7 + 32));
    v0 = (s32) 0x590000U;
    if ((s32) t4 != 0) { s64 q_ = (s32) ((s32) a6 / (s32) t4); hi = (s32) ((s32) a6 % (s32) t4); lo = q_; }
    a6 = hi;
    (*(volatile u32 *) (u32) (a7 + 32)) = (u32) a6;
    a3 = (*(volatile s32 *) (u32) (a3 + -5680));
    (*(volatile u32 *) (u32) (a3 + 52)) = (u32) t5;
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
    a1 = (s32) ((u32) sp + 0x10U);
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (s32) ((u32) v0 + 0x98U); func_00C74FA0(a0, a1, a2, a3);
    func_00901FA0(a0, a1, a2, a3);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
    goto L_00901D40;
L_00901D28:;
    a0 = v0 | 0x8005; SD_call(a0);
    goto L_00901D40;
L_00901D38:;
    a0 = v0 | 0x8400; SD_call(a0);
L_00901D40:;
L_00901D44:;
    v0 = 0;
    return v0;
}
