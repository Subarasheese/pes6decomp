/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C7EB0(s32, s32, s32);
s32 func_002C9C40(s32);
void func_008B3050(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008B3FD0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_008E60D0(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008C2D40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    s1 = a0;
    { s32 c_ = s1 == 0; s0 = a1; if (c_) goto L_008C2E3C; }
    if (s0 == 0) { ; goto L_008C2E40; }
    a0 = (*(volatile u8 *) (u32) (s1 + 7780)); v0 = func_002C9C40(a0);
    a1 = (*(volatile u8 *) (u32) (s1 + 7781));
    v1 = 23;
    a3 = (*(volatile u8 *) (u32) (s1 + 7784));
    a0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (s32) ((u32) v0 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) a0);
    { s32 c_ = a0 != v1; a4 = (*(volatile u8 *) (u32) (s1 + 7782)); if (c_) goto L_008C2D9C; }
    a1 = 0;
    a4 = 0;
    a3 = 0;
L_008C2D9C:;
    a0 = a1 & 0xff;
    a2 = (s32) ((u32) sp + 0x3cU);
    v1 = (s32) ((u32) a0 << 1);
    a1 = (s32) ((u32) s0 + 0x8ccU);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v1);
    (*(volatile u8 *) (u32) (sp + 60)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 61)) = (u8) a4;
    v0 = (*(volatile u8 *) (u32) (v1 + 1));
    (*(volatile u8 *) (u32) (sp + 62)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 63)) = (u8) a3;
    v1 = (*(volatile u8 *) (u32) (s0 + 1854));
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a0 = (s32) ((u32) v0 + 0x7d6U); func_002C7EB0(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s0 + 1854));
    if (v1 != 0) { v0 = (s32) ((u32) v1 << 2); goto L_008C2E10; }
    a1 = s0;
    a0 = s1; func_008B3050(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    a0 = s1; goto L_008C2E34;
L_008C2E10:;
    a0 = (s32) ((u32) s1 + 0x129cU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s0 + (u32) v0);
    a1 = (s32) ((u32) v0 + 0x7d5U); func_008E60D0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s1;
L_008C2E34:;
    func_008B3FD0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
L_008C2E3C:;
L_008C2E40:;
    return;
}
