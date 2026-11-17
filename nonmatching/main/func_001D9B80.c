/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 Pes6Texture_SetClut(s32, s32, s32);
s32 func_001515E0(s32, s32, s32, s32, s32, s32, s32);
s32 func_001D9E40(s32);
s32 func_001DA210(s32, s32, s32);
s32 func_001DA3F0(s32);
s32 func_001DB650(s32);
s32 func_001E6D00(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_001D9B80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s3 = a0;
    s2 = a1;
    s1 = a2;
    v0 = func_001DA3F0(a0);
    s4 = v0;
    if (s4 == 0) { v0 = 0; goto L_001D9C94; }
    a0 = 1;
    a1 = 48; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s0 = v0;
    a0 = s3;
    a1 = s2;
    a2 = s1; v0 = func_001DA210(a0, a1, a2);
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) s4;
    a3 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (s0 + 12)) = (u32) v0;
    a3 = (s32) ((u32) a3 + 0xffffab74U);
    (*(volatile u32 *) (u32) (s0 + 16)) = (u32) s3;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (s0 + 20)) = (u32) s2;
    a0 = 0;
    (*(volatile u8 *) (u32) (s0 + 40)) = (u8) s1;
    a2 = 2;
    a4 = (*(volatile u8 *) (u32) (s0 + 40));
    a1 = (*(volatile s32 *) (u32) (s0 + 16));
    v1 = (*(volatile s32 *) (u32) (v0 + -21648));
    a5 = (*(volatile s32 *) (u32) (s0 + 8));
    a4 = (s32) ((u32) a4 << 2);
    a1 = (s32) ((u32) a1 << 2);
    a3 = (s32) ((u32) a3 + (u32) a4);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    a5 = (*(volatile s32 *) (u32) a5);
    a1 = (*(volatile s32 *) (u32) a3);
    v1 = (*(volatile s32 *) (u32) v1);
    a4 = (*(volatile u8 *) (u32) (a5 + 7));
    a3 = (*(volatile u8 *) (u32) (a5 + 6));
    v1 = (s32) ((u32) a1 + (u32) v1);
    a1 = (s32) ((u32) v0 + (u32) v1); v0 = func_001515E0(a0, a1, a2, a3, a4, a5, a6);
    a0 = v0; v0 = func_001E6D00(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u32 *) (u32) (s0 + 24)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 8));
    a0 = (*(volatile s32 *) (u32) (s0 + 24));
    v1 = (*(volatile u8 *) (u32) (s0 + 40));
    a1 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) (a1 + 8));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) (v0 + 4));
    a0 = (*(volatile s32 *) (u32) (a0 + 8)); v0 = Pes6Texture_SetClut(a0, a1, a2);
    a0 = s0; v0 = func_001D9E40(a0);
    a0 = s0; v0 = func_001DB650(a0);
    v0 = s0;
L_001D9C94:;
    return v0;
}
