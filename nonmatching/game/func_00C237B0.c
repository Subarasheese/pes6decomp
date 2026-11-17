/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_009143D0(s32, s32, s32, s32);
s32 func_00A07B40(void);
void memset(s32, s32, s32);

void func_00C237B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };

    a2 = 0;
    s2 = a0;
    s1 = a1;
    a0 = (*(volatile u8 *) (u32) a0);
    a1 = (s32) 0xcb0000U;
    a1 = (s32) ((u32) a1 + 0x52a0U);
    v1 = 2;
L_00C237E0:;
    v0 = (*(volatile u8 *) (u32) (a1 + 1740));
    if (v0 != a0) goto L_00C23810;
    v0 = (*(volatile s32 *) (u32) (a1 + 1724));
    if (v0 != v1) goto L_00C23810;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a2 << 6);
    v0 = (s32) ((u32) v0 + 0x52a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0x6bcU); goto L_00C23824;
L_00C23810:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < 22;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x40U); if (c_) goto L_00C237E0; }
    a0 = 0;
L_00C23824:;
    if (a0 == 0) goto L_00C2384C;
    v1 = (*(volatile u8 *) (u32) (a0 + 41));
    v0 = s1 & 0xff;
    if (v1 != v0) { a1 = 0; goto L_00C23844; }
    v0 = 0; goto L_00C2394C;
L_00C23844:;
    a2 = 64; memset(a0, a1, a2);
L_00C2384C:;
    v1 = (s32) 0xcb0000U;
    a0 = 0;
    v1 = (s32) ((u32) v1 + 0x52a0U);
L_00C23858:;
    v0 = (*(volatile s32 *) (u32) (v1 + 1724));
    if (v0 != 0) { a0 = (s32) ((u32) a0 + 0x1U); goto L_00C2387C; }
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a0 << 6);
    v0 = (s32) ((u32) v0 + 0x52a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) v0 + 0x6bcU); goto L_00C2388C;
L_00C2387C:;
    v0 = a0 < 22;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x40U); if (c_) goto L_00C23858; }
    s0 = 0;
L_00C2388C:;
    if (s0 == 0) { v0 = 0; goto L_00C2394C; }
    a0 = (*(volatile u8 *) (u32) s2);
    v0 = (s32) 0x590000U;
    v1 = 2;
    v0 = (s32) ((u32) v0 + 0x1e67U);
    (*(volatile u8 *) (u32) (s0 + 16)) = (u8) a0;
    (*(volatile u32 *) (u32) s0) = (u32) v1;
    (*(volatile u8 *) (u32) (s0 + 41)) = (u8) s1;
    f0.f = (*(volatile f32 *) (u32) (s2 + 108));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 42)) = (u16) v1;
    f0.f = (*(volatile f32 *) (u32) (s2 + 112));
    f0.i = (s32) f0.f;
    v1 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 44)) = (u16) v1;
    v1 = (*(volatile u8 *) (u32) (s2 + 18));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    (*(volatile u8 *) (u32) (s0 + 46)) = (u8) v0; v0 = func_00A07B40();
    if (v0 == 0) goto L_00C23904;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v0; goto L_00C23910;
L_00C23904:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9969));
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v0;
L_00C23910:;
    f0.f = (*(volatile f32 *) (u32) (s2 + 224));
    a0 = s2;
    a1 = 0;
    a2 = 1;
    f0.i = (s32) f0.f;
    v0 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 12)) = (u16) v0;
    f0.f = (*(volatile f32 *) (u32) (s2 + 232));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    (*(volatile u16 *) (u32) (s0 + 14)) = (u16) v0; func_009143D0(a0, a1, a2, a3);
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 17)) = (u8) v0;
L_00C2394C:;
    return;
}
