/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001F2770(s64, f32);

s64 func_002DBC20(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    union { f32 f; s32 i; } f3 = { 0 };
    union { f32 f; s32 i; } f12 = { fa12 };
    f32 acc = 0;

    s0 = a0;
    if (s0 == 0) { ; goto L_002DBF28; }
    v1 = (*(volatile s8 *) (u32) (s0 + 21));
    if (v1 > 0) goto L_002DBF24;
    v1 = (*(volatile s16 *) (u32) s0);
    if (v1 == 0) goto L_002DBF24;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    at = v1 < a1;
    if (at == 0) goto L_002DBC68;
    a1 = (s64) ((u64) v1 << 48); goto L_002DBC7C;
L_002DBC68:;
    if (a1 >= 0) goto L_002DBC74;
    a1 = 0;
L_002DBC74:;
    v1 = a1;
    a1 = (s64) ((u64) v1 << 48);
L_002DBC7C:;
    (*(volatile u16 *) (u32) (s0 + 24)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (s0 + 26));
    a1 = a1 >> 48;
    at = a1 < v1;
    if (at == 0) { a0 = (*(volatile s16 *) (u32) (s0 + 2)); goto L_002DBDB0; }
    (*(volatile u16 *) (u32) (s0 + 26)) = (u16) a1;
    v1 = 1;
    (*(volatile u8 *) (u32) (s0 + 20)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) a2;
    { s32 c_ = a2 != 0; (*(volatile u8 *) (u32) (s0 + 21)) = (u8) a2; if (c_) goto L_002DBEDC; }
    v0 = (*(volatile s8 *) (u32) (s0 + 21));
    if (v0 != 0) { v0 = (*(volatile u8 *) (u32) (s0 + 20)); goto L_002DBCEC; }
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
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v0; goto L_002DBD4C;
L_002DBCEC:;
    if (v0 != 0) goto L_002DBD20;
    v0 = (*(volatile s8 *) (u32) (s0 + 22));
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.f = (*(volatile f32 *) (u32) (s0 + 32));
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f1.f / f2.f;
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (s0 + 32)) = f0.f; goto L_002DBD4C;
L_002DBD20:;
    if (v0 != v1) { f1.f = (*(volatile f32 *) (u32) (s0 + 4)); goto L_002DBD50; }
    v0 = (*(volatile s8 *) (u32) (s0 + 22));
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.f = (*(volatile f32 *) (u32) (s0 + 32));
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f1.f / f2.f;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s0 + 32)) = f0.f;
L_002DBD4C:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
L_002DBD50:;
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
    if (v1 == 0) { a0 = (*(volatile s16 *) (u32) (s0 + 24)); goto L_002DBEE0; }
    a1 = (*(volatile s32 *) (u32) (s0 + 48));
    { u32 t_ = (u32) v1; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    goto L_002DBEDC;
L_002DBDB0:;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    at = v1 < a1;
    if (at == 0) goto L_002DBEDC;
    v1 = (s32) ((u32) a1 - (u32) a0);
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u16 *) (u32) (s0 + 26)) = (u16) v1;
    (*(volatile u8 *) (u32) (s0 + 20)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 22)) = (u8) a2;
    { s32 c_ = a2 != 0; (*(volatile u8 *) (u32) (s0 + 21)) = (u8) a2; if (c_) goto L_002DBEDC; }
    v0 = (*(volatile s8 *) (u32) (s0 + 21));
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (s0 + 20)); goto L_002DBE20; }
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
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v0; goto L_002DBE80;
L_002DBE20:;
    if (v1 != 0) { v0 = 1; goto L_002DBE54; }
    v0 = (*(volatile s8 *) (u32) (s0 + 22));
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.f = (*(volatile f32 *) (u32) (s0 + 32));
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f1.f / f2.f;
    f0.f = f0.f - f1.f;
    (*(volatile f32 *) (u32) (s0 + 32)) = f0.f; goto L_002DBE80;
L_002DBE54:;
    if (v1 != v0) { f1.f = (*(volatile f32 *) (u32) (s0 + 4)); goto L_002DBE84; }
    v0 = (*(volatile s8 *) (u32) (s0 + 22));
    f1.f = (*(volatile f32 *) (u32) (s0 + 8));
    f0.f = (*(volatile f32 *) (u32) (s0 + 32));
    f2.i = (s32) v0;
    f2.f = (f32) f2.i;
    f1.f = f1.f / f2.f;
    f0.f = f0.f + f1.f;
    (*(volatile f32 *) (u32) (s0 + 32)) = f0.f;
L_002DBE80:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
L_002DBE84:;
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
    if (v1 == 0) goto L_002DBEDC;
    a1 = (*(volatile s32 *) (u32) (s0 + 48));
    { u32 t_ = (u32) v1; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_002DBEDC:;
    a0 = (*(volatile s16 *) (u32) (s0 + 24));
L_002DBEE0:;
    f1.f = (*(volatile f32 *) (u32) (s0 + 4));
    v1 = (*(volatile s16 *) (u32) (s0 + 26));
    f0.i = (s32) 0;
    f2.f = (*(volatile f32 *) (u32) (s0 + 8));
    acc = f0.f + f1.f;
    v1 = (s32) ((u32) a0 - (u32) v1);
    f0.i = (s32) v1;
    f0.f = (f32) f0.i;
    f0.f = acc + f2.f * f0.f;
    (*(volatile f32 *) (u32) (s0 + 28)) = f0.f;
    v1 = (*(volatile s32 *) (u32) (s0 + 36));
    if (v1 == 0) goto L_002DBF24;
    a1 = (*(volatile s32 *) (u32) (s0 + 44));
    { u32 t_ = (u32) v1; a0 = s0; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_002DBF24:;
L_002DBF28:;
    return v0;
}
