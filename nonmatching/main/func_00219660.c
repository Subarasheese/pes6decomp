/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0021CA90(s32, s32, s32, s32, s32);
void func_0021CD70(s32, s32);

s32 func_00219660(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    a3 = 6;
    a1 = (s32) ((u32) sp + 0x5cU);
    a2 = (s32) ((u32) sp + 0x58U);
    s3 = a0;
    a0 = 1;
    a4 = s3;
    s0 = (s32) 0x220000U;
    s0 = (s32) ((u32) s0 + 0xffff87c0U); v0 = func_0021CA90(a0, a1, a2, a3, a4);
    s2 = v0;
    v0 = -126;
    if (s2 == v0) goto L_002196F4;
L_002196AC:;
    v0 = (s32) 0x530000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    if (v0 != v1) goto L_00219944;
    v0 = (s32) 0x530000U;
    v1 = -122;
    a0 = (*(volatile s32 *) (u32) (v0 + 31572));
    if (a0 == v1) goto L_002198D8;
    v0 = -123;
    if (a0 == v0) goto L_002198D8;
    v0 = -118;
    if (a0 != v0) goto L_00219944;
    a2 = (*(volatile s32 *) (u32) (s3 + 168)); goto L_002198DC;
L_002196F4:;
    v0 = (s32) 0x540000U;
    a0 = (*(volatile s16 *) (u32) (s3 + 12));
    a1 = (*(volatile s32 *) (u32) (v0 + -32252));
    a4 = 0;
    v1 = (*(volatile s16 *) (u32) (s3 + 14));
    (*(volatile u16 *) (u32) (sp + 84)) = (u16) a0;
    at = 0 < a1;
    { s32 c_ = at == 0; (*(volatile u16 *) (u32) (sp + 86)) = (u16) v1; if (c_) goto L_00219720; }
    v0 = (s32) 0x540000U;
    a4 = (*(volatile s32 *) (u32) (v0 + -32256));
L_00219720:;
    v0 = (s32) 0x540000U;
    a0 = 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -32256));
    { s32 c_ = v0 == 0; a2 = 0; if (c_) goto L_002197BC; }
    a2 = a1; goto L_002197BC;
L_0021973C:;
    v1 = (*(volatile s16 *) (u32) v1);
    if (v1 == v0) goto L_00219788;
    at = 0 < a2;
    { s32 c_ = at == 0; a3 = 0; if (c_) goto L_00219788; }
L_00219754:;
    v0 = (*(volatile s16 *) (u32) (a4 + 2));
    if (v0 != v1) goto L_00219774;
    v0 = (*(volatile s16 *) (u32) a4);
    if (v0 != a1) goto L_00219774;
    a0 = a4; goto L_00219788;
L_00219774:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < a2;
    { s32 c_ = v0 != 0; a4 = (s32) ((u32) a4 + 0x10U); if (c_) goto L_00219754; }
L_00219788:;
    a1 = (*(volatile s32 *) (u32) (sp + 88));
    { s32 c_ = a1 < 0; s1 = 0; if (c_) goto L_002197D4; }
    v0 = (*(volatile s32 *) (u32) (s3 + 196));
    if (a1 == v0) goto L_002197AC;
    v0 = (*(volatile s32 *) (u32) (s3 + 188));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (s3 + 188)) = (u32) v0;
L_002197AC:;
    if (s1 != 0) { (*(volatile u32 *) (u32) (s3 + 32)) = (u32) s1; goto L_0021986C; }
L_002197B4:;
    goto L_002196AC;
L_002197BC:;
    a1 = (*(volatile s16 *) (u32) (sp + 84));
    v0 = -1;
    if (a1 == v0) goto L_00219788;
    v1 = (s32) ((u32) sp + 0x56U); goto L_0021973C;
L_002197D4:;
    { s32 c_ = a1 <= 0; v0 = a1; if (c_) goto L_00219848; }
    v0 = 0; goto L_00219848;
L_002197E4:;
    v0 = (s32) ((u32) 0 - (u32) v0);
    v1 = (s32) 0x3b0000U;
    a2 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff93a0U);
    v1 = (s32) ((u32) v1 + (u32) a2);
    v0 = -125;
    s1 = (*(volatile s32 *) (u32) v1);
    if (s1 == v0) goto L_0021985C;
    v0 = -124;
    if (s1 == v0) goto L_0021985C;
    v0 = -127;
    if (s1 == v0) goto L_0021985C;
L_00219820:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 31568));
    if (v0 != 0) goto L_002197AC;
    v1 = 1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31568)) = (u32) v1;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + 31572)) = (u32) s1; goto L_002197AC;
L_00219848:;
    at = a1 < -10;
    if (at == 0) goto L_002197E4;
    v0 = -10; goto L_002197E4;
L_0021985C:;
    func_0021CD70(a0, a1);
    goto L_00219820;
L_0021986C:;
    a4 = 0;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
    a0 = (*(volatile s32 *) (u32) (s3 + 172));
    v1 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = v1 == a0; a3 = 0; if (c_) goto L_002198A8; }
    a1 = a2;
L_00219888:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != a0) goto L_00219888;
L_002198A8:;
    if (v1 == s0) goto L_002198D0;
L_002198B0:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != s0) goto L_002198B0;
L_002198D0:;
    s2 = (s32) ((u32) a3 - (u32) a4); goto L_002197B4;
L_002198D8:;
    a2 = (*(volatile s32 *) (u32) (s3 + 168));
L_002198DC:;
    a4 = 0;
    v1 = (*(volatile s32 *) (u32) (s3 + 172));
    a0 = (*(volatile s32 *) (u32) a2);
    { s32 c_ = a0 == v1; a3 = 0; if (c_) goto L_00219910; }
    a1 = a2;
L_002198F4:;
    a1 = (s32) ((u32) a1 + 0x4U);
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a1);
    if (v0 != v1) goto L_002198F4;
L_00219910:;
    v1 = (s32) 0x220000U;
    v1 = (s32) ((u32) v1 + 0xffff94f0U);
    if (a0 == v1) goto L_00219940;
L_00219920:;
    a2 = (s32) ((u32) a2 + 0x4U);
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a2);
    if (v0 != v1) goto L_00219920;
L_00219940:;
    s2 = (s32) ((u32) a3 - (u32) a4);
L_00219944:;
    v0 = s2;
    return v0;
}
