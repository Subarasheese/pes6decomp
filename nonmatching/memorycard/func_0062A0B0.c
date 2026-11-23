/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001E6E10(s32);
s32 func_001E8350(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_0062A0B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    s64 frame[516];
    s32 sp = (s32) (u32) frame;

    a2 = (s32) 0x650000U;
    v0 = (s32) 0x650000U;
    a1 = (*(volatile s16 *) (u32) (v0 + 29392));
    a2 = (s32) ((u32) a2 + 0x72e0U);
    v0 = (s32) 0x650000U;
    (*(volatile u16 *) (u32) (sp + 4120)) = (u16) a1;
    a0 = (*(volatile s16 *) (u32) (v0 + 29394));
    a1 = (s32) ((u32) sp + 0xc10U);
    v0 = (s32) 0x650000U;
    (*(volatile u16 *) (u32) (sp + 4122)) = (u16) a0;
    v1 = (*(volatile s16 *) (u32) (v0 + 29396));
    a0 = 512;
    v0 = (s32) 0x650000U;
    (*(volatile u16 *) (u32) (sp + 4124)) = (u16) v1;
    v0 = (*(volatile s16 *) (u32) (v0 + 29398));
    (*(volatile u16 *) (u32) (sp + 4126)) = (u16) v0;
L_0062A0F8:;
    v1 = (*(volatile s8 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s8 *) (u32) (a2 + 1));
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u8 *) (u32) (a1 + 1)) = (u8) v0;
    a2 = (s32) ((u32) a2 + 0x2U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x2U); if (c_) goto L_0062A0F8; }
    v1 = (s32) ((u32) sp + 0x10U);
    { s32 c_ = v1 == 0; v0 = 3072; if (c_) goto L_0062A140; }
L_0062A124:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0062A124;
L_0062A140:;
    a0 = 29679; v0 = func_001E6E10(a0);
    if (v0 == 0) { a0 = 29679; goto L_0062A158; }
    goto L_0062A170;
L_0062A158:;
    a1 = 2;
    a2 = (s32) ((u32) sp + 0x1018U);
    a3 = (s32) ((u32) sp + 0x10U);
    a4 = (s32) ((u32) sp + 0xc10U); v0 = func_001E8350(a0, a1, a2, a3, a4, a5, a6, a7);
L_0062A170:;
    return v0;
}
