/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00B2A080(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    f1.f = (*(volatile f32 *) (u32) (a1 + 224));
    f0.i = (s32) 0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00B2A144;
    a2 = (*(volatile s32 *) (u32) (a1 + 176));
    v1 = (s32) 0xffff0000U;
    a3 = v1 | 0x7fff;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a2 = a2 & a3;
    (*(volatile u32 *) (u32) (a1 + 176)) = (u32) a2;
    a2 = (*(volatile s32 *) (u32) (a1 + 180));
    a2 = a2 & a3;
    (*(volatile u32 *) (u32) (a1 + 180)) = (u32) a2;
    a0 = (*(volatile s32 *) (u32) (a0 + 7804));
    a0 = a0 & a3;
    (*(volatile u32 *) (u32) (v1 + 7804)) = (u32) a0;
    a2 = (*(volatile u8 *) (u32) (a1 + 71));
    v1 = a2 < 8;
    if (v1 != 0) { a0 = (s32) ((u32) a2 << 3); goto L_00B2A0E4; }
    a0 = 0; goto L_00B2A0FC;
L_00B2A0E4:;
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0x1972U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) v1);
L_00B2A0FC:;
    v1 = 1;
    if (a0 != v1) goto L_00B2A144;
    (*(volatile u8 *) (u32) (a1 + 257)) = (u8) 0;
    v1 = 0 & 0xff;
    (*(volatile u16 *) (u32) (a1 + 254)) = (u16) v1;
    a3 = -3;
    a2 = (*(volatile s32 *) (u32) (a1 + 176));
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a2 = a2 & a3;
    (*(volatile u32 *) (u32) (a1 + 176)) = (u32) a2;
    a2 = (*(volatile s32 *) (u32) (a1 + 180));
    a2 = a2 & a3;
    (*(volatile u32 *) (u32) (a1 + 180)) = (u32) a2;
    a0 = (*(volatile s32 *) (u32) (a0 + 7804));
    a0 = a0 & a3;
    (*(volatile u32 *) (u32) (v1 + 7804)) = (u32) a0;
L_00B2A144:;
    a0 = (*(volatile u8 *) (u32) (a1 + 22));
    v1 = 4;
    if (a0 == v1) goto L_00B2A19C;
    v1 = 8;
    if (a0 == v1) goto L_00B2A19C;
    v1 = 9;
    if (a0 == v1) goto L_00B2A19C;
    a2 = (*(volatile s32 *) (u32) (a1 + 176));
    a3 = -16385;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a2 = a2 & a3;
    (*(volatile u32 *) (u32) (a1 + 176)) = (u32) a2;
    a2 = (*(volatile s32 *) (u32) (a1 + 180));
    a2 = a2 & a3;
    (*(volatile u32 *) (u32) (a1 + 180)) = (u32) a2;
    a0 = (*(volatile s32 *) (u32) (a0 + 7804));
    a0 = a0 & a3;
    (*(volatile u32 *) (u32) (v1 + 7804)) = (u32) a0;
L_00B2A19C:;
    a2 = (*(volatile s32 *) (u32) (a1 + 176));
    v1 = (s32) 0xfff00000U;
    a3 = v1 | 0xeffb;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a2 = a2 & a3;
    (*(volatile u32 *) (u32) (a1 + 176)) = (u32) a2;
    a2 = (*(volatile s32 *) (u32) (a1 + 180));
    a2 = a2 & a3;
    (*(volatile u32 *) (u32) (a1 + 180)) = (u32) a2;
    a0 = (*(volatile s32 *) (u32) (a0 + 7804));
    a0 = a0 & a3;
    (*(volatile u32 *) (u32) (v1 + 7804)) = (u32) a0; return v0;
}
