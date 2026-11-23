/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetBlock304(void);
void SD_call(s32);
void func_0023B360(s32, s32, s32, s32);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023EC10(s32, s32);
s32 func_0023EC30(s32, s32, s32, s32, s32);
void func_002DF8E0(s32, s32, s32, s32);
void func_008B31A0(s32, s32, s32, s32);
s32 func_00941B40(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00935D90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x960000U;
    v0 = (s32) 0x960000U;
    s1 = (s32) 0x540000U;
    s0 = (*(volatile s16 *) (u32) (v1 + 27936));
    v0 = (*(volatile s8 *) (u32) (v0 + 27904));
    v1 = 4;
    { s32 c_ = v0 == v1; s1 = (s32) ((u32) s1 + 0xffffc300U); if (c_) goto L_009360CC; }
    a1 = 3;
    if (v0 == a1) { s1 = 0; goto L_00936008; }
    a0 = 2;
    if (v0 == a0) { a0 = 1; goto L_00935FEC; }
    v1 = 1;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (gp + -18784)); goto L_00935F94; }
    if (v0 == 0) goto L_00935DF8;
    v0 = 0; goto L_00936150;
L_00935DF8:;
    v0 = (s32) 0x960000U;
    v1 = (s32) 0x960000U;
    a1 = (*(volatile s8 *) (u32) (v0 + 28000));
    v1 = (s32) ((u32) v1 + 0x6d7dU);
    a3 = (s32) 0x960000U;
    a0 = (s32) ((u32) gp + 0xffffb730U);
    a3 = (s32) ((u32) a3 + 0x6d10U);
    v0 = (s32) 0x960000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0x6d8aU);
    v0 = (s32) ((u32) v0 + (u32) a1);
    a1 = (*(volatile s8 *) (u32) v1);
    a2 = (*(volatile s8 *) (u32) v0);
    a4 = 5; v0 = func_0023EC30(a0, a1, a2, a3, a4);
    at = (u64) v0 < (u64) (s64) 7;
    if (at == 0) goto L_0093614C;
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x64e0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x935e5cU) goto L_00935E5C; if (t_ == 0x935f18U) goto L_00935F18; if (t_ == 0x935f2cU) goto L_00935F2C; if (t_ == 0x935f5cU) goto L_00935F5C; if (t_ == 0x93614cU) goto L_0093614C; }
L_00935E5C:;
    a0 = (*(volatile s8 *) (u32) (gp + -18640));
    a1 = 4;
    if (a0 == a1) { v1 = 3; goto L_00935EC4; }
    v0 = 2;
    if (a0 == v0) goto L_00935E98;
    v1 = 3;
    if (a0 == v1) goto L_00935E8C;
    goto L_00935ED0;
L_00935E8C:;
    v0 = (s32) 0x960000U;
    (*(volatile u8 *) (u32) (v0 + 27904)) = (u8) v1; goto L_0093614C;
L_00935E98:;
    v1 = (s32) 0x960000U;
    v0 = (s32) 0x960000U;
    v1 = (*(volatile s16 *) (u32) (v1 + 27938));
    (*(volatile u16 *) (u32) (v0 + 27936)) = (u16) v1;
    s0 = v1 & 0xff; v0 = Pes6OptionData_GetBlock304();
    (*(volatile u8 *) (u32) (v0 + 20)) = (u8) s0;
    v1 = 3;
    v0 = (s32) 0x960000U;
    (*(volatile u8 *) (u32) (v0 + 27904)) = (u8) v1; goto L_0093614C;
L_00935EC4:;
    v0 = (s32) 0x960000U;
    (*(volatile u8 *) (u32) (v0 + 27904)) = (u8) v1; goto L_0093614C;
L_00935ED0:;
    if (a0 != 0) goto L_00935EFC;
    v1 = (s32) 0x960000U;
    v0 = (s32) 0x960000U;
    v1 = (*(volatile s16 *) (u32) (v1 + 27938));
    (*(volatile u16 *) (u32) (v0 + 27936)) = (u16) v1;
    s0 = v1 & 0xff; v0 = Pes6OptionData_GetBlock304();
    (*(volatile u8 *) (u32) (v0 + 20)) = (u8) s0;
    v0 = 1; goto L_00936150;
L_00935EFC:;
    v0 = (s32) 0x960000U;
    a0 = (s32) ((u32) s1 + 0x10U);
    (*(volatile u16 *) (u32) (v0 + 27936)) = (u16) s0;
    (*(volatile u8 *) (u32) (gp + -18640)) = (u8) 0; func_0023EC10(a0, a1);
    goto L_0093614C;
L_00935F18:;
    a0 = (s32) ((u32) s1 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_0093614C;
L_00935F2C:;
    v1 = (*(volatile s8 *) (u32) (gp + -18640));
    v0 = 1;
    if (v1 != v0) { a0 = (s32) ((u32) s1 + 0x10U); goto L_00935F4C; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf803; SD_call(a0);
    a0 = (s32) ((u32) s1 + 0x10U);
L_00935F4C:;
    a1 = 8; func_0023EC10(a0, a1);
    goto L_0093614C;
L_00935F5C:;
    v0 = (*(volatile s8 *) (u32) (gp + -18640));
    if (v0 != 0) { a0 = (s32) ((u32) s1 + 0x10U); goto L_00935F80; }
    v0 = (s32) 0x960000U;
    v1 = (s32) 0x960000U;
    a0 = (*(volatile s16 *) (u32) (v0 + 27936));
    v0 = 1;
    (*(volatile u16 *) (u32) (v1 + 27938)) = (u16) a0; goto L_00936150;
L_00935F80:;
    a1 = 4;
    (*(volatile u8 *) (u32) (gp + -18640)) = (u8) 0; func_0023EC10(a0, a1);
    goto L_0093614C;
L_00935F94:;
    if (v0 == v1) { v1 = 43; goto L_00935FCC; }
    if (v0 == a1) { v1 = 42; goto L_00935FC0; }
    if (v0 == a0) { v1 = 41; goto L_00935FB4; }
    goto L_00935FD4;
L_00935FB4:;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) v1; goto L_00935FD4;
L_00935FC0:;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) v1; goto L_00935FD4;
L_00935FCC:;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) v1;
L_00935FD4:;
    v1 = (s32) 0x960000U;
    v0 = (s32) 0x960000U;
    v1 = (*(volatile s8 *) (u32) (v1 + 27904));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + 27904)) = (u8) v1; goto L_0093614C;
L_00935FEC:;
    v0 = func_00941B40(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_0093614C;
    v0 = v1; goto L_00936150;
L_00936008:;
    s0 = 0;
L_0093600C:;
    v0 = (*(volatile s32 *) (u32) (gp + -18652));
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 4;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0093600C; }
    a0 = (*(volatile s32 *) (u32) (gp + -18656));
    a1 = 0; func_002DF8E0(a0, a1, a2, a3);
    a0 = 0;
    a1 = 0; func_0023B360(a0, a1, a2, a3);
    a0 = 1;
    a1 = 0; func_0023B360(a0, a1, a2, a3);
    a0 = 30; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = (*(volatile s8 *) (u32) (gp + -18640));
    v0 = 2;
    if (v1 != v0) { v0 = 3; goto L_0093607C; }
    v1 = 46;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) v1; goto L_009360B4;
L_0093607C:;
    if (v1 != v0) goto L_00936094;
    v1 = 48;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) v1; goto L_009360B4;
L_00936094:;
    v0 = (s32) 0x960000U;
    v1 = (s32) ((u32) gp + 0xffffb72cU);
    a0 = (*(volatile s16 *) (u32) (v0 + 27984));
    a0 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    (*(volatile u32 *) (u32) (v0 + -15592)) = (u32) v1;
L_009360B4:;
    v1 = (s32) 0x960000U;
    v0 = (s32) 0x960000U;
    v1 = (*(volatile s8 *) (u32) (v1 + 27904));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + 27904)) = (u8) v1; goto L_0093614C;
L_009360CC:;
    a0 = 1; v0 = func_00941B40(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_0093614C;
    s0 = 0;
    s2 = 0;
L_009360E8:;
    v0 = (*(volatile s32 *) (u32) (gp + -18652));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 4;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_009360E8; }
    a0 = (*(volatile s32 *) (u32) (gp + -18656));
    a1 = 1; func_002DF8E0(a0, a1, a2, a3);
    v0 = Pes6OptionData_GetBlock304();
    v1 = (*(volatile u8 *) (u32) (v0 + 20));
    a0 = (s32) ((u32) s1 + 0x10U);
    a1 = 8;
    v0 = (s32) 0x960000U;
    (*(volatile u16 *) (u32) (v0 + 27938)) = (u16) v1; func_0023EC10(a0, a1);
    a0 = (s32) ((u32) s1 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    v0 = (s32) 0x960000U;
    (*(volatile u8 *) (u32) (v0 + 27904)) = (u8) 0;
L_0093614C:;
    v0 = 0;
L_00936150:;
    return v0;
}
