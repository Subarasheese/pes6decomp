/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_009B3500(s32, s32, s32, s32);

s32 func_00C3DB00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0xcb0000U;
    v0 = (s32) 0xcb0000U;
    s5 = a0;
    s4 = 0;
    s2 = 255;
    f0.f = (*(volatile f32 *) (u32) (a0 + 152));
    a1 = (*(volatile s16 *) (u32) (v1 + -32584));
    s0 = (s32) ((u32) sp + 0x88U);
    a0 = (*(volatile s16 *) (u32) (v0 + -32582));
    f0.f = (f32) f0.i;
    v1 = (s32) 0xcb0000U;
    (*(volatile u16 *) (u32) (sp + 136)) = (u16) a1;
    v1 = (*(volatile s16 *) (u32) (v1 + -32580));
    v0 = (s32) 0xcb0000U;
    (*(volatile u16 *) (u32) (sp + 138)) = (u16) a0;
    f0.i = (s32) f0.f;
    v0 = (*(volatile s16 *) (u32) (v0 + -32578));
    (*(volatile u16 *) (u32) (sp + 140)) = (u16) v1;
    s6 = f0.i;
    (*(volatile u16 *) (u32) (sp + 142)) = (u16) v0;
L_00C3DB74:;
    s3 = (*(volatile u16 *) (u32) s0);
    a0 = s5;
    a2 = 12;
    a1 = s3; func_009B3500(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + 7792));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    v1 = (s32) ((u32) v0 - (u32) s6);
    if (v1 <= 0) { v1 = (s32) ((u32) 0 - (u32) v1); goto L_00C3DBA8; }
L_00C3DBA8:;
    v0 = 255;
    if (s2 == v0) goto L_00C3DBC0;
    at = v1 < s1;
    if (at == 0) goto L_00C3DBC8;
L_00C3DBC0:;
    s1 = v1;
    s2 = s3;
L_00C3DBC8:;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x2U); if (c_) goto L_00C3DB74; }
    v0 = 354;
    if (s2 == v0) goto L_00C3DBEC;
    (*(volatile u32 *) (u32) (s5 + 164)) = (u32) s2; goto L_00C3DC24;
L_00C3DBEC:;
    f1.i = (s32) s1;
    v0 = (s32) 0x41e00000U;
    f0.i = (s32) v0;
    f1.f = (f32) f1.i;
    fcc = f1.f <= f0.f;
    if (!fcc) { v0 = 0; goto L_00C3DC2C; }
    v0 = (*(volatile s32 *) (u32) (s5 + 28));
    at = v0 < 4353;
    if (at != 0) goto L_00C3DC20;
    s2 = 614;
L_00C3DC20:;
    (*(volatile u32 *) (u32) (s5 + 164)) = (u32) s2;
L_00C3DC24:;
    v0 = 1;
    (*(volatile u16 *) (u32) (s5 + 56)) = (u16) 0;
L_00C3DC2C:;
    return v0;
}
