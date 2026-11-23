/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_008BDC90(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = (s32) 0x8e0000U;
    a3 = 1;
    a0 = (*(volatile s16 *) (u32) (v1 + 9950));
    v1 = (s32) 0x8e0000U;
    a2 = (*(volatile s8 *) (u32) (v1 + 7392));
    v1 = (s32) 0x8e0000U;
    a1 = (*(volatile s8 *) (u32) (v1 + 7400));
    v1 = (s32) ((u32) a1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) ((u32) a2 + (u32) v1);
    if (v1 != a3) goto L_008BDD84;
    a1 = (s32) 0x8e0000U;
    a1 = (*(volatile s16 *) (u32) (a1 + 7830));
    at = (u64) a1 < (u64) (s64) 6;
    if (at == 0) goto L_008BDD5C;
    a2 = (s32) 0x8e0000U;
    a1 = (s32) ((u32) a1 << 2);
    a2 = (s32) ((u32) a2 + 0xffffa810U);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile s32 *) (u32) a1);
    { u32 t_ = (u32) a1; ; if (t_ == 0x8bdcf8U) goto L_008BDCF8; if (t_ == 0x8bdd10U) goto L_008BDD10; if (t_ == 0x8bdd38U) goto L_008BDD38; }
L_008BDCF8:;
    a2 = 20;
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 9534)) = (u16) a2;
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 9526)) = (u16) a2; goto L_008BDD5C;
L_008BDD10:;
    a2 = 20;
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 9534)) = (u16) a2;
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 9526)) = (u16) a2;
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 9950)) = (u16) a3;
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 8254)) = (u16) a3; goto L_008BDD5C;
L_008BDD38:;
    a2 = 18;
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 9534)) = (u16) a2;
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 9526)) = (u16) a2;
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 9950)) = (u16) a3;
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 8254)) = (u16) a3;
L_008BDD5C:;
    a1 = (s32) 0x8e0000U;
    a2 = (s32) 0x8e0000U;
    a3 = (*(volatile s16 *) (u32) (a1 + 9534));
    a1 = (s32) 0x8e0000U;
    a1 = (*(volatile s16 *) (u32) (a1 + 9950));
    at = a3 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (a2 + 9958)) = (u16) a3; if (c_) goto L_008BDD84; }
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 9950)) = (u16) a3;
L_008BDD84:;
    a1 = (s32) 0x8e0000U;
    a2 = 2;
    a1 = (*(volatile s16 *) (u32) (a1 + 7830));
    if (a1 != a2) goto L_008BDDBC;
    a2 = 1;
    a1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (a1 + 13776)) = (u32) a2;
    a1 = (s32) 0x8e0000U;
    a2 = 12;
    (*(volatile u32 *) (u32) (a1 + 13832)) = (u32) 0;
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 13766)) = (u16) a2; goto L_008BDDF4;
L_008BDDBC:;
    a1 = (s32) 0x8e0000U;
    a2 = 1;
    { s32 c_ = v1 != a2; (*(volatile u32 *) (u32) (a1 + 13776)) = (u32) 0; if (c_) goto L_008BDDF4; }
    a1 = (s32) 0x8e0000U;
    a2 = 12;
    a1 = (*(volatile s16 *) (u32) (a1 + 13766));
    if (a1 != a2) { a2 = 1; goto L_008BDDEC; }
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 13766)) = (u16) 0;
    a2 = 1;
L_008BDDEC:;
    a1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (a1 + 13832)) = (u32) a2;
L_008BDDF4:;
    a1 = 5;
    if (v1 != a1) goto L_008BDE28;
    a1 = (s32) 0x8e0000U;
    a2 = (s32) 0x8e0000U;
    a3 = (*(volatile s16 *) (u32) (a1 + 9526));
    a1 = (s32) 0x8e0000U;
    a1 = (*(volatile s16 *) (u32) (a1 + 9950));
    at = a3 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (a2 + 9958)) = (u16) a3; if (c_) goto L_008BDE28; }
    a1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (a1 + 9950)) = (u16) a3;
L_008BDE28:;
    a1 = (s32) 0x8e0000U;
    a1 = (*(volatile s16 *) (u32) (a1 + 9950));
    if (a0 != a1) { at = a1 < 2; goto L_008BDE48; }
    a0 = 6;
    if (v1 != a0) goto L_008BDE70;
    at = a1 < 2;
L_008BDE48:;
    if (at != 0) goto L_008BDE68;
    a0 = 1;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + 9112)) = (u32) a0;
    v1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (v1 + 9102)) = (u16) 0; goto L_008BDE70;
L_008BDE68:;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + 9112)) = (u32) 0;
L_008BDE70:;
    v1 = (s32) 0x510000U;
    a0 = 4;
    v1 = (*(volatile s32 *) (u32) (v1 + 4048));
    if (v1 != a0) goto L_008BDEFC;
    v1 = (s32) 0x8e0000U;
    a0 = 5;
    v1 = (*(volatile s16 *) (u32) (v1 + 7830));
    if (v1 != a0) { a0 = 1; goto L_008BDEB4; }
    v1 = (s32) 0x8e0000U;
    a0 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + 9536)) = (u32) 0;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (a0 + 8688)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 8264)) = (u32) 0; goto L_008BDED4;
L_008BDEB4:;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + 9536)) = (u32) a0;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + 8688)) = (u32) a0;
    v1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (v1 + 8678)) = (u16) a0;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + 8264)) = (u32) a0;
L_008BDED4:;
    v1 = (s32) 0x8e0000U;
    v1 = (*(volatile s16 *) (u32) (v1 + 9950));
    at = v1 < 2;
    if (at != 0) goto L_008BDEFC;
    a0 = 1;
    v1 = (s32) 0x8e0000U;
    (*(volatile u32 *) (u32) (v1 + 9112)) = (u32) a0;
    v1 = (s32) 0x8e0000U;
    (*(volatile u16 *) (u32) (v1 + 9102)) = (u16) 0;
L_008BDEFC:;
    return;
}
