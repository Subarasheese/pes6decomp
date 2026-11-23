/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008C98A0(s32, s32, s32);
void func_008D0270(s32);
void func_008D1C70(s32, s32, s32, s32);
s32 func_008D1ED0(s32);
s32 func_008D1F00(s32);
void func_008D20A0(s32, s32, s32);
void func_008D2100(s32, s32, s32);
s32 func_008D2780(s32, s32, s32, s32, f32, f32);

void func_008CAA10(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    v1 = (*(volatile s32 *) (u32) (gp + -20092));
    { s32 c_ = v1 >= 0; a0 = v1 & 0xff; if (c_) goto L_008CAA44; }
    if (a0 == 0) { v1 = (*(volatile u8 *) (u32) (s2 + 20)); goto L_008CAA48; }
    a0 = (s32) ((u32) a0 + 0xffffff00U);
L_008CAA44:;
    v1 = (*(volatile u8 *) (u32) (s2 + 20));
L_008CAA48:;
    if (a0 == v1) { ; goto L_008CAB6C; }
    (*(volatile u8 *) (u32) (s2 + 20)) = (u8) a0;
    a0 = (s32) ((u32) s2 + 0x480U); v0 = func_008D2780(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_008CAB58;
    a0 = (s32) ((u32) s2 + 0x480U); v0 = func_008D1F00(a0);
    s0 = v0;
    a0 = (s32) ((u32) s2 + 0x480U);
    s1 = -1; v0 = func_008D1ED0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    at = v0 < 0;
    if (at != 0) goto L_008CAB58;
    s3 = (s32) ((u32) s1 + (u32) s0);
L_008CAA94:;
    a0 = s2;
    a1 = s3;
    a2 = (s32) ((u32) sp + 0x5cU); func_008C98A0(a0, a1, a2);
    a2 = (s32) ((u32) s1 + 0x1U);
    a0 = (s32) ((u32) s2 + 0x480U);
    a1 = (s32) ((u32) sp + 0x5cU); func_008D2100(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (s2 + 1140));
    { s32 c_ = a2 == 0; a3 = 0; if (c_) goto L_008CAB28; }
    if (s3 < 0) goto L_008CAB28;
    v0 = (*(volatile u8 *) (u32) (a2 + 33));
    at = s3 < v0;
    if (at == 0) goto L_008CAB28;
    a1 = (*(volatile u8 *) (u32) (a2 + 842));
    { s32 c_ = a1 <= 0; a4 = 0; if (c_) goto L_008CAB28; }
    v0 = (s32) ((u32) a2 + (u32) s3);
    v1 = 1;
    a0 = (*(volatile u8 *) (u32) (v0 + 1));
L_008CAAF0:;
    v0 = (*(volatile u8 *) (u32) (a2 + 828));
    if (v0 != a0) goto L_008CAB08;
    a3 = v1; goto L_008CAB18;
L_008CAB08:;
    v0 = (*(volatile u8 *) (u32) (a2 + 829));
    if (v0 != a0) goto L_008CAB18;
    a3 = v1;
L_008CAB18:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < a1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_008CAAF0; }
L_008CAB28:;
    a2 = a3 & 0xff;
    a1 = (s32) ((u32) s1 + 0x1U);
    a0 = (s32) ((u32) s2 + 0x480U); func_008D20A0(a0, a1, a2);
    a0 = (s32) ((u32) s2 + 0x480U);
    s1 = (s32) ((u32) s1 + 0x1U); v0 = func_008D1ED0(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0x1U);
    v0 = s1 < v0;
    if (v0 != 0) { s3 = (s32) ((u32) s1 + (u32) s0); goto L_008CAA94; }
L_008CAB58:;
    a0 = (s32) ((u32) s2 + 0x480U); func_008D1C70(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x480U); func_008D0270(a0);
L_008CAB6C:;
    return;
}
