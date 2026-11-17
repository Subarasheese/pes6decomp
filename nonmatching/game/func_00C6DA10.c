/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 Pes6SaveData_GetUnavailableFlag(void);
s64 func_002BE490(s64, s64);
void func_002C40B0(s64, s64, s64, s64);

s64 func_00C6DA10(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    a0 = 0;
    a1 = 0;
    s3 = 0;
    v0 = func_002BE490(a0, a1);
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    at = v0 < 4;
    if (at == 0) { v0 = 0; goto L_00C6DB6C; }
    a0 = 1;
    a1 = 0; v0 = func_002BE490(a0, a1);
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    at = v0 < 4;
    if (at == 0) goto L_00C6DA80;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_00C6DA8C;
L_00C6DA80:;
    v0 = 0;
    goto L_00C6DB6C;
L_00C6DA8C:;
    s1 = (s32) 0xcd0000U;
    s4 = 0;
    s1 = (s32) ((u32) s1 + 0xffffbb50U);
L_00C6DA98:;
    a0 = s4 & 0xff;
    a1 = 0; v0 = func_002BE490(a0, a1);
    s0 = (s64) ((u64) v0 << 48);
    s0 = s0 >> 48;
    { s32 c_ = s0 <= 0; s2 = 1; if (c_) goto L_00C6DB58; }
    { s32 c_ = s0 <= 0; s3 = s2; if (c_) goto L_00C6DB58; }
L_00C6DAC0:;
    a1 = s4 & 0xff;
    a0 = (s32) ((u32) sp + 0x60U);
    a2 = s2; func_002C40B0(a0, a1, a2, a3);
    a0 = 1;
    a1 = 12; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (sp + 104));
    v1 = 2;
    if (a0 == v1) goto L_00C6DAF8;
    v1 = (*(volatile u8 *) (u32) (sp + 97));
    (*(volatile u8 *) (u32) v0) = (u8) v1; goto L_00C6DB00;
L_00C6DAF8:;
    v1 = 255;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_00C6DB00:;
    v1 = (*(volatile u8 *) (u32) (sp + 99));
    (*(volatile u8 *) (u32) (v0 + 1)) = (u8) v1;
    v1 = (*(volatile s32 *) (u32) (sp + 104));
    v1 = v1 ^ 0x1;
    v1 = (u64) v1 < (u64) (s64) 1;
    (*(volatile u8 *) (u32) (v0 + 2)) = (u8) v1;
    a0 = (*(volatile s32 *) (u32) (s1 + 68));
    v1 = (*(volatile s32 *) (u32) (s1 + 72));
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0;
    { s32 c_ = a0 != 0; (*(volatile u32 *) (u32) (v0 + 8)) = (u32) 0; if (c_) goto L_00C6DB38; }
    (*(volatile u32 *) (u32) (s1 + 68)) = (u32) v0;
    (*(volatile u32 *) (u32) (s1 + 72)) = (u32) v0; goto L_00C6DB48;
L_00C6DB38:;
    (*(volatile u32 *) (u32) (v1 + 8)) = (u32) v0;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) v1;
    (*(volatile u32 *) (u32) (s1 + 72)) = (u32) v0;
L_00C6DB48:;
    s2 = (s32) ((u32) s2 + 0x1U);
    at = s0 < s2;
    if (at == 0) goto L_00C6DAC0;
L_00C6DB58:;
    s4 = (s32) ((u32) s4 + 0x1U);
    at = s4 < 2;
    { s32 c_ = at != 0; s1 = (s32) ((u32) s1 + 0x18U); if (c_) goto L_00C6DA98; }
    v0 = s3;
L_00C6DB6C:;
    return v0;
}
