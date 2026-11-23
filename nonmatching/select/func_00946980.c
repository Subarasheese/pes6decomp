/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00946980(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    a0 = (s32) ((u32) sp + 0x0U);
    { s32 c_ = a0 == 0; v1 = 128; if (c_) goto L_009469AC; }
L_00946990:;
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 != 0) goto L_00946990;
L_009469AC:;
    v1 = (s32) 0x960000U;
    a0 = 2;
    v1 = (*(volatile s8 *) (u32) (v1 + 32544));
    if (v1 == a0) goto L_00946A88;
    if (v1 == 0) goto L_00946A30;
    a0 = 1;
    if (v1 == a0) goto L_009469DC;
    goto L_00946AD8;
L_009469DC:;
    a2 = (s32) 0x960000U;
    a4 = 0;
    a2 = (s32) ((u32) a2 + 0x7f20U);
L_009469E8:;
    a3 = 0;
    a1 = a2;
L_009469F0:;
    v1 = (*(volatile s32 *) (u32) (a1 + 4688));
    if (v1 <= 0) goto L_00946A08;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) sp);
    (*(volatile u32 *) (u32) (v1 + -4)) = (u32) a0;
L_00946A08:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < 4;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_009469F0; }
    a4 = (s32) ((u32) a4 + 0x1U);
    v1 = a4 < 8;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x20U); if (c_) goto L_009469E8; }
    goto L_00946AD8;
L_00946A30:;
    a4 = (s32) 0x960000U;
    a2 = 0;
    a4 = (s32) ((u32) a4 + 0x7f20U);
    a0 = 1;
L_00946A40:;
    a1 = 0;
    a3 = a4;
L_00946A48:;
    v1 = (*(volatile s32 *) (u32) (a3 + 5200));
    if (v1 <= 0) goto L_00946A60;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) sp);
    (*(volatile u32 *) (u32) (v1 + -4)) = (u32) a0;
L_00946A60:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v1 = a1 < 16;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_00946A48; }
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 2;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x80U); if (c_) goto L_00946A40; }
    goto L_00946AD8;
L_00946A88:;
    a4 = (s32) 0x960000U;
    a2 = 0;
    a4 = (s32) ((u32) a4 + 0x7f20U);
    a0 = 1;
L_00946A98:;
    a1 = 0;
    a3 = a4;
L_00946AA0:;
    v1 = (*(volatile s32 *) (u32) (a3 + 5712));
    if (v1 <= 0) goto L_00946AB8;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) sp);
    (*(volatile u32 *) (u32) (v1 + -4)) = (u32) a0;
L_00946AB8:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v1 = a1 < 10;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x8U); if (c_) goto L_00946AA0; }
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 2;
    { s32 c_ = v1 != 0; a4 = (s32) ((u32) a4 + 0x50U); if (c_) goto L_00946A98; }
L_00946AD8:;
    a0 = 255;
    v1 = (s32) 0x970000U;
    a2 = 0;
    (*(volatile u32 *) (u32) (v1 + -32536)) = (u32) a0;
    a1 = (s32) ((u32) sp + 0x0U);
    v1 = (s32) 0x960000U;
    a0 = (*(volatile s8 *) (u32) (v1 + 32546));
L_00946AF4:;
    v1 = (*(volatile s32 *) (u32) a1);
    if (v1 != 0) { a2 = (s32) ((u32) a2 + 0x1U); goto L_00946B1C; }
    at = a2 < a0;
    if (at == 0) goto L_00946B18;
    v1 = (s32) 0x970000U;
    (*(volatile u32 *) (u32) (v1 + -32536)) = (u32) a2; goto L_00946B28;
L_00946B18:;
    a2 = (s32) ((u32) a2 + 0x1U);
L_00946B1C:;
    v1 = a2 < 32;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_00946AF4; }
L_00946B28:;
    return;
}
