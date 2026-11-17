/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
s32 func_00223960(s32);
s32 func_00223AE0(void);
void D_0021E4C0(s32 a0, s32 a1, s32 a2, s32 a3);

void func_0021E4C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s2 = a0;
    s0 = a2;
    { s32 c_ = s0 != 0; s1 = a1; if (c_) goto L_0021E5C4; }
    s3 = s2 & 0xffff;
    v0 = s3 < 64;
    if (v0 != 0) { v1 = s2 & 0xffff; goto L_0021E5C8; }
    at = s3 < 204;
    if (at == 0) goto L_0021E5C4;
    if (v0 != 0) { v0 = (s32) ((u32) s3 + 0xfffffedaU); goto L_0021E544; }
    at = s3 < 204;
    if (at == 0) goto L_0021E540;
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s3 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0021E564;
L_0021E540:;
    v0 = (s32) ((u32) s3 + 0xfffffedaU);
L_0021E544:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = 0; goto L_0021E564; }
    a0 = s2; v0 = func_00223960(a0);
    v0 = (*(volatile s32 *) (u32) v0); goto L_0021E564;
    v0 = 0;
L_0021E564:;
    v1 = (*(volatile u8 *) (u32) (v0 + 56));
    if (v1 != 0) goto L_0021E58C;
    a0 = s2;
    a1 = s1;
    a2 = 1;
    a3 = 0xffff; D_0021E4C0(a0, a1, a2, a3);
    goto L_0021E700;
L_0021E58C:;
    if (v0 != 0) { v1 = 1; goto L_0021E5A0; }
    v0 = 0; goto L_0021E5BC;
    v1 = 1;
L_0021E5A0:;
    if (s1 == v1) { v0 = (s32) ((u32) v0 + 0x31U); goto L_0021E5BC; }
    if (s1 == 0) goto L_0021E6FC;
    goto L_0021E5BC;
    v0 = (s32) ((u32) v0 + 0x31U);
L_0021E5BC:;
    goto L_0021E6FC;
L_0021E5C4:;
    v1 = s2 & 0xffff;
L_0021E5C8:;
    v0 = (s32) ((u32) v1 + 0xfffffedaU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { at = v1 < 296; goto L_0021E654; }
    a0 = s2; v0 = func_00223960(a0);
    if (s0 == 0) { v0 = (*(volatile s32 *) (u32) v0); goto L_0021E600; }
    a0 = (*(volatile u16 *) (u32) (v0 + 368));
    v1 = (s32) ((u32) a0 + 0xfffffedaU);
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) { a1 = s1; goto L_0021E63C; }
    v0 = (*(volatile s32 *) (u32) v0);
L_0021E600:;
    if (v0 != 0) { v1 = 1; goto L_0021E614; }
    v0 = 0; goto L_0021E630;
    v1 = 1;
L_0021E614:;
    if (s1 == v1) { v0 = (s32) ((u32) v0 + 0x31U); goto L_0021E630; }
    if (s1 == 0) goto L_0021E6FC;
    goto L_0021E630;
    v0 = (s32) ((u32) v0 + 0x31U);
L_0021E630:;
    goto L_0021E6FC;
    a1 = s1;
L_0021E63C:;
    a2 = 1;
    a3 = 0xffff; D_0021E4C0(a0, a1, a2, a3);
    goto L_0021E6FC;
    at = v1 < 296;
L_0021E654:;
    if (at == 0) goto L_0021E6F4;
    if (s1 != 0) goto L_0021E6B0;
    a0 = (s32) 0x3b0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffff97e0U);
L_0021E670:;
    v0 = (*(volatile u16 *) (u32) a0);
    if (v1 != v0) { a1 = (s32) ((u32) a1 + 0x1U); goto L_0021E6A0; }
    v0 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) a1 << 3);
    v0 = (s32) ((u32) v0 + 0xffff97e4U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    goto L_0021E6FC;
    a1 = (s32) ((u32) a1 + 0x1U);
L_0021E6A0:;
    v0 = (u64) a1 < (u64) (s64) 11;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x8U); if (c_) goto L_0021E670; }
L_0021E6B0:;
    v0 = 1;
    if (s1 == v0) { v1 = s2 & 0xffff; goto L_0021E6DC; }
    v1 = s2 & 0xffff;
    v0 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + 0xfffff3a0U);
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_0021E6FC;
    v1 = s2 & 0xffff;
L_0021E6DC:;
    v0 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + 0xfffff3a4U);
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_0021E6FC;
L_0021E6F4:;
    v0 = (s32) 0x3d0000U;
    v0 = (s32) ((u32) v0 + 0x7a18U);
L_0021E6FC:;
L_0021E700:;
    return;
}
