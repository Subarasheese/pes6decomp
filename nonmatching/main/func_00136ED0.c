/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0010A6E8(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0010A978(s32);
s32 func_0010AAF0(s32, s32, s32);
s32 func_0010D698(s32);
s32 func_00113B68(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00114EE0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_00114F10(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001C3660(s32, s32);
s32 func_001C80F0(s32);
s32 func_001C9C78(s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);
s32 strcmp(s32, s32);
void strcpy(s32, s32);
void strncpy(s32, s32, s32);

s32 func_00136ED0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[56];
    s32 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a1;
    a0 = s4;
    a1 = 58;
    v0 = func_001C3660(a0, a1);
    s2 = v0;
    if (s2 == 0) goto L_00137030;
    s0 = (s32) ((u32) s2 - (u32) s4);
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = s4;
    a2 = s0; strncpy(a0, a1, a2);
    v0 = (s32) ((u32) s0 + (u32) sp);
    a1 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) sp + 0x70U);
    (*(volatile u8 *) (u32) (v0 + 112)) = (u8) 0;
    a1 = (s32) ((u32) a1 + 0x6898U); v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_00136FE4;
    a0 = (s32) ((u32) s2 + 0x1U); v0 = func_001C80F0(a0);
    s1 = v0;
    s3 = 0;
    v0 = 1;
    at = 0 < s1;
    { s32 c_ = at == 0; (*(volatile u32 *) (u32) s5) = (u32) v0; if (c_) goto L_00136FA0; }
L_00136F64:;
    v1 = (s32) ((u32) s2 + (u32) s3);
    v0 = 47;
    s0 = (s32) ((u32) v1 + 0x1U);
    v1 = (*(volatile s8 *) (u32) (v1 + 1));
    if (v1 == v0) { v0 = 92; goto L_00137028; }
L_00136F80:;
    a0 = (*(volatile s8 *) (u32) s0); v0 = func_001C9C78(a0);
    (*(volatile u8 *) (u32) s0) = (u8) v0;
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s1;
    if (v0 != 0) goto L_00136F64;
L_00136FA0:;
    a0 = s4;
    a1 = 59; v0 = func_001C3660(a0, a1);
    if (v0 == 0) goto L_00136FC0;
    a3 = (s32) 0x3c0000U;
    a3 = (s32) ((u32) a3 + 0x68a0U); goto L_00136FC8;
L_00136FC0:;
    a3 = (s32) 0x3c0000U;
    a3 = (s32) ((u32) a3 + 0x68a8U);
L_00136FC8:;
    a1 = (s32) 0x3c0000U;
    a2 = (s32) ((u32) s2 + 0x1U);
    a0 = (s32) ((u32) sp + 0xb0U);
    a1 = (s32) ((u32) a1 + 0x68b0U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) s5); goto L_00137004;
L_00136FE4:;
    a1 = (s32) 0x3c0000U;
    a3 = (s32) ((u32) s2 + 0x1U);
    a0 = (s32) ((u32) sp + 0xb0U);
    a1 = (s32) ((u32) a1 + 0x68b8U);
    a2 = (s32) ((u32) sp + 0x70U);
    (*(volatile u32 *) (u32) s5) = (u32) 0; sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
L_00137000:;
    v0 = (*(volatile s32 *) (u32) s5);
L_00137004:;
    if (v0 == 0) { a0 = (s32) ((u32) sp + 0xb0U); goto L_001370D8; }
    a0 = (s32) ((u32) s5 + 0x8U);
    a1 = (s32) ((u32) sp + 0xb0U); v0 = func_00113B68(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 != 0) { v0 = (s32) 0x20000U; goto L_00137064; }
    v0 = 0; goto L_00137144;
L_00137028:;
    (*(volatile u8 *) (u32) s0) = (u8) v0; goto L_00136F80;
L_00137030:;
    a1 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = (s32) ((u32) a1 + 0x68c0U); strcpy(a0, a1);
    a1 = (s32) 0x3c0000U;
    a3 = s4;
    a0 = (s32) ((u32) sp + 0xb0U);
    a1 = (s32) ((u32) a1 + 0x68b8U);
    a2 = (s32) ((u32) sp + 0x70U);
    (*(volatile u32 *) (u32) s5) = (u32) 0; sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00137000;
L_00137064:;
    a0 = v0 | 0x8010; v0 = func_0010D698(a0);
    (*(volatile u32 *) (u32) (s5 + 44)) = (u32) v0;
L_00137070:;
    v1 = (*(volatile s32 *) (u32) (s5 + 44));
    v0 = -16;
    a0 = 80;
    a1 = 5;
    v1 = (s32) ((u32) v1 + 0xfU);
    a2 = v1 & v0; v0 = func_00114EE0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) goto L_00137070;
    v0 = (*(volatile s32 *) (u32) (s5 + 12));
    (*(volatile u32 *) (u32) (s5 + 4)) = (u32) v0;
    (*(volatile u8 *) (u32) (sp + 444)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 445)) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 446)) = (u8) 0;
L_001370B0:;
    a0 = (*(volatile s32 *) (u32) (s5 + 8));
    a1 = (s32) ((u32) sp + 0x1bcU); v0 = func_00114F10(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) goto L_001370B0;
L_001370D0:;
    v0 = 1; goto L_00137144;
L_001370D8:;
    a1 = 1; v0 = func_0010A6E8(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u32 *) (u32) (s5 + 48)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (s5 + 48));
    if (a0 >= 0) { a1 = 0; goto L_001370F8; }
    v0 = 0; goto L_00137144;
L_001370F8:;
    a2 = 2; v0 = func_0010AAF0(a0, a1, a2);
    (*(volatile u32 *) (u32) (s5 + 4)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s5 + 4));
    if (v0 < 0) { a0 = (*(volatile s32 *) (u32) (s5 + 48)); goto L_00137138; }
    a0 = (*(volatile s32 *) (u32) (s5 + 48));
    a1 = 0;
    a2 = 0; v0 = func_0010AAF0(a0, a1, a2);
    if (v0 >= 0) goto L_001370D0;
    a0 = (*(volatile s32 *) (u32) (s5 + 48)); v0 = func_0010A978(a0);
    v0 = 0; goto L_00137144;
L_00137138:;
    v0 = func_0010A978(a0);
    v0 = 0;
L_00137144:;
    return v0;
}
