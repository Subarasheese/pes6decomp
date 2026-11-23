/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001D79A0(s64, s64);
s64 func_001D7A20(s64, s64, s64);
void func_001D7D80(s64, s64, s64, s64);
void func_001D7F10(s64, s64, s64, s64);
s64 func_008B9430(void);
s64 func_008B9650(void);
s64 func_008B96B0(void);
s64 func_008C1490(s64, s64, s64, s64, f32);

void func_008C5230(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    v0 = 16;
    v1 = (s32) ((u32) sp + 0x60U);
    s4 = a2;
    s3 = a1;
    s1 = 0;
    { s32 c_ = v1 == 0; s0 = a0; if (c_) goto L_008C5284; }
L_008C5268:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_008C5268;
L_008C5284:;
    s2 = 0; v0 = func_008B9430();
    if (v0 == 0) { at = (u64) s3 < (u64) (s64) 10; goto L_008C52D8; }
    v0 = func_008B96B0();
    v0 = v0 & 0xff;
    if (s4 != v0) { s4 = 1; goto L_008C52AC; }
    s4 = 0;
L_008C52AC:;
    v0 = 8;
    if (s3 != v0) goto L_008C52D4;
    v0 = func_008B9650();
    v1 = 2;
    if (v0 != v1) goto L_008C52D4;
    s3 = v1;
    s4 = 1;
L_008C52D4:;
    at = (u64) s3 < (u64) (s64) 10;
L_008C52D8:;
    if (at == 0) { a0 = 0; goto L_008C539C; }
    v1 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) s3 << 2);
    v1 = (s32) ((u32) v1 + 0xffffcde0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8c52fcU) goto L_008C52FC; if (t_ == 0x8c5310U) goto L_008C5310; if (t_ == 0x8c5324U) goto L_008C5324; if (t_ == 0x8c5338U) goto L_008C5338; if (t_ == 0x8c534cU) goto L_008C534C; if (t_ == 0x8c5360U) goto L_008C5360; if (t_ == 0x8c5374U) goto L_008C5374; if (t_ == 0x8c5388U) goto L_008C5388; }
L_008C52FC:;
    v0 = 1;
    if (s4 != v0) { s2 = 0; goto L_008C5398; }
    s2 = 2; goto L_008C5398;
L_008C5310:;
    v0 = 1;
    if (s4 != v0) { s2 = 4; goto L_008C5398; }
    s2 = 5; goto L_008C5398;
L_008C5324:;
    v0 = 1;
    if (s4 != v0) { s2 = 6; goto L_008C5398; }
    s2 = 7; goto L_008C5398;
L_008C5338:;
    v0 = 1;
    if (s4 != v0) { s2 = 8; goto L_008C5398; }
    s2 = 9; goto L_008C5398;
L_008C534C:;
    v0 = 1;
    if (s4 != v0) { s2 = 8; goto L_008C5398; }
    s2 = 10; goto L_008C5398;
L_008C5360:;
    v0 = 1;
    if (s4 != v0) { s2 = 11; goto L_008C5398; }
    s2 = 12; goto L_008C5398;
L_008C5374:;
    v0 = 1;
    if (s4 != v0) { s2 = 13; goto L_008C5398; }
    s2 = 14; goto L_008C5398;
L_008C5388:;
    s2 = 1;
    if (s4 != s2) goto L_008C5398;
    s2 = 3;
L_008C5398:;
    a0 = 0;
L_008C539C:;
    a1 = (s32) ((u32) sp + 0x60U); v0 = func_008C1490(a0, a1, a2, a3, f12.f);
    s3 = v0; v0 = func_008B9650();
    v1 = 3;
    if (v0 == v1) { s1 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_008C53C4; }
    v1 = 2;
    if (v0 == v1) { s1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_008C53C4; }
L_008C53C4:;
    a1 = s1 & 0xff;
    a0 = s3; func_001D7D80(a0, a1, a2, a3);
    a2 = s2 & 0xffff;
    a0 = s3;
    a1 = (s32) ((u32) sp + 0x70U); v0 = func_001D7A20(a0, a1, a2);
    a1 = s2 & 0xffff;
    a0 = s3; f0.f = func_001D79A0(a0, a1);
    (*(volatile f32 *) (u32) (s0 + 12)) = f0.f;
    a0 = s3; func_001D7F10(a0, a1, a2, a3);
    f0.f = (*(volatile f32 *) (u32) (sp + 112));
    v1 = 1;
    (*(volatile f32 *) (u32) s0) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (sp + 116));
    { s32 c_ = s4 != v1; (*(volatile f32 *) (u32) (s0 + 4)) = f0.f; if (c_) goto L_008C5420; }
    v1 = (s32) 0x451c0000U;
    v1 = v1 | 0x4000;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) v1; goto L_008C5424;
L_008C5420:;
    (*(volatile u32 *) (u32) (s0 + 8)) = (u32) 0;
L_008C5424:;
    return;
}
