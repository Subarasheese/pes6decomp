/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00290C00(s32);
void func_002B51C0(s32, s32, s32);

void func_00361EF0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, t4 = 0, t5 = 0, t6 = 0, t7 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    { s32 c_ = a1 != 0; s1 = a2; if (c_) goto L_00361F18; }
    v0 = 0; goto L_00362140;
L_00361F18:;
    v1 = (*(volatile u16 *) (u32) a1);
    v0 = 0xffff;
    if (v1 != v0) { v0 = (s32) ((u32) s2 << 4); goto L_00361F30; }
    v0 = 0; goto L_00362140;
L_00361F30:;
    a7 = 0;
    a0 = (s32) ((u32) v0 - (u32) s2);
    a4 = (s32) ((u32) sp + 0x70U);
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0x5a0000U;
    v1 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) v0 + 0x2020U);
    v1 = (s32) ((u32) v1 << 3);
    a3 = (s32) ((u32) sp + 0x40U);
    s0 = (s32) ((u32) v0 + (u32) v1);
    a5 = s0;
L_00361F5C:;
    a2 = (s32) ((u32) a5 + 0x7U);
    a6 = 0;
L_00361F68:;
    a0 = (s32) ((u32) a2 + (u32) a6);
    t4 = (*(volatile u8 *) (u32) (a0 + 54));
    v1 = (s32) ((u32) a4 + (u32) a6);
    t5 = (*(volatile u8 *) (u32) (a0 + 55));
    v0 = (s32) ((u32) a3 + (u32) a6);
    t6 = (*(volatile u8 *) (u32) (a0 + 65));
    a6 = (s32) ((u32) a6 + 0x5U);
    (*(volatile u8 *) (u32) v1) = (u8) t4;
    (*(volatile u8 *) (u32) (v1 + 1)) = (u8) t5;
    t4 = a6 < 6;
    t7 = (*(volatile u8 *) (u32) (a0 + 66));
    (*(volatile u8 *) (u32) v0) = (u8) t6;
    t6 = (*(volatile u8 *) (u32) (a0 + 56));
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) t7;
    t5 = (*(volatile u8 *) (u32) (a0 + 67));
    (*(volatile u8 *) (u32) (v1 + 2)) = (u8) t6;
    t7 = (*(volatile u8 *) (u32) (a0 + 57));
    (*(volatile u8 *) (u32) (v0 + 2)) = (u8) t5;
    t6 = (*(volatile u8 *) (u32) (a0 + 68));
    t5 = (*(volatile u8 *) (u32) (a0 + 58));
    (*(volatile u8 *) (u32) (v1 + 3)) = (u8) t7;
    (*(volatile u8 *) (u32) (v0 + 3)) = (u8) t6;
    (*(volatile u8 *) (u32) (v1 + 4)) = (u8) t5;
    v1 = (*(volatile u8 *) (u32) (a0 + 69));
    { s32 c_ = t4 != 0; (*(volatile u8 *) (u32) (v0 + 4)) = (u8) v1; if (c_) goto L_00361F68; }
    v1 = (s32) ((u32) a2 + (u32) a6);
    v0 = (s32) ((u32) a3 + (u32) a6);
    a2 = (*(volatile u8 *) (u32) (v1 + 54));
    a0 = (s32) ((u32) a4 + (u32) a6);
    a7 = (s32) ((u32) a7 + 0x1U);
    a5 = (s32) ((u32) a5 + 0x52U);
    a4 = (s32) ((u32) a4 + 0xbU);
    a3 = (s32) ((u32) a3 + 0xbU);
    v1 = (*(volatile u8 *) (u32) (v1 + 65));
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v0 = a7 < 3;
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) a0) = (u8) a2; if (c_) goto L_00361F5C; }
    if (s1 == 0) { a2 = 0; goto L_00362048; }
    v0 = 3;
    if (s1 == v0) { a2 = 2; goto L_00362048; }
    v0 = 2;
    if (s1 == v0) { a2 = 1; goto L_00362048; }
    v0 = 1;
    if (s1 == v0) goto L_00362038;
    goto L_00362044;
L_00362038:;
    a2 = 1;
    goto L_00362048;
L_00362044:;
    a2 = 0;
L_00362048:;
    a0 = s2;
    a1 = (s32) ((u32) a1 + 0x6U); func_002B51C0(a0, a1, a2);
    v0 = 1;
    if (s1 == v0) goto L_00362118;
    v1 = 0;
    a1 = (s32) ((u32) sp + 0x70U);
    a0 = (s32) ((u32) sp + 0x40U);
L_0036206C:;
    t5 = (s32) ((u32) s0 + 0x7U);
    v0 = 0;
L_00362078:;
    t4 = (s32) ((u32) a1 + (u32) v0);
    a6 = (s32) ((u32) a0 + (u32) v0);
    a2 = (*(volatile u8 *) (u32) t4);
    a5 = (*(volatile u8 *) (u32) a6);
    a7 = (s32) ((u32) t5 + (u32) v0);
    a4 = (*(volatile u8 *) (u32) (t4 + 1));
    v0 = (s32) ((u32) v0 + 0x5U);
    (*(volatile u8 *) (u32) (a7 + 54)) = (u8) a2;
    (*(volatile u8 *) (u32) (a7 + 65)) = (u8) a5;
    a2 = v0 < 6;
    (*(volatile u8 *) (u32) (a7 + 55)) = (u8) a4;
    a3 = (*(volatile u8 *) (u32) (a6 + 1));
    a5 = (*(volatile u8 *) (u32) (t4 + 2));
    a4 = (*(volatile u8 *) (u32) (a6 + 2));
    (*(volatile u8 *) (u32) (a7 + 66)) = (u8) a3;
    (*(volatile u8 *) (u32) (a7 + 56)) = (u8) a5;
    (*(volatile u8 *) (u32) (a7 + 67)) = (u8) a4;
    a3 = (*(volatile u8 *) (u32) (t4 + 3));
    a5 = (*(volatile u8 *) (u32) (a6 + 3));
    a4 = (*(volatile u8 *) (u32) (t4 + 4));
    (*(volatile u8 *) (u32) (a7 + 57)) = (u8) a3;
    (*(volatile u8 *) (u32) (a7 + 68)) = (u8) a5;
    a3 = (*(volatile u8 *) (u32) (a6 + 4));
    (*(volatile u8 *) (u32) (a7 + 58)) = (u8) a4;
    { s32 c_ = a2 != 0; (*(volatile u8 *) (u32) (a7 + 69)) = (u8) a3; if (c_) goto L_00362078; }
    a2 = (s32) ((u32) a1 + (u32) v0);
    a3 = (s32) ((u32) t5 + (u32) v0);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a2 = (*(volatile u8 *) (u32) a2);
    v0 = (*(volatile u8 *) (u32) v0);
    v1 = (s32) ((u32) v1 + 0x1U);
    s0 = (s32) ((u32) s0 + 0x52U);
    a1 = (s32) ((u32) a1 + 0xbU);
    (*(volatile u8 *) (u32) (a3 + 54)) = (u8) a2;
    (*(volatile u8 *) (u32) (a3 + 65)) = (u8) v0;
    v0 = v1 < 3;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0xbU); if (c_) goto L_0036206C; }
L_00362118:;
    v1 = 1;
    if (s1 != v1) { a0 = s2; goto L_00362134; }
    v0 = (s32) ((u32) gp + 0xffffac90U);
    v0 = (s32) ((u32) v0 + (u32) s2);
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    a0 = s2;
L_00362134:;
    func_00290C00(a0);
    v0 = 1;
L_00362140:;
    return;
}
