/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E6E10(s32);
void func_001EE5D0(s32, s32);
void func_001EE630(s32, s32);
void func_001EEAC0(s32, s32);
void func_001EF370(s32, s32);
void func_001EF860(s32, s32);
s32 func_001F2410(s32, s32, s32, s32);
void func_001F3CA0(s32, s32, s32, s32);
void func_008BB2A0(s32, s32, s32);

void func_008D5E70(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    s64 frame[24];
    s32 sp = (s32) (u32) frame;

    fp = a2;
    s5 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 100));
    { s32 c_ = a0 == 0; s4 = a1; if (c_) goto L_008D5FB8; }
    func_001F3CA0(a0, a1, a2, a3);
    a0 = 20188; v0 = func_001E6E10(a0);
    s1 = v0;
    s6 = 0;
L_008D5EC8:;
    v1 = (s32) ((u32) fp + (u32) s6);
    s3 = 0;
    s7 = (s32) ((u32) v1 + 0x1fU);
L_008D5ED8:;
    a0 = (*(volatile u8 *) (u32) s7);
    v1 = 1;
    v1 = (s32) ((u32) v1 << (s3 & 31));
    v1 = a0 & v1;
    if (v1 == 0) goto L_008D5F98;
    v0 = (*(volatile s8 *) (u32) (s5 + 34));
    { s32 c_ = v0 == 0; s2 = s3; if (c_) goto L_008D5F18; }
    v0 = (s32) ((u32) s3 + 0x4U);
    { s32 c_ = v0 >= 0; s2 = v0 & 0x7; if (c_) goto L_008D5F14; }
    if (s2 == 0) goto L_008D5F14;
    s2 = (s32) ((u32) s2 + 0xfffffff8U);
L_008D5F14:;
L_008D5F18:;
    a0 = (*(volatile s32 *) (u32) (s5 + 100)); v0 = func_001F2410(a0, a1, a2, a3);
    s0 = v0;
    v1 = (s32) ((u32) s2 << 4);
    v0 = (s32) 0x8f0000U;
    a0 = s0;
    v0 = (s32) ((u32) v0 + 0xffffc1c0U);
    a1 = (s32) ((u32) v0 + (u32) v1); func_001EF370(a0, a1);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0xa0U); func_001EE5D0(a0, a1);
    f0.f = (*(volatile f32 *) (u32) s4);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0xa0U);
    (*(volatile f32 *) (u32) (sp + 160)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (s4 + 4));
    (*(volatile f32 *) (u32) (sp + 164)) = f0.f; func_001EF860(a0, a1);
    if (s1 == 0) goto L_008D5F98;
    a0 = s0;
    a1 = s1; func_001EEAC0(a0, a1);
    a1 = s2;
    a0 = (s32) ((u32) sp + 0xb8U);
    a2 = 0; func_008BB2A0(a0, a1, a2);
    a0 = s0;
    a1 = (s32) ((u32) sp + 0xb8U); func_001EE630(a0, a1);
L_008D5F98:;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 8;
    if (v1 != 0) goto L_008D5ED8;
    s6 = (s32) ((u32) s6 + 0x1U);
    v1 = s6 < 11;
    { s32 c_ = v1 != 0; s4 = (s32) ((u32) s4 + 0x8U); if (c_) goto L_008D5EC8; }
L_008D5FB8:;
    return;
}
