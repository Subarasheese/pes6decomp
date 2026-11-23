/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
void Pes6Keyboard_Release(s32, s32, s32, s32, s32, s32, s32, s32);
void SD_call(s32);
s32 func_00154540(void);
void func_001BC2B0(s32, s32, s32, s32);
void func_001BC360(s32, s32, s32, s32);
void func_001EDD90(s32, s32, s32, s32);
void func_0026B4C0(s32);
void func_0026B580(s32, s32, s32, s32);
void func_0026B6D0(s32, s32, s32, s32);
void func_0026BC60(s32, s32, s32, s32);
void func_002CAFB0(void);
void func_00804950(s32, s32, s32, s32);
void func_00804CC0(s32, s32, s32, s32);
void func_00825DF0(s32, s32, s32, s32);
s32 func_00B29E50(s32, s32, s32, s32);
void func_00C70670(s32, s32, s32, s32);
void func_00C75330(s32, s32, s32, s32);
void func_00C997B0(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_008FB320(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -19632));
    { s32 c_ = v1 == 0; s2 = a0; if (c_) goto L_008FB53C; }
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -5776));
    at = v0 < 11;
    if (at == 0) { v0 = (*(volatile s32 *) (u32) (gp + -19632)); goto L_008FB368; }
    v0 = (s32) 0x82000000U;
    a0 = v0 | 0x1; SD_call(a0);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
L_008FB368:;
    a0 = (*(volatile s32 *) (u32) (v0 + 480)); func_001BC360(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a0 = (*(volatile s32 *) (u32) (v0 + 484)); func_001BC360(a0, a1, a2, a3);
    s1 = 0;
    s0 = 0;
L_008FB384:;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (s32) ((u32) v0 + (u32) s0);
    s3 = (s32) ((u32) v0 + 0x204U);
    a0 = s3; func_00C75330(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 24)); func_001EDD90(a0, a1, a2, a3);
    a0 = s3;
    a1 = 0;
    a2 = 28; memset(a0, a1, a2);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 11;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x1cU); if (c_) goto L_008FB384; }
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a0 = (s32) ((u32) v0 + 0x1ecU); func_00C75330(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a1 = 0;
    a2 = 436;
    a0 = (s32) ((u32) v0 + 0x184U); memset(a0, a1, a2);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -5736));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -19632)); goto L_008FB40C; }
    v0 = func_00154540();
    v1 = v0 & 0xff;
    v0 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (v0 + -5740)) = (u32) v1; func_0026B6D0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
L_008FB40C:;
    a0 = (s32) ((u32) v0 + 0x24U); func_00C75330(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -5760));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -19632)); goto L_008FB430; }
    Pes6Keyboard_Release(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
L_008FB430:;
    a0 = (*(volatile s32 *) (u32) (v0 + 20)); func_001BC360(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -19632));
    a2 = s2;
    a1 = 5; func_0026B580(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a0 = (*(volatile s32 *) (u32) (v0 + 364)); func_0026B4C0(a0);
    v0 = (s32) 0x3b0000U;
    v1 = 10;
    a0 = (*(volatile s8 *) (u32) (v0 + -5776));
    if (a0 == v1) goto L_008FB4D0;
    v0 = 7;
    if (a0 == v0) goto L_008FB4D0;
    v0 = 9;
    if (a0 == v0) goto L_008FB4A8;
    v0 = 6;
    if (a0 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -19632)); goto L_008FB494; }
    v0 = (*(volatile s32 *) (u32) (gp + -19632)); goto L_008FB4E4;
L_008FB494:;
    a1 = (*(volatile s32 *) (u32) (v0 + 260));
    a0 = 1; func_00825DF0(a0, a1, a2, a3);
    goto L_008FB4E0;
L_008FB4A8:;
    v0 = func_00B29E50(a0, a1, a2, a3);
    a0 = 1;
    if (v0 != a0) goto L_008FB4E0;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a1 = (*(volatile s32 *) (u32) (v0 + 260)); func_00825DF0(a0, a1, a2, a3);
    goto L_008FB4E0;
L_008FB4D0:;
    func_00804950(a0, a1, a2, a3);
    func_00804CC0(a0, a1, a2, a3);
L_008FB4E0:;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
L_008FB4E4:;
    a0 = (*(volatile s32 *) (u32) (v0 + 368)); func_001EDD90(a0, a1, a2, a3);
    func_001BC2B0(a0, a1, a2, a3);
    func_0026BC60(a0, a1, a2, a3);
    func_00C997B0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -19632)); Pes6Heap_Free(a0);
    (*(volatile u32 *) (u32) (gp + -19632)) = (u32) 0; func_002CAFB0();
    func_00C70670(a0, a1, a2, a3);
    a0 = -1;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7606)) = (u8) a0;
    a1 = 2;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (a0 + 7605)) = (u8) a1;
    (*(volatile u8 *) (u32) (v1 + -5770)) = (u8) 0;
L_008FB53C:;
    return;
}
