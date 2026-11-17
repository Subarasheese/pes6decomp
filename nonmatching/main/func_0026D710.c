/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00221300(s32, s32, s32, s32);

void func_0026D710(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x590000U;
    a4 = (*(volatile u8 *) (u32) (v0 + -10220));
    { s32 c_ = a4 == 0; s0 = a1; if (c_) goto L_0026D788; }
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -10216));
    v0 = (*(volatile u16 *) (u32) (v1 + 8));
    { s32 c_ = v0 <= 0; a5 = 0; if (c_) goto L_0026D788; }
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v1 + 0x8U);
    a2 = (*(volatile s32 *) (u32) (v0 + -10212));
    a3 = a0 & 0xffff;
    v1 = a5 & 0xffff;
L_0026D754:;
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) a2 + (u32) v0);
    v0 = (*(volatile u16 *) (u32) v0);
    if (v0 != a3) { v0 = (*(volatile u16 *) (u32) a1); goto L_0026D774; }
    goto L_0026D790;
    v0 = (*(volatile u16 *) (u32) a1);
L_0026D774:;
    v1 = (s32) ((u32) a5 + 0x1U);
    a5 = v1 & 0xffff;
    v0 = a5 < v0;
    if (v0 != 0) { v1 = a5 & 0xffff; goto L_0026D754; }
L_0026D788:;
    v0 = 0xffff;
    v1 = v0 & 0xffff;
L_0026D790:;
    if (a4 == 0) { v0 = 0; goto L_0026D868; }
    v1 = v1 & 0xffff;
    v0 = 0xffff;
    if (v1 != v0) goto L_0026D7B0;
    v0 = 0; goto L_0026D868;
L_0026D7B0:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 << 7);
    a2 = (*(volatile s32 *) (u32) (v0 + -10216));
    v0 = (s32) 0x590000U;
    a2 = (*(volatile u16 *) (u32) (a2 + 8));
    a1 = (*(volatile s32 *) (u32) (v0 + -10224));
    a2 = (s32) ((u32) a2 << 1);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) a1 + (u32) v1);
    v1 = (s32) ((u32) v1 + 0xcU);
    (*(volatile u32 *) (u32) (v0 + -10208)) = (u32) v1; func_00221300(a0, a1, a2, a3);
    { s32 c_ = s0 != 0; v1 = v0 & 0xff; if (c_) goto L_0026D804; }
    v0 = v1 & 0xff;
    v1 = 1;
    if (v0 != v1) goto L_0026D838;
    v1 = 0; goto L_0026D838;
L_0026D804:;
    v0 = 3;
    if (s0 != v0) { v1 = 0; goto L_0026D838; }
    v0 = v1 & 0xff;
    v1 = 1;
    if (v0 != v1) { v1 = 0; goto L_0026D838; }
    goto L_0026D838;
    v1 = 0;
    goto L_0026D838;
    v1 = 0;
L_0026D838:;
    if (v1 == 0) goto L_0026D850;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -10208));
    v0 = (s32) ((u32) v0 + 0x5cU); goto L_0026D85C;
L_0026D850:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -10208));
    v0 = (s32) ((u32) v0 + 0x6cU);
L_0026D85C:;
    goto L_0026D86C;
    v0 = 0;
L_0026D868:;
L_0026D86C:;
    return;
}
