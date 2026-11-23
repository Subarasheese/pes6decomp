/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_006203F0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    at = (u64) a0 < (u64) (s64) 13;
    if (at == 0) { a0 = 1; goto L_0062043C; }
    v1 = (s32) ((u32) a0 << 2);
    a0 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffffa650U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x620418U) goto L_00620418; if (t_ == 0x620428U) goto L_00620428; if (t_ == 0x620438U) goto L_00620438; if (t_ == 0x620448U) goto L_00620448; if (t_ == 0x620458U) goto L_00620458; if (t_ == 0x620468U) goto L_00620468; if (t_ == 0x620478U) goto L_00620478; if (t_ == 0x620488U) goto L_00620488; if (t_ == 0x620498U) goto L_00620498; if (t_ == 0x6204a8U) goto L_006204A8; if (t_ == 0x6204b8U) goto L_006204B8; if (t_ == 0x6204c8U) goto L_006204C8; }
L_00620418:;
    a0 = 32;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -10088)) = (u32) a0; goto L_006204D4;
L_00620428:;
    a0 = 64;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -10088)) = (u32) a0; goto L_006204D4;
L_00620438:;
    a0 = 1;
L_0062043C:;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -10088)) = (u32) a0; goto L_006204D4;
L_00620448:;
    a0 = 2;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -10088)) = (u32) a0; goto L_006204D4;
L_00620458:;
    a0 = 8;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -10088)) = (u32) a0; goto L_006204D4;
L_00620468:;
    a0 = 16;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -10088)) = (u32) a0; goto L_006204D4;
L_00620478:;
    a0 = 128;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -10088)) = (u32) a0; goto L_006204D4;
L_00620488:;
    a0 = 256;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -10088)) = (u32) a0; goto L_006204D4;
L_00620498:;
    a0 = 512;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -10088)) = (u32) a0; goto L_006204D4;
L_006204A8:;
    a0 = 1024;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -10088)) = (u32) a0; goto L_006204D4;
L_006204B8:;
    a0 = 4096;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -10088)) = (u32) a0; goto L_006204D4;
L_006204C8:;
    a0 = 2048;
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -10088)) = (u32) a0;
L_006204D4:;
    return;
}
