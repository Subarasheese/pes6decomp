/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
s32 Pes6Module_Load(s32);
s32 Pes6SaveData_GetUnavailableFlag(void);
s32 func_001B68B0(s32, s32, s32, s32);
s32 func_001B6A30(s32, s32, s32, s32);
s32 func_001D5A10(s32);
void func_001D5EE0(s32, s32);
void func_001E7140(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001E7370(s32, s32);
void func_001F0210(s32, s32, s32, s32);
void func_001F04F0(s32, s32);
s32 func_0021DF90(s32);
s32 func_0021E000(s32);
s32 func_002DEC40(s32, s32, s32, s32);
void func_002DED00(s32, s32, s32, s32);
s32 func_008156F0(s32, s32, s32, s32);
s32 func_008223F0(s32, s32, s32, s32);
void func_008B33F0(s32, s32, s32, s32);
void func_008B34C0(s32, s32, s32, s32);
void func_008B36F0(s32, s32, s32, s32);
s32 func_008B5820(s32, s32, s32, s32);
void func_00900DF0(s32, s32, s32, s32);

s32 func_0023BD80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -25568));
    s0 = 0;
    v0 = (s32) 0x3b0000U;
    f2.f = (*(volatile f32 *) (u32) (v0 + -25564));
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -25560));
    (*(volatile f32 *) (u32) (sp + 52)) = f2.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -25552));
    (*(volatile f32 *) (u32) (sp + 56)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -25548));
    (*(volatile f32 *) (u32) (sp + 40)) = f1.f;
    v0 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -25544));
    (*(volatile f32 *) (u32) (sp + 44)) = f0.f;
    v0 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -25540));
    (*(volatile f32 *) (u32) (sp + 32)) = f1.f;
    v0 = (*(volatile s32 *) (u32) (gp + -22824));
    at = (u64) v0 < (u64) (s64) 9;
    { s32 c_ = at == 0; (*(volatile f32 *) (u32) (sp + 36)) = f0.f; if (c_) goto L_0023C17C; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff88d0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x23be0cU) goto L_0023BE0C; if (t_ == 0x23be74U) goto L_0023BE74; if (t_ == 0x23bee8U) goto L_0023BEE8; if (t_ == 0x23bf98U) goto L_0023BF98; if (t_ == 0x23c010U) goto L_0023C010; if (t_ == 0x23c03cU) goto L_0023C03C; if (t_ == 0x23c05cU) goto L_0023C05C; if (t_ == 0x23c104U) goto L_0023C104; if (t_ == 0x23c14cU) goto L_0023C14C; }
L_0023BE0C:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { a0 = 1; goto L_0023BE54; }
    v0 = func_008156F0(a0, a1, a2, a3);
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -22824)); goto L_0023BE68; }
    v0 = func_008223F0(a0, a1, a2, a3);
    if (v0 != 0) goto L_0023BE64;
    a0 = 1; v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 != 0) goto L_0023BE64;
    v0 = s0; goto L_0023C180;
L_0023BE54:;
    v0 = func_001B6A30(a0, a1, a2, a3);
    if (v0 == 0) goto L_0023C17C;
L_0023BE64:;
    v0 = (*(volatile s32 *) (u32) (gp + -22824));
L_0023BE68:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22824)) = (u32) v0; goto L_0023C17C;
L_0023BE74:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { a0 = 0; goto L_0023BEA4; }
    v0 = func_008223F0(a0, a1, a2, a3);
    if (v0 != 0) { a0 = 3; goto L_0023BEB0; }
    a0 = 0; func_00900DF0(a0, a1, a2, a3);
    goto L_0023BEAC;
L_0023BEA4:;
    func_00900DF0(a0, a1, a2, a3);
L_0023BEAC:;
    a0 = 3;
L_0023BEB0:;
    v0 = Pes6Module_Load(a0);
    v0 = (s32) 0x510000U;
    v1 = 15;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { v0 = (*(volatile s32 *) (u32) (gp + -22824)); goto L_0023BEE0; }
    a0 = (s32) 0x240000U;
    a0 = (s32) ((u32) a0 + 0xffffbcb0U); v0 = func_002DEC40(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -22796)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -22824));
L_0023BEE0:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22824)) = (u32) v0;
L_0023BEE8:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { a0 = 347; goto L_0023BF50; }
    v0 = func_008223F0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) { a0 = 20; goto L_0023BF24; }
    a0 = 347; v0 = func_0021E000(a0);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x30U); func_001E7370(a0, a1);
    a0 = 20;
L_0023BF24:;
    v0 = func_0021DF90(a0);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x20U); func_001F04F0(a0, a1);
    v0 = (s32) 0x10000U;
    a1 = (s32) ((u32) sp + 0x20U);
    a0 = v0 | 0x38c; func_001D5EE0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -22824)); goto L_0023BF8C;
L_0023BF50:;
    v0 = func_0021E000(a0);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x30U); func_001E7370(a0, a1);
    a0 = 20; v0 = func_0021DF90(a0);
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x28U); func_001F04F0(a0, a1);
    v0 = (s32) 0x10000U;
    a1 = (s32) ((u32) sp + 0x28U);
    a0 = v0 | 0x38c; func_001D5EE0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (gp + -22824));
L_0023BF8C:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22824)) = (u32) v0; goto L_0023C17C;
L_0023BF98:;
    v0 = Pes6File_AllChannelsIdle();
    v1 = 1;
    if (v0 != v1) goto L_0023C17C;
    func_008B34C0(a0, a1, a2, a3);
    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = 1;
    if (v0 != v1) { v0 = (s32) 0x10000U; goto L_0023BFE0; }
    v0 = func_008223F0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (gp + -22824)); goto L_0023C004; }
    v0 = (s32) 0x10000U;
L_0023BFE0:;
    a0 = v0 | 0x3f; v0 = func_001D5A10(a0);
    if (v0 != 0) goto L_0023C000;
    v0 = (s32) 0x10000U;
    a1 = (s32) ((u32) sp + 0x28U);
    a0 = v0 | 0x3f; func_001D5EE0(a0, a1);
L_0023C000:;
    v0 = (*(volatile s32 *) (u32) (gp + -22824));
L_0023C004:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22824)) = (u32) v0; goto L_0023C17C;
L_0023C010:;
    v0 = Pes6File_AllChannelsIdle();
    v1 = 1;
    if (v0 != v1) goto L_0023C17C;
    func_008B36F0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -22824));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22824)) = (u32) v0; goto L_0023C17C;
L_0023C03C:;
    v0 = func_008B5820(a0, a1, a2, a3);
    if (v0 == 0) goto L_0023C17C;
    v0 = (*(volatile s32 *) (u32) (gp + -22824));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22824)) = (u32) v0; goto L_0023C17C;
L_0023C05C:;
    v0 = (s32) 0x510000U;
    v1 = 15;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { a0 = 347; goto L_0023C088; }
    v0 = func_008223F0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) { a0 = 20; goto L_0023C09C; }
    a0 = 347;
L_0023C088:;
    v0 = func_0021E000(a0);
    a0 = v0; func_001E7140(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 20;
L_0023C09C:;
    v0 = func_0021DF90(a0);
    a0 = v0; func_001F0210(a0, a1, a2, a3);
    v0 = (s32) 0x10000U;
    a0 = v0 | 0x38c; func_008B33F0(a0, a1, a2, a3);
    v0 = (s32) 0x510000U;
    v1 = 15;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { v0 = (s32) 0x10000U; goto L_0023C0E4; }
    v0 = func_008223F0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 == v1) goto L_0023C0EC;
    v0 = (s32) 0x10000U;
L_0023C0E4:;
    a0 = v0 | 0x3f; func_008B33F0(a0, a1, a2, a3);
L_0023C0EC:;
    func_008B34C0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -22824));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22824)) = (u32) v0; goto L_0023C17C;
L_0023C104:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { a0 = 1; goto L_0023C134; }
    v0 = func_008223F0(a0, a1, a2, a3);
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -22824)); goto L_0023C140; }
    a0 = 1; func_00900DF0(a0, a1, a2, a3);
    goto L_0023C13C;
L_0023C134:;
    func_00900DF0(a0, a1, a2, a3);
L_0023C13C:;
    v0 = (*(volatile s32 *) (u32) (gp + -22824));
L_0023C140:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -22824)) = (u32) v0; goto L_0023C17C;
L_0023C14C:;
    v0 = func_001B68B0(a0, a1, a2, a3);
    if (v0 == 0) goto L_0023C17C;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { (*(volatile u32 *) (u32) (gp + -22824)) = (u32) 0; goto L_0023C178; }
    a0 = (*(volatile s32 *) (u32) (gp + -22796)); func_002DED00(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -22824)) = (u32) 0;
L_0023C178:;
    s0 = 1;
L_0023C17C:;
    v0 = s0;
L_0023C180:;
    return v0;
}
