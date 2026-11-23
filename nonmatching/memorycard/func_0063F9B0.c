/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_0063F9B0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -21880));
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffff93b0U);
    a0 = 6;
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != a0) goto L_0063FAAC;
    a1 = (s32) 0x660000U;
    a2 = 0;
    a1 = (s32) ((u32) a1 + 0xffff9400U);
L_0063F9DC:;
    a0 = (*(volatile u8 *) (u32) a1);
    if (v1 != a0) { a2 = (s32) ((u32) a2 + 0x1U); goto L_0063FA08; }
    a0 = (s32) 0x660000U;
    a1 = (s32) ((u32) a2 << 3);
    a0 = (s32) ((u32) a0 + 0xffff9404U);
    a1 = (s32) ((u32) a0 + (u32) a1);
    a1 = (*(volatile s32 *) (u32) a1);
    a0 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (a0 + -10088)) = (u32) a1; goto L_0063FA18;
L_0063FA08:;
    a0 = (u64) a2 < (u64) (s64) 43;
    { s32 c_ = a0 != 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_0063F9DC; }
L_0063FA18:;
    a0 = (s32) ((u32) v1 + 0xffffffdeU);
    at = (u64) a0 < (u64) (s64) 7;
    if (at == 0) { (*(volatile u8 *) (u32) (gp + -21828)) = (u8) 0; goto L_0063FA94; }
    a1 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 << 2);
    a1 = (s32) ((u32) a1 + 0xffffb500U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    { u32 t_ = (u32) a0; ; if (t_ == 0x63fa44U) goto L_0063FA44; if (t_ == 0x63fa50U) goto L_0063FA50; if (t_ == 0x63fa5cU) goto L_0063FA5C; if (t_ == 0x63fa68U) goto L_0063FA68; if (t_ == 0x63fa74U) goto L_0063FA74; if (t_ == 0x63fa80U) goto L_0063FA80; if (t_ == 0x63fa8cU) goto L_0063FA8C; }
L_0063FA44:;
    (*(volatile u8 *) (u32) (gp + -21828)) = (u8) 0;
    goto L_0063FA94;
L_0063FA50:;
    a0 = 2;
    (*(volatile u8 *) (u32) (gp + -21828)) = (u8) a0; goto L_0063FA94;
L_0063FA5C:;
    a0 = 1;
    (*(volatile u8 *) (u32) (gp + -21828)) = (u8) a0; goto L_0063FA94;
L_0063FA68:;
    a0 = 3;
    (*(volatile u8 *) (u32) (gp + -21828)) = (u8) a0; goto L_0063FA94;
L_0063FA74:;
    a0 = 4;
    (*(volatile u8 *) (u32) (gp + -21828)) = (u8) a0; goto L_0063FA94;
L_0063FA80:;
    a0 = 1;
    (*(volatile u8 *) (u32) (gp + -21828)) = (u8) a0; goto L_0063FA94;
L_0063FA8C:;
    a0 = 1;
    (*(volatile u8 *) (u32) (gp + -21828)) = (u8) a0;
L_0063FA94:;
    v1 = (s32) ((u32) v1 + 0xffffffdeU);
    at = (u64) v1 < (u64) (s64) 5;
    if (at == 0) goto L_0063FAAC;
    v1 = 33;
    (*(volatile u32 *) (u32) (gp + -21880)) = (u32) v1;
L_0063FAAC:;
    return v0;
}
