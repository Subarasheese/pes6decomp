/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002F96F0(s32, s32);
void func_002F9B80(s32, s32, s32, s32, s32, s32, s32);
s32 func_0035EC90(void);

void func_00923330(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x590000U;
    a1 = 0;
    s4 = a0;
    a0 = 1;
    s3 = a2;
    v0 = (*(volatile u8 *) (u32) (v0 + 7095));
    { s32 c_ = v0 != a0; s2 = a3; if (c_) goto L_00923374; }
    a1 = a0; goto L_0092339C;
L_00923374:;
    v1 = 2;
    if (v0 != v1) goto L_00923388;
    a1 = 3; goto L_0092339C;
L_00923388:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7094));
    if (v0 != a0) goto L_0092339C;
    a1 = v1;
L_0092339C:;
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) a1 << 4);
    v0 = (s32) ((u32) v0 + 0xffffa6a0U);
    s1 = (s32) ((u32) v0 + (u32) v1); v0 = func_0035EC90();
    v1 = (*(volatile s32 *) (u32) (gp + -19860));
    s0 = v0;
    v0 = (s32) ((u32) gp + 0xffffb270U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; v0 = func_002F96F0(a0, a1);
    a0 = s4;
    a1 = s0;
    a5 = s3;
    a6 = s2;
    a2 = (s32) ((u32) s1 + 0x8U);
    a3 = s1;
    a4 = v0; func_002F9B80(a0, a1, a2, a3, a4, a5, a6);
    return;
}
