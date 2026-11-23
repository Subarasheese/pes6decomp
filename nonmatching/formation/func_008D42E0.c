/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s64);
s64 func_00154070(s64);
s64 func_001C80F0(s64);
s64 func_001D6CD0(s64, s64);
void func_001D6D70(s64, s64, s64);
void func_001D7D60(s64, s64);
void func_001DF250(s64, s64);
void func_001DF820(s64, s64, s64, s64);
s64 func_008BA640(s64, s64, s64, s64);
s64 func_008C5010(void);
s64 func_008C5470(s64, s64, s64, s64, s64, s64, s64);

void func_008D42E0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[26];
    s64 sp = (s32) (u32) frame;

    fp = a4;
    s7 = a3;
    s2 = a0;
    s1 = a1;
    s0 = a2;
    s3 = (s32) ((u32) s0 << 2);
    a0 = (s32) ((u32) s3 + (u32) s2);
    v1 = (*(volatile s32 *) (u32) (a0 + 36));
    { s32 c_ = v1 == 0; s6 = (s32) ((u32) a0 + 0x24U); if (c_) goto L_008D44F0; }
    if (s1 != 0) { v1 = (*(volatile s8 *) (u32) s2); goto L_008D4358; }
    a0 = (*(volatile s32 *) (u32) (a0 + 28));
    if (a0 == 0) { ; goto L_008D44F4; }
    a1 = 0; func_001D7D60(a0, a1);
    goto L_008D44F0;
L_008D4358:;
    v0 = 5;
    if (v1 == v0) goto L_008D4374;
    if (s0 != 0) { s4 = 141; goto L_008D4380; }
    s4 = 140; goto L_008D4380;
L_008D4374:;
    if (s0 != 0) { s4 = 141; goto L_008D4380; }
    s4 = 137;
L_008D4380:;
    v1 = (s32) ((u32) s3 + (u32) s2);
    a1 = s4;
    s5 = (*(volatile s32 *) (u32) (v1 + 28));
    v0 = (s32) ((u32) v1 + 0x1cU);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a2 = (s32) ((u32) sp + 0xb0U);
    a0 = s5; func_001D6D70(a0, a1, a2);
    a0 = s5;
    a1 = s4; v0 = func_001D6CD0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) (sp + 184));
    s5 = v0;
    a0 = s5;
    f0.i = (s32) f0.f;
    a2 = f0.i;
    a1 = s1; v0 = func_008BA640(a0, a1, a2, a3);
    s4 = v0;
    a0 = s1; v0 = func_001C80F0(a0);
    s4 = (s32) ((u32) v0 + (u32) s4);
    a0 = s4; v0 = func_00154070(a0);
    f0.f = (*(volatile f32 *) (u32) (sp + 184));
    a3 = s4;
    s4 = v0;
    a0 = s5;
    a2 = s1;
    a5 = s7;
    f0.i = (s32) f0.f;
    a6 = fp;
    a4 = f0.i;
    a1 = s4; v0 = func_008C5470(a0, a1, a2, a3, a4, a5, a6);
    s1 = v0 & 0xff;
    v0 = (*(volatile s32 *) (u32) s6);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s4; func_001DF820(a0, a1, a2, a3);
    a0 = s4; Pes6Heap_Free(a0);
    if (s0 != 0) goto L_008D4458;
    v0 = (s32) ((u32) s3 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v0 + 44));
    if (v0 == 0) goto L_008D4458;
    f1.f = (*(volatile f32 *) (u32) (sp + 188));
    v0 = (s32) 0x41d00000U;
    f0.i = (s32) v0;
    f0.f = f1.f - f0.f;
    (*(volatile f32 *) (u32) (sp + 188)) = f0.f;
L_008D4458:;
    v0 = func_008C5010();
    f1.f = (*(volatile f32 *) (u32) (v0 + 4));
    v1 = (s32) 0x41500000U;
    f0.i = (s32) v1;
    { s32 c_ = s1 < 0; f1.f = f0.f + f1.f; if (c_) goto L_008D4480; }
    f0.i = (s32) s1;
    f0.f = (f32) f0.i; goto L_008D449C;
L_008D4480:;
    a0 = (s32) ((u32) s1 >> 1);
    v1 = s1 & 0x1;
    a0 = a0 | v1;
    f0.i = (s32) a0;
    f0.f = (f32) f0.i;
    f0.f = f0.f + f0.f;
L_008D449C:;
    f1.f = f1.f * f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 188));
    fcc = f0.f < f1.f;
    if (fcc) { (*(volatile u32 *) (u32) (sp + 204)) = (u32) 0; goto L_008D44C4; }
    f1.f = (*(volatile f32 *) (u32) v0);
    f0.f = (*(volatile f32 *) (u32) (v0 + 4));
    (*(volatile f32 *) (u32) (sp + 200)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 204)) = f0.f; goto L_008D44C8;
L_008D44C4:;
    (*(volatile u32 *) (u32) (sp + 200)) = (u32) 0;
L_008D44C8:;
    v0 = (*(volatile s32 *) (u32) s6);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (s32) ((u32) sp + 0xc8U); func_001DF250(a0, a1);
    { u32 a_ = (u32) (sp + 160) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = (*(volatile s32 *) (u32) v1);
    if (a0 == 0) goto L_008D44F0;
    a1 = 1; func_001D7D60(a0, a1);
L_008D44F0:;
L_008D44F4:;
    return;
}
