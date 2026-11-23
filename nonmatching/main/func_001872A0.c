/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6TextureCache_Invalidate(s64);
void func_001453E0(s64);
void func_00145590(s64, s64, s64, s64, s64, s64, s64, s64);
void func_00145750(s64, s64, s64, s64, s64, s64, s64, s64);

void func_001872A0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0;

    v1 = (s32) 0x520000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -13));
    if (v1 == 0) goto L_0018738C;
    v1 = (s32) 0x520000U;
    a0 = (s32) 0x520000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -14));
    a0 = (s32) ((u32) a0 + 0xfffffff4U);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v1);
    if (a0 == 0) goto L_001872E4;
    func_00145590(a0, a1, a2, a3, a4, a5, a6, a7);
L_001872E4:;
    v1 = (s32) 0x520000U;
    a0 = (s32) 0x520000U;
    a1 = (*(volatile s16 *) (u32) (v1 + -16));
    a1 = (s32) ((u32) a1 + 0x1U);
    v1 = (s32) 0x520000U;
    (*(volatile u16 *) (u32) (a0 + -16)) = (u16) a1;
    v1 = (*(volatile s16 *) (u32) (v1 + -16));
    at = v1 < 10;
    if (at == 0) goto L_00187350;
L_0018730C:;
    v1 = (s32) 0x520000U;
    a0 = (s32) 0x520000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -14));
    a0 = (s32) ((u32) a0 + 0xfffffff4U);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v1);
    if (a0 == 0) goto L_0018738C;
    func_00145750(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 10059; func_001453E0(a0);
    a0 = 10059; Pes6TextureCache_Invalidate(a0);
    goto L_00187390;
L_00187350:;
    a0 = (s32) 0x520000U;
    v1 = (s32) 0x520000U;
    a1 = (*(volatile s8 *) (u32) (a0 + -14));
    (*(volatile u16 *) (u32) (v1 + -16)) = (u16) 0;
    v1 = (s32) 0x520000U;
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = 4;
    (*(volatile u8 *) (u32) (v1 + -14)) = (u8) a1;
    v1 = (s64) ((u64) a1 << 56);
    v1 = v1 >> 56;
    if (v1 != a0) goto L_0018730C;
    v1 = (s32) 0x520000U;
    (*(volatile u8 *) (u32) (v1 + -14)) = (u8) 0; goto L_0018730C;
L_0018738C:;
L_00187390:;
    return;
}
