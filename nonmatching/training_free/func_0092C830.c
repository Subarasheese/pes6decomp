/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
void SD_call(s32);
void func_00262FA0(s32);
void func_00812BB0(s32, s32, s32, s32);
void func_00825630(s32, s32, s32, s32);
void func_008FB320(s32, s32, s32, s32, s32, s32, s32, s32);
void func_009E3080(s32, s32, s32, s32);
void func_00C99A90(s32, s32, s32, s32);
void func_00CCFD90(s32, s32, s32, s32);
void func_00CD7800(s32, s32, s32, s32);

void func_0092C830(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x3b0000U;
    a2 = 1;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s16 *) (u32) v1);
    { s32 c_ = v0 != a2; s0 = a0; if (c_) goto L_0092C91C; }
    v0 = (*(volatile s16 *) (u32) (v1 + 2));
    if (v0 == 0) goto L_0092C880;
    a0 = (*(volatile s32 *) (u32) (v1 + 4)); func_00C99A90(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680)); Pes6Heap_Free(a0);
    v1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (v1 + -5680)) = (u32) 0; goto L_0092CAA8;
L_0092C880:;
    v0 = (s32) 0x590000U;
    a0 = 0;
    (*(volatile u8 *) (u32) (v0 + 7637)) = (u8) a2; func_009E3080(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (*(volatile s16 *) (u32) (v0 + 16));
    if (v0 == v1) { a0 = 3; goto L_0092C8CC; }
    if (v0 == 0) { a0 = 9; goto L_0092C8BC; }
    goto L_0092C8D4;
L_0092C8BC:;
    func_00262FA0(a0);
    goto L_0092C8D4;
L_0092C8CC:;
    func_00262FA0(a0);
L_0092C8D4:;
    func_00CD7800(a0, a1, a2, a3);
    v0 = (s32) 0x82000000U;
    a0 = v0 | 0x2; SD_call(a0);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_00C99A90(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680)); Pes6Heap_Free(a0);
    v0 = (s32) 0x3b0000U;
    a0 = s0;
    (*(volatile u32 *) (u32) (v0 + -5680)) = (u32) 0; func_008FB320(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0092CAAC;
L_0092C91C:;
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = (*(volatile s16 *) (u32) (a0 + 16));
    if (a1 != 0) { v1 = (*(volatile s16 *) (u32) (a0 + 18)); goto L_0092CA20; }
    v0 = (s32) 0x590000U;
    a0 = 0;
    (*(volatile u8 *) (u32) (v0 + 7637)) = (u8) a2; func_009E3080(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -5776));
    v0 = (s32) ((u32) v0 + 0xfffffffbU);
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) { v0 = (s32) 0x82000000U; goto L_0092C9E4; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffec90U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x92c970U) goto L_0092C970; if (t_ == 0x92c980U) goto L_0092C980; if (t_ == 0x92c990U) goto L_0092C990; if (t_ == 0x92c9a8U) goto L_0092C9A8; if (t_ == 0x92c9b8U) goto L_0092C9B8; if (t_ == 0x92c9d0U) goto L_0092C9D0; }
L_0092C970:;
    func_00CD7800(a0, a1, a2, a3);
    goto L_0092C9E0;
L_0092C980:;
    func_00CD7800(a0, a1, a2, a3);
    goto L_0092C9E0;
L_0092C990:;
    a0 = 3; func_00825630(a0, a1, a2, a3);
    func_00CD7800(a0, a1, a2, a3);
    goto L_0092C9E0;
L_0092C9A8:;
    func_00CD7800(a0, a1, a2, a3);
    goto L_0092C9E0;
L_0092C9B8:;
    a0 = 3; func_00CCFD90(a0, a1, a2, a3);
    func_00CD7800(a0, a1, a2, a3);
    goto L_0092C9E0;
L_0092C9D0:;
    a0 = 3; func_00812BB0(a0, a1, a2, a3);
    func_00CD7800(a0, a1, a2, a3);
L_0092C9E0:;
    v0 = (s32) 0x82000000U;
L_0092C9E4:;
    a0 = v0 | 0x2; SD_call(a0);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_00C99A90(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680)); Pes6Heap_Free(a0);
    v0 = (s32) 0x3b0000U;
    a0 = s0;
    (*(volatile u32 *) (u32) (v0 + -5680)) = (u32) 0; func_008FB320(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0092CAA8;
L_0092CA20:;
    v0 = 2;
    if (v1 != v0) goto L_0092CA8C;
    if (a1 != a2) goto L_0092CA8C;
    a0 = 0; func_009E3080(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -10329));
    if (v0 != 0) goto L_0092CA58;
    v0 = (s32) 0x82000000U;
    a0 = v0 | 0x2; SD_call(a0);
L_0092CA58:;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); func_00C99A90(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680)); Pes6Heap_Free(a0);
    v0 = (s32) 0x3b0000U;
    a0 = s0;
    (*(volatile u32 *) (u32) (v0 + -5680)) = (u32) 0; func_008FB320(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0092CAA8;
L_0092CA8C:;
    func_00C99A90(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680)); Pes6Heap_Free(a0);
    v1 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (v1 + -5680)) = (u32) 0;
L_0092CAA8:;
L_0092CAAC:;
    return;
}
