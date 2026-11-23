/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0025E080(s64);
s64 func_0025E0E0(s64);
void func_0025EC20(s64);
void memcpy(s64, s64, s64);

void func_00257CA0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0;
    s64 hi = 0, lo = 0;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    s0 = (*(volatile s16 *) (u32) (sp + 60));
    s1 = (*(volatile s16 *) (u32) (sp + 62));
    a0 = 2; v0 = func_0025E0E0(a0);
    if (v0 == 0) goto L_00257E28;
    v1 = v0 & 0x1;
    if (v1 != 0) goto L_00257E18;
    v1 = v0 & 0x2;
    if (v1 == 0) goto L_00257CE4;
    s1 = 1;
L_00257CE4:;
    v1 = v0 & 0x10;
    if (v1 != 0) goto L_00257E20;
    v0 = v0 & 0x20;
    if (v0 == 0) goto L_00257D00;
    s0 = 1;
L_00257D00:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12536));
    v0 = (s32) 0x590000U;
    a2 = (*(volatile s32 *) (u32) (v0 + -12540));
    a1 = (*(volatile s32 *) (u32) (v1 + -12532)); memcpy(a0, a1, a2);
    v1 = (s32) 0x590000U;
    t6 = (*(volatile s32 *) (u32) (v1 + -12536));
    v1 = (s32) 0x590000U;
    a4 = (*(volatile s16 *) (u32) (v1 + -12542));
    at = 0 < a4;
    { s32 c_ = at == 0; v0 = 0; if (c_) goto L_00257E00; }
    t5 = (s64) ((u64) s1 << 48);
    t4 = (s64) ((u64) s0 << 48);
    t5 = t5 >> 48;
    t4 = t4 >> 48;
    a1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    a2 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
L_00257D58:;
    a7 = (s32) ((u32) a4 + 0xffffffffU);
    at = a7 < t5;
    if (at == 0) goto L_00257D70;
    a7 = 0; goto L_00257D84;
L_00257D70:;
    if (t5 >= 0) goto L_00257D80;
    goto L_00257D84;
L_00257D80:;
    a7 = t5;
L_00257D84:;
    a4 = (*(volatile s16 *) (u32) (a2 + -12544));
    at = 0 < a4;
    { s32 c_ = at == 0; t7 = 0; if (c_) goto L_00257DEC; }
L_00257D94:;
    a3 = (s32) ((u32) t7 + (u32) t4);
    a6 = (s32) ((u32) a4 + 0xffffffffU);
    at = a6 < a3;
    { s32 c_ = at == 0; a5 = (*(volatile u8 *) (u32) t6); if (c_) goto L_00257DB0; }
    a6 = 0; goto L_00257DC4;
L_00257DB0:;
    if (a3 >= 0) goto L_00257DC0;
    goto L_00257DC4;
L_00257DC0:;
    a6 = a3;
L_00257DC4:;
    { s64 m_ = (s64) (s32) a4 * (s64) (s32) a7; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a3 = (*(volatile s32 *) (u32) (a1 + -12532));
    t7 = (s32) ((u32) t7 + 0x1U);
    a3 = (s32) ((u32) a3 + (u32) a4);
    a3 = (s32) ((u32) a3 + (u32) a6);
    (*(volatile u8 *) (u32) a3) = (u8) a5;
    a4 = (*(volatile s16 *) (u32) (a0 + -12544));
    a3 = t7 < a4;
    { s32 c_ = a3 != 0; t6 = (s32) ((u32) t6 + 0x1U); if (c_) goto L_00257D94; }
L_00257DEC:;
    a4 = (*(volatile s16 *) (u32) (v1 + -12542));
    v0 = (s32) ((u32) v0 + 0x1U);
    a3 = v0 < a4;
    { s32 c_ = a3 != 0; t5 = (s32) ((u32) t5 + 0x1U); if (c_) goto L_00257D58; }
L_00257E00:;
    a0 = 1; func_0025EC20(a0);
    a0 = 2; func_0025E080(a0);
    goto L_00257E2C;
L_00257E18:;
    s1 = -1; goto L_00257CE4;
L_00257E20:;
    s0 = -1; goto L_00257D00;
L_00257E28:;
L_00257E2C:;
    return;
}
