/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00259A30(s32);
void func_0025A950(void);

void func_0025A810(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    func_0025A950();
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -12404));
    at = 0 < v1;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_0025A890; }
    s1 = 0;
    s0 = (s32) ((u32) sp + 0x5eU);
L_0025A848:;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -12376));
    v1 = (*(volatile s32 *) (u32) (v1 + -12372));
    a0 = (s32) ((u32) a0 + (u32) s1);
    v1 = (s32) ((u32) v1 + (u32) s1);
    s2 = (*(volatile s16 *) (u32) a0);
    v1 = (*(volatile s16 *) (u32) v1);
    at = v1 < s2;
    if (at == 0) goto L_0025A898;
L_0025A878:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -12404));
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < v1;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x2U); if (c_) goto L_0025A848; }
L_0025A890:;
    goto L_0025A928;
L_0025A898:;
    v1 = (s32) ((u32) sp + 0x5cU);
    { s32 c_ = v1 == 0; v0 = 4; if (c_) goto L_0025A8C0; }
L_0025A8A4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0025A8A4;
L_0025A8C0:;
    a0 = (s32) ((u32) sp + 0x5cU);
    (*(volatile u16 *) (u32) (sp + 92)) = (u16) s3;
    (*(volatile u16 *) (u32) s0) = (u16) s2; v0 = func_00259A30(a0);
    if (v0 != 0) goto L_0025A900;
L_0025A8D8:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -12372));
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = (s32) ((u32) s1 + (u32) v1);
    v1 = (*(volatile s16 *) (u32) v1);
    at = v1 < s2;
    if (at == 0) goto L_0025A898;
    goto L_0025A878;
L_0025A900:;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (a0 + -12396));
    v1 = (*(volatile s16 *) (u32) (v1 + -12404));
    a1 = 2;
    a0 = (s32) ((u32) s3 + (u32) a0);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v1 = (s32) ((u32) a0 + (u32) v1);
    (*(volatile u8 *) (u32) v1) = (u8) a1; goto L_0025A8D8;
L_0025A928:;
    return;
}
