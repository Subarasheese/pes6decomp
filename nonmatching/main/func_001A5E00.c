/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_0017F9A0(s64, s64, s64, s64, s64);
s64 func_001A5D90(s64, s64, s64, s64);
s64 func_002CB8C0(s64);
s64 func_002CBC80(s64);

s64 func_001A5E00(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 frame[8];
    s64 sp = (s32) (u32) frame;

    v1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) sp + 0x20U);
    v1 = (*(volatile s32 *) (u32) (v1 + -704));
    s0 = a0;
    a0 = (s32) ((u32) s0 << 1);
    a0 = (s32) ((u32) a0 + (u32) s0);
    a2 = (s32) ((u32) a0 << 3);
    a0 = 20;
    v1 = (s32) ((u32) v1 + (u32) a2);
    { s32 c_ = a1 == 0; (*(volatile u32 *) (u32) (sp + 60)) = (u32) v1; if (c_) goto L_001A5E54; }
L_001A5E38:;
    (*(volatile u8 *) (u32) a1) = (u8) 0;
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    a1 = (s32) ((u32) a1 + 0x1U);
    if (a0 != 0) goto L_001A5E38;
L_001A5E54:;
    v1 = (s64) ((u64) v1 << 32);
    v1 = v1 >> 32;
    a0 = (*(volatile s32 *) (u32) (v1 + 8));
    if (a0 == 0) goto L_001A5EEC;
    at = s0 < 0;
    if (at != 0) goto L_001A5E80;
    at = s0 < 4;
    if (at != 0) goto L_001A5F0C;
L_001A5E80:;
    v0 = func_002CB8C0(a0);
    v0 = (*(volatile s32 *) (u32) (sp + 60));
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) 0; goto L_001A5EEC;
L_001A5E94:;
    v0 = (*(volatile s32 *) (u32) (sp + 60));
    a0 = (*(volatile s32 *) (u32) (v0 + 4)); v0 = func_001A5D90(a0, a1, a2, a3);
    a1 = (s32) 0x1a0000U;
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x5f70U); goto L_001A5EC4;
L_001A5EB0:;
    a0 = a0 >> 56; v0 = func_002CBC80(a0);
    a1 = (s32) 0x1a0000U;
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x5f80U);
L_001A5EC4:;
    v0 = (*(volatile s32 *) (u32) (sp + 60));
    v1 = 1;
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v1;
    a2 = (s32) ((u32) sp + 0x3cU);
    a3 = 4;
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a4 = (s32) ((u32) sp + 0x20U); v0 = func_0017F9A0(a0, a1, a2, a3, a4);
    goto L_001A5F10;
L_001A5EEC:;
    v1 = (s32) 0x390000U;
    v0 = 6;
    v1 = (s32) ((u32) v1 + 0x7940U);
    v1 = (s32) ((u32) v1 + (u32) s0);
    { s32 c_ = s0 == v0; v1 = (*(volatile s8 *) (u32) v1); if (c_) goto L_001A5E94; }
    a0 = (s64) ((u64) v1 << 56); goto L_001A5EB0;
L_001A5F0C:;
L_001A5F10:;
    return v0;
}
