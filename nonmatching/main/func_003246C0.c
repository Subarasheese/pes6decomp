/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00226710(void);
s32 func_0022A9A0(void);
s32 func_0022AAB0(void);
s32 func_0022ABC0(void);

s32 func_003246C0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    s64 frame[20];
    s32 sp = (s32) (u32) frame;

    v1 = 12;
    s4 = a0;
    s3 = a1;
    if (a2 == v1) goto L_0032470C;
    v1 = 11;
    if (a2 == v1) goto L_0032470C;
    v1 = 10;
    if (a2 == v1) goto L_0032470C;
    s2 = 0; goto L_003248EC;
L_0032470C:;
    v0 = func_0022AAB0();
    v0 = v0 & 0xff;
    at = v0 < 3;
    if (at == 0) { at = v0 < 5; goto L_0032472C; }
    s2 = 1; goto L_00324758;
L_0032472C:;
    if (at == 0) { at = v0 < 9; goto L_0032473C; }
    s2 = 2; goto L_00324758;
L_0032473C:;
    if (at == 0) { at = v0 < 17; goto L_0032474C; }
    s2 = 3; goto L_00324758;
L_0032474C:;
    if (at == 0) { s2 = 5; goto L_00324758; }
    s2 = 4;
L_00324758:;
    s1 = 0; v0 = func_0022ABC0();
    if (v0 == 0) goto L_00324770;
    s1 = 8; goto L_003248F0;
L_00324770:;
    v0 = func_0022A9A0();
    a2 = 5;
    { s32 c_ = s2 == a2; a0 = v0 & 0xff; if (c_) goto L_00324890; }
    a1 = 4;
    if (s2 == a1) goto L_00324840;
    v1 = 3;
    if (s2 == v1) { a0 = a0 & 0xff; goto L_00324800; }
    v1 = 2;
    if (s2 == v1) { a0 = a0 & 0xff; goto L_003247BC; }
    v1 = 1;
    if (s2 == v1) { s1 = a2; goto L_003248F0; }
    (*(volatile u32 *) (u32) s3) = (u32) s2; goto L_003248F4;
L_003247BC:;
    if (a0 == v1) { s0 = a2; goto L_003247F4; }
    v1 = 1;
    if (a0 == v1) goto L_003247D8;
    s1 = s0; goto L_003247F8;
L_003247D8:;
    v0 = func_00226710();
    a0 = v0 & 0xff;
    v1 = 8;
    if (a0 != v1) { s0 = 1; goto L_003247F4; }
    s0 = 4;
L_003247F4:;
    s1 = s0;
L_003247F8:;
    goto L_003248F0;
L_00324800:;
    if (a0 == v1) { s0 = a2; goto L_00324834; }
    v1 = 2;
    if (a0 == v1) { s0 = a1; goto L_00324834; }
    v1 = 1;
    if (a0 == v1) goto L_00324828;
    s1 = s0; goto L_00324838;
L_00324828:;
    v0 = func_00226710();
    s0 = 1;
L_00324834:;
    s1 = s0;
L_00324838:;
    goto L_003248F0;
L_00324840:;
    v1 = (s32) 0x3b0000U;
    a0 = a0 & 0xff;
    f0.f = (*(volatile f32 *) (u32) (v1 + 29248));
    v1 = (s32) ((u32) a0 << 2);
    a1 = (s32) ((u32) v1 + (u32) sp);
    a0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 29252));
    (*(volatile f32 *) (u32) (sp + 128)) = f0.f;
    v1 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 29256));
    (*(volatile f32 *) (u32) (sp + 132)) = f1.f;
    f1.f = (*(volatile f32 *) (u32) (a0 + 29260));
    (*(volatile f32 *) (u32) (sp + 136)) = f0.f;
    v1 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 29264));
    (*(volatile f32 *) (u32) (sp + 140)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 144)) = f0.f;
    s1 = (*(volatile s32 *) (u32) (a1 + 128)); goto L_003248F0;
L_00324890:;
    v1 = (s32) 0x3b0000U;
    a0 = a0 & 0xff;
    f1.f = (*(volatile f32 *) (u32) (v1 + 29280));
    v1 = (s32) ((u32) a0 << 2);
    a1 = (s32) ((u32) v1 + (u32) sp);
    a0 = (s32) 0x3b0000U;
    v1 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 29284));
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f;
    v1 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 29288));
    (*(volatile f32 *) (u32) (sp + 100)) = f0.f;
    f0.f = (*(volatile f32 *) (u32) (a0 + 29292));
    (*(volatile f32 *) (u32) (sp + 104)) = f1.f;
    v1 = (s32) 0x3b0000U;
    f1.f = (*(volatile f32 *) (u32) (v1 + 29296));
    (*(volatile f32 *) (u32) (sp + 108)) = f0.f;
    v1 = (s32) 0x3b0000U;
    f0.f = (*(volatile f32 *) (u32) (v1 + 29300));
    (*(volatile f32 *) (u32) (sp + 112)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 116)) = f0.f;
    s1 = (*(volatile s32 *) (u32) (a1 + 96)); goto L_003248F0;
L_003248EC:;
    s1 = 0;
L_003248F0:;
    (*(volatile u32 *) (u32) s3) = (u32) s2;
L_003248F4:;
    (*(volatile u32 *) (u32) s4) = (u32) s1;
    return v0;
}
