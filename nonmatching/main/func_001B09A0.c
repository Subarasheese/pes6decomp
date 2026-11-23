/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 func_0017F9A0(s64, s64, s64, s64, s64);

s64 func_001B09A0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x3a0000U;
    a1 = (s32) 0x3a0000U;
    a5 = (*(volatile s32 *) (u32) (v1 + -32016));
    a4 = (*(volatile s32 *) (u32) (a1 + -32012));
    v1 = (s32) 0x3a0000U;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) a5;
    a3 = (*(volatile s32 *) (u32) (v1 + -32008));
    a1 = (s32) 0x3a0000U;
    a2 = (*(volatile s32 *) (u32) (a1 + -32004));
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) a4;
    v1 = (s32) 0x3a0000U;
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) a3;
    v1 = (*(volatile s32 *) (u32) (v1 + -32000));
    a1 = 1;
    (*(volatile u32 *) (u32) (sp + 92)) = (u32) a2;
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (a0 + 20));
    v1 = (*(volatile u8 *) (u32) (v1 + 16));
    { s32 c_ = v1 != a1; s3 = a0; if (c_) goto L_001B0AE0; }
    a0 = 16;
    a1 = 8; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -23184)) = (u32) v0;
    s2 = 0;
    s1 = 0;
    s0 = 0;
L_001B0A24:;
    v1 = (*(volatile s32 *) (u32) (gp + -23184));
    v1 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) v1;
    a2 = (*(volatile s32 *) (u32) (s3 + 20));
    a0 = (s32) ((u32) a2 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) (a0 + 20));
    if (a0 < 0) goto L_001B0AA8;
    if (s2 <= 0) goto L_001B0AC4;
    at = s2 < 5;
    if (at == 0) goto L_001B0AC4;
    v0 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a0 << 1);
    v0 = (*(volatile s32 *) (u32) (v0 + 4428));
    a0 = (*(volatile s32 *) (u32) (a2 + 20));
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) v0);
L_001B0A78:;
    v0 = (s64) ((u64) v1 << 32);
    v0 = v0 >> 32;
    v1 = 1;
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) v1;
    a1 = (s32) 0x1b0000U;
    v0 = (*(volatile s32 *) (u32) (sp + 108));
    a1 = (s32) ((u32) a1 + 0x2970U);
    a2 = (s32) ((u32) sp + 0x6cU);
    a3 = 4;
    a4 = (s32) ((u32) sp + 0x50U);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) a0; v0 = func_0017F9A0(a0, a1, a2, a3, a4);
L_001B0AA8:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 8;
    s1 = (s32) ((u32) s1 + 0x10U);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_001B0A24; }
    goto L_001B0AE0;
L_001B0AC4:;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 4428));
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) a0 + (u32) v0); goto L_001B0A78;
L_001B0AE0:;
    return v0;
}
