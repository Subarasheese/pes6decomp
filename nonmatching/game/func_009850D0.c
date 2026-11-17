/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_002C7BF0(s64);
s64 func_00984C50(s64, s64, s64, s64);
s64 func_0099F3A0(s64, s64);

s64 func_009850D0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a1;
    s0 = a0;
    a0 = s2 & 0xff; v0 = func_002C7BF0(a0);
    v1 = v0 & 0xff;
    if (v1 == 0) { a0 = s0; goto L_009851B0; }
    a1 = 1;
    if (v1 == a1) { a2 = s0 & 0xff; goto L_00985120; }
    v0 = 2;
    if (v1 == v0) goto L_009851EC;
    v0 = 0; goto L_009851F0;
L_00985120:;
    v1 = (s32) 0xcb0000U;
    a0 = (s32) ((u32) a2 << 1);
    v1 = (s32) ((u32) v1 + 0x62b8U);
    a0 = (s32) ((u32) a0 + (u32) a2);
    v0 = 256;
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(s32 *) (u32) v1);
    v1 = v1 & 0x100;
    if (v1 == v0) goto L_009851F8;
    v0 = (s32) 0xcb0000U;
    s1 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + 0x5f00U);
    s0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(s32 *) (u32) s0);
    if (v0 == 0) goto L_00985218;
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x5ee0U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(s32 *) (u32) v0);
    if (v0 != 0) goto L_00985218;
    v0 = (s32) 0x590000U;
    v1 = s2 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1ef2U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v1);
    v0 = v0 & 0x1;
    if (v0 == 0) { a0 = s2; goto L_00985210; }
    v0 = (*(u8 *) (u32) v1);
    v0 = v0 & 0xfe;
    (*(u8 *) (u32) v1) = (u8) v0; goto L_00985218;
L_009851B0:;
    a1 = (s32) 0x100000U; v0 = func_0099F3A0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_00985240; }
    v0 = (s32) 0x590000U;
    v1 = s2 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1ef2U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v1);
    v0 = v0 & 0x1;
    if (v0 == 0) { a0 = s2; goto L_00985230; }
    v0 = (*(u8 *) (u32) v1);
    v0 = v0 & 0xfe;
    (*(u8 *) (u32) v1) = (u8) v0;
L_009851EC:;
    v0 = 0;
L_009851F0:;
    goto L_00985330;
L_009851F8:;
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) a2 << 2);
    v0 = (s32) ((u32) v0 + 0x5f00U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(u32 *) (u32) v0) = (u32) a1; goto L_009851EC;
L_00985210:;
    v0 = func_00984C50(a0, a1, a2, a3);
L_00985218:;
    v0 = (s32) 0xcb0000U;
    (*(u32 *) (u32) s0) = (u32) 0;
    v0 = (s32) ((u32) v0 + 0x5ee0U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(u32 *) (u32) v0) = (u32) 0; goto L_009851EC;
L_00985230:;
    a1 = 1; v0 = func_00984C50(a0, a1, a2, a3);
    goto L_009851EC;
L_00985240:;
    a1 = (s32) 0x200000U; v0 = func_0099F3A0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_00985290; }
    v0 = (s32) 0x590000U;
    v1 = s2 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1ef2U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v1);
    v0 = v0 & 0x2;
    if (v0 == 0) { a0 = s2; goto L_00985280; }
    v0 = (*(u8 *) (u32) v1);
    v0 = v0 & 0xfd;
    (*(u8 *) (u32) v1) = (u8) v0; goto L_009851EC;
L_00985280:;
    a1 = 2; v0 = func_00984C50(a0, a1, a2, a3);
    goto L_009851EC;
L_00985290:;
    a1 = (s32) 0x800000U; v0 = func_0099F3A0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_009852E0; }
    v0 = (s32) 0x590000U;
    v1 = s2 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1ef2U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v1);
    v0 = v0 & 0x4;
    if (v0 == 0) { a0 = s2; goto L_009852D0; }
    v0 = (*(u8 *) (u32) v1);
    v0 = v0 & 0xfb;
    (*(u8 *) (u32) v1) = (u8) v0; goto L_009851EC;
L_009852D0:;
    a1 = 4; v0 = func_00984C50(a0, a1, a2, a3);
    goto L_009851EC;
L_009852E0:;
    a1 = (s32) 0x400000U; v0 = func_0099F3A0(a0, a1);
    if (v0 == 0) goto L_009851EC;
    v0 = (s32) 0x590000U;
    v1 = s2 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1ef2U);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v1);
    v0 = v0 & 0x8;
    if (v0 == 0) { a0 = s2; goto L_00985320; }
    v0 = (*(u8 *) (u32) v1);
    v0 = v0 & 0xf7;
    (*(u8 *) (u32) v1) = (u8) v0; goto L_009851EC;
L_00985320:;
    a1 = 8; v0 = func_00984C50(a0, a1, a2, a3);
    goto L_009851EC;
L_00985330:;
    return v0;
}
