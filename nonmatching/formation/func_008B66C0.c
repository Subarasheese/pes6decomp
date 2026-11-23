/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B7A60(s32, s32, s32, s32);
void func_001B7B80(s32, s32, s32, s32);
void func_001B7D40(s32, s32, s32, s32);
s32 func_008BC3B0(void);

void func_008B66C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v1 = (s32) 0x8f0000U;
    s1 = a0;
    a0 = (*(volatile u16 *) (u32) (v1 + -7792));
    a0 = a0 & 0x80;
    v1 = 1;
    a0 = (u64) 0 < (u64) a0;
    { s32 c_ = a0 == v1; s0 = a1; if (c_) goto L_008B683C; }
    a0 = (*(volatile u8 *) (u32) (s1 + 23));
    if (a0 != 0) goto L_008B679C;
    v1 = s0 & 0xff;
    if (v1 == 0) goto L_008B679C;
    v0 = func_008BC3B0();
    if (v0 == 0) goto L_008B673C;
    v1 = (*(volatile u8 *) (u32) (s1 + 26));
    if (v1 == 0) { v1 = 0; goto L_008B6768; }
    a0 = (*(volatile u8 *) (u32) s1);
    v1 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 + 0xffffe194U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1); goto L_008B6768;
L_008B673C:;
    v1 = (s32) 0x8f0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -7788));
    if (v1 != 0) { v1 = 1; goto L_008B6768; }
    v1 = (s32) 0x8f0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -7787));
    if (v1 != 0) goto L_008B6764;
    v1 = 0; goto L_008B6768;
L_008B6764:;
    v1 = 1;
L_008B6768:;
    if (v1 != 0) { a0 = (*(volatile u8 *) (u32) s1); goto L_008B6784; }
    v0 = (s32) 0x6c0000U;
    a0 = 13;
    a1 = v0 | 0x30; func_001B7D40(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) s1);
L_008B6784:;
    v1 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 + 0xffffe194U);
    a1 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) v1) = (u8) a1; goto L_008B6838;
L_008B679C:;
    if (a0 == 0) { (*(volatile u8 *) (u32) (s1 + 23)) = (u8) s0; goto L_008B683C; }
    v1 = s0 & 0xff;
    if (v1 != 0) goto L_008B6838;
    v1 = (*(volatile u8 *) (u32) s1);
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffe194U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) v0) = (u8) 0; v0 = func_008BC3B0();
    if (v0 == 0) goto L_008B67F4;
    v1 = (*(volatile u8 *) (u32) (s1 + 26));
    if (v1 == 0) { v1 = 0; goto L_008B6820; }
    a0 = (*(volatile u8 *) (u32) s1);
    v1 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 + 0xffffe194U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1); goto L_008B6820;
L_008B67F4:;
    v1 = (s32) 0x8f0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -7788));
    if (v1 != 0) { v1 = 1; goto L_008B6820; }
    v1 = (s32) 0x8f0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -7787));
    if (v1 != 0) goto L_008B681C;
    v1 = 0; goto L_008B6820;
L_008B681C:;
    v1 = 1;
L_008B6820:;
    if (v1 != 0) goto L_008B6838;
    a0 = 13; func_001B7B80(a0, a1, a2, a3);
    a0 = 1; func_001B7A60(a0, a1, a2, a3);
L_008B6838:;
    (*(volatile u8 *) (u32) (s1 + 23)) = (u8) s0;
L_008B683C:;
    return;
}
