/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002075B0(s32, s32, s32, s32);

void func_00BBDDC0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v1 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u8 *) (u32) (v1 + 76));
    v1 = (s32) ((u32) v1 + 0xffffffceU);
    at = (u64) v1 < (u64) (s64) 7;
    { s32 c_ = at == 0; s0 = a0; if (c_) goto L_00BBDED8; }
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x1b70U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xbbde00U) goto L_00BBDE00; if (t_ == 0xbbde20U) goto L_00BBDE20; if (t_ == 0xbbde40U) goto L_00BBDE40; if (t_ == 0xbbde60U) goto L_00BBDE60; if (t_ == 0xbbde80U) goto L_00BBDE80; if (t_ == 0xbbdea0U) goto L_00BBDEA0; if (t_ == 0xbbdec0U) goto L_00BBDEC0; }
L_00BBDE00:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1075;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) s0); goto L_00BBDEDC;
L_00BBDE20:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1076;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00BBDED8;
L_00BBDE40:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1077;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00BBDED8;
L_00BBDE60:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1078;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00BBDED8;
L_00BBDE80:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1079;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00BBDED8;
L_00BBDEA0:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1137;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
    goto L_00BBDED8;
L_00BBDEC0:;
    v0 = (*(volatile s32 *) (u32) s0);
    a1 = 1143;
    a2 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = 8; func_002075B0(a0, a1, a2, a3);
L_00BBDED8:;
    v1 = (*(volatile s32 *) (u32) s0);
L_00BBDEDC:;
    a0 = 120;
    (*(volatile u16 *) (u32) (v1 + 24)) = (u16) a0;
    return;
}
