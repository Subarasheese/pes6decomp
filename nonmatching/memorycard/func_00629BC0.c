/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D6E40(s32, s32, s32, s32);
void func_001D7F10(s32, s32, s32, s32);
void func_001E5F20(s32, s32, s32, s32);
void func_001E6B70(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001EDD90(s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002E4570(s32, s32, s32, s32);
void func_006562F0(s32, s32, s32, s32);
void memset(s32, s32, s32);

void func_00629BC0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 60));
    if (a0 == 0) { s0 = 29510; goto L_00629C10; }
    func_001EDD90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 60)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s2 + 64)); func_001EDD90(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x44U);
    a1 = 0;
    a2 = 248;
    (*(volatile u32 *) (u32) (s2 + 64)) = (u32) 0; memset(a0, a1, a2);
    s0 = 29510;
L_00629C10:;
    a0 = s0; func_001E6B70(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 29671;
    if (v0 != 0) goto L_00629C10;
    s0 = 0;
    s1 = s2;
L_00629C34:;
    a0 = (*(volatile s32 *) (u32) (s1 + 316));
    if (a0 == 0) goto L_00629C50;
    func_001E5F20(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 316)) = (u32) 0;
L_00629C50:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 2;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00629C34; }
    s0 = 0;
    s1 = s2;
L_00629C68:;
    a0 = (*(volatile s32 *) (u32) (s1 + 12));
    if (a0 == 0) goto L_00629C80;
    func_001D6E40(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 12)) = (u32) 0;
L_00629C80:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 12;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00629C68; }
    a0 = (*(volatile s32 *) (u32) (s2 + 60));
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (s2 + 352)); goto L_00629CD4; }
    v0 = (*(volatile s32 *) (u32) (s2 + 64));
    if (v0 == 0) goto L_00629CD0;
    func_001EDD90(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 64)); func_001EDD90(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x44U);
    a1 = 0;
    a2 = 248; memset(a0, a1, a2);
    (*(volatile u32 *) (u32) (s2 + 60)) = (u32) 0;
    (*(volatile u32 *) (u32) (s2 + 64)) = (u32) 0;
L_00629CD0:;
    a0 = (*(volatile s32 *) (u32) (s2 + 352));
L_00629CD4:;
    if (a0 == 0) { v0 = (*(volatile s32 *) (u32) (s2 + 8)); goto L_00629CFC; }
    func_001EDD90(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x164U);
    a1 = 0;
    a2 = 8;
    (*(volatile u32 *) (u32) (s2 + 352)) = (u32) 0; memset(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s2 + 8));
L_00629CFC:;
    { s32 c_ = v0 <= 0; s0 = 0; if (c_) goto L_00629D50; }
    s1 = 0;
L_00629D08:;
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    if (v0 == 0) goto L_00629D38;
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) v0);
    if (a0 == 0) goto L_00629D38;
    func_001D7F10(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u32 *) (u32) v0) = (u32) 0;
L_00629D38:;
    v0 = (*(volatile s32 *) (u32) (s2 + 8));
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < v0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00629D08; }
L_00629D50:;
    (*(volatile u32 *) (u32) s2) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s2 + 4)); func_006562F0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 4)) = (u32) 0;
    s0 = 0;
    s1 = s2;
L_00629D68:;
    a0 = (*(volatile s32 *) (u32) (s1 + 332));
    if (a0 == 0) goto L_00629D80;
    func_002E4570(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 332)) = (u32) 0;
L_00629D80:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = (u64) s0 < (u64) (s64) 2;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00629D68; }
    a0 = (*(volatile s32 *) (u32) (s2 + 340));
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (s2 + 328)); goto L_00629DAC; }
    func_002E4570(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 340)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s2 + 328));
L_00629DAC:;
    if (a0 == 0) { ; goto L_00629DC4; }
    func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u32 *) (u32) (s2 + 328)) = (u32) 0;
L_00629DC4:;
    return;
}
