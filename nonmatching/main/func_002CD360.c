/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
s32 func_00295290(void);
s32 func_002CD590(s32, s32, s32, s32);
s32 func_002CD700(s32);
s32 func_002CD8C0(s32, s32, s32, s32);
s32 func_002CDB10(s32, s32, s32, s32);
s32 func_002E8490(void);
s32 func_002F82B0(s32, s32, s32, s32);
s32 func_002FC720(s32);
s32 memset(s32, s32, s32);

s32 func_002CD360(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    s4 = a0;
    s3 = a2;
    a0 = (s32) 0x590000U;
    a2 = (s32) ((u32) s4 << 2);
    a2 = (s32) ((u32) a2 + (u32) s4);
    a1 = (s32) ((u32) a2 << 2);
    a0 = (s32) ((u32) a0 + 0xffffd8a0U);
    a1 = (s32) ((u32) a2 + (u32) a1);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 + (u32) v1);
    s2 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) s4 << 1);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1bb0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (*(volatile u16 *) (u32) v0);
    a0 = s1; v0 = Pes6Team_ResolveSpecialId(a0);
    s0 = v0 & 0xffff;
    a0 = (s32) ((u32) s2 + 0x38U);
    a1 = 0;
    a2 = 42; v0 = memset(a0, a1, a2);
    a0 = (s32) ((u32) s2 + 0x10U);
    a1 = 0;
    a2 = 40; v0 = memset(a0, a1, a2);
    v0 = func_00295290();
    (*(volatile u8 *) (u32) (s2 + 98)) = (u8) v0;
    v1 = (s32) ((u32) gp + 0xffffab18U);
    v0 = (u64) 0 < (u64) s3;
    v1 = (s32) ((u32) v1 + (u32) s4);
    v0 = v0 ^ 0x1;
    a4 = (*(volatile u8 *) (u32) v1);
    a0 = (s32) ((u32) v0 << 1);
    a3 = (s32) ((u32) a0 + (u32) v0);
    a2 = (s32) ((u32) a3 + 0x1U);
    a1 = (s32) ((u32) a3 + 0x2U);
    a3 = (s32) a4 >> (a3 & 31);
    a2 = (s32) a4 >> (a2 & 31);
    a3 = a3 & 0x1;
    a1 = (s32) a4 >> (a1 & 31);
    (*(volatile u8 *) (u32) (s2 + 52)) = (u8) a3;
    a2 = a2 & 0x1;
    a0 = (s32) ((u32) s0 << 1);
    v1 = (s32) ((u32) s3 << 1);
    a0 = (s32) ((u32) a0 + (u32) s0);
    v1 = (s32) ((u32) v1 + (u32) s3);
    (*(volatile u8 *) (u32) (s2 + 53)) = (u8) a2;
    a1 = a1 & 0x1;
    (*(volatile u8 *) (u32) (s2 + 54)) = (u8) a1;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 << 1);
    (*(volatile u8 *) (u32) (s2 + 1)) = (u8) s4;
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) (s2 + 17)) = (u8) v0;
    (*(volatile u16 *) (u32) (s2 + 14)) = (u16) v1;
    a0 = s1 & 0xffff;
    v0 = (*(volatile u8 *) (u32) (s2 + 52));
    v0 = (s32) ((u32) v0 << 1);
    a1 = (s32) ((u32) s3 + (u32) v0); v0 = func_002F82B0(a0, a1, a2, a3);
    s5 = v0;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = 5;
    if (v1 == v0) { v0 = 273; goto L_002CD4C0; }
    v0 = func_002E8490();
    v1 = 1;
    if (v0 != v1) { a0 = s4 & 0xff; goto L_002CD4E8; }
    v0 = 273;
L_002CD4C0:;
    if (s0 == v0) goto L_002CD4E4;
    v0 = 272;
    if (s0 == v0) goto L_002CD4E4;
    a0 = s2; v0 = func_002CD700(a0);
    goto L_002CD568;
L_002CD4E4:;
    a0 = s4 & 0xff;
L_002CD4E8:;
    v0 = func_002FC720(a0);
    v0 = v0 & 0xff;
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s5 + 58)); goto L_002CD534; }
    v0 = (*(volatile u8 *) (u32) (s5 + 58));
    if (v0 != 0) goto L_002CD530;
    a0 = s4 & 0xff; v0 = func_002FC720(a0);
    v0 = v0 & 0xff;
    a0 = s2;
    a1 = s1;
    a3 = s3;
    a2 = (s32) ((u32) v0 + 0xffffffffU); v0 = func_002CD590(a0, a1, a2, a3);
    goto L_002CD564;
L_002CD530:;
    v0 = (*(volatile u8 *) (u32) (s5 + 58));
L_002CD534:;
    if (v0 != 0) { a0 = s2; goto L_002CD558; }
    a0 = s2;
    a1 = s1;
    a2 = s3;
    a3 = s4; v0 = func_002CD8C0(a0, a1, a2, a3);
    goto L_002CD564;
L_002CD558:;
    a1 = s1;
    a2 = s3; v0 = func_002CDB10(a0, a1, a2, a3);
L_002CD564:;
L_002CD568:;
    return v0;
}
