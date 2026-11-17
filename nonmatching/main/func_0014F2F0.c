/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Texture_GetCacheKey(s64);
s64 Pes6Texture_GetPixels(s64);
s64 Pes6Texture_GetPsm(s64);
void func_001453E0(s64);
s64 func_001454A0(s64);
s64 func_001454B0(s64);

void func_0014F2F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, t8 = 0, t9 = 0, fp = 0;
    s64 hi = 0, lo = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    s4 = a4;
    s0 = a1;
    (*(volatile u32 *) (u32) (sp + 252)) = (u32) a0;
    (*(volatile u16 *) (u32) (sp + 224)) = (u16) a2;
    a0 = s0;
    (*(volatile u16 *) (u32) (sp + 208)) = (u16) a3; v0 = Pes6Texture_GetPixels(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 252));
    s2 = v0; v0 = Pes6Texture_GetPixels(a0);
    s3 = v0;
    a0 = (*(volatile u16 *) (u32) (s0 + 46));
    v0 = (*(volatile s32 *) (u32) (sp + 252));
    v1 = (*(volatile u16 *) (u32) (v0 + 46));
    v0 = (s32) a0 >> 12;
    v1 = (s32) v1 >> 12;
    at = v1 < v0;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) (sp + 160)) = (u32) v0; if (c_) goto L_0014F36C; }
    (*(volatile u32 *) (u32) (sp + 160)) = (u32) v1;
L_0014F36C:;
    a0 = s0; v0 = func_001454B0(a0);
    s1 = (s64) ((u64) v0 << 48);
    a0 = s0;
    s1 = s1 >> 48; v0 = func_001454A0(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 252));
    (*(volatile u16 *) (u32) (sp + 192)) = (u16) v0; v0 = func_001454B0(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 252));
    s7 = (s64) ((u64) v0 << 48);
    s7 = s7 >> 48; v0 = func_001454A0(a0);
    fp = (s64) ((u64) v0 << 48);
    a0 = s0;
    fp = fp >> 48; v0 = Pes6Texture_GetPsm(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 252));
    s0 = v0; v0 = Pes6Texture_GetPsm(a0);
    v1 = (*(volatile s32 *) (u32) (sp + 160));
    at = v1 < 0;
    { s32 c_ = at != 0; (*(volatile u32 *) (u32) (sp + 176)) = (u32) 0; if (c_) goto L_0014F710; }
    v1 = 20;
L_0014F3D0:;
    a0 = (*(volatile s16 *) (u32) (sp + 192));
    a7 = a0;
    at = 0 < a7;
    { s32 c_ = at == 0; t8 = 0; if (c_) goto L_0014F728; }
    a0 = (*(volatile s16 *) (u32) (sp + 208));
    a6 = (s64) ((u64) s1 << 48);
    a5 = (s64) ((u64) fp << 48);
    a3 = (s64) ((u64) s7 << 48);
    a6 = a6 >> 48;
    t5 = 0;
    a5 = a5 >> 48;
    a3 = a3 >> 48;
    t6 = a0;
    a0 = (*(volatile s16 *) (u32) (sp + 224));
    a4 = a0;
L_0014F410:;
    a1 = (s64) ((u64) t6 << 48);
    a1 = a1 >> 48;
    if (a1 < 0) goto L_0014F598;
    at = a1 < a5;
    if (at == 0) goto L_0014F598;
    at = 0 < a6;
    { s32 c_ = at == 0; t9 = 0; if (c_) goto L_0014F598; }
    t4 = (s32) ((u32) s2 + (u32) t5);
    { s32 c_ = t5 >= 0; a0 = (s32) t5 >> 1; if (c_) goto L_0014F44C; }
    a0 = (s32) ((u32) t5 + 0x1U);
    a0 = (s32) a0 >> 1;
L_0014F44C:;
    a2 = (s32) ((u32) s2 + (u32) a0);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    { s32 c_ = a0 >= 0; a1 = (s32) a0 >> 1; if (c_) goto L_0014F464; }
    a1 = (s32) ((u32) a0 + 0x1U);
    a1 = (s32) a1 >> 1;
L_0014F464:;
    a1 = (s32) ((u32) s3 + (u32) a1);
    a0 = (s32) ((u32) s3 + (u32) a0);
L_0014F470:;
    t7 = (s64) ((u64) t9 << 48);
    t7 = t7 >> 48;
    s5 = (s32) ((u32) a4 + (u32) t7);
    s5 = (s64) ((u64) s5 << 48);
    s5 = s5 >> 48;
    if (s5 < 0) goto L_0014F580;
    at = s5 < a3;
    if (at == 0) goto L_0014F580;
    if (s0 != v1) goto L_0014F4F0;
    s6 = t7 & 0x1;
    if (s6 == 0) goto L_0014F4D0;
    { s32 c_ = t7 >= 0; s6 = (s32) t7 >> 1; if (c_) goto L_0014F4BC; }
    t7 = (s32) ((u32) t7 + 0x1U);
    s6 = (s32) t7 >> 1;
L_0014F4BC:;
    t7 = (s32) ((u32) a2 + (u32) s6);
    t7 = (*(volatile u8 *) (u32) t7);
    t7 = (s32) t7 >> 4; goto L_0014F4F8;
L_0014F4D0:;
    { s32 c_ = t7 >= 0; s6 = (s32) t7 >> 1; if (c_) goto L_0014F4E0; }
    t7 = (s32) ((u32) t7 + 0x1U);
    s6 = (s32) t7 >> 1;
L_0014F4E0:;
    t7 = (s32) ((u32) a2 + (u32) s6);
    t7 = (*(volatile u8 *) (u32) t7);
    t7 = t7 & 0xf; goto L_0014F4F8;
L_0014F4F0:;
    t7 = (*(volatile u8 *) (u32) t4);
L_0014F4F8:;
    at = s4 < 0;
    if (at != 0) goto L_0014F510;
    if (t7 == 0) goto L_0014F580;
    t7 = (s32) ((u32) t7 + (u32) s4);
L_0014F510:;
    if (v0 != v1) goto L_0014F578;
    s6 = s5 & 0x1;
    if (s6 == 0) goto L_0014F550;
    { s32 c_ = s5 >= 0; s6 = (s32) s5 >> 1; if (c_) goto L_0014F534; }
    s5 = (s32) ((u32) s5 + 0x1U);
    s6 = (s32) s5 >> 1;
L_0014F534:;
    s5 = (s32) ((u32) a1 + (u32) s6);
    t7 = (s32) ((u32) t7 << 4);
    s6 = (*(volatile u8 *) (u32) s5);
    s6 = s6 & 0xf;
    t7 = t7 | s6;
    (*(volatile u8 *) (u32) s5) = (u8) t7; goto L_0014F580;
L_0014F550:;
    { s32 c_ = s5 >= 0; s6 = (s32) s5 >> 1; if (c_) goto L_0014F560; }
    s5 = (s32) ((u32) s5 + 0x1U);
    s6 = (s32) s5 >> 1;
L_0014F560:;
    s5 = (s32) ((u32) a1 + (u32) s6);
    s6 = (*(volatile u8 *) (u32) s5);
    s6 = s6 & 0xf0;
    t7 = t7 | s6;
    (*(volatile u8 *) (u32) s5) = (u8) t7; goto L_0014F580;
L_0014F578:;
    s5 = (s32) ((u32) a0 + (u32) s5);
    (*(volatile u8 *) (u32) s5) = (u8) t7;
L_0014F580:;
    t7 = (s32) ((u32) t9 + 0x1U);
    t9 = (s64) ((u64) t7 << 48);
    t9 = t9 >> 48;
    t7 = t9 < a6;
    { s32 c_ = t7 != 0; t4 = (s32) ((u32) t4 + 0x1U); if (c_) goto L_0014F470; }
L_0014F598:;
    a0 = (s32) ((u32) t8 + 0x1U);
    t8 = (s64) ((u64) a0 << 48);
    t6 = (s32) ((u32) t6 + 0x1U);
    t8 = t8 >> 48;
    a0 = t8 < a7;
    { s32 c_ = a0 != 0; t5 = (s32) ((u32) t5 + (u32) a6); if (c_) goto L_0014F410; }
    goto L_0014F728;
L_0014F5C0:;
    a0 = (s64) ((u64) s1 << 48);
    a0 = a0 >> 48;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a7; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    { s32 c_ = a1 >= 0; a0 = (s32) a1 >> 1; if (c_) goto L_0014F5DC; }
    a0 = (s32) ((u32) a1 + 0x1U);
    a0 = (s32) a0 >> 1;
L_0014F5DC:;
    s2 = (s32) ((u32) s2 + (u32) a0); goto L_0014F5F8;
L_0014F5E8:;
    a0 = (s64) ((u64) s1 << 48);
    a0 = a0 >> 48;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) a7; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    s2 = (s32) ((u32) s2 + (u32) a0);
L_0014F5F8:;
    if (v0 != v1) goto L_0014F630;
    a1 = (s64) ((u64) s7 << 48);
    a0 = (s64) ((u64) fp << 48);
    a1 = a1 >> 48;
    a0 = a0 >> 48;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; }
    { s32 c_ = a1 >= 0; a0 = (s32) a1 >> 1; if (c_) goto L_0014F624; }
    a0 = (s32) ((u32) a1 + 0x1U);
    a0 = (s32) a0 >> 1;
L_0014F624:;
    s3 = (s32) ((u32) s3 + (u32) a0); goto L_0014F648;
L_0014F630:;
    a1 = (s64) ((u64) s7 << 48);
    a0 = (s64) ((u64) fp << 48);
    a1 = a1 >> 48;
    a0 = a0 >> 48;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    s3 = (s32) ((u32) s3 + (u32) a0);
L_0014F648:;
    { s32 c_ = s1 >= 0; a0 = (s32) s1 >> 1; if (c_) goto L_0014F658; }
    a0 = (s32) ((u32) s1 + 0x1U);
    a0 = (s32) a0 >> 1;
L_0014F658:;
    s1 = (s64) ((u64) a0 << 48);
    a0 = (*(volatile s16 *) (u32) (sp + 192));
    s1 = s1 >> 48;
    { s32 c_ = a0 >= 0; a1 = (s32) a0 >> 1; if (c_) goto L_0014F674; }
    a0 = (s32) ((u32) a0 + 0x1U);
    a1 = (s32) a0 >> 1;
L_0014F674:;
    a0 = (s64) ((u64) a1 << 48);
    a0 = a0 >> 48;
    (*(volatile u16 *) (u32) (sp + 192)) = (u16) a0;
    { s32 c_ = s7 >= 0; a0 = (s32) s7 >> 1; if (c_) goto L_0014F690; }
    a0 = (s32) ((u32) s7 + 0x1U);
    a0 = (s32) a0 >> 1;
L_0014F690:;
    s7 = (s64) ((u64) a0 << 48);
    s7 = s7 >> 48;
    { s32 c_ = fp >= 0; a0 = (s32) fp >> 1; if (c_) goto L_0014F6A8; }
    a0 = (s32) ((u32) fp + 0x1U);
    a0 = (s32) a0 >> 1;
L_0014F6A8:;
    fp = (s64) ((u64) a0 << 48);
    a0 = (*(volatile s16 *) (u32) (sp + 224));
    fp = fp >> 48;
    { s32 c_ = a0 >= 0; a1 = (s32) a0 >> 1; if (c_) goto L_0014F6C4; }
    a0 = (s32) ((u32) a0 + 0x1U);
    a1 = (s32) a0 >> 1;
L_0014F6C4:;
    a0 = (s64) ((u64) a1 << 48);
    a0 = a0 >> 48;
    (*(volatile u16 *) (u32) (sp + 224)) = (u16) a0;
    a0 = (*(volatile s16 *) (u32) (sp + 208));
    { s32 c_ = a0 >= 0; a1 = (s32) a0 >> 1; if (c_) goto L_0014F6E4; }
    a0 = (s32) ((u32) a0 + 0x1U);
    a1 = (s32) a0 >> 1;
L_0014F6E4:;
    a0 = (s64) ((u64) a1 << 48);
    a0 = a0 >> 48;
    (*(volatile u16 *) (u32) (sp + 208)) = (u16) a0;
    a0 = (*(volatile s32 *) (u32) (sp + 176));
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) (sp + 176)) = (u32) a0;
    a1 = a0;
    a0 = (*(volatile s32 *) (u32) (sp + 160));
    at = a0 < a1;
    if (at == 0) goto L_0014F3D0;
L_0014F710:;
    a0 = (*(volatile s32 *) (u32) (sp + 252)); v0 = Pes6Texture_GetCacheKey(a0);
    a0 = v0; func_001453E0(a0);
    goto L_0014F738;
L_0014F728:;
    if (s0 != v1) goto L_0014F5E8;
    goto L_0014F5C0;
L_0014F738:;
    return;
}
