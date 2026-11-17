/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s64, s64);
s64 func_00150190(s64, s64, s64, s64);
void func_00151080(s64, s64);
s64 func_00154070(s64);
s64 func_001E6500(s64);
s64 func_001E6530(s64);
s64 func_001E65D0(s64);
void func_001EB0D0(s64, s64, s64, s64);
void memcpy(s64, s64, s64);

void func_001E88B0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    s64 hi1 = 0, lo1 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[32];
    s64 sp = (s32) (u32) frame;

    v0 = a0;
    (*(volatile u32 *) (u32) (sp + 240)) = (u32) a1;
    s0 = a2;
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) (sp + 244)) = (u32) a0; if (c_) goto L_001E8B18; }
    v0 = a1;
    if (v0 == 0) goto L_001E8B18;
    v0 = func_001E6530(a0);
    a0 = (*(volatile s32 *) (u32) (sp + 244));
    s7 = v0 & 0xffff; v0 = func_001E6500(a0);
    { s32 c_ = s0 == 0; a2 = v0 & 0xffff; if (c_) goto L_001E8B20; }
    a1 = (*(volatile s16 *) (u32) s0);
    a0 = (*(volatile s16 *) (u32) (s0 + 2));
    v1 = (*(volatile s16 *) (u32) (s0 + 4));
    v0 = (*(volatile s16 *) (u32) (s0 + 6));
    (*(volatile u16 *) (u32) (sp + 248)) = (u16) a1;
    (*(volatile u16 *) (u32) (sp + 250)) = (u16) a0;
    (*(volatile u16 *) (u32) (sp + 252)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 254)) = (u16) v0;
L_001E8938:;
    s2 = (*(volatile u16 *) (u32) (sp + 252));
    a3 = s7 & 0xffff;
    v1 = (*(volatile u16 *) (u32) (sp + 248));
    s0 = (*(volatile u16 *) (u32) (sp + 254));
    a1 = (*(volatile u16 *) (u32) (sp + 250));
    v0 = (s32) ((u32) v1 + (u32) s2);
    at = a3 < v1;
    { s32 c_ = at == 0; a0 = v0 & 0xffff; if (c_) goto L_001E8964; }
    v1 = a3; goto L_001E8974;
L_001E8964:;
    if (v1 >= 0) goto L_001E8974;
    v1 = 0; goto L_001E8974;
L_001E8974:;
    v0 = a2 & 0xffff;
    at = v0 < a1;
    { s32 c_ = at == 0; v1 = v1 & 0xffff; if (c_) goto L_001E898C; }
    v0 = v0 & 0xffff; goto L_001E89A0;
L_001E898C:;
    if (a1 >= 0) goto L_001E8998;
    a1 = 0;
L_001E8998:;
    v0 = a1;
    v0 = v0 & 0xffff;
L_001E89A0:;
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = a0 & 0xffff;
    at = a3 < v0;
    if (at == 0) goto L_001E89BC;
    a0 = (*(volatile s32 *) (u32) (sp + 244)); goto L_001E89D0;
L_001E89BC:;
    if (v0 >= 0) goto L_001E89C8;
    v0 = 0;
L_001E89C8:;
    a3 = v0;
    a0 = (*(volatile s32 *) (u32) (sp + 244));
L_001E89D0:;
    v0 = a3 & 0xffff;
    fp = v1 & 0xffff;
    v0 = (s32) ((u32) v0 - (u32) fp);
    (*(volatile u16 *) (u32) (sp + 224)) = (u16) v0; v0 = func_001E65D0(a0);
    s1 = v0;
    v0 = 1;
    if (s1 == v0) { s4 = v0; goto L_001E8A20; }
    v1 = 2;
    if (s1 == v1) { s4 = v0; goto L_001E8A44; }
    v0 = 3;
    if (s1 == v0) { s4 = v1; goto L_001E8A44; }
    v0 = 4;
    if (s1 == v0) { s4 = v0; goto L_001E8A44; }
    v0 = s2 & 0xffff; goto L_001E8A48;
L_001E8A20:;
    v0 = (s32) ((u32) s2 >> 1);
    s2 = v0 & 0xffff;
    v0 = (s32) ((u32) fp >> 1);
    fp = v0 & 0xffff;
    v0 = (*(volatile u16 *) (u32) (sp + 224));
    v0 = (s32) ((u32) v0 >> 1);
    (*(volatile u16 *) (u32) (sp + 224)) = (u16) v0;
    v0 = (s32) ((u32) s7 >> 1);
    s7 = v0 & 0xffff;
L_001E8A44:;
    v0 = s2 & 0xffff;
L_001E8A48:;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (s32) s4 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); s3 = lo; }
    a0 = s3; v0 = func_00154070(a0);
    a1 = (*(volatile s32 *) (u32) (sp + 240));
    a2 = s3;
    (*(volatile u32 *) (u32) (sp + 220)) = (u32) v0;
    a0 = v0; memcpy(a0, a1, a2);
    a3 = (*(volatile s32 *) (u32) (sp + 220));
    a1 = (s64) ((u64) s2 << 48);
    a2 = (s64) ((u64) s0 << 48);
    a1 = a1 >> 48;
    a0 = s1;
    a2 = a2 >> 48; func_001EB0D0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (sp + 244));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 0; v0 = func_00150190(a0, a1, a2, a3);
    s5 = (*(volatile s32 *) (u32) (sp + 220));
    at = 0 < s0;
    s3 = v0;
    { s32 c_ = at == 0; s6 = 0; if (c_) goto L_001E8B34; }
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s2 = v0 & 0xffff;
    v0 = (*(volatile u16 *) (u32) (sp + 224));
    v0 = v0;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s4; lo = (s32) m_; hi = (s32) (m_ >> 32); s1 = lo; }
    s7 = s7 & 0xffff;
    v0 = fp & 0xffff;
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s4; lo1 = (s32) m_; hi1 = (s32) (m_ >> 32); fp = lo1; }
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s4; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_001E8ADC:;
    { s64 m_ = (s64) (s32) s7 * (s64) (s32) s2; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    { s64 m_ = (s64) (s32) s4 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); v0 = lo; }
    a1 = s5;
    a2 = s1;
    v0 = (s32) ((u32) s3 + (u32) v0);
    a0 = (s32) ((u32) v0 + (u32) fp); memcpy(a0, a1, a2);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s6 = (s32) ((u32) s6 + 0x1U);
    s5 = (s32) ((u32) s5 + (u32) v0);
    v0 = s6 < s0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x1U); if (c_) goto L_001E8ADC; }
    v0 = (*(volatile s32 *) (u32) (sp + 244)); goto L_001E8B38;
L_001E8B18:;
    v0 = 0; goto L_001E8B58;
L_001E8B20:;
    (*(volatile u16 *) (u32) (sp + 248)) = (u16) 0;
    (*(volatile u16 *) (u32) (sp + 250)) = (u16) 0;
    (*(volatile u16 *) (u32) (sp + 252)) = (u16) s7;
    (*(volatile u16 *) (u32) (sp + 254)) = (u16) a2; goto L_001E8938;
L_001E8B34:;
    v0 = (*(volatile s32 *) (u32) (sp + 244));
L_001E8B38:;
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = s3; func_00151080(a0, a1);
    a0 = (*(volatile s32 *) (u32) (sp + 220)); Pes6Heap_Free(a0, a1);
    a0 = s3; Pes6Heap_Free(a0, a1);
    v0 = (*(volatile s32 *) (u32) (sp + 240));
L_001E8B58:;
    return;
}
