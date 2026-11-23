/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void strcpy(s32, s32);

void func_00253D80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[32];
    s32 sp = (s32) (u32) frame;

    s4 = a0;
    s3 = a3;
    s2 = a4;
    s1 = a5;
    { s32 c_ = a1 == 0; s0 = a7; if (c_) goto L_00253DBC; }
    goto L_00253F18;
L_00253DBC:;
    v0 = -1;
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) a2;
    (*(volatile u32 *) (u32) (sp + 100)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 96)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 104)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 108)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) s4;
    v0 = (*(volatile s8 *) (u32) a6);
    if (v0 != 0) { a1 = a6; goto L_00253EFC; }
    (*(volatile u8 *) (u32) (sp + 120)) = (u8) 0;
    v0 = -1;
L_00253DEC:;
    a0 = (*(volatile s32 *) (u32) (sp + 256));
    (*(volatile u32 *) (u32) (sp + 184)) = (u32) v0;
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 204)) = (u32) s3;
    (*(volatile u32 *) (u32) (sp + 208)) = (u32) v0;
    v0 = (s32) ((u32) s4 << 3);
    (*(volatile u32 *) (u32) (sp + 232)) = (u32) s2;
    v0 = (s32) ((u32) v0 - (u32) s4);
    (*(volatile u32 *) (u32) (sp + 212)) = (u32) s1;
    v0 = (s32) ((u32) v0 << 7);
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) a0;
    v0 = (s32) ((u32) v0 - (u32) s4);
    (*(volatile u32 *) (u32) (sp + 236)) = (u32) s0;
    a2 = (s32) ((u32) v0 << 3);
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0;
    v0 = (s32) ((u32) v0 + 0xffff8dd8U);
    (*(volatile u32 *) (u32) (sp + 196)) = (u32) 0;
    a1 = (s32) ((u32) v0 + (u32) a2);
    (*(volatile u32 *) (u32) (sp + 200)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) a1);
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0xffff8dd4U);
    (*(volatile u32 *) (u32) (sp + 216)) = (u32) 0;
    v0 = (s32) ((u32) v0 + (u32) a2);
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) 0;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    a0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile s32 *) (u32) a1);
    at = v0 < a0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 224)) = (u32) 0; if (c_) goto L_00253F0C; }
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0xffff8dd0U);
    v1 = (s32) ((u32) v0 + (u32) a2);
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = v0 < a0;
    if (v0 != 0) goto L_00253E94;
    (*(volatile u32 *) (u32) v1) = (u32) 0;
L_00253E94:;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0xffff8dd0U);
    v0 = (s32) ((u32) v0 + 0xffff8de8U);
    a3 = (s32) ((u32) v1 + (u32) a2);
    a0 = (s32) ((u32) sp + 0x60U);
    a1 = (*(volatile s32 *) (u32) a3);
    a2 = (s32) ((u32) v0 + (u32) a2);
    v1 = 37;
    v0 = (s32) ((u32) a1 << 3);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 2);
    a1 = (s32) ((u32) v0 + (u32) a2);
L_00253ED0:;
    v0 = (*(volatile s32 *) (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) a1) = (u32) v0;
    a0 = (s32) ((u32) a0 + 0x4U);
    a1 = (s32) ((u32) a1 + 0x4U);
    if (v1 > 0) goto L_00253ED0;
    v0 = (*(volatile s32 *) (u32) a3);
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) a3) = (u32) v0; goto L_00253F14;
L_00253EFC:;
    a0 = (s32) ((u32) sp + 0x78U); strcpy(a0, a1);
    v0 = -1; goto L_00253DEC;
L_00253F0C:;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) a1) = (u32) v0;
L_00253F14:;
L_00253F18:;
    v0 = 0;
    return;
}
