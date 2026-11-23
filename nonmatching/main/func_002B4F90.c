/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0028C320(s32);
void func_0028C590(s32, s32);
void func_0028C5D0(s32, s32);
void func_0028CB20(s32);

void func_002B4F90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[36];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = s0; func_0028C5D0(a0, a1);
    a0 = (s32) ((u32) sp + 0x20U); func_0028CB20(a0);
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = s0; func_0028C590(a0, a1);
    a0 = s0 & 0xff; func_0028C320(a0);
    v1 = (s32) 0x590000U;
    a0 = 5;
    v1 = (*(volatile u8 *) (u32) (v1 + 7177));
    if (v1 == a0) goto L_002B5188;
    a0 = (s32) ((u32) s0 << 4);
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a0 - (u32) s0);
    v1 = (s32) ((u32) v1 + 0x2980U);
    a0 = (s32) ((u32) a1 << 3);
    a7 = 32;
    a0 = (s32) ((u32) a0 - (u32) a1);
    a2 = 0;
    a0 = (s32) ((u32) a0 << 8);
    a0 = (s32) ((u32) v1 + (u32) a0);
L_002B5004:;
    v1 = (*(volatile u8 *) (u32) (a0 + 20));
    if (v1 == 0) goto L_002B5018;
    a7 = (s32) ((u32) a7 + 0xffffffffU);
L_002B5018:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 32;
    { s32 c_ = v1 != 0; a0 = (s32) ((u32) a0 + 0x348U); if (c_) goto L_002B5004; }
L_002B5028:;
    at = 0 < a7;
    a5 = 0;
    { s32 c_ = at == 0; t5 = a7; if (c_) goto L_002B5180; }
    v1 = 139;
    a3 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) s0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    a3 = (s32) ((u32) a3 + 0x1a90U);
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x2980U);
    v1 = (s32) ((u32) s0 << 4);
    a4 = (s32) ((u32) a3 + (u32) a4);
    a2 = (s32) ((u32) v1 - (u32) s0);
    a6 = a4;
    a1 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 - (u32) a2);
    v1 = (s32) ((u32) v1 - (u32) a2);
    a1 = (s32) ((u32) a1 << 8);
    a2 = (s32) ((u32) a4 + 0x6U);
    a3 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) v1 << 3);
    v1 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 + 0x2020U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = (s32) ((u32) v1 + 0x2U);
    v1 = -1;
L_002B5094:;
    a0 = (*(volatile u8 *) (u32) (a6 + 7));
    t4 = (s32) ((u32) a0 << 4);
    t6 = (s32) ((u32) t4 - (u32) a0);
    t4 = (s32) ((u32) t6 << 3);
    t4 = (s32) ((u32) t4 - (u32) t6);
    t4 = (s32) ((u32) t4 << 3);
    t4 = (s32) ((u32) a3 + (u32) t4);
    t4 = (*(volatile u8 *) (u32) (t4 + 20));
    if (t4 == 0) goto L_002B5170;
    at = t5 < 32;
    { s32 c_ = at == 0; t4 = v1; if (c_) goto L_002B5110; }
L_002B50C8:;
    t6 = (s32) ((u32) a4 + (u32) t5);
    s0 = (*(volatile u8 *) (u32) (t6 + 7));
    t6 = (s32) ((u32) s0 << 4);
    t7 = (s32) ((u32) t6 - (u32) s0);
    t6 = (s32) ((u32) t7 << 3);
    t6 = (s32) ((u32) t6 - (u32) t7);
    t6 = (s32) ((u32) t6 << 3);
    t6 = (s32) ((u32) a3 + (u32) t6);
    t6 = (*(volatile u8 *) (u32) (t6 + 20));
    if (t6 != 0) goto L_002B5100;
    t4 = s0; goto L_002B5110;
L_002B5100:;
    t5 = (s32) ((u32) t5 + 0x1U);
    t6 = t5 < 32;
    if (t6 != 0) goto L_002B50C8;
L_002B5110:;
    if (t4 == v1) goto L_002B51B0;
    s0 = 0;
L_002B5120:;
    t7 = (s32) ((u32) a4 + (u32) s0);
    t6 = (*(volatile u8 *) (u32) t7);
    if (a0 == t6) goto L_002B5198;
L_002B5130:;
    s0 = (s32) ((u32) s0 + 0x1U);
    t6 = s0 < 5;
    if (t6 != 0) goto L_002B5120;
    t6 = (*(volatile u8 *) (u32) a2);
    if (a0 == t6) goto L_002B51A0;
L_002B5150:;
    t6 = (*(volatile u8 *) (u32) a1);
    if (a0 == t6) goto L_002B51A8;
L_002B5160:;
    t6 = (s32) ((u32) a4 + (u32) t5);
    (*(volatile u8 *) (u32) (t6 + 7)) = (u8) a0;
    t5 = (s32) ((u32) t5 + 0x1U);
    (*(volatile u8 *) (u32) (a6 + 7)) = (u8) t4;
L_002B5170:;
    a5 = (s32) ((u32) a5 + 0x1U);
    a0 = a5 < a7;
    { s32 c_ = a0 != 0; a6 = (s32) ((u32) a6 + 0x1U); if (c_) goto L_002B5094; }
L_002B5180:;
    goto L_002B51B0;
L_002B5188:;
    if (s0 != 0) goto L_002B51B0;
    a7 = 11; goto L_002B5028;
L_002B5198:;
    (*(volatile u8 *) (u32) t7) = (u8) t4; goto L_002B5130;
L_002B51A0:;
    (*(volatile u8 *) (u32) a2) = (u8) t4; goto L_002B5150;
L_002B51A8:;
    (*(volatile u8 *) (u32) a1) = (u8) t4; goto L_002B5160;
L_002B51B0:;
    return;
}
