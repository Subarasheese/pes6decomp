/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_GetUnavailableFlag(void);
void func_001B77F0(s32);
void func_001B7A60(s32, s32, s32, s32);
void func_001B7B20(s32, s32, s32, s32);
void func_001B7B80(s32, s32, s32, s32);
void func_001B7BC0(s32, s32, s32, s32);
void func_001B8110(s32, s32, s32, s32);
s32 func_00645820(s32);
void func_00D0C5F0(s32, s32, s32, s32);
void func_00D0C6E0(s32, s32, s32, s32);

void func_0063B110(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s32 gp = 0x3ef370;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    v0 = 6;
    v1 = (s32) ((u32) sp + 0xa8U);
    s5 = a5;
    s4 = a2;
    s3 = a3;
    s2 = a4;
    { s32 c_ = v1 == 0; s0 = a1; if (c_) goto L_0063B16C; }
L_0063B150:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0063B150;
L_0063B16C:;
    v1 = (*(volatile s32 *) (u32) (gp + -21880));
    v0 = 12;
    (*(volatile u8 *) (u32) (sp + 168)) = (u8) a0;
    s1 = 0;
    (*(volatile u8 *) (u32) (sp + 169)) = (u8) s0;
    (*(volatile u8 *) (u32) (sp + 170)) = (u8) s4;
    (*(volatile u8 *) (u32) (sp + 171)) = (u8) s3;
    (*(volatile u8 *) (u32) (sp + 172)) = (u8) s2;
    { s32 c_ = v1 == v0; (*(volatile u8 *) (u32) (sp + 173)) = (u8) s5; if (c_) goto L_0063B1BC; }
    v0 = 13;
    if (v1 == v0) { v1 = 1; goto L_0063B1C0; }
    v0 = 14;
    if (v1 == v0) goto L_0063B1BC;
    v0 = (s32) ((u32) v1 + 0xffffffe4U);
    at = (u64) v0 < (u64) (s64) 3;
    if (at == 0) { v1 = 0; goto L_0063B1C0; }
L_0063B1BC:;
    v1 = 1;
L_0063B1C0:;
    v0 = 1;
    if (v1 != v0) { a0 = a0 & 0xff; goto L_0063B25C; }
    s0 = s0 & 0xff;
    v0 = 107;
    if (s0 == v0) goto L_0063B224;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { a0 = s0; goto L_0063B208; }
    a0 = s0; v0 = func_00645820(a0);
    a0 = 12;
    a1 = v0; func_00D0C6E0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -20984)); goto L_0063B39C;
L_0063B208:;
    v0 = func_00645820(a0);
    a0 = 12;
    a1 = v0; func_001B7BC0(a0, a1, a2, a3);
    goto L_0063B398;
L_0063B224:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { a0 = 12; goto L_0063B244; }
    a0 = 12; func_00D0C5F0(a0, a1, a2, a3);
    goto L_0063B398;
L_0063B244:;
    func_001B7B80(a0, a1, a2, a3);
    a0 = 1; func_001B7A60(a0, a1, a2, a3);
    goto L_0063B398;
L_0063B25C:;
    v0 = 107;
    if (a0 == v0) { a0 = s0 & 0xff; goto L_0063B280; }
    v0 = 11;
    (*(volatile u32 *) (u32) (sp + 112)) = (u32) v0; v0 = func_00645820(a0);
    (*(volatile u32 *) (u32) (sp + 116)) = (u32) v0;
    s1 = (s32) ((u32) s1 + 0x1U);
    a0 = s0 & 0xff;
L_0063B280:;
    v0 = 107;
    if (a0 == v0) { a0 = s4 & 0xff; goto L_0063B2B0; }
    s0 = (s32) ((u32) s1 << 3);
    v1 = 12;
    v0 = (s32) ((u32) s0 + (u32) sp);
    (*(volatile u32 *) (u32) (v0 + 112)) = (u32) v1; v0 = func_00645820(a0);
    v1 = (s32) ((u32) s0 + (u32) sp);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 116)) = (u32) v0;
    a0 = s4 & 0xff;
L_0063B2B0:;
    v0 = 107;
    if (a0 == v0) { a0 = s3 & 0xff; goto L_0063B2E0; }
    s0 = (s32) ((u32) s1 << 3);
    v1 = 5;
    v0 = (s32) ((u32) s0 + (u32) sp);
    (*(volatile u32 *) (u32) (v0 + 112)) = (u32) v1; v0 = func_00645820(a0);
    v1 = (s32) ((u32) s0 + (u32) sp);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 116)) = (u32) v0;
    a0 = s3 & 0xff;
L_0063B2E0:;
    v0 = 107;
    if (a0 == v0) { a0 = s2 & 0xff; goto L_0063B310; }
    s0 = (s32) ((u32) s1 << 3);
    v1 = 6;
    v0 = (s32) ((u32) s0 + (u32) sp);
    (*(volatile u32 *) (u32) (v0 + 112)) = (u32) v1; v0 = func_00645820(a0);
    v1 = (s32) ((u32) s0 + (u32) sp);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 116)) = (u32) v0;
    a0 = s2 & 0xff;
L_0063B310:;
    v0 = 107;
    if (a0 == v0) { a0 = s5 & 0xff; goto L_0063B340; }
    s0 = (s32) ((u32) s1 << 3);
    v1 = 14;
    v0 = (s32) ((u32) s0 + (u32) sp);
    (*(volatile u32 *) (u32) (v0 + 112)) = (u32) v1; v0 = func_00645820(a0);
    v1 = (s32) ((u32) s0 + (u32) sp);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 116)) = (u32) v0;
    a0 = s5 & 0xff;
L_0063B340:;
    v0 = 107;
    if (a0 == v0) goto L_0063B36C;
    s0 = (s32) ((u32) s1 << 3);
    v1 = 13;
    v0 = (s32) ((u32) s0 + (u32) sp);
    (*(volatile u32 *) (u32) (v0 + 112)) = (u32) v1; v0 = func_00645820(a0);
    v1 = (s32) ((u32) s0 + (u32) sp);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 116)) = (u32) v0;
L_0063B36C:;
    if (s1 <= 0) goto L_0063B388;
    a1 = s1;
    a0 = (s32) ((u32) sp + 0x70U); func_001B8110(a0, a1, a2, a3);
    goto L_0063B398;
L_0063B388:;
    func_001B7B20(a0, a1, a2, a3);
    a0 = 1; func_001B7A60(a0, a1, a2, a3);
L_0063B398:;
    a0 = (*(volatile s32 *) (u32) (gp + -20984));
L_0063B39C:;
    v1 = 1;
    if (a0 == v1) { ; goto L_0063B3C0; }
    v1 = 2;
    if (a0 != v1) goto L_0063B3BC;
    a0 = 3; func_001B77F0(a0);
L_0063B3BC:;
L_0063B3C0:;
    return;
}
