/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE630(s32, s32);
void func_001EEE60(s32, s32);
void func_001EF900(s32, s32);

void func_008D8640(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) ((u32) a1 << 2);
    s3 = a0;
    v1 = (s32) ((u32) v1 + (u32) s3);
    s2 = a3;
    a0 = (*(volatile s32 *) (u32) (v1 + 20));
    { s32 c_ = a0 == 0; s0 = (s32) ((u32) v1 + 0x14U); if (c_) goto L_008D87BC; }
    a4 = (s32) 0x8f0000U;
    a3 = (s32) ((u32) sp + 0x60U);
    a4 = (s32) ((u32) a4 + 0xffffc2b0U);
    v1 = 9;
L_008D8684:;
    v0 = (*(volatile s8 *) (u32) a4);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a3) = (u8) v0;
    a4 = (s32) ((u32) a4 + 0x1U);
    a3 = (s32) ((u32) a3 + 0x1U);
    if (v1 > 0) goto L_008D8684;
    a4 = (s32) 0x8f0000U;
    a3 = (s32) ((u32) sp + 0x50U);
    a4 = (s32) ((u32) a4 + 0xffffc2c0U);
    v1 = 9;
L_008D86B0:;
    v0 = (*(volatile s8 *) (u32) a4);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a3) = (u8) v0;
    a4 = (s32) ((u32) a4 + 0x1U);
    a3 = (s32) ((u32) a3 + 0x1U);
    if (v1 > 0) goto L_008D86B0;
    v1 = (*(volatile s8 *) (u32) s3);
    v0 = 2;
    if (v1 != v0) { v0 = 1; goto L_008D86E8; }
    v0 = (s32) ((u32) a2 + (u32) sp);
    s1 = (*(volatile u8 *) (u32) (v0 + 80)); goto L_008D86F8;
L_008D86E8:;
    if (v1 != v0) { s1 = a2; goto L_008D86F8; }
    v0 = (s32) ((u32) a2 + (u32) sp);
    s1 = (*(volatile u8 *) (u32) (v0 + 96));
L_008D86F8:;
    at = a1 < 2;
    if (at == 0) { v1 = s2 & 0xff; goto L_008D8778; }
    v1 = s2 & 0xff;
    v0 = 1;
    if (v1 != v0) { a1 = 0; goto L_008D876C; }
    v0 = (s32) 0x8f0000U;
    a0 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffdb70U);
    v1 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffdb72U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (*(volatile s16 *) (u32) v1);
    v1 = (*(volatile s16 *) (u32) v0);
    (*(volatile u16 *) (u32) (sp + 112)) = (u16) a0;
    v0 = 17;
    (*(volatile u16 *) (u32) (sp + 114)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 116)) = (u16) v0;
    (*(volatile u16 *) (u32) (sp + 118)) = (u16) v0;
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) sp + 0x70U); func_001EE630(a0, a1);
    a0 = (*(volatile s32 *) (u32) s0);
    a1 = 1; func_001EF900(a0, a1);
    goto L_008D8774;
L_008D876C:;
    func_001EF900(a0, a1);
L_008D8774:;
    v1 = s2 & 0xff;
L_008D8778:;
    v0 = (s32) ((u32) s1 << 2);
    a0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s3);
    v1 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 + 0xffffdb98U);
    a3 = (s32) ((u32) v1 + (u32) a0);
    a2 = (*(volatile u8 *) (u32) a3);
    a0 = (*(volatile u8 *) (u32) (a3 + 1));
    v1 = (*(volatile u8 *) (u32) (a3 + 2));
    (*(volatile u8 *) (u32) (sp + 124)) = (u8) a2;
    (*(volatile u8 *) (u32) (sp + 125)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 126)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a3 + 3));
    (*(volatile u8 *) (u32) (sp + 127)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) (v0 + 28));
    a1 = (s32) ((u32) sp + 0x7cU); func_001EEE60(a0, a1);
L_008D87BC:;
    return;
}
