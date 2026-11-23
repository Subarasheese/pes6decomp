/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001ED8F0(s64, s64);
void func_001EDAE0(s64, s64);
s64 func_002D5850(s64);
s64 func_002F96F0(s64, s64);
void func_002F99A0(s64, s64, s64);

void func_009288B0(s64 a0, s64 a1, s64 a2) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
    v1 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 116));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19836)); goto L_00928958; }
    v0 = (s32) 0x930000U;
    a1 = 0;
    v0 = (s32) ((u32) v0 + 0xfffff724U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a1 = (*(volatile s32 *) (u32) (gp + -19836)); goto L_00928914; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (*(volatile s32 *) (u32) (gp + -19836));
L_00928914:;
    a0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xfffff784U);
    v1 = (s32) ((u32) v1 + 0xffffa9c0U);
    a1 = (s32) ((u32) a1 << 9);
    v0 = (s32) ((u32) v0 + 0xffffa9c4U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    a0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a0 = (*(volatile s32 *) (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = s0; func_002F99A0(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
L_00928958:;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    v1 = (s32) ((u32) v1 << 9);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v1 + 116));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19836)); goto L_009289A8; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_0092899C; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_0092899C:;
    a1 = 0; func_001EDAE0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
L_009289A8:;
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    v1 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0x8U); v0 = func_002D5850(a0);
    a0 = (*(volatile s32 *) (u32) (gp + -19836));
    v1 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + 0xfffff720U);
    a0 = (s32) ((u32) a0 << 9);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (a0 + 116));
    v1 = (s64) ((u64) v1 << 62);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 == 0; s0 = v0; if (c_) goto L_00928A10; }
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    a1 = 0;
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a1 = s0 & 0xff; goto L_00928A08; }
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s0 & 0xff;
L_00928A08:;
    a0 = s1; func_001ED8F0(a0, a1);
L_00928A10:;
    return;
}
