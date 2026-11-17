/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00277220(s64, s64);
s64 func_009A0270(void);
s64 func_00C2A7F0(s64, s64, s64);
s64 func_00C30C10(s64, s64, s64, s64);
s64 func_00C32010(s64, s64);

s64 func_00C2AA90(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 frame[28];
    s64 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1e00U);
    fp = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x2980U);
    fp = (s32) ((u32) fp + 0x3860U);
    s4 = a0;
    s3 = a1;
    s2 = a2;
    a1 = (*(volatile u8 *) (u32) a0);
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) a3;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0;
    v0 = (s32) ((u32) v0 + (u32) a1);
    a0 = (s32) ((u32) a1 << 4);
    a0 = (s32) ((u32) a0 - (u32) a1);
    s0 = (s32) ((u32) v0 + 0xf8U);
    s6 = (s32) ((u32) v0 + 0xf6U);
    v0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 - (u32) a0);
    v0 = (s32) ((u32) v0 << 8);
    v0 = (s32) ((u32) v1 + (u32) v0);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_00C2AB18:;
    s1 = 0;
L_00C2AB20:;
    v0 = (s32) ((u32) s4 + (u32) s1);
    s5 = (*(volatile u8 *) (u32) (v0 + 140));
    a0 = s4;
    a1 = s5; v0 = func_00C32010(a0, a1);
    if (v0 == 0) { v0 = 0; goto L_00C2AB90; }
    v0 = (s32) ((u32) s5 << 4);
    v1 = (s32) ((u32) v0 - (u32) s5);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) v0 << 3);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s5 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (s5 + 248));
    if (v0 != 0) goto L_00C2AC78;
    v0 = (*(volatile u8 *) (u32) (s5 + 249));
    if (v0 != 0) goto L_00C2AC78;
    s7 = (*(volatile u8 *) (u32) (s5 + 258)); v0 = func_009A0270();
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xfffffffbU);
    at = v0 < s7;
    if (at == 0) goto L_00C2AC80;
    v0 = 0;
L_00C2AB90:;
    v1 = (*(volatile s32 *) (u32) fp);
    if (v1 != v0) goto L_00C2AC48;
    v0 = 2;
    if (v1 == v0) goto L_00C2ABC0;
    v0 = 1;
    if (v1 == v0) goto L_00C2ABF8;
    goto L_00C2ABF8;
L_00C2ABC0:;
    v0 = (*(volatile s32 *) (u32) (sp + 220));
    if (v0 == 0) goto L_00C2ABF8;
    if (s2 == 0) goto L_00C2AC98;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) s6);
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7107));
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 - (u32) v1);
    if (v0 == 0) goto L_00C2AC98;
L_00C2ABF8:;
    if (s2 == 0) goto L_00C2AC48;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) s6);
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 7107));
    v1 = (s32) ((u32) a0 + (u32) v1);
    v0 = (s32) ((u32) v0 - (u32) v1);
    if (v0 == 0) goto L_00C2AC48;
    a0 = s4;
    a1 = s3;
    a2 = s1;
    a3 = 4; v0 = func_00C30C10(a0, a1, a2, a3);
    if (v0 == 0) goto L_00C2AC48;
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0;
L_00C2AC48:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 11;
    if (v0 != 0) goto L_00C2AB20;
    v0 = (*(volatile s32 *) (u32) (sp + 192));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) v0;
    v0 = v0 < 2;
    { s32 c_ = v0 != 0; fp = (s32) ((u32) fp + 0x4U); if (c_) goto L_00C2AB18; }
    v0 = (*(volatile s32 *) (u32) (sp + 176)); goto L_00C2ACC0;
L_00C2AC78:;
    v0 = 0; goto L_00C2AB90;
L_00C2AC80:;
    a0 = (s32) ((u32) s5 + 0xf0U);
    a1 = 1; v0 = func_00277220(a0, a1);
    goto L_00C2AB90;
L_00C2AC98:;
    a0 = s4;
    a1 = s3;
    a2 = s2; v0 = func_00C2A7F0(a0, a1, a2);
    if (v0 == 0) goto L_00C2ABF8;
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) v0; goto L_00C2ABF8;
L_00C2ACC0:;
    return v0;
}
