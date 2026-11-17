/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002075B0(s32, s32, s32, s32);

void func_00B70E70(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u8 *) (u32) (v1 + 76));
    v1 = (s32) ((u32) v1 + 0xffffffd9U);
    at = (u64) v1 < (u64) (s64) 9;
    { s32 c_ = at == 0; s0 = a0; if (c_) goto L_00B70FC8; }
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffd490U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xb70eb0U) goto L_00B70EB0; if (t_ == 0xb70ed0U) goto L_00B70ED0; if (t_ == 0xb70ef0U) goto L_00B70EF0; if (t_ == 0xb70f10U) goto L_00B70F10; if (t_ == 0xb70f30U) goto L_00B70F30; if (t_ == 0xb70f50U) goto L_00B70F50; if (t_ == 0xb70f70U) goto L_00B70F70; if (t_ == 0xb70f90U) goto L_00B70F90; if (t_ == 0xb70fb0U) goto L_00B70FB0; }
L_00B70EB0:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1075;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s0); goto L_00B70FCC;
L_00B70ED0:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1076;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00B70FC8;
L_00B70EF0:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1078;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00B70FC8;
L_00B70F10:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1079;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00B70FC8;
L_00B70F30:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1137;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00B70FC8;
L_00B70F50:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1415;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00B70FC8;
L_00B70F70:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1416;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00B70FC8;
L_00B70F90:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1417;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00B70FC8;
L_00B70FB0:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1418;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
L_00B70FC8:;
    v1 = (*(volatile s32 *) (u32) s0);
L_00B70FCC:;
    a0 = 22;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0;
    return;
}
