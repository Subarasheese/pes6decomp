/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0017E690(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0017F4B0(void);
void func_0017F4C0(void);
void func_0017F4D0(s32, s32, s32, s32);
s32 func_0017F560(s32, s32, s32);
void func_001801F0(void);
s32 func_00180FE0(s32, s32, s32, s32);
s32 func_00181020(s32, s32, s32, s32);
void func_001810C0(s32, s32, s32, s32);
void func_00181120(s32);
s32 func_001811B0(s32, s32);

void func_0017E830(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[42];
    s32 sp = (s32) (u32) frame;

    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 84));
    a1 = (s32) ((u32) sp + 0x50U); func_0017E690(a0, a1, a2, a3, a4, a5, a6, a7);
    func_0017F4C0();
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = 0; v0 = func_001811B0(a0, a1);
    s2 = v0;
    a0 = s2; v0 = func_00181020(a0, a1, a2, a3);
    s1 = v0;
    s3 = (s32) ((u32) s1 << 11);
    a0 = s0;
L_0017E884:;
    a1 = 0;
    a2 = s3; v0 = func_0017F560(a0, a1, a2);
    if (v0 != 0) goto L_0017E8A8;
    func_001801F0();
    a0 = s0; goto L_0017E884;
L_0017E8A8:;
    a2 = (*(volatile s32 *) (u32) (s0 + 96));
    a0 = s2;
    a1 = s1; func_001810C0(a0, a1, a2, a3);
    a0 = s2; v0 = func_00180FE0(a0, a1, a2, a3);
    v1 = 2;
    if (v0 != v1) goto L_0017E918;
L_0017E8D0:;
    a0 = (*(volatile u8 *) (u32) (s0 + 133));
    v1 = 1;
    if (a0 != v1) goto L_0017E8E8;
    v0 = 3; goto L_0017E918;
L_0017E8E8:;
    v1 = 3;
    if (v0 == v1) goto L_0017E900;
    func_001801F0();
L_0017E900:;
    a0 = s2; v0 = func_00180FE0(a0, a1, a2, a3);
    v1 = 2;
    if (v0 == v1) goto L_0017E8D0;
L_0017E918:;
    a0 = (*(volatile u8 *) (u32) (s0 + 133));
    v1 = 1;
    if (a0 == v1) goto L_0017E954;
    v1 = 3;
    if (v0 == v1) goto L_0017E950;
    a0 = s2; func_00181120(a0);
    a0 = (s32) ((u32) sp + 0x50U);
    a1 = 0; v0 = func_001811B0(a0, a1);
    s2 = v0; goto L_0017E8A8;
L_0017E950:;
    (*(volatile u8 *) (u32) (s0 + 133)) = (u8) 0;
L_0017E954:;
    a0 = s2; func_00181120(a0);
    func_0017F4B0();
    v1 = (*(volatile u8 *) (u32) (s0 + 133));
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    at = (u64) v1 < (u64) (s64) 2;
    if (at != 0) { a0 = s0; goto L_0017E980; }
L_0017E978:;
    goto L_0017E990;
L_0017E980:;
    a1 = 0; func_0017F4D0(a0, a1, a2, a3);
    goto L_0017E978;
L_0017E990:;
    return;
}
