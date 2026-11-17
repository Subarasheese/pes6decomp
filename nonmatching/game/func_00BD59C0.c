/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00209540(s64, s64, s64);
s64 func_00BBB8C0(s64);

s64 func_00BD59C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    a3 = 0;
    s2 = a0;
    s1 = a1;
    v0 = (*(volatile s32 *) (u32) a0);
    s0 = 0;
    a1 = 0;
    a0 = (*(volatile s32 *) (u32) (v0 + 28));
    v1 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + 0x2418U);
L_00BD59F8:;
    v0 = a3 & 0xff;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile u16 *) (u32) v0);
    at = v0 < a0;
    if (at == 0) goto L_00BD5C08;
    a3 = (s32) ((u32) a3 + 0x1U);
    v0 = a3 < 6;
    if (v0 != 0) goto L_00BD59F8;
    at = (u64) a3 < (u64) (s64) 6; goto L_00BD5C0C;
L_00BD5A2C:;
    if (a2 < 0) { v1 = (s32) ((u32) a2 >> 1); goto L_00BD5A40; }
    f0.i = (s32) a2;
    f1.f = (f32) f0.i; goto L_00BD5A58;
L_00BD5A40:;
    v0 = a2 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00BD5A58:;
    v0 = (s32) 0x469c0000U;
    v0 = v0 | 0x71c7;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_00BD5C30;
    a1 = (s64) ((u64) 0 + (u64) (s64) 1118); goto L_00BD5BF8;
L_00BD5A7C:;
    if (a2 < 0) { v1 = (s32) ((u32) a2 >> 1); goto L_00BD5A90; }
    f0.i = (s32) a2;
    f1.f = (f32) f0.i; goto L_00BD5AA8;
L_00BD5A90:;
    v0 = a2 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00BD5AA8:;
    v0 = (s32) 0x46470000U;
    v0 = v0 | 0x1c72;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { a1 = (s64) ((u64) 0 + (u64) (s64) 1082); goto L_00BD5BF8; }
    if (a2 < 0) { v1 = (s32) ((u32) a2 >> 1); goto L_00BD5AD8; }
    f0.i = (s32) a2;
    f1.f = (f32) f0.i; goto L_00BD5AF0;
L_00BD5AD8:;
    v0 = a2 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00BD5AF0:;
    v0 = (s32) 0x469c0000U;
    v0 = v0 | 0x71c7;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { a1 = (s64) ((u64) 0 + (u64) (s64) 1121); goto L_00BD5BF8; }
    a1 = (s64) ((u64) 0 + (u64) (s64) 1119); goto L_00BD5BF8;
L_00BD5B14:;
    if (a2 < 0) { v1 = (s32) ((u32) a2 >> 1); goto L_00BD5B28; }
    f0.i = (s32) a2;
    f1.f = (f32) f0.i; goto L_00BD5B40;
L_00BD5B28:;
    v0 = a2 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00BD5B40:;
    v0 = (s32) 0x469c0000U;
    v0 = v0 | 0x71c7;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { a1 = (s64) ((u64) 0 + (u64) (s64) 1204); goto L_00BD5BF8; }
    a1 = (s64) ((u64) 0 + (u64) (s64) 1203); goto L_00BD5BF8;
L_00BD5B64:;
    if (a2 < 0) { v1 = (s32) ((u32) a2 >> 1); goto L_00BD5B78; }
    f0.i = (s32) a2;
    f1.f = (f32) f0.i; goto L_00BD5B90;
L_00BD5B78:;
    v0 = a2 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00BD5B90:;
    v0 = (s32) 0x46470000U;
    v0 = v0 | 0x1c72;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (fcc) { a1 = (s64) ((u64) 0 + (u64) (s64) 1068); goto L_00BD5BF8; }
    if (a2 < 0) { v1 = (s32) ((u32) a2 >> 1); goto L_00BD5BC0; }
    f0.i = (s32) a2;
    f1.f = (f32) f0.i; goto L_00BD5BD8;
L_00BD5BC0:;
    v0 = a2 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f1.f = (f32) f0.i;
    f1.f = f1.f + f1.f;
L_00BD5BD8:;
    v0 = (s32) 0x469c0000U;
    v0 = v0 | 0x71c7;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) { a1 = (s64) ((u64) 0 + (u64) (s64) 1201); goto L_00BD5BF8; }
    a1 = (s64) ((u64) 0 + (u64) (s64) 1200);
L_00BD5BF8:;
    if (a1 != 0) { v0 = (*(volatile s32 *) (u32) s2); goto L_00BD5C48; }
L_00BD5C00:;
    v0 = s0; goto L_00BD5C90;
L_00BD5C08:;
    at = (u64) a3 < (u64) (s64) 6;
L_00BD5C0C:;
    if (at == 0) goto L_00BD5BF8;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) a3 << 2);
    v1 = (s32) ((u32) v1 + 0x2500U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbd5a2cU) goto L_00BD5A2C; if (t_ == 0xbd5a7cU) goto L_00BD5A7C; if (t_ == 0xbd5b14U) goto L_00BD5B14; if (t_ == 0xbd5b64U) goto L_00BD5B64; }
L_00BD5C30:;
    a0 = 2; v0 = func_00BBB8C0(a0);
    if (v0 == 0) { a1 = (s64) ((u64) 0 + (u64) (s64) 1120); goto L_00BD5BF8; }
    a1 = (s64) ((u64) 0 + (u64) (s64) 1195); goto L_00BD5BF8;
L_00BD5C48:;
    a3 = s1 & 0xffff;
    a0 = (s32) 0x10000U;
    v1 = 0x8001;
    a4 = (*(volatile u16 *) (u32) (v0 + 38));
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a3 = (s32) ((u32) a4 - (u32) a3);
    a0 = (s32) ((u32) a3 + (u32) a0);
    a0 = a0 & 0xffff;
    v1 = a0 < v1;
    (*(volatile u8 *) (u32) (v0 + 45)) = (u8) v1;
    v0 = (*(volatile s32 *) (u32) s2);
    (*(volatile u16 *) (u32) (v0 + 44)) = (u16) s1;
    v0 = (*(volatile s32 *) (u32) s2);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    a2 = 0; func_00209540(a0, a1, a2);
    s0 = 1; goto L_00BD5C00;
L_00BD5C90:;
    return v0;
}
