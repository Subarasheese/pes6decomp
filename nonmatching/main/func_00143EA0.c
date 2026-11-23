/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00144920(s64, s64, s64, s64, s64, s64, s64);
s64 func_00146CE0(void);
s64 func_00146CF0(s64, s64, s64);
s64 func_00149A80(s64);
s64 func_00149C20(s64);

void func_00143EA0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) 0x500000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -8272));
    { s32 c_ = v0 == 0; s4 = a1; if (c_) goto L_00143EE0; }
    v0 = (s32) 0x500000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -8271)); goto L_00143EE4;
L_00143EE0:;
    v0 = (*(volatile u8 *) (u32) (a0 + 68));
L_00143EE4:;
    v1 = (*(volatile u8 *) (u32) (a0 + 64));
    a1 = v0 & 0xff;
    v0 = 3;
    if (v1 != v0) goto L_00143F04;
    v0 = 24;
    s6 = (s64) ((u64) v0 << 32); goto L_00143F0C;
L_00143F04:;
    v0 = (s32) 0x500000U;
    s6 = (*(volatile s64 *) (u32) (v0 + -8288));
L_00143F0C:;
    v1 = (*(volatile s32 *) (u32) (a0 + 60));
    v0 = (s32) 0x500000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -8266));
    v1 = (s32) ((u32) a0 + (u32) v1);
    s1 = (*(volatile s64 *) (u32) (v1 + 8));
    { s32 c_ = v0 == 0; s0 = (*(volatile s32 *) (u32) (a0 + 52)); if (c_) goto L_00143F34; }
    v0 = (*(volatile s32 *) (u32) (gp + -32560));
    s3 = (s32) ((u32) v0 + 0x1b0U); goto L_00143F38;
L_00143F34:;
    s3 = (*(volatile s32 *) (u32) (gp + -32560));
L_00143F38:;
    v0 = (s32) 0x500000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -8259));
    if (v0 == 0) goto L_00143F54;
    v0 = (s32) 0x14000000U;
    s5 = v0 | 0x28; goto L_00143F6C;
L_00143F54:;
    if (a1 != 0) { v0 = (s32) 0x14000000U; goto L_00143F68; }
    v0 = (s32) 0x14000000U;
    s5 = v0 | 0x1a; goto L_00143F6C;
L_00143F68:;
    s5 = v0 | 0x1c;
L_00143F6C:;
    v1 = (*(volatile s32 *) (u32) (a2 + 16));
    a0 = (s32) ((u32) s0 << 2);
    v0 = (*(volatile s32 *) (u32) (a2 + 20));
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    s2 = (*(volatile s32 *) (u32) v1);
    { s32 c_ = s2 != 0; a2 = (*(volatile s32 *) (u32) v0); if (c_) goto L_00143F98; }
    v0 = (*(volatile s32 *) (u32) (gp + -23376));
    v0 = (s32) ((u32) v0 + (u32) a0);
    s2 = (*(volatile s32 *) (u32) v0);
L_00143F98:;
    if (a2 != 0) goto L_00143FAC;
    v0 = (*(volatile s32 *) (u32) (gp + -23376));
    v0 = (s32) ((u32) v0 + (u32) a0);
    a2 = (*(volatile s32 *) (u32) v0);
L_00143FAC:;
    v0 = (*(volatile s32 *) (u32) (gp + -23392));
    if (v0 != s0) { a0 = s4; goto L_0014401C; }
L_00143FB8:;
    v0 = func_00146CE0();
    v1 = s6 | v0;
    v0 = s1 & 0x1c;
    { s32 c_ = v0 != 0; (*(volatile u64 *) (u32) (s3 + 32)) = (u64) v1; if (c_) goto L_00144030; }
    (*(volatile u64 *) (u32) (s3 + 48)) = (u64) s1;
L_00143FD4:;
    v0 = (s32) 0x500000U;
    v1 = (s32) 0x6c090000U;
    a5 = (*(volatile s32 *) (u32) (v0 + 3776));
    a0 = s4;
    a2 = s3;
    a6 = s5;
    a1 = 144;
    a3 = 0;
    v0 = (s32) 0x4000000U;
    a4 = a5 | v1;
    a5 = a5 | v0; v0 = func_00144920(a0, a1, a2, a3, a4, a5, a6);
    a0 = (s32) 0x500000U;
    v1 = (s32) 0x500000U;
    a0 = (*(volatile s64 *) (u32) (a0 + 3776));
    a0 = a0 ^ 0x200;
    (*(volatile u64 *) (u32) (v1 + 3776)) = (u64) a0; goto L_0014405C;
L_0014401C:;
    a1 = s2; v0 = func_00146CF0(a0, a1, a2);
    (*(volatile u32 *) (u32) (gp + -23392)) = (u32) s0;
    s4 = v0; goto L_00143FB8;
L_00144030:;
    v0 = (*(volatile s32 *) (u32) (gp + -23412));
    a0 = s2;
    v0 = (*(volatile s64 *) (u32) (v0 + 312));
    v0 = s1 | v0;
    (*(volatile u64 *) (u32) (s3 + 48)) = (u64) v0; v0 = func_00149C20(a0);
    a0 = s2;
    (*(volatile u64 *) (u32) (s3 + 64)) = (u64) v0; v0 = func_00149A80(a0);
    (*(volatile u64 *) (u32) (s3 + 80)) = (u64) v0; goto L_00143FD4;
L_0014405C:;
    return;
}
