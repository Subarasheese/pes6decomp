/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 func_001E0160(s32, s32, s32, s32, s32, s32);
s32 func_001F4CD0(s32, s32);

s32 func_001E51E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    a1 = 176;
    s2 = a0;
    s1 = a2;
    a0 = 1;
    v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0x530000U;
    s0 = v0;
    a0 = (*(volatile s32 *) (u32) (v1 + -21000));
    v1 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 160)) = (u32) a0;
    v0 = (*(volatile u8 *) (u32) (v1 + -20994));
    if (v0 != 0) goto L_001E5358;
    a1 = (*(volatile u8 *) (u32) (s2 + 72));
    a0 = (*(volatile u8 *) (u32) (s2 + 73));
    v1 = (*(volatile u8 *) (u32) (s2 + 74));
    v0 = (*(volatile u8 *) (u32) (s2 + 75));
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) a1;
    (*(volatile u8 *) (u32) (sp + 77)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 78)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 79)) = (u8) v0;
L_001E5248:;
    v0 = (*(volatile u8 *) (u32) (s0 + 164));
    v0 = v0 & 0x1;
    if (v0 == 0) { a1 = (*(volatile u8 *) (u32) (sp + 76)); goto L_001E527C; }
    a1 = (*(volatile u8 *) (u32) (gp + -32456));
    a0 = (*(volatile u8 *) (u32) (gp + -32455));
    v1 = (*(volatile u8 *) (u32) (gp + -32454));
    v0 = (*(volatile u8 *) (u32) (sp + 79));
    (*(volatile u8 *) (u32) (s0 + 144)) = (u8) a1;
    (*(volatile u8 *) (u32) (s0 + 145)) = (u8) a0;
    (*(volatile u8 *) (u32) (s0 + 146)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 147)) = (u8) v0; goto L_001E5298;
L_001E527C:;
    a0 = (*(volatile u8 *) (u32) (sp + 77));
    v1 = (*(volatile u8 *) (u32) (sp + 78));
    v0 = (*(volatile u8 *) (u32) (sp + 79));
    (*(volatile u8 *) (u32) (s0 + 144)) = (u8) a1;
    (*(volatile u8 *) (u32) (s0 + 145)) = (u8) a0;
    (*(volatile u8 *) (u32) (s0 + 146)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 147)) = (u8) v0;
L_001E5298:;
    v1 = (*(volatile u8 *) (u32) (s0 + 144));
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001E52AC; }
    v0 = 128;
L_001E52AC:;
    (*(volatile u8 *) (u32) (s0 + 152)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s0 + 145));
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001E52C4; }
    v0 = 128;
L_001E52C4:;
    (*(volatile u8 *) (u32) (s0 + 153)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s0 + 146));
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001E52DC; }
    v0 = 128;
L_001E52DC:;
    (*(volatile u8 *) (u32) (s0 + 154)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s0 + 147));
    v0 = 255;
    if (v1 != v0) { v0 = (s32) v1 >> 1; goto L_001E52F4; }
    v0 = 128;
L_001E52F4:;
    (*(volatile u8 *) (u32) (s0 + 155)) = (u8) v0;
    a0 = s1;
    v0 = (s32) 0x3f800000U;
    (*(volatile u32 *) (u32) (s0 + 156)) = (u32) v0;
    a1 = (*(volatile s32 *) (u32) (s0 + 160));
    a2 = (*(volatile u8 *) (u32) (s2 + 122));
    a3 = (s32) ((u32) s2 + 0x60U); v0 = func_001E0160(a0, a1, a2, a3, a4, a5);
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s2 + 8));
    if (v0 == 0) { (*(volatile u32 *) (u32) (s2 + 8)) = (u32) s0; goto L_001E532C; }
    v0 = (*(volatile s32 *) (u32) (s2 + 12));
    (*(volatile u32 *) (u32) v0) = (u32) s0;
L_001E532C:;
    (*(volatile u32 *) (u32) s0) = (u32) 0;
    (*(volatile u32 *) (u32) (s2 + 12)) = (u32) s0;
    a1 = (*(volatile s32 *) (u32) (s0 + 160));
    a0 = s1; v0 = func_001F4CD0(a0, a1);
    (*(volatile u8 *) (u32) (s0 + 164)) = (u8) v0;
    v1 = (*(volatile u16 *) (u32) (s2 + 68));
    v0 = s0;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (s2 + 68)) = (u16) v1; goto L_001E538C;
L_001E5358:;
    v1 = (s32) 0x530000U;
    v0 = (s32) 0x530000U;
    a1 = (*(volatile u8 *) (u32) (v1 + -20985));
    a0 = (*(volatile u8 *) (u32) (v0 + -20984));
    v1 = (s32) 0x530000U;
    (*(volatile u8 *) (u32) (sp + 76)) = (u8) a1;
    v0 = (s32) 0x530000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -20983));
    v0 = (*(volatile u8 *) (u32) (v0 + -20982));
    (*(volatile u8 *) (u32) (sp + 77)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 78)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 79)) = (u8) v0; goto L_001E5248;
L_001E538C:;
    return v0;
}
