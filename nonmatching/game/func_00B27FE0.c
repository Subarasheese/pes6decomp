/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00188910(s32);
void func_00209A00(s32, s32, s32);
s32 func_002CA7A0(s32);
s32 func_00AFBAB0(s32);
s32 func_00B29CB0(void);

void func_00B27FE0(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    s32 hi = 0, lo = 0;
    s64 frame[28];
    s32 sp = (s32) (u32) frame;

    s5 = 0;
    s4 = (s32) 0x590000U;
    s4 = (s32) ((u32) s4 + 0xffffe7f0U);
    s3 = (s32) ((u32) sp + 0xd8U);
    s2 = (s32) ((u32) sp + 0xacU);
    s1 = (s32) ((u32) sp + 0x94U);
    s0 = (s32) ((u32) sp + 0x88U);
L_00B28020:;
    a0 = s4; v0 = func_002CA7A0(a0);
    if (v0 == 0) goto L_00B28048;
L_00B28030:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v1 = s5 < 22;
    { s32 c_ = v1 != 0; s4 = (s32) ((u32) s4 + 0x240U); if (c_) goto L_00B28020; }
    goto L_00B28188;
L_00B28048:;
    v0 = func_00B29CB0();
    if (v0 == 0) goto L_00B28128;
    v0 = 0;
L_00B28060:;
    if (v0 == 0) goto L_00B28080;
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = 1111;
    a2 = 0; func_00209A00(a0, a1, a2);
    goto L_00B28090;
L_00B28080:;
    a0 = (*(volatile s32 *) (u32) (s4 + 4));
    a1 = 447;
    a2 = 0; func_00209A00(a0, a1, a2);
L_00B28090:;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) 0;
    v0 = 16384;
    (*(volatile u16 *) (u32) (s4 + 38)) = (u16) v0; v0 = func_00B29CB0();
    if (v0 == 0) goto L_00B28138;
    v0 = (s32) 0x44a00000U;
    f20.i = (s32) v0;
L_00B280B0:;
    a0 = (*(volatile u8 *) (u32) s4); v0 = func_00AFBAB0(a0);
    a0 = v0 & 0xff;
    v1 = (*(volatile u8 *) (u32) s4);
    v0 = (*(volatile s16 *) (u32) (s4 + 20));
    v1 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) 0 - (u32) v0);
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (s32) ((u32) v0 << 3);
    f0.i = (s32) v0;
    f0.f = (f32) f0.i;
    f0.f = f20.f + f0.f;
    (*(volatile f32 *) (u32) (s4 + 224)) = f0.f; v0 = func_00B29CB0();
    if (v0 == 0) goto L_00B28160;
    v1 = (s32) 0x46140000U;
    v1 = v1 | 0x6400;
    f0.i = (s32) v1;
L_00B28110:;
    v1 = 255;
    (*(volatile f32 *) (u32) (s4 + 232)) = f0.f;
    (*(volatile u8 *) (u32) (s4 + 22)) = (u8) v1;
    (*(volatile u16 *) (u32) (s4 + 24)) = (u16) 0; goto L_00B28030;
L_00B28128:;
    a0 = (s32) ((u32) sp + 0xc0U); func_00188910(a0);
    v0 = (*(volatile s32 *) (u32) s3); goto L_00B28060;
L_00B28138:;
    a0 = (s32) ((u32) sp + 0xa0U); func_00188910(a0);
    v0 = (*(volatile u8 *) (u32) (s4 + 19));
    if (v0 == 0) goto L_00B28158;
    f20.f = (*(volatile f32 *) (u32) s2); goto L_00B280B0;
L_00B28158:;
    f20.f = (*(volatile f32 *) (u32) (sp + 160)); goto L_00B280B0;
L_00B28160:;
    a0 = (s32) ((u32) sp + 0x80U); func_00188910(a0);
    v1 = (*(volatile u8 *) (u32) (s4 + 19));
    if (v1 == 0) goto L_00B28180;
    f0.f = (*(volatile f32 *) (u32) s1); goto L_00B28110;
L_00B28180:;
    f0.f = (*(volatile f32 *) (u32) s0); goto L_00B28110;
L_00B28188:;
    return;
}
