/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001DF2F0(s32);
void func_001DF820(s32, s32, s32, s32);
s32 func_002F96F0(s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008FF850(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s6 = (s32) ((u32) sp + 0x90U);
    s5 = (s32) ((u32) sp + 0x98U);
    s4 = 0;
    s1 = 0;
L_008FF884:;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -29136));
    s3 = 0;
    f2.f = (*(volatile f32 *) (u32) (v0 + -29132));
    s0 = 0;
    v1 = (s32) 0x930000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -29128));
    v0 = (s32) 0x930000U;
    (*(volatile f32 *) (u32) (sp + 152)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (v0 + -29124));
    (*(volatile f32 *) (u32) (sp + 144)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 156)) = f2.f;
    (*(volatile f32 *) (u32) (sp + 148)) = f0.f;
L_008FF8C0:;
    a0 = (*(volatile s32 *) (u32) (gp + -20056));
    v0 = (*(volatile s32 *) (u32) s5);
    v1 = (s32) ((u32) gp + 0xffffb1acU);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) ((u32) s3 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v1);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_008FF8F8;
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
L_008FF8F8:;
    v1 = (*(volatile s32 *) (u32) (gp + -20056));
    a1 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb1acU);
    a0 = (s32) ((u32) sp + 0x80U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a2 = (*(volatile u16 *) (u32) (v0 + 40));
    a1 = (s32) ((u32) a1 + 0xffffad80U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s2;
    a1 = (s32) ((u32) sp + 0x80U); func_001DF820(a0, a1, a2, a3);
    a0 = s2; func_001DF2F0(a0);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 2;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x2U); if (c_) goto L_008FF8C0; }
    v1 = (*(volatile s32 *) (u32) (gp + -20056));
    v0 = (s32) ((u32) gp + 0xffffb1acU);
    a1 = (*(volatile s32 *) (u32) s6);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_008FF980;
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
L_008FF980:;
    v1 = (*(volatile s32 *) (u32) (gp + -20056));
    a1 = (s32) 0x930000U;
    v0 = (s32) ((u32) gp + 0xffffb1acU);
    a0 = (s32) ((u32) sp + 0x80U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a2 = (*(volatile s32 *) (u32) (v0 + 44));
    a1 = (s32) ((u32) a1 + 0xffffad80U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x80U); func_001DF820(a0, a1, a2, a3);
    a0 = s0; func_001DF2F0(a0);
    s4 = (s32) ((u32) s4 + 0x1U);
    s5 = (s32) ((u32) s5 + 0x4U);
    at = s4 < 2;
    s1 = (s32) ((u32) s1 + 0x8U);
    { s32 c_ = at != 0; s6 = (s32) ((u32) s6 + 0x4U); if (c_) goto L_008FF884; }
    return;
}
