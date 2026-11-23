/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_001B9A50(s32, s32);
void func_0023D650(s32);
void func_0023EC10(s32, s32);
void func_002DF8E0(s32, s32, s32, s32);
void func_008B2E50(s32, s32, s32, s32);
void func_008B31A0(s32, s32, s32, s32);
s32 func_009418F0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00941A00(s32, s32, s32, s32);

void func_00941640(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -18388));
    v0 = 3;
    s1 = 0;
    s0 = (s32) 0x540000U;
    { s32 c_ = v1 == v0; s0 = (s32) ((u32) s0 + 0xffffc300U); if (c_) goto L_00941864; }
    v0 = 2;
    if (v1 == v0) goto L_00941848;
    a1 = 1;
    if (v1 == a1) goto L_009416F8;
    if (v1 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -18332)); goto L_00941690; }
    v0 = s1; goto L_009418D4;
L_00941690:;
    a0 = (*(volatile s32 *) (u32) (v0 + 12)); func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a0 = (*(volatile s32 *) (u32) (v0 + 20));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    a0 = 1; func_0023D650(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -18336));
    a1 = 1; func_002DF8E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18324));
    a1 = 1; func_001B9A50(a0, a1);
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -15596));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 1; func_008B2E50(a0, a1, a2, a3);
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 1; func_0023EC10(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -18388));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18388)) = (u32) v0; goto L_009418D0;
L_009416F8:;
    v0 = (s32) 0x8e0000U;
    v1 = 64;
    a0 = (*(volatile s32 *) (u32) (v0 + -15824));
    if (a0 == v1) goto L_00941738;
    v0 = 128;
    if (a0 == v0) goto L_00941738;
    v0 = 32;
    if (a0 == v0) goto L_00941738;
    v0 = 16;
    if (a0 == v0) goto L_00941738;
    goto L_00941740;
L_00941738:;
    func_00941A00(a0, a1, a2, a3);
L_00941740:;
    v0 = (s32) 0x8e0000U;
    v1 = 1;
    a0 = (*(volatile s32 *) (u32) (v0 + -15760));
    if (a0 == v1) goto L_009417AC;
    v0 = 2;
    if (a0 == v0) { v0 = (s32) 0x84000000U; goto L_00941768; }
    goto L_009418D0;
L_00941768:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = (s32) 0x960000U;
    v0 = (*(volatile s8 *) (u32) (v0 + 31384));
    if (v0 == 0) { (*(volatile u32 *) (u32) (gp + -18388)) = (u32) 0; goto L_009417A4; }
    v0 = (s32) 0x960000U;
    a0 = (s32) ((u32) s0 + 0x10U);
    (*(volatile u8 *) (u32) (v0 + 31384)) = (u8) 0;
    a1 = 1;
    (*(volatile u8 *) (u32) (gp + -18400)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -18396)) = (u8) 0; func_0023EC10(a0, a1);
    goto L_009418D0;
L_009417A4:;
    s1 = 1; goto L_009418D0;
L_009417AC:;
    v0 = (s32) 0x960000U;
    v1 = (*(volatile s8 *) (u32) (v0 + 31384));
    if (v1 == 0) { v0 = (s32) 0x84020000U; goto L_00941818; }
    v0 = 14;
    if (v1 == v0) { v0 = 2; goto L_00941810; }
    v0 = 13;
    if (v1 == v0) goto L_0094180C;
    v0 = 12;
    if (v1 == v0) goto L_0094180C;
    v0 = 11;
    if (v1 == v0) goto L_0094180C;
    v0 = 10;
    if (v1 == v0) goto L_0094180C;
    v0 = 9;
    if (v1 == v0) goto L_0094180C;
    v1 = 3; goto L_00941830;
L_0094180C:;
    v0 = 2;
L_00941810:;
    (*(volatile u32 *) (u32) (gp + -18388)) = (u32) v0; goto L_009418D0;
L_00941818:;
    (*(volatile u32 *) (u32) (gp + -18388)) = (u32) 0;
    a0 = v0 | 0x8400;
    s1 = 2; SD_call(a0);
    goto L_009418D0;
L_00941830:;
    v0 = (s32) 0x84020000U;
    (*(volatile u32 *) (u32) (gp + -18388)) = (u32) v1;
    a0 = v0 | 0x8400; SD_call(a0);
    goto L_009418D0;
L_00941848:;
    v0 = func_009418F0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_009418D0;
    (*(volatile u32 *) (u32) (gp + -18388)) = (u32) v1; goto L_009418D0;
L_00941864:;
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18332));
    a0 = (*(volatile s32 *) (u32) (v0 + 20));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    a0 = 0; func_0023D650(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -18336));
    a1 = 0; func_002DF8E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18324));
    a1 = 0; func_001B9A50(a0, a1);
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -15596));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 0; func_008B2E50(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    (*(volatile u32 *) (u32) (gp + -18388)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) (v0 + 31380));
    v0 = (s32) 0x960000U;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (v0 + 31380)) = (u32) v1;
L_009418D0:;
    v0 = s1;
L_009418D4:;
    return;
}
