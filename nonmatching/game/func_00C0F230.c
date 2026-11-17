/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00C103D0(s32);
void func_00C10480(s32, s32);
void func_00C104F0(s32, s32);
void func_00C10640(s32, s32);
void func_00C106C0(s32, s32);
void func_00C10950(s32, s32);
void func_00C109C0(s32, s32);
void func_00C10AB0(s32);
void func_00C10B20(s32, s32);
s32 func_00C17E10(s32, s32);

void func_00C0F230(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s0 = a1;
    { s32 c_ = s0 == 0; s2 = a0; if (c_) goto L_00C0F3F8; }
    at = (u64) s2 < (u64) (s64) 12;
    if (at == 0) goto L_00C0F3F8;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) s2 << 2);
    a0 = (s32) ((u32) a0 + 0x3230U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xc0f27cU) goto L_00C0F27C; if (t_ == 0xc0f2a8U) goto L_00C0F2A8; if (t_ == 0xc0f30cU) goto L_00C0F30C; if (t_ == 0xc0f32cU) goto L_00C0F32C; if (t_ == 0xc0f380U) goto L_00C0F380; if (t_ == 0xc0f3acU) goto L_00C0F3AC; if (t_ == 0xc0f3c8U) goto L_00C0F3C8; }
L_00C0F27C:;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) v1 >> 5;
    a1 = v1 & 0x1f;
    s0 = v0 & 0x1;
    a0 = s0; v0 = func_00C17E10(a0, a1);
    a0 = s0;
    a1 = v0 & 0xff; func_00C10640(a0, a1);
    goto L_00C0F3C8;
L_00C0F2A8:;
    v1 = (*(volatile u8 *) (u32) (s0 + 1));
    s3 = (*(volatile u8 *) (u32) (s0 + 3));
    v0 = (s32) v1 >> 5;
    a1 = v1 & 0x1f;
    s1 = v0 & 0x1;
    a0 = s1; v0 = func_00C17E10(a0, a1);
    v1 = 2;
    { s32 c_ = s2 == v1; s0 = v0 & 0xff; if (c_) goto L_00C0F3D0; }
    s2 = s3 & 0xff;
L_00C0F2D4:;
    v1 = s2 & 0x1;
    if (v1 != 0) goto L_00C0F3E4;
    v1 = s2 & 0x2;
    if (v1 != 0) goto L_00C0F3E4;
    v1 = s2 & 0x4;
L_00C0F2F0:;
    if (v1 == 0) goto L_00C0F3F8;
    a0 = s1;
    a1 = s0; func_00C10480(a0, a1);
    goto L_00C0F3C8;
L_00C0F30C:;
    v0 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) v0 >> 5;
    v0 = v0 & 0x1;
    v0 = v0 ^ 0x1;
    a0 = v0 & 0xff; func_00C10AB0(a0);
    goto L_00C0F3C8;
L_00C0F32C:;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) v1 >> 5;
    a1 = v1 & 0x1f;
    s1 = v0 & 0x1;
    a0 = s1; v0 = func_00C17E10(a0, a1);
    a0 = s1;
    a1 = v0; func_00C10B20(a0, a1);
    a0 = (*(volatile u8 *) (u32) (s0 + 1));
    v1 = 255;
    if (a0 == v1) goto L_00C0F3F8;
    a1 = a0 & 0x1f;
    a0 = s1; v0 = func_00C17E10(a0, a1);
    a0 = s1;
    a1 = v0; func_00C10950(a0, a1);
    goto L_00C0F3C8;
L_00C0F380:;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) v1 >> 5;
    a1 = v1 & 0x1f;
    s0 = v0 & 0x1;
    a0 = s0; v0 = func_00C17E10(a0, a1);
    a0 = s0;
    a1 = v0; func_00C109C0(a0, a1);
    goto L_00C0F3C8;
L_00C0F3AC:;
    v1 = (*(volatile u8 *) (u32) (s0 + 2));
    if (v1 == 0) goto L_00C0F3F8;
    v0 = (*(volatile u8 *) (u32) s0);
    v0 = (s32) v0 >> 5;
    a0 = v0 & 0x1; func_00C103D0(a0);
L_00C0F3C8:;
    goto L_00C0F3FC;
L_00C0F3D0:;
    a0 = s1;
    a1 = s0; func_00C106C0(a0, a1);
    s2 = s3 & 0xff; goto L_00C0F2D4;
L_00C0F3E4:;
    a0 = s1;
    a1 = s0; func_00C104F0(a0, a1);
    v1 = s2 & 0x4; goto L_00C0F2F0;
L_00C0F3F8:;
L_00C0F3FC:;
    return;
}
