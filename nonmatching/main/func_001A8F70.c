/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void Pes6Heap_Free(s32);
s32 func_001454C0(s32);
void func_00145590(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00145750(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00147ED0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00147F00(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001CDAD0(s32);

void func_001A8F70(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[16];
    s32 sp = (s32) (u32) frame;

    s3 = a0;
    s0 = (*(volatile s32 *) (u32) a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    { s32 c_ = a0 == 0; (*(volatile u32 *) (u32) (sp + 124)) = (u32) a0; if (c_) goto L_001A9018; }
    v0 = (*(volatile s32 *) (u32) a0);
    at = 0 < v0;
    { s32 c_ = at == 0; s2 = 0; if (c_) goto L_001A9010; }
    s1 = 0;
L_001A8FB8:;
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    v0 = (s32) ((u32) v0 + (u32) s1);
    s4 = (*(volatile s32 *) (u32) v0);
    if (s4 == 0) goto L_001A8FF8;
    a0 = (*(volatile s32 *) (u32) (s4 + 12)); v0 = func_001454C0(a0);
    if (v0 == 0) goto L_001A8FF0;
    a0 = s4; func_00145590(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_001A8FF8;
L_001A8FF0:;
    a0 = (*(volatile s32 *) (u32) (s4 + 12)); func_00147ED0(a0, a1, a2, a3, a4, a5, a6, a7);
L_001A8FF8:;
    a0 = (*(volatile s32 *) (u32) (sp + 124));
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = (*(volatile s32 *) (u32) a0);
    v0 = s2 < v0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_001A8FB8; }
L_001A9010:;
    Pes6Heap_Free(a0);
L_001A9018:;
    a0 = (*(volatile s32 *) (u32) (s3 + 68));
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) a0; func_001CDAD0(a0);
    v0 = (*(volatile s32 *) (u32) (sp + 124));
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 4; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (sp + 124));
    s4 = v0;
    v0 = (*(volatile s32 *) (u32) v1);
    at = 0 < v0;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_001A9098; }
    s3 = 0;
    s2 = s4;
L_001A9054:;
    v0 = (*(volatile s32 *) (u32) (v1 + 4));
    v0 = (s32) ((u32) v0 + (u32) s3);
    s5 = (*(volatile s32 *) (u32) v0);
    if (s5 == 0) goto L_001A9078;
    a0 = s5; func_00145750(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (s5 + 12));
    (*(volatile u32 *) (u32) s2) = (u32) v0;
L_001A9078:;
    v1 = (*(volatile s32 *) (u32) (sp + 124));
    s1 = (s32) ((u32) s1 + 0x1U);
    s3 = (s32) ((u32) s3 + 0x4U);
    v0 = (*(volatile s32 *) (u32) v1);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_001A9054; }
L_001A9098:;
    a1 = (*(volatile s32 *) (u32) v1);
    a3 = (s32) 0x1b0000U;
    a0 = 0;
    a2 = s4;
    a3 = (s32) ((u32) a3 + 0xffff90f0U);
    a4 = (s32) ((u32) sp + 0x7cU);
    a5 = 4; func_00147F00(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s4; Pes6Heap_Free(a0);
    v1 = (*(volatile s32 *) (u32) (sp + 124));
    (*(volatile u32 *) (u32) (s0 + 4)) = (u32) v1;
    return;
}
