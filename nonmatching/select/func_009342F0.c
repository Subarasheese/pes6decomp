/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Module_GetRegion(s64);
void func_001D5A50(s64, s64, s64, s64);
void func_001D5C40(s64, s64, s64, s64);
void func_001E7140(s64, s64, s64, s64, s64, s64, s64, s64);
void func_001F0210(s64, s64, s64, s64);
void func_001FC780(s64);
void func_002405A0(s64, s64, s64, s64);

void func_009342F0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;
    s64 frame[4];
    s64 sp = (s32) (u32) frame;

    v1 = (*(volatile s32 *) (u32) (gp + -18720));
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) v1;
L_00934300:;
    v1 = (s64) ((u64) v1 << 32);
    v1 = v1 >> 32;
    if (v1 == 0) { ; goto L_009343F4; }
    a1 = (*(volatile s32 *) (u32) (v1 + 4));
    if (a1 == a0) goto L_00934328;
    v1 = (*(volatile s32 *) (u32) (v1 + 28));
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) v1; goto L_00934300;
L_00934328:;
    v0 = (*(volatile s32 *) (u32) v1);
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) { a0 = (*(volatile s32 *) (u32) (sp + 28)); goto L_009343A8; }
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6480U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x934354U) goto L_00934354; if (t_ == 0x934364U) goto L_00934364; if (t_ == 0x934374U) goto L_00934374; if (t_ == 0x934384U) goto L_00934384; if (t_ == 0x934394U) goto L_00934394; if (t_ == 0x9343a4U) goto L_009343A4; }
L_00934354:;
    a0 = a1; func_001E7140(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_009343A4;
L_00934364:;
    a0 = a1; func_001D5A50(a0, a1, a2, a3);
    goto L_009343A4;
L_00934374:;
    a0 = a1; func_001D5C40(a0, a1, a2, a3);
    goto L_009343A4;
L_00934384:;
    a0 = a1; func_001F0210(a0, a1, a2, a3);
    goto L_009343A4;
L_00934394:;
    a0 = a1; v0 = Pes6Module_GetRegion(a0);
    a0 = v0; func_001FC780(a0);
L_009343A4:;
    a0 = (*(volatile s32 *) (u32) (sp + 28));
L_009343A8:;
    v0 = (*(volatile s32 *) (u32) (gp + -18720));
    if (a0 == v0) { v0 = (*(volatile s32 *) (u32) (a0 + 28)); goto L_009343DC; }
    v1 = (*(volatile s32 *) (u32) (a0 + 28));
    v0 = (*(volatile s32 *) (u32) (a0 + 24));
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (sp + 28));
    v1 = (*(volatile s32 *) (u32) (v0 + 28));
    if (v1 == 0) { a0 = (s32) ((u32) sp + 0x1cU); goto L_009343E8; }
    v0 = (*(volatile s32 *) (u32) (v0 + 24));
    (*(volatile u32 *) (u32) (v1 + 24)) = (u32) v0; goto L_009343E4;
L_009343DC:;
    (*(volatile u32 *) (u32) (gp + -18720)) = (u32) v0;
    (*(volatile u32 *) (u32) (v0 + 24)) = (u32) 0;
L_009343E4:;
    a0 = (s32) ((u32) sp + 0x1cU);
L_009343E8:;
    func_002405A0(a0, a1, a2, a3);
L_009343F4:;
    return;
}
