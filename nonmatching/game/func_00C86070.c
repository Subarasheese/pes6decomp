/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32, s32);
void func_001B9640(s32, s32, s32, s32);
s32 func_001B9750(s32, s32, s32, s32);
s32 func_00C85ED0(s32, s32, s32, s32);
void func_00C86160(s32, s32, s32, s32, s32, s32, s32, f32, f32);

void func_00C86070(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s0 = (*(volatile s32 *) (u32) (gp + -19180));
    { s32 c_ = s0 == 0; v0 = 1; if (c_) goto L_00C8614C; }
    v0 = (*(volatile s32 *) (u32) (s0 + 36));
    at = v0 < 3;
    if (at == 0) { v0 = (s32) ((u32) v0 << 2); goto L_00C860AC; }
    func_00C86160(a0, a1, a2, a3, a4, a5, a6, f12.f, f13.f);
    v0 = 0; goto L_00C8614C;
L_00C860AC:;
    v0 = (s32) ((u32) v0 + (u32) s0);
    v0 = (*(volatile s32 *) (u32) (v0 + 12));
    if (v0 == 0) goto L_00C860C4;
    a0 = (*(volatile s32 *) (u32) (s0 + 36)); goto L_00C8611C;
L_00C860C4:;
    if (s0 == 0) goto L_00C86118;
    a2 = (s32) 0xc80000U;
    a0 = s0;
    a1 = (s32) ((u32) sp + 0x3cU);
    a2 = (s32) ((u32) a2 + 0x6010U); v0 = func_00C85ED0(a0, a1, a2, a3);
    s1 = v0;
    if (s1 == 0) goto L_00C86108;
    a1 = (*(volatile s32 *) (u32) (sp + 60));
    if (a1 <= 0) goto L_00C86108;
    a0 = s1; v0 = func_001B9750(a0, a1, a2, a3);
    a0 = v0; func_001B9640(a0, a1, a2, a3);
L_00C86108:;
    if (s1 == 0) goto L_00C86118;
    a0 = s1; Pes6Heap_Free(a0, a1);
L_00C86118:;
    a0 = (*(volatile s32 *) (u32) (s0 + 36));
L_00C8611C:;
    v0 = 1;
    v1 = (*(volatile s32 *) (u32) (s0 + 48));
    a0 = (s32) ((u32) v0 << (a0 & 31));
    v1 = v1 | a0;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s0);
    (*(volatile u32 *) (u32) (v1 + 12)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) (s0 + 36)) = (u32) v1;
L_00C8614C:;
    return;
}
