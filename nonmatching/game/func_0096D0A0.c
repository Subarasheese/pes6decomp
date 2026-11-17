/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_0096D0A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a1 & 0xffff;
    (*(volatile u8 *) (u32) (a0 + 257)) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffff8000U);
    v0 = (s32) ((u32) v0 + 0xffff8002U);
    at = (u64) v0 < (u64) (s64) 2;
    { s32 c_ = at != 0; (*(volatile u8 *) (u32) (a0 + 256)) = (u8) 0; if (c_) goto L_0096D12C; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 != 0) goto L_0096D0E0;
    v1 = (*(volatile u8 *) (u32) (a0 + 22));
    v0 = 1;
    if (v1 != v0) goto L_0096D0E0;
    a1 = (*(volatile u16 *) (u32) (a0 + 268));
L_0096D0E0:;
    v1 = a1 & 0xffff;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x1000U);
    v0 = (s32) ((u32) v0 + 0xffffa2e0U);
    v1 = v1 & 0xe000;
    a4 = v1 & 0xffff;
    v1 = (s32) a4 >> 13;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = a2 == 0; v0 = (*(volatile s32 *) (u32) v0); if (c_) goto L_0096D110; }
    v0 = v0 | 0x800;
L_0096D110:;
    (*(volatile u32 *) (u32) (a0 + 176)) = (u32) v0;
    v1 = 12;
    a1 = (*(volatile u8 *) (u32) (a0 + 477));
    if (a1 == v1) { a3 = (*(volatile u8 *) (u32) (a0 + 19)); goto L_0096D15C; }
L_0096D124:;
    goto L_0096D18C;
L_0096D12C:;
    (*(volatile u32 *) (u32) (a0 + 176)) = (u32) 0;
    v0 = 12;
    v1 = (*(volatile u8 *) (u32) (a0 + 477));
    if (v1 == v0) { (*(volatile u32 *) (u32) (a0 + 492)) = (u32) 0; goto L_0096D140; }
L_0096D140:;
    a0 = (*(volatile u8 *) (u32) (a0 + 19));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x5394U);
    v0 = 0;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) v1) = (u8) 0; goto L_0096D18C;
L_0096D15C:;
    a1 = (s32) 0xcb0000U;
    v1 = (s32) 0xcb0000U;
    a1 = (s32) ((u32) a1 + 0x5386U);
    v1 = (s32) ((u32) v1 + 0x5394U);
    a3 = (s32) ((u32) a3 << 1);
    a1 = (s32) ((u32) a1 + (u32) a3);
    (*(volatile u16 *) (u32) a1) = (u16) a4;
    (*(volatile u32 *) (u32) (a0 + 492)) = (u32) v0;
    a0 = (*(volatile u8 *) (u32) (a0 + 19));
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) v1) = (u8) a2; goto L_0096D124;
L_0096D18C:;
    return;
}
