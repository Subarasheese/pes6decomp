/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00229E40(s64, s64);
s64 func_00229E50(s64, s64);
s64 func_0022B890(void);
s64 func_00235EB0(s64, s64, s64, s64);
s64 func_00235FF0(s64, s64, s64, s64);

void func_008FF280(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 gp = 0x3ef370;

    v0 = func_0022B890();
    a0 = (*(volatile s32 *) (u32) (gp + -20056));
    s6 = v0 & 0xff;
    v1 = (s32) ((u32) gp + 0xffffb1acU);
    v0 = 7;
    s4 = 0;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (v1 + 24));
    { s32 c_ = v1 == v0; s7 = 1; if (c_) goto L_008FF32C; }
    v0 = 8;
    if (v1 == v0) { s4 = (s64) ((u64) 0 + (u64) (s64) 7); goto L_008FF330; }
    if (v1 == s7) { s4 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_008FF330; }
    v0 = 10;
    if (v1 == v0) goto L_008FF320;
    if (v1 == 0) { s4 = 0; goto L_008FF330; }
    v0 = 9;
    if (v1 == v0) goto L_008FF314;
    s7 = 0; goto L_008FF330;
L_008FF314:;
    s4 = 0;
    goto L_008FF330;
L_008FF320:;
    s4 = (s64) ((u64) 0 + (u64) (s64) 1);
    goto L_008FF330;
L_008FF32C:;
    s4 = (s64) ((u64) 0 + (u64) (s64) 7);
L_008FF330:;
    s5 = 0;
    s0 = 0;
L_008FF338:;
    { s32 c_ = s5 >= 0; v1 = s5 & 0x1; if (c_) goto L_008FF34C; }
    if (v1 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -31680)); goto L_008FF350; }
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
L_008FF34C:;
    v0 = (*(volatile s32 *) (u32) (gp + -31680));
L_008FF350:;
    a0 = s6;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s3 = (*(volatile u8 *) (u32) (v0 + 44));
    a1 = s3; v0 = func_00229E50(a0, a1);
    s2 = v0 & 0xffff;
    a0 = s6;
    a1 = s3; v0 = func_00229E40(a0, a1);
    { s32 c_ = s7 == 0; s1 = v0 & 0xffff; if (c_) goto L_008FF3A8; }
    a0 = s4;
    a1 = s3; v0 = func_00235FF0(a0, a1, a2, a3);
    v0 = (s32) ((u32) s2 + (u32) v0);
    a1 = s3;
    s2 = v0 & 0xffff;
    a0 = s4; v0 = func_00235EB0(a0, a1, a2, a3);
    v1 = (s32) ((u32) s1 + (u32) v0);
    s1 = v1 & 0xffff;
L_008FF3A8:;
    a2 = (*(volatile s32 *) (u32) (gp + -20056));
    a0 = s2 & 0xffff;
    v1 = s1 & 0xffff;
    a0 = (s32) ((u32) a0 - (u32) v1);
    s5 = (s32) ((u32) s5 + 0x1U);
    a1 = (s32) ((u32) gp + 0xffffb1acU);
    v1 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) a1 + (u32) v1);
    at = s5 < 2;
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u16 *) (u32) (v1 + 40)) = (u16) s2;
    v1 = (*(volatile s32 *) (u32) (gp + -20056));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u16 *) (u32) (v1 + 42)) = (u16) s1;
    v1 = (*(volatile s32 *) (u32) (gp + -20056));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u32 *) (u32) (v1 + 44)) = (u32) a0;
    { s32 c_ = at != 0; s0 = (s32) ((u32) s0 + 0x8U); if (c_) goto L_008FF338; }
    return;
}
