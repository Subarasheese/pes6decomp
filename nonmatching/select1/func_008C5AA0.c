/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EDAE0(s32, s32);
void func_002CEAF0(s32, s32, s32, s32);
void func_002CF5C0(s32, s32, s32, s32);
void func_002D0010(s32, s32, s32, s32);
void func_008B31A0(s32, s32);
void func_008B31E0(s32, s32, s32, s32);

void func_008C5AA0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x8e0000U;
    a0 = (s32) 0x8e0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -23664));
    v1 = (s32) 0x8e0000U;
    f2.f = (*(volatile f32 *) (u32) (v1 + -23660));
    (*(volatile f32 *) (u32) (sp + 128)) = f0.f;
    v1 = (s32) 0x8e0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -23656));
    (*(volatile f32 *) (u32) (sp + 132)) = f2.f;
    v1 = (s32) 0x8e0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -23652));
    (*(volatile f32 *) (u32) (sp + 136)) = f1.f;
    v1 = (s32) 0x8e0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -23648));
    (*(volatile f32 *) (u32) (sp + 140)) = f0.f;
    v1 = (s32) 0x8e0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + -23644));
    (*(volatile f32 *) (u32) (sp + 144)) = f1.f;
    v1 = (s32) 0x8e0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + -23640));
    (*(volatile f32 *) (u32) (sp + 148)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + -23636));
    v1 = (s32) 0x8e0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 30880));
    (*(volatile f32 *) (u32) (sp + 152)) = f1.f;
    { s32 c_ = v1 == 0; (*(volatile f32 *) (u32) (sp + 156)) = f0.f; if (c_) goto L_008C5CD8; }
    s2 = (s32) 0x8e0000U;
    s5 = (s32) 0x590000U;
    s1 = (s32) 0x8e0000U;
    s4 = 0;
    s2 = (s32) ((u32) s2 + 0x7860U);
    s5 = (s32) ((u32) s5 + 0x1bb0U);
    s1 = (s32) ((u32) s1 + 0x78a0U);
    s6 = 0;
L_008C5B50:;
    a1 = (*(volatile s16 *) (u32) (s2 + 4));
    v1 = 3;
    if (a1 == v1) goto L_008C5C40;
    a0 = 2;
    if (a1 == a0) goto L_008C5C40;
    v1 = 1;
    if (a1 == v1) goto L_008C5C40;
    if (a1 == 0) goto L_008C5B88;
    goto L_008C5CB8;
L_008C5B88:;
    v0 = (*(volatile s32 *) (u32) s2);
    v0 = v0 & 0x1;
    if (v0 == 0) { a0 = 0; goto L_008C5B98; }
L_008C5B98:;
    a2 = (s32) ((u32) a0 + 0x1U);
    a1 = (*(volatile u16 *) (u32) s5);
    a0 = (*(volatile s32 *) (u32) s1);
    a3 = s4; func_002D0010(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s2);
    v0 = v0 & 0x2;
    if (v0 == 0) { v0 = 0; goto L_008C5BC0; }
    v0 = 2;
L_008C5BC0:;
    a0 = (*(volatile s32 *) (u32) (s1 + 4));
    a2 = (s32) ((u32) v0 + 0x1U);
    a1 = (*(volatile u16 *) (u32) s5);
    a3 = s4; func_002CF5C0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s2);
    v0 = v0 & 0x4;
    if (v0 == 0) { v0 = 0; goto L_008C5BE8; }
    v0 = 2;
L_008C5BE8:;
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    a2 = (s32) ((u32) v0 + 0x1U);
    a1 = (*(volatile u16 *) (u32) s5);
    a3 = s4; func_002CEAF0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) s2);
    v0 = v0 & 0x4;
    if (v0 == 0) { v0 = 0; goto L_008C5C10; }
    v0 = 2;
L_008C5C10:;
    a0 = (*(volatile s32 *) (u32) (s1 + 12));
    a2 = (s32) ((u32) v0 + 0x1U);
    a1 = (*(volatile u16 *) (u32) s5);
    a3 = s4; func_002CEAF0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -20144));
    v0 = (s32) ((u32) v0 + (u32) s6);
    a0 = (*(volatile s32 *) (u32) (v0 + 56));
    a1 = 0; func_008B31A0(a0, a1);
    goto L_008C5CB8;
L_008C5C40:;
    s3 = 0;
    s0 = s1;
L_008C5C48:;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 0; func_001EDAE0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008C5C48; }
    v0 = (*(volatile s32 *) (u32) s2);
    { s32 c_ = v0 == 0; s0 = 0; if (c_) goto L_008C5C78; }
    s0 = 1;
L_008C5C78:;
    v0 = (*(volatile s32 *) (u32) (gp + -20144));
    v0 = (s32) ((u32) v0 + (u32) s6);
    a0 = (*(volatile s32 *) (u32) (v0 + 56));
    a1 = 1; func_008B31A0(a0, a1);
    v0 = (*(volatile s16 *) (u32) (s2 + 4));
    v1 = (*(volatile s32 *) (u32) (gp + -20144));
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s0 + (u32) v0);
    v1 = (s32) ((u32) v1 + (u32) s6);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (*(volatile u16 *) (u32) (v0 + 128));
    a0 = (*(volatile s32 *) (u32) (v1 + 56)); func_008B31E0(a0, a1, a2, a3);
L_008C5CB8:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v1 = s4 < 2;
    s2 = (s32) ((u32) s2 + 0x10U);
    s5 = (s32) ((u32) s5 + 0x2U);
    s1 = (s32) ((u32) s1 + 0x10U);
    { s32 c_ = v1 != 0; s6 = (s32) ((u32) s6 + 0x4U); if (c_) goto L_008C5B50; }
L_008C5CD8:;
    return;
}
