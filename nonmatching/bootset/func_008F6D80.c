/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDA50(s32);
void func_001DE9E0(s32);
s32 func_002CBF10(void);
s32 func_002D9640(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_008F7260(s32);
void func_008F9090(s32, s32, s32, s32);
void func_008F91C0(s32);
void func_008F93B0(void);
void func_008F9410(void);
void func_008F9420(void);
void func_008F9530(s32, s32);
void func_008F95B0(s32, s32);

void func_008F6D80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x900000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -24416)); v0 = func_008F7260(a0);
    a0 = v0; func_001DE9E0(a0);
    v0 = func_002CBF10();
    v0 = v0 ^ 0x3;
    a0 = 1;
    v0 = (u64) v0 < (u64) (s64) 1;
    if (v0 != a0) goto L_008F6DDC;
    a0 = 0; v0 = func_001CDA50(a0);
    (*(volatile u32 *) (u32) (gp + -19796)) = (u32) v0; goto L_008F6DE8;
L_008F6DDC:;
    v0 = func_001CDA50(a0);
    (*(volatile u32 *) (u32) (gp + -19796)) = (u32) v0;
L_008F6DE8:;
    func_008F9090(a0, a1, a2, a3);
    func_008F9420();
    v0 = func_002D9640(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = 3;
    if (v0 == s0) { s0 = 4; goto L_008F6E58; }
    v1 = 5;
    if (v0 == v1) goto L_008F6E58;
    v1 = 4;
    if (v0 == v1) { s0 = 2; goto L_008F6E58; }
    v1 = 2;
    if (v0 == v1) { s0 = 1; goto L_008F6E58; }
    v1 = 1;
    s0 = 0; goto L_008F6E58;
    s0 = 1;
    goto L_008F6E58;
    s0 = 2;
    goto L_008F6E58;
    s0 = 4;
L_008F6E58:;
    v0 = func_002CBF10();
    v1 = 3;
    if (v0 == v1) { v0 = 34; goto L_008F6E94; }
    v1 = 2;
    if (v0 == v1) { v0 = 33; goto L_008F6E94; }
    v1 = 1;
    v0 = (s32) ((u32) s0 + 0x17U); goto L_008F6E94;
    v0 = 33;
    goto L_008F6E94;
    v0 = 34;
L_008F6E94:;
    v1 = (s32) ((u32) v0 << 2);
    v0 = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 + 0xffff9a80U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_008F95B0(a0, a1);
    v0 = func_002CBF10();
    v1 = 3;
    if (v0 == v1) { s3 = 4; goto L_008F6EEC; }
    v1 = 2;
    if (v0 == v1) { s3 = 4; goto L_008F6EEC; }
    v1 = 1;
    s3 = 4; goto L_008F6EEC;
    s3 = 4;
    goto L_008F6EEC;
    s3 = 4;
L_008F6EEC:;
    s4 = 0;
    if (s3 <= 0) goto L_008F6FB0;
    s2 = (s32) 0x900000U;
    s1 = (s32) 0x900000U;
    s0 = (s32) 0x900000U;
    s2 = (s32) ((u32) s2 + 0xffff9b10U);
    s1 = (s32) ((u32) s1 + 0xffff9b20U);
    s0 = (s32) ((u32) s0 + 0xffff9b30U);
L_008F6F10:;
    v0 = func_002CBF10();
    v1 = 3;
    if (v0 == v1) goto L_008F6F78;
    v1 = 2;
    if (v0 == v1) goto L_008F6F58;
    v1 = 1;
    v1 = (*(volatile s32 *) (u32) s2);
    v0 = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 + 0xffff9a80U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); goto L_008F6F90;
L_008F6F58:;
    v1 = (*(volatile s32 *) (u32) s1);
    v0 = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 + 0xffff9a80U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); goto L_008F6F90;
L_008F6F78:;
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 + 0xffff9a80U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
L_008F6F90:;
    a1 = s4; func_008F9530(a0, a1);
    s4 = (s32) ((u32) s4 + 0x1U);
    s2 = (s32) ((u32) s2 + 0x4U);
    v0 = s4 < s3;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_008F6F10; }
L_008F6FB0:;
    v0 = (s32) 0x900000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -24416)); func_008F91C0(a0);
    func_008F9410();
    func_008F93B0();
    return;
}
