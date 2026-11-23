/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7D60(s32, s32);
void func_001EDAE0(s32, s32);
void func_0026B580(s32, s32, s32, s32);
s32 func_002DCA30(void);
void func_002DF8E0(s32, s32, s32, s32);
void func_002E4400(s32, s32, s32, s32);
void func_0081D240(s32, s32, s32, s32);
void func_008FE610(s32, s32, s32, s32, f32, f32);
s32 func_00C74AD0(s32, s32, s32, s32);
void func_00C74BF0(s32, s32, s32, s32);
void func_00C74D20(s32, s32, s32, s32);
void func_00C75010(s32, s32, s32, s32);
void func_00C75070(s32, s32, s32, s32);
void func_00C75160(s32, s32, s32, s32);

void func_008FAFE0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a0 = (s32) ((u32) v0 + 0x24U);
    a1 = (s32) ((u32) v0 + 0x169U); v0 = func_00C74AD0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -19632));
    (*(volatile u8 *) (u32) (v1 + 359)) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a1 = (*(volatile s8 *) (u32) (v0 + 361));
    a0 = (s32) ((u32) v0 + 0x1ecU); func_00C75160(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    a2 = (*(volatile s8 *) (u32) (v0 + 7606));
    at = a2 < 2;
    if (at == 0) goto L_008FB068;
    v1 = (s32) ((u32) a2 << 2);
    v0 = 14;
    v1 = (s32) ((u32) v0 << (v1 & 31));
    a0 = (s32) 0x640000U;
    v0 = (s32) 0x3b0000U;
    a1 = a0 | 0x71;
    v0 = (*(volatile s32 *) (u32) (v0 + -5740));
    v0 = v0 & v1;
    { s32 c_ = v0 == 0; a1 = (s32) ((u32) a2 + (u32) a1); if (c_) goto L_008FB07C; }
    if (a2 != 0) { a1 = a0 | 0x77; goto L_008FB07C; }
    a1 = a0 | 0x73; goto L_008FB07C;
L_008FB068:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + 0xffffda80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
L_008FB07C:;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a0 = (s32) ((u32) v0 + 0xe4U); func_00C74D20(a0, a1, a2, a3);
    v0 = func_002DCA30();
    if (v0 != 0) goto L_008FB0A8;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -5742));
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -19632)); goto L_008FB304; }
L_008FB0A8:;
    v0 = (s32) 0x3b0000U;
    a1 = 1;
    v0 = (*(volatile s8 *) (u32) (v0 + -5757));
    if (v0 != a1) { a0 = (*(volatile s32 *) (u32) (gp + -19632)); goto L_008FB218; }
    a0 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = 2;
    v1 = (*(volatile s32 *) (u32) (a0 + 376));
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (a0 + 380)); goto L_008FB1D0; }
    if (v1 == a1) goto L_008FB214;
    if (v1 == 0) goto L_008FB0E8;
    goto L_008FB214;
L_008FB0E8:;
    if (a0 == 0) goto L_008FB1A8;
    a0 = (*(volatile s32 *) (u32) (a0 + 60));
    a1 = 0; func_001D7D60(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a0 = (*(volatile s32 *) (u32) (v0 + 68));
    a1 = 0; func_002DF8E0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a0 = (*(volatile s32 *) (u32) (v0 + 64));
    a1 = 0; func_001D7D60(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a1 = 0;
    a0 = (s32) ((u32) v0 + 0xecU); func_00C75010(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a1 = 0;
    a0 = (s32) ((u32) v0 + 0xf4U); func_00C75010(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a0 = (*(volatile s32 *) (u32) (v0 + 496));
    a1 = 0; func_001D7D60(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    a0 = (*(volatile s32 *) (u32) (v0 + 500));
    a1 = 0; func_002E4400(a0, a1, a2, a3);
    s1 = 0;
    s0 = 0;
L_008FB164:;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (s32) ((u32) v0 + (u32) s0);
    s2 = (s32) ((u32) v0 + 0x204U);
    v0 = (*(volatile s8 *) (u32) (v0 + 516));
    if (v0 == 0) goto L_008FB1A8;
    a0 = s2;
    a1 = 0; func_00C75070(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 24));
    a1 = 0; func_001EDAE0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 11;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x1cU); if (c_) goto L_008FB164; }
L_008FB1A8:;
    a0 = 0;
    a1 = 5;
    a2 = 0;
    a3 = 0; func_008FE610(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (*(volatile s32 *) (u32) (v1 + 376));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 376)) = (u32) v0; goto L_008FB214;
L_008FB1D0:;
    if (v0 != a1) goto L_008FB214;
    a2 = -1;
    (*(volatile u8 *) (u32) (a0 + 362)) = (u8) a2;
    a0 = (*(volatile s32 *) (u32) (gp + -19632));
    a1 = 5; func_0026B580(a0, a1, a2, a3);
    v0 = func_002DCA30();
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19632)); goto L_008FB208; }
    a0 = 0; func_0081D240(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (gp + -19632));
L_008FB208:;
    v0 = (*(volatile s32 *) (u32) (v1 + 376));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 376)) = (u32) v0;
L_008FB214:;
    a0 = (*(volatile s32 *) (u32) (gp + -19632));
L_008FB218:;
    v0 = 1;
    v1 = (*(volatile u8 *) (u32) (a0 + 380));
    if (v1 == v0) goto L_008FB300;
    v0 = (*(volatile s32 *) (u32) (a0 + 384));
    { s32 c_ = v0 <= 0; v1 = (s32) ((u32) a0 + 0x180U); if (c_) goto L_008FB23C; }
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) v1) = (u32) v0;
L_008FB23C:;
    v1 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (*(volatile s32 *) (u32) (v1 + 384));
    if (v0 != 0) goto L_008FB300;
    v0 = 1;
    a3 = 0;
    (*(volatile u8 *) (u32) (v1 + 380)) = (u8) v0;
    a1 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (*(volatile s32 *) (u32) (a1 + 32));
    { s32 c_ = v0 <= 0; a0 = (s32) ((u32) a1 + 0x20U); if (c_) goto L_008FB298; }
    v0 = (s32) 0xc0000U;
    a2 = a1;
    v1 = v0 | 0xd;
L_008FB274:;
    v0 = (*(volatile s32 *) (u32) (a2 + 264));
    if (v0 != v1) { v0 = (*(volatile s32 *) (u32) a0); goto L_008FB288; }
    v0 = (s32) ((u32) a3 + (u32) a1); goto L_008FB2A0;
L_008FB288:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < v0;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_008FB274; }
L_008FB298:;
    a3 = -1;
    v0 = (s32) ((u32) a3 + (u32) a1);
L_008FB2A0:;
    (*(volatile u8 *) (u32) (v0 + 340)) = (u8) 0;
    a3 = 0;
    a2 = (*(volatile s32 *) (u32) (gp + -19632));
    v0 = (*(volatile s32 *) (u32) (a2 + 32));
    { s32 c_ = v0 <= 0; a0 = (s32) ((u32) a2 + 0x20U); if (c_) goto L_008FB2E8; }
    v0 = (s32) 0xc0000U;
    a1 = a2;
    v1 = v0 | 0xd;
L_008FB2C4:;
    v0 = (*(volatile s32 *) (u32) (a1 + 264));
    if (v0 != v1) { v0 = (*(volatile s32 *) (u32) a0); goto L_008FB2D8; }
    v0 = (s32) ((u32) a3 << 3); goto L_008FB2F0;
L_008FB2D8:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < v0;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_008FB2C4; }
L_008FB2E8:;
    a3 = -1;
    v0 = (s32) ((u32) a3 << 3);
L_008FB2F0:;
    a1 = 6;
    v0 = (s32) ((u32) a2 + (u32) v0);
    a0 = (s32) ((u32) v0 + 0x4cU); func_00C74BF0(a0, a1, a2, a3);
L_008FB300:;
    v0 = (*(volatile s32 *) (u32) (gp + -19632));
L_008FB304:;
    v0 = (*(volatile s8 *) (u32) (v0 + 359));
    return;
}
