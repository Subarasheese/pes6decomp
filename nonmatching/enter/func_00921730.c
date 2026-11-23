/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001EDC80(s32, s32);
void func_001EF900(s32, s32);
s32 func_0020D040(s32, s32);
void func_002D57E0(s32, s32, s32, s32);
s32 func_002F96F0(s32, s32);
void func_002FA170(s32, s32, s32, s32, s32, s32);

void func_00921730(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 gp = 0x3ef370;
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) ((u32) gp + 0xffffb268U);
    fp = a3;
    s7 = a2;
    s5 = a1;
    a1 = 0;
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) (v1 + 96));
    s2 = (*(volatile s32 *) (u32) (v1 + 100));
    a0 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0; v0 = func_002F96F0(a0, a1);
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) v0;
    { s32 c_ = s2 <= 0; s1 = 0; if (c_) goto L_00921878; }
    s3 = 0;
L_009217A4:;
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    a1 = 0;
    s0 = (s32) ((u32) s5 + (u32) s1);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v1 + (u32) s3);
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    s6 = (*(volatile s32 *) (u32) (v0 + 152));
    s4 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_009217E0;
    s4 = (*(volatile s32 *) (u32) (v0 + 12));
L_009217E0:;
    a0 = s4;
    a1 = s0; v0 = func_001EDC80(a0, a1);
    a0 = (*(volatile s32 *) (u32) (sp + 176));
    a1 = s6;
    s4 = v0; v0 = func_0020D040(a0, a1);
    a2 = (*(volatile s32 *) (u32) (sp + 172));
    a1 = v0;
    a3 = (s32) ((u32) s7 + (u32) s1);
    a0 = s4;
    a4 = fp;
    a5 = 2; func_002FA170(a0, a1, a2, a3, a4, a5);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    a2 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb268U);
    a0 = s4;
    a2 = (s32) ((u32) a2 + 0xffffa4f0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v0 + 76));
    a3 = 8; func_002D57E0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    a0 = (s32) ((u32) gp + 0xffffb268U);
    s1 = (s32) ((u32) s1 + 0x1U);
    a2 = 1;
    s3 = (s32) ((u32) s3 + 0x4U);
    a1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = s1 < s2;
    a0 = (*(volatile s32 *) (u32) a0);
    a0 = (s32) ((u32) a0 + (u32) s0);
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (a0 + 32)) = (u8) a2; if (c_) goto L_009217A4; }
L_00921878:;
    at = s2 < 12;
    if (at == 0) goto L_009218F8;
L_00921884:;
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    a1 = 0;
    s1 = (s32) ((u32) s5 + (u32) s2);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_009218B8;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_009218B8:;
    a0 = s0;
    a1 = s1; v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = 0; func_001EF900(a0, a1);
    a1 = (*(volatile s32 *) (u32) (gp + -19868));
    s2 = (s32) ((u32) s2 + 0x1U);
    a0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = s2 < 12;
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    a0 = (s32) ((u32) a0 + (u32) s1);
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (a0 + 32)) = (u8) 0; if (c_) goto L_00921884; }
L_009218F8:;
    return;
}
