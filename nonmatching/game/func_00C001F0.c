/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00B29A90(void);
s32 func_00B29AD0(void);
s32 func_00B29E20(void);

void func_00C001F0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };

    v1 = 2;
    if (a0 == v1) goto L_00C00214;
    v1 = 3;
    if (a0 == v1) goto L_00C00214;
    goto L_00C00310;
L_00C00214:;
    at = (u64) a1 < (u64) (s64) 7;
    if (at == 0) goto L_00C00380;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + 0x2aa0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xc0023cU) goto L_00C0023C; if (t_ == 0xc002a8U) goto L_00C002A8; if (t_ == 0xc00310U) goto L_00C00310; }
L_00C0023C:;
    v0 = func_00B29E20();
    if (v0 == 0) goto L_00C00380;
    v1 = 12;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7767)) = (u8) v1; v0 = func_00B29AD0();
    if (v0 != 0) goto L_00C00318;
L_00C00264:;
    v0 = func_00B29A90();
    if (v0 == 0) goto L_00C00380;
    a2 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = (s32) 0x46520000U;
    a1 = (s32) 0x46080000U;
    v1 = (s32) 0x590000U;
    a0 = a0 | 0x6400;
    a1 = a1 | 0xd400;
    (*(volatile u32 *) (u32) (v1 + 7768)) = (u32) a0;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (a2 + 20));
    (*(volatile f32 *) (u32) (a0 + 7772)) = f0.f;
    (*(volatile u32 *) (u32) (v1 + 7776)) = (u32) a1; goto L_00C00310;
L_00C002A8:;
    v0 = func_00B29E20();
    if (v0 == 0) goto L_00C00380;
    v1 = 1;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7767)) = (u8) v1; v0 = func_00B29AD0();
    if (v0 != 0) goto L_00C0034C;
L_00C002D0:;
    v0 = func_00B29A90();
    if (v0 == 0) goto L_00C00380;
    a2 = (*(volatile s32 *) (u32) (gp + -32252));
    a0 = (s32) 0x46520000U;
    a1 = (s32) 0x46080000U;
    v1 = (s32) 0x590000U;
    a0 = a0 | 0x6400;
    a1 = a1 | 0xd400;
    (*(volatile u32 *) (u32) (v1 + 7768)) = (u32) a0;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (a2 + 20));
    (*(volatile f32 *) (u32) (a0 + 7772)) = f0.f;
    (*(volatile u32 *) (u32) (v1 + 7776)) = (u32) a1;
L_00C00310:;
    goto L_00C00384;
L_00C00318:;
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) 0x46520000U;
    a0 = (s32) 0xc6080000U;
    v0 = (s32) 0x590000U;
    v1 = v1 | 0x6400;
    a0 = a0 | 0xd400;
    (*(volatile u32 *) (u32) (v0 + 7768)) = (u32) v1;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (a1 + 20));
    (*(volatile f32 *) (u32) (v1 + 7772)) = f0.f;
    (*(volatile u32 *) (u32) (v0 + 7776)) = (u32) a0; goto L_00C00264;
L_00C0034C:;
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (s32) 0x46520000U;
    a0 = (s32) 0xc6080000U;
    v0 = (s32) 0x590000U;
    v1 = v1 | 0x6400;
    a0 = a0 | 0xd400;
    (*(volatile u32 *) (u32) (v0 + 7768)) = (u32) v1;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    f0.f = (*(volatile f32 *) (u32) (a1 + 20));
    (*(volatile f32 *) (u32) (v1 + 7772)) = f0.f;
    (*(volatile u32 *) (u32) (v0 + 7776)) = (u32) a0; goto L_00C002D0;
L_00C00380:;
L_00C00384:;
    return;
}
