/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void strcpy(s32, s32);

s32 func_00253400(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    a4 = (s32) 0x580000U;
    v0 = -1;
    a4 = (s32) ((u32) a4 + 0x43f0U);
    s0 = 0;
L_0025341C:;
    v1 = (*(volatile s32 *) (u32) (a4 + 72));
    if (v1 != 0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_002534A4; }
    v0 = (s32) ((u32) s0 << 1);
    a6 = (s32) 0x580000U;
    v0 = (s32) ((u32) v0 + (u32) s0);
    a5 = (s32) 0x580000U;
    v0 = (s32) ((u32) v0 << 3);
    a4 = (s32) 0x580000U;
    v0 = (s32) ((u32) v0 - (u32) s0);
    a6 = (s32) ((u32) a6 + 0x43f0U);
    a7 = (s32) ((u32) v0 << 2);
    a5 = (s32) ((u32) a5 + 0x4434U);
    a6 = (s32) ((u32) a6 + (u32) a7);
    v0 = (s32) 0x580000U;
    a4 = (s32) ((u32) a4 + 0x4440U);
    (*(volatile u32 *) (u32) a6) = (u32) a1;
    a5 = (s32) ((u32) a5 + (u32) a7);
    v0 = (s32) ((u32) v0 + 0x4438U);
    a1 = (s32) ((u32) a4 + (u32) a7);
    (*(volatile u32 *) (u32) a5) = (u32) a2;
    v1 = 1;
    v0 = (s32) ((u32) v0 + (u32) a7);
    (*(volatile u32 *) (u32) a1) = (u32) a0;
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    v0 = (*(volatile s8 *) (u32) a3);
    if (v0 != 0) { a0 = (s32) ((u32) a6 + 0x4U); goto L_002534B8; }
    v0 = (s32) 0x580000U;
    v0 = (s32) ((u32) v0 + 0x43f4U);
    v0 = (s32) ((u32) v0 + (u32) a7);
    (*(volatile u8 *) (u32) v0) = (u8) 0;
L_0025349C:;
    v0 = s0; goto L_002534B0;
L_002534A4:;
    v1 = s0 < 36;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x5cU); if (c_) goto L_0025341C; }
L_002534B0:;
    goto L_002534C8;
L_002534B8:;
    a1 = a3; strcpy(a0, a1);
    goto L_0025349C;
L_002534C8:;
    return v0;
}
