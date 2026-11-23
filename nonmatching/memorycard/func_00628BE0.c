/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001DE450(s32, s32, s32, s32, f32);
s32 func_001F08B0(s32);
s32 func_002212E0(void);
s32 func_002212F0(void);
s32 func_002E9360(void);
void func_0063B410(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00655410(s32, s32);
void func_00655470(s32);
void memset(s32, s32, s32);

s32 func_00628BE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };

    v0 = func_002212F0();
    v0 = func_002212E0();
    v0 = func_002E9360();
    v1 = -129;
    s4 = v0 & v1;
    v0 = (s32) 0x100000U;
    v0 = s4 & v0;
    { s32 c_ = v0 == 0; s1 = 0; if (c_) goto L_00628C34; }
    v0 = (s32) 0xfdff0000U;
    v0 = v0 | 0xffff;
    s4 = s4 & v0;
L_00628C34:;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -24240)); func_00655470(a0);
    a0 = (s32) 0x660000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffd430U);
    a2 = 512; memset(a0, a1, a2);
    a0 = (s32) 0x660000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffd630U);
    a2 = 512; memset(a0, a1, a2);
    s0 = (s32) 0x660000U;
    s3 = 6;
    s2 = 0;
    s0 = (s32) ((u32) s0 + 0xffffa168U);
L_00628C78:;
    v0 = 1;
    v0 = (s32) ((u32) v0 << (s2 & 31));
    v0 = s4 & v0;
    if (v0 == 0) goto L_00628CD8;
    a0 = (*(volatile s32 *) (u32) s0); v0 = func_001F08B0(a0);
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    a2 = (s32) 0x660000U;
    a3 = v0;
    a0 = (s32) ((u32) a0 + 0xffffd430U);
    a1 = (s32) ((u32) a1 + 0xffffa9d8U);
    a2 = (s32) ((u32) a2 + 0xffffd630U); func_0063B410(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    a2 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffffd630U);
    a1 = (s32) ((u32) a1 + 0xffffa9e0U);
    a2 = (s32) ((u32) a2 + 0xffffd430U); func_0063B410(a0, a1, a2, a3, a4, a5, a6, a7);
    s1 = 1;
L_00628CD8:;
    a0 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffffd630U);
    a1 = 23;
    a2 = 400; v0 = func_001DE450(a0, a1, a2, a3, f12.f);
    v0 = v0 & 0xff;
    at = v0 < 2;
    if (at != 0) { s3 = (s32) ((u32) s3 + 0x1U); goto L_00628D4C; }
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -24088)); v0 = func_001F08B0(a0);
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    a2 = (s32) 0x660000U;
    a3 = v0;
    a0 = (s32) ((u32) a0 + 0xffffd430U);
    a1 = (s32) ((u32) a1 + 0xffffa9d8U);
    a2 = (s32) ((u32) a2 + 0xffffd630U); func_0063B410(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    a2 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffffd630U);
    a1 = (s32) ((u32) a1 + 0xffffa9e0U);
    a2 = (s32) ((u32) a2 + 0xffffd430U); func_0063B410(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00628D60;
L_00628D4C:;
    s0 = (s32) ((u32) s0 + 0x4U);
    v0 = s3 < 38;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x1U); if (c_) goto L_00628C78; }
L_00628D60:;
    if (s1 != 0) goto L_00628D70;
    v0 = 0; goto L_00628D84;
L_00628D70:;
    a0 = (s32) 0x660000U;
    a1 = 1;
    a0 = (s32) ((u32) a0 + 0xffffd632U); func_00655410(a0, a1);
    v0 = 1;
L_00628D84:;
    return v0;
}
