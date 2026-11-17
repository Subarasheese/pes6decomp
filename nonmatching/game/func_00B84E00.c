/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B3070(s32, s32);
s32 func_00B2A420(s32);
void func_00B35E10(s32, s32, s32);
s32 func_00BD3B30(s32, s32);
s32 func_00BF6270(void);

s32 func_00B84E00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    v0 = func_00BF6270();
    a0 = v0; v0 = func_00B2A420(a0);
    a3 = (*(volatile s32 *) (u32) v0);
    s1 = v0;
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x5cU);
    v0 = (*(volatile s32 *) (u32) s3);
    v0 = (*(volatile u8 *) (u32) v0);
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v0 = (s32) ((u32) v0 + (u32) a3);
    s0 = (*(volatile s32 *) (u32) (v1 + 344));
    s2 = (*(volatile u16 *) (u32) (v0 + 296));
    a2 = (s32) ((u32) sp + 0x58U); func_00B35E10(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) s3);
    f1.f = (*(volatile f32 *) (u32) (sp + 92));
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (v0 + 224));
    f1.f = f2.f * f1.f;
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 1; goto L_00B84ED4; }
    v1 = (*(volatile s32 *) (u32) (s3 + 4));
    v0 = (*(volatile s32 *) (u32) (s1 + 4));
    v1 = (*(volatile u8 *) (u32) (v1 + 12));
    v0 = (*(volatile u8 *) (u32) (v0 + 12));
    at = v0 < v1;
    if (at != 0) goto L_00B84EDC;
    f2.i = f2.i & 0x7FFFFFFF;
    v0 = (*(volatile s32 *) (u32) s1);
    f0.f = (*(volatile f32 *) (u32) (v0 + 224));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45200000U;
    f0.i = (s32) v0;
    f0.f = f0.f + f1.f;
    fcc = f2.f <= f0.f;
    if (fcc) goto L_00B84EDC;
    a0 = s3; v0 = func_00BD3B30(a0, a1);
    v0 = v0 & 0xff;
L_00B84ED4:;
    goto L_00B84FAC;
L_00B84EDC:;
    at = (s32) 0x640000U;
    at = at | 0x1;
    at = (u64) s0 < (u64) at;
    if (at != 0) goto L_00B84F04;
    at = v1 < 3;
    if (at != 0) goto L_00B84F04;
    v0 = v1 & 0xff; goto L_00B84ED4;
L_00B84F04:;
    v0 = (*(volatile s32 *) (u32) s1);
    a0 = (*(volatile u16 *) (u32) (v0 + 40));
    a1 = s2; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 8192;
    if (at == 0) { v0 = (*(volatile s32 *) (u32) s1); goto L_00B84F50; }
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (*(volatile s32 *) (u32) s3);
    a1 = (*(volatile u16 *) (u32) (v0 + 40));
    a0 = (*(volatile u16 *) (u32) (v1 + 40)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 12288;
    if (at == 0) { v0 = 2; goto L_00B84ED4; }
    v0 = 3; goto L_00B84ED4;
L_00B84F50:;
    a0 = (*(volatile u16 *) (u32) (v0 + 40));
    a1 = s2; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 20480;
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) s3); goto L_00B84F84; }
    at = (s32) 0x400000U;
    at = (u64) s0 < (u64) at;
    if (at == 0) { v0 = 3; goto L_00B84ED4; }
    v0 = 2; goto L_00B84ED4;
L_00B84F84:;
    a0 = (*(volatile u16 *) (u32) (v0 + 40));
    a1 = s2; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = 0x8000;
    at = v0 < at;
    if (at == 0) { v0 = 3; goto L_00B84ED4; }
    v0 = 2; goto L_00B84ED4;
L_00B84FAC:;
    return v0;
}
