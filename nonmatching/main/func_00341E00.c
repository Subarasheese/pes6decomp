/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_GetHeaderBlock(void);
s32 func_0030E5B0(void);
s32 func_00325930(s32);
s32 func_00325B10(s32);
void func_00327920(s32, s32);
void func_00327D70(void);
void func_00327D80(s32, s32, s32, s32);
void func_00327F90(s32);
s32 func_003414D0(s32, s32, s32, s32);
void memcpy(s32, s32, s32);

void func_00341E00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = 17;
    s2 = (s32) 0x5f0000U;
    s2 = (s32) ((u32) s2 + 0x1e14U);
    v1 = (*(volatile s32 *) (u32) s2);
    s0 = (s32) 0x5f0000U;
    { s32 c_ = v1 == v0; s0 = (s32) ((u32) s0 + 0x1e10U); if (c_) goto L_00341EC8; }
    v0 = 16;
    if (v1 == v0) { v0 = 1; goto L_00341E9C; }
    v0 = 18;
    if (v1 == v0) { v0 = 255; goto L_00341E90; }
    v0 = 13;
    if (v1 == v0) goto L_00341E8C;
    v0 = 3;
    if (v1 == v0) goto L_00341E8C;
    v0 = 2;
    if (v1 == v0) goto L_00341E8C;
    v0 = 14;
    if (v1 == v0) goto L_00341E8C;
    v0 = 1;
    if (v1 == v0) goto L_00341E8C;
    goto L_00341EE8;
L_00341E8C:;
    v0 = 255;
L_00341E90:;
    (*(volatile u8 *) (u32) s0) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v0; goto L_00341F24;
L_00341E9C:;
    (*(volatile u8 *) (u32) s0) = (u8) v0; v0 = func_0030E5B0();
    v1 = 2;
    if (v0 == v1) { v0 = 1; goto L_00341EB8; }
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) 0; goto L_00341EC0;
L_00341EB8:;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v0; goto L_00341F24;
L_00341EC0:;
    v0 = (*(volatile u8 *) (u32) s0); goto L_00341F28;
L_00341EC8:;
    v0 = (*(volatile u8 *) (u32) (s0 + 1));
    v1 = 1;
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) s0) = (u8) v1; if (c_) goto L_00341EE0; }
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v1; goto L_00341F24;
L_00341EE0:;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) 0; goto L_00341F24;
L_00341EE8:;
    v0 = func_0030E5B0();
    if (v0 == 0) { (*(volatile u8 *) (u32) s0) = (u8) 0; goto L_00341F1C; }
    v1 = 3;
    if (v0 == v1) goto L_00341F0C;
    v0 = 1; goto L_00341F18;
L_00341F0C:;
    (*(volatile u8 *) (u32) s0) = (u8) 0;
    goto L_00341F1C;
L_00341F18:;
    (*(volatile u8 *) (u32) s0) = (u8) v0;
L_00341F1C:;
    v0 = 255;
    (*(volatile u8 *) (u32) (s0 + 1)) = (u8) v0;
L_00341F24:;
    v0 = (*(volatile u8 *) (u32) s0);
L_00341F28:;
    if (v0 == 0) { a0 = s2; goto L_00341F64; }
    a0 = s2; v0 = func_00325B10(a0);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) s2); goto L_00341F54; }
    a0 = s2; v0 = func_00325930(a0);
    if (v0 == 0) goto L_00341F60;
    v1 = (*(volatile s32 *) (u32) s2);
L_00341F54:;
    v0 = 16;
    if (v1 != v0) goto L_00341F7C;
L_00341F60:;
    a0 = s2;
L_00341F64:;
    func_00327F90(a0);
    a0 = s2; func_00327D80(a0, a1, a2, a3);
    goto L_00342030;
L_00341F7C:;
    v0 = Pes6SaveData_GetHeaderBlock();
    v1 = (*(volatile u8 *) (u32) (s0 + 1));
    s1 = (s32) ((u32) v0 + 0x44U);
    v0 = 255;
    if (v1 != v0) { (*(volatile u8 *) (u32) (sp + 79)) = (u8) v1; goto L_00341FA8; }
    a0 = (s32) ((u32) sp + 0x4fU);
    a1 = 3;
    a2 = 0; v0 = func_003414D0(a0, a1, a2, a3);
L_00341FA8:;
    v1 = (*(volatile u8 *) (u32) (sp + 79));
    a1 = (s32) ((u32) s1 + 0x400U);
    a2 = 60;
    v0 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s2 + (u32) v0);
    a0 = (s32) ((u32) v0 + 0x50U); memcpy(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 79));
    a1 = (s32) ((u32) s1 + 0x46cU);
    a2 = 4;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) s2 + (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8e4U); memcpy(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (sp + 79));
    a0 = s2; func_00327D70();
    v0 = (*(volatile u8 *) (u32) (sp + 79));
    a1 = s1;
    a2 = 1024;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) s2 + (u32) v0);
    a0 = (s32) ((u32) v0 + 0xc8U); memcpy(a0, a1, a2);
    a1 = (*(volatile u8 *) (u32) (sp + 79));
    a0 = s2; func_00327920(a0, a1);
    a0 = (s32) ((u32) s2 + 0xa60U);
    a1 = (s32) ((u32) s1 + 0x43cU);
    a2 = 48; memcpy(a0, a1, a2);
L_00342030:;
    return;
}
