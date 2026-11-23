/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00263210(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = (*(volatile u8 *) (u32) (a0 + 32));
    at = (u64) a2 < (u64) (s64) 9;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u32 *) (u32) v1) = (u32) a1;
    v1 = (*(volatile u8 *) (u32) (a0 + 32));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (v1 + 8)) = (u32) a2; if (c_) goto L_002632D4; }
    a1 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 + 0xffff9230U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x263254U) goto L_00263254; if (t_ == 0x263280U) goto L_00263280; if (t_ == 0x2632acU) goto L_002632AC; }
L_00263254:;
    v1 = (*(volatile u8 *) (u32) (a0 + 32));
    a2 = 4;
    a1 = 5;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) a2;
    v1 = (*(volatile u8 *) (u32) (a0 + 32));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 24)) = (u32) a1; goto L_002632D4;
L_00263280:;
    v1 = (*(volatile u8 *) (u32) (a0 + 32));
    a2 = 7;
    a1 = 4;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) a2;
    v1 = (*(volatile u8 *) (u32) (a0 + 32));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 24)) = (u32) a1; goto L_002632D4;
L_002632AC:;
    v1 = (*(volatile u8 *) (u32) (a0 + 32));
    a2 = 14;
    a1 = 5;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) a2;
    v1 = (*(volatile u8 *) (u32) (a0 + 32));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 24)) = (u32) a1;
L_002632D4:;
    v1 = (*(volatile u8 *) (u32) (a0 + 32));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (a0 + 32)) = (u8) v1; return;
}
