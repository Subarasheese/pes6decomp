/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F2770(s32, f32);

s32 func_002DB960(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    f32 acc = 0;

    s0 = a0;
    if (s0 == 0) { ; goto L_002DBC14; }
    v1 = (*(volatile s8 *) (u32) (s0 + 21));
    if (v1 > 0) goto L_002DBC10;
    a3 = (*(volatile s16 *) (u32) s0);
    if (a3 == 0) goto L_002DBC10;
    v1 = (*(volatile s16 *) (u32) (s0 + 2));
    at = v1 < a3;
    { s32 c_ = at != 0; a0 = (*(volatile s16 *) (u32) (s0 + 26)); if (c_) goto L_002DB9A8; }
    (*(volatile u16 *) (u32) (s0 + 26)) = (u16) 0; goto L_002DB9D4;
L_002DB9A8:;
    v1 = (s32) ((u32) a3 - (u32) v1);
    at = v1 < a1;
    if (at == 0) goto L_002DB9C0;
    (*(volatile u16 *) (u32) (s0 + 26)) = (u16) v1; goto L_002DB9D4;
L_002DB9C0:;
    if (a1 >= 0) goto L_002DB9CC;
    a1 = 0;
L_002DB9CC:;
    v1 = a1;
    (*(volatile u16 *) (u32) (s0 + 26)) = (u16) v1;
L_002DB9D4:;
    v1 = (*(volatile s16 *) (u32) (s0 + 26));
    at = v1 < a0;
    if (at == 0) { at = a0 < v1; goto L_002DBAFC; }
    v1 = 1;
    (*(volatile u8 *) (u32) (s0 + 20)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) a2;
    { s32 c_ = a2 != 0; (*(volatile u8 *) (u32) (s0 + 21)) = (u8) a2; if (c_) goto L_002DBC10; }
    v0 = (*(volatile s8 *) (u32) (s0 + 21));
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s0 + 20)); goto L_002DBA38; }
    v0 = (*(volatile s16 *) (u32) (s0 + 26));
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (s0 + 8));
    f3.i = (s32) v0;
    acc = f0.f + f1.f;
    f0.f = (f32) f3.i;
    f0.f = acc - f0.f * f2.f;
    (*(volatile f32 *) (u32) (s0 + 32)) = f0.f;
    v0 = (*(volatile u8 *) (u32) (s0 + 12));
    v0 = v0 | 0x8;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v0; goto L_002DBA98;
L_002DBA38:;
    if (v0 != 0) goto L_002DBA6C;
    v0 = (*(volatile s8 *) (u32) (s0 + 22));
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.f = (*(volatile f32 *) (u32) (s0 + 32));
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f1.f / f2.f;
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (s0 + 32)) = f0.f; goto L_002DBA98;
L_002DBA6C:;
    if (v0 != v1) { f1.f = (*(volatile f32 *) (u32) (s0 + 4)); goto L_002DBA9C; }
    v0 = (*(volatile s8 *) (u32) (s0 + 22));
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.f = (*(volatile f32 *) (u32) (s0 + 32));
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f1.f / f2.f;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s0 + 32)) = f0.f;
L_002DBA98:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
L_002DBA9C:;
    v1 = (*(volatile s16 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (s0 + 32));
    v0 = (*(volatile s16 *) (u32) (s0 + 2));
    f2.f = (*(volatile f32 *) (u32) (s0 + 8));
    a0 = (*(volatile s32 *) (u32) (s0 + 60));
    f0.f = f1.f - f0.f;
    v0 = (s32) ((u32) v1 - (u32) v0);
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f1.f = f2.f * f1.f;
    f12.f = f0.f / f1.f;
    v0 = func_001F2770(a0, f12.f);
    v1 = (*(volatile s32 *) (u32) (s0 + 40));
    if (v1 == 0) goto L_002DBC10;
    a1 = (*(volatile s32 *) (u32) (s0 + 48));
    { u32 t_ = (u32) v1; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_002DBC10;
L_002DBAFC:;
    if (at == 0) goto L_002DBC10;
    (*(volatile u8 *) (u32) (s0 + 20)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) a2;
    { s32 c_ = a2 != 0; (*(volatile u8 *) (u32) (s0 + 21)) = (u8) a2; if (c_) goto L_002DBC10; }
    v0 = (*(volatile s8 *) (u32) (s0 + 21));
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (s0 + 20)); goto L_002DBB54; }
    v0 = (*(volatile s16 *) (u32) (s0 + 26));
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (s0 + 8));
    f3.i = (s32) v0;
    acc = f0.f + f1.f;
    f0.f = (f32) f3.i;
    f0.f = acc - f0.f * f2.f;
    (*(volatile f32 *) (u32) (s0 + 32)) = f0.f;
    v0 = (*(volatile u8 *) (u32) (s0 + 12));
    v0 = v0 | 0x8;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v0; goto L_002DBBB4;
L_002DBB54:;
    if (v1 != 0) { v0 = 1; goto L_002DBB88; }
    v0 = (*(volatile s8 *) (u32) (s0 + 22));
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.f = (*(volatile f32 *) (u32) (s0 + 32));
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f1.f / f2.f;
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (s0 + 32)) = f0.f; goto L_002DBBB4;
L_002DBB88:;
    if (v1 != v0) { f1.f = (*(volatile f32 *) (u32) (s0 + 4)); goto L_002DBBB8; }
    v0 = (*(volatile s8 *) (u32) (s0 + 22));
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.f = (*(volatile f32 *) (u32) (s0 + 32));
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f1.f / f2.f;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s0 + 32)) = f0.f;
L_002DBBB4:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
L_002DBBB8:;
    v1 = (*(volatile s16 *) (u32) s0);
    f0.f = (*(volatile f32 *) (u32) (s0 + 32));
    v0 = (*(volatile s16 *) (u32) (s0 + 2));
    f2.f = (*(volatile f32 *) (u32) (s0 + 8));
    a0 = (*(volatile s32 *) (u32) (s0 + 60));
    f0.f = f1.f - f0.f;
    v0 = (s32) ((u32) v1 - (u32) v0);
    f1.i = (s32) v0;
    f1.f = (f32) f1.i;
    f1.f = f2.f * f1.f;
    f12.f = f0.f / f1.f;
    v0 = func_001F2770(a0, f12.f);
    v1 = (*(volatile s32 *) (u32) (s0 + 40));
    if (v1 == 0) goto L_002DBC10;
    a1 = (*(volatile s32 *) (u32) (s0 + 48));
    { u32 t_ = (u32) v1; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_002DBC10:;
L_002DBC14:;
    return v0;
}
