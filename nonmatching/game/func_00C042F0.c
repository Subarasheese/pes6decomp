/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001AFD70(s32);
void func_00207360(s32);
void func_00209A00(s32, s32, s32);
void func_0027A770(void);
void func_00299FA0(s32, s32);
void func_00299FB0(s32, s32, s32);
s32 func_00B79860(s32);
void func_00C03AB0(s32, s32, s32, s32);
void func_00C03B90(s32, f32);
void func_00C04100(void);

void func_00C042F0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    s1 = 0;
    s0 = (s32) 0xca0000U;
    s0 = (s32) ((u32) s0 + 0xffffefc0U);
L_00C04310:;
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    v0 = -1;
    if (v1 != v0) { a0 = s0; goto L_00C043A0; }
L_00C04320:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 5;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x28U); if (c_) goto L_00C04310; }
    func_00C04100();
    v0 = (s32) 0xca0000U;
    s1 = (s32) 0x590000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -22764));
    s2 = 1;
    s1 = (s32) ((u32) s1 + 0xffffe7f0U);
L_00C0434C:;
    v0 = 1;
    v0 = (s32) ((u32) v0 << (s2 & 31));
    v0 = v0 & s0;
    if (v0 == 0) goto L_00C04470;
    v0 = 75;
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v0;
    (*(volatile u16 *) (u32) (s1 + 24)) = (u16) 0;
L_00C04370:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 23;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x240U); if (c_) goto L_00C0434C; }
    v1 = 75;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + -6714)) = (u8) v1;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v0 + -6712)) = (u16) 0; func_0027A770();
    goto L_00C04490;
L_00C043A0:;
    func_00C03B90(a0, f12.f);
    v1 = (*(volatile s32 *) (u32) (s0 + 8));
    v0 = 1;
    if (v1 == v0) goto L_00C043F8;
    if (v1 == 0) goto L_00C043C8;
    goto L_00C04420;
L_00C043C8:;
    s2 = (*(volatile s32 *) (u32) (s0 + 12));
    a2 = (*(volatile u16 *) (u32) (s0 + 30));
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    a1 = (*(volatile u16 *) (u32) (s0 + 28)); func_00209A00(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s2 + 4)); func_00207360(a0);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (*(volatile s32 *) (u32) v0); func_001AFD70(a0);
    (*(volatile u32 *) (u32) (s2 + 28)) = (u32) 0; goto L_00C04420;
L_00C043F8:;
    s2 = (*(volatile s32 *) (u32) (s0 + 12));
    a1 = (*(volatile u16 *) (u32) (s0 + 28));
    a2 = (*(volatile u16 *) (u32) (s0 + 30));
    a0 = s2; func_00299FB0(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (s0 + 26));
    a0 = s2; func_00299FA0(a0, a1);
    (*(volatile u32 *) (u32) (s2 + 8)) = (u32) 0;
L_00C04420:;
    a1 = (s32) 0xca0000U;
    a1 = (s32) ((u32) a1 + 0xfffff090U);
    a0 = (s32) ((u32) sp + 0x40U);
    v1 = 21;
L_00C04430:;
    v0 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u32 *) (u32) a0) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x4U);
    a0 = (s32) ((u32) a0 + 0x4U);
    if (v1 > 0) goto L_00C04430;
    v0 = (*(volatile s32 *) (u32) s0);
    a0 = s0;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 64));
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v0; func_00C03AB0(a0, a1, a2, a3);
    goto L_00C04320;
L_00C04470:;
    a0 = s1; v0 = func_00B79860(a0);
    if (v0 == 0) goto L_00C04370;
    v0 = 253;
    (*(volatile u8 *) (u32) (s1 + 22)) = (u8) v0;
    (*(volatile u16 *) (u32) (s1 + 24)) = (u16) 0; goto L_00C04370;
L_00C04490:;
    return;
}
