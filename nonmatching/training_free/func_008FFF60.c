/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_0026B580(s32, s32, s32, s32);
s32 func_00308400(void);
s32 func_00825710(s32, s32, s32, s32);
s32 func_008FACB0(void);
s32 func_00C72190(s32, s32, s32, s32);
s32 func_00C722C0(s32, s32, s32, s32);
s32 func_00C72310(s32, s32, s32, s32);
s32 func_00C913D0(s32, s32, s32, s32);
s32 func_00C99950(s32, s32, s32, s32);
s32 func_00C999D0(s32, s32, s32, s32);
s32 func_00C99E60(s32, s32, s32, s32);

s32 func_008FFF60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s0 = a3; v0 = func_00308400();
    if (v0 == 0) goto L_008FFF88;
    v0 = 0; goto L_00900254;
L_008FFF88:;
    v0 = func_00C999D0(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v1 = (*(volatile s8 *) (u32) (v1 + 36));
    v0 = v1 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) { s1 = (u64) 0 < (u64) v0; goto L_008FFFD0; }
    v0 = func_00C99950(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v1 = (*(volatile s8 *) (u32) (v1 + 37));
    v0 = v1 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
    s1 = (u64) 0 < (u64) v0;
L_008FFFD0:;
    if (s1 == 0) goto L_008FFFF4;
    v0 = func_00C913D0(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v1 = (*(volatile s8 *) (u32) (v1 + 38));
    s1 = v1 ^ v0;
    s1 = (u64) s1 < (u64) (s64) 1;
L_008FFFF4:;
    v0 = func_00C913D0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = (u64) 0 < (u64) s1; goto L_00900058; }
    v0 = (u64) 0 < (u64) s1;
    if (v0 == 0) { s1 = (u64) 0 < (u64) v0; goto L_00900030; }
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v0 = (*(volatile s8 *) (u32) (v0 + -5762));
    v1 = (*(volatile s8 *) (u32) (v1 + 39));
    v0 = v1 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
    s1 = (u64) 0 < (u64) v0;
L_00900030:;
    if (s1 == 0) goto L_00900054;
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v0 = (*(volatile s8 *) (u32) (v0 + -5761));
    v1 = (*(volatile s8 *) (u32) (v1 + 40));
    s1 = v1 ^ v0;
    s1 = (u64) s1 < (u64) (s64) 1;
L_00900054:;
    v0 = (u64) 0 < (u64) s1;
L_00900058:;
    if (v0 == 0) { v0 = (u64) 0 < (u64) v0; goto L_00900080; }
    v0 = func_00C72310(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v1 = (*(volatile s8 *) (u32) (v1 + 41));
    v0 = v1 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
    v0 = (u64) 0 < (u64) v0;
L_00900080:;
    if (v0 == 0) { v0 = (u64) 0 < (u64) v0; goto L_009000A8; }
    v0 = func_00C72190(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v1 = (*(volatile s8 *) (u32) (v1 + 42));
    v0 = v1 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
    v0 = (u64) 0 < (u64) v0;
L_009000A8:;
    if (v0 == 0) { v0 = (u64) 0 < (u64) v0; goto L_009000D8; }
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v0 = (*(volatile u16 *) (u32) (v0 + 7662));
    v1 = (*(volatile s8 *) (u32) (v1 + 43));
    v0 = v0 & 0x8;
    v0 = (s32) v0 >> 3;
    v0 = v1 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
    v0 = (u64) 0 < (u64) v0;
L_009000D8:;
    if (v0 == 0) { v0 = (u64) 0 < (u64) v0; goto L_00900108; }
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v0 = (*(volatile u16 *) (u32) (v0 + 7662));
    v1 = (*(volatile s8 *) (u32) (v1 + 44));
    v0 = v0 & 0x10;
    v0 = (s32) v0 >> 4;
    v0 = v1 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
    v0 = (u64) 0 < (u64) v0;
L_00900108:;
    if (v0 == 0) { a0 = (u64) 0 < (u64) v0; goto L_00900138; }
    v1 = (s32) 0x3b0000U;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v0 = (*(volatile u16 *) (u32) (v0 + 7662));
    v1 = (*(volatile s8 *) (u32) (v1 + 45));
    v0 = v0 & 0x20;
    v0 = (s32) v0 >> 5;
    v0 = v1 ^ v0;
    v0 = (u64) v0 < (u64) (s64) 1;
    a0 = (u64) 0 < (u64) v0;
L_00900138:;
    if (a0 == 0) goto L_0090015C;
    v0 = func_00C722C0(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    v1 = (*(volatile s8 *) (u32) (v1 + 49));
    a0 = v1 ^ v0;
    a0 = (u64) a0 < (u64) (s64) 1;
L_0090015C:;
    v0 = (s32) 0x3b0000U;
    v1 = 6;
    v0 = (*(volatile s8 *) (u32) (v0 + -5776));
    if (v0 == v1) { v0 = (u64) 0 < (u64) a0; goto L_00900178; }
    goto L_009001CC;
L_00900178:;
    if (v0 == 0) { a0 = (u64) 0 < (u64) v0; goto L_009001A4; }
    v0 = func_00825710(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (v0 + 4));
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s8 *) (u32) (v0 + 47));
    v0 = v0 ^ v1;
    v0 = (u64) v0 < (u64) (s64) 1;
    a0 = (u64) 0 < (u64) v0;
L_009001A4:;
    if (a0 == 0) goto L_009001CC;
    v0 = func_008FACB0();
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s8 *) (u32) (v0 + 46));
    a0 = v0 ^ v1;
    a0 = (u64) a0 < (u64) (s64) 1;
L_009001CC:;
    if (a0 != 0) goto L_00900220;
    v0 = (s32) 0x6c0000U;
    a1 = (s32) 0xcb0000U;
    a2 = (s32) 0x900000U;
    a3 = (s32) 0x900000U;
    a4 = (s32) 0x900000U;
    a1 = (s32) ((u32) a1 + 0xffff9640U);
    a0 = v0 | 0x84;
    a2 = (s32) ((u32) a2 + 0xfffffe00U);
    a3 = (s32) ((u32) a3 + 0xfffffd80U);
    a4 = (s32) ((u32) a4 + 0xfffffd10U); v0 = func_00C99E60(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) 0x84000000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    a0 = a0 | 0x8401;
    (*(volatile u32 *) (u32) (v1 + 336)) = (u32) v0; SD_call(a0);
    v0 = 0; goto L_00900254;
L_00900220:;
    v0 = (s32) 0x3b0000U;
    a2 = s0;
    a0 = (*(volatile s32 *) (u32) (v0 + -5680));
    a1 = 6; func_0026B580(a0, a1, a2, a3);
    v0 = (s32) 0x3b0000U;
    a1 = -1;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (s32) 0x84000000U;
    (*(volatile u8 *) (u32) (v1 + 329)) = (u8) a1;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 2;
L_00900254:;
    return v0;
}
