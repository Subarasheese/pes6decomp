/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 func_001BB400(s32, s32);
s32 func_001E6C50(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001E6E10(s32);
s32 func_001E81B0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001E8200(s32, s32, s32, s32, s32, s32, s32);
s32 func_001E8350(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001E8740(s32, s32, s32, s32);
s32 func_001E8B90(s32, s32, s32);
s32 func_00264F20(void);
s32 func_00264F70(s32, s32, s32);
s32 func_002EDE90(s32);
s32 func_002EDF80(s32);
s32 func_002EE060(s32);
s32 func_002EE160(s32);
s32 memcpy(s32, s32, s32);

s32 func_00266070(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[654];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a1;
    v0 = func_002EDE90(a0);
    if (v0 != 0) { a0 = s2; goto L_002660A8; }
    v0 = 0; goto L_00266218;
L_002660A8:;
    v0 = func_002EDF80(a0);
    s0 = v0;
    a0 = s2; v0 = func_002EE060(a0);
    a1 = v0;
    a0 = (s32) ((u32) sp + 0x460U);
    a2 = 4096; v0 = memcpy(a0, a1, a2);
    a0 = s2; v0 = func_002EE160(a0);
    a1 = v0;
    a0 = (s32) ((u32) sp + 0x60U);
    a2 = 1024; v0 = memcpy(a0, a1, a2);
    a0 = s2;
    a1 = 2;
    a2 = s1; v0 = func_00264F70(a0, a1, a2);
    a1 = s0;
    v1 = (s32) 0x3b0000U;
    s0 = v0;
    v1 = (*(volatile s16 *) (u32) (v1 + -20436));
    v0 = (s32) 0x3b0000U;
    a0 = s0;
    v0 = (*(volatile s16 *) (u32) (v0 + -20434));
    a2 = (s32) ((u32) sp + 0x1460U);
    a3 = (s32) ((u32) sp + 0x460U);
    a4 = (s32) ((u32) sp + 0x60U);
    (*(volatile u16 *) (u32) (sp + 5228)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 5220)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 5230)) = (u16) v0;
    (*(volatile u16 *) (u32) (sp + 5222)) = (u16) v0;
    (*(volatile u16 *) (u32) (sp + 5216)) = (u16) 0;
    (*(volatile u16 *) (u32) (sp + 5218)) = (u16) 0; v0 = func_001E8350(a0, a1, a2, a3, a4, a5, a6, a7);
    { s32 c_ = s1 != 0; s3 = v0; if (c_) goto L_002661D0; }
    v0 = func_00264F20();
    s4 = v0;
    a0 = s0;
    a1 = s4;
    a2 = 2; v0 = func_001E81B0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s3; v0 = func_001E6C50(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s4; v0 = func_001E6E10(a0);
    s3 = v0;
    a1 = (s32) ((u32) sp + 0x460U);
    a0 = s3;
    a2 = (s32) ((u32) sp + 0x1460U); v0 = func_001E8B90(a0, a1, a2);
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x60U); v0 = func_001E8740(a0, a1, a2, a3);
    a0 = s3; v0 = func_001E6C50(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s16 *) (u32) (v1 + -20440));
    a0 = 2;
    v0 = (*(volatile s16 *) (u32) (v0 + -20438));
    a1 = (s32) ((u32) sp + 0x460U);
    a2 = a0;
    a3 = (s32) ((u32) sp + 0x60U);
    (*(volatile u16 *) (u32) (sp + 5224)) = (u16) v1;
    a4 = s0;
    (*(volatile u16 *) (u32) (sp + 5226)) = (u16) v0;
    a5 = (s32) ((u32) sp + 0x146cU);
    a6 = (s32) ((u32) sp + 0x1468U); v0 = func_001E8200(a0, a1, a2, a3, a4, a5, a6);
    s3 = v0;
L_002661D0:;
    if (s3 != 0) { a0 = 1; goto L_002661E0; }
    v0 = 0; goto L_00266218;
L_002661E0:;
    a1 = 40; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s4 = v0;
    a0 = s4;
    a1 = s4; v0 = func_001BB400(a0, a1);
    v1 = 1;
    v0 = s4;
    (*(volatile u32 *) (u32) (s4 + 16)) = (u32) v1;
    (*(volatile u32 *) (u32) (s4 + 28)) = (u32) s0;
    (*(volatile u32 *) (u32) (s4 + 24)) = (u32) s3;
    (*(volatile u32 *) (u32) (s4 + 32)) = (u32) s2;
    (*(volatile u32 *) (u32) (s4 + 36)) = (u32) s1;
    (*(volatile u32 *) (u32) (s4 + 20)) = (u32) 0;
L_00266218:;
    return v0;
}
