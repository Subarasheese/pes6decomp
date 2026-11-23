/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001B9DD0(s64);
s64 func_001B9DF0(void);
void func_001B9E30(s64, s64, s64, s64);

void func_008C0270(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s64 frame[20];
    s64 sp = (s32) (u32) frame;

    v1 = 3;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v1;
    v1 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (v1 + 7177));
    v1 = 14;
    if (a1 == v1) { a0 = (s32) ((u32) sp + 0x88U); goto L_008C0358; }
    v1 = 5;
    if (a1 == v1) { a0 = (s32) ((u32) sp + 0x88U); goto L_008C0348; }
    v1 = 4;
    if (a1 == v1) { v1 = (s32) ((u32) sp + 0x48U); goto L_008C0330; }
    v1 = 2;
    if (a1 == v1) { v1 = (s32) ((u32) sp + 0x58U); goto L_008C0318; }
    a0 = 1;
    if (a1 == a0) { (*(volatile u32 *) (u32) (sp + 156)) = (u32) v1; goto L_008C0304; }
    v1 = 7;
    if (a1 == v1) { v1 = (s32) ((u32) sp + 0x38U); goto L_008C02F8; }
    if (a1 == 0) { v1 = (s32) ((u32) sp + 0x78U); goto L_008C02E0; }
    v1 = (s32) ((u32) sp + 0x88U); goto L_008C0368;
L_008C02E0:;
    a0 = (s32) ((u32) sp + 0x88U);
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) v1;
    v1 = (s32) ((u32) sp + 0x38U);
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v1; goto L_008C0370;
L_008C02F8:;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) v1; goto L_008C0370;
L_008C0304:;
    v1 = (s32) ((u32) sp + 0x68U);
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) v1;
    v1 = (s32) ((u32) sp + 0x88U);
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) v1; goto L_008C0370;
L_008C0318:;
    a0 = (s32) ((u32) sp + 0x88U);
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) v1;
    v1 = (s32) ((u32) sp + 0x28U);
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v1; goto L_008C0370;
L_008C0330:;
    a0 = (s32) ((u32) sp + 0x88U);
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) v1;
    v1 = 2;
    (*(volatile u32 *) (u32) (sp + 28)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v1; goto L_008C0370;
L_008C0348:;
    v1 = 1;
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v1; goto L_008C0370;
L_008C0358:;
    v1 = 1;
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) v1; goto L_008C0370;
L_008C0368:;
    (*(volatile u32 *) (u32) (sp + 156)) = (u32) a0;
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) v1;
L_008C0370:;
    a1 = (*(volatile u8 *) (u32) (gp + -32364));
    a0 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) a0 + 0xffffc270U);
    v1 = (s32) 0x10000U;
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    if (a0 != v1) { ; goto L_008C0464; }
    v0 = (s32) 0x8e0000U;
    v1 = (s32) 0x8e0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -23936));
    a0 = (*(volatile s64 *) (u32) (v1 + -23944));
    v0 = (s32) 0x8e0000U;
    (*(volatile u64 *) (u32) (sp + 120)) = (u64) a0;
    f0.f = (*(volatile f32 *) (u32) (v0 + -23920));
    v1 = (s32) 0x8e0000U;
    v1 = (*(volatile s64 *) (u32) (v1 + -23928));
    a0 = (s32) 0x8e0000U;
    a0 = (*(volatile s64 *) (u32) (a0 + -23912));
    (*(volatile f32 *) (u32) (sp + 128)) = f1.f;
    v0 = (s32) 0x8e0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -23904));
    (*(volatile u64 *) (u32) (sp + 104)) = (u64) v1;
    (*(volatile u64 *) (u32) (sp + 88)) = (u64) a0;
    v1 = (s32) 0x8e0000U;
    a1 = (*(volatile s64 *) (u32) (v1 + -23896));
    a0 = (s32) 0x8e0000U;
    (*(volatile f32 *) (u32) (sp + 112)) = f0.f;
    v0 = (s32) 0x8e0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -23888));
    a0 = (*(volatile s64 *) (u32) (a0 + -23864));
    (*(volatile u64 *) (u32) (sp + 72)) = (u64) a1;
    v1 = (s32) 0x8e0000U;
    a1 = (*(volatile s64 *) (u32) (v1 + -23880));
    (*(volatile f32 *) (u32) (sp + 96)) = f1.f;
    v0 = (s32) 0x8e0000U;
    (*(volatile u64 *) (u32) (sp + 40)) = (u64) a0;
    f2.f = (*(volatile f32 *) (u32) (v0 + -23872));
    v1 = (s32) 0x8e0000U;
    (*(volatile u64 *) (u32) (sp + 56)) = (u64) a1;
    v1 = (*(volatile s64 *) (u32) (v1 + -23960));
    (*(volatile f32 *) (u32) (sp + 80)) = f0.f;
    v0 = (s32) 0x8e0000U;
    f1.f = (*(volatile f32 *) (u32) (v0 + -23856));
    (*(volatile u64 *) (u32) (sp + 136)) = (u64) v1;
    (*(volatile f32 *) (u32) (sp + 64)) = f2.f;
    v0 = (s32) 0x8e0000U;
    f0.f = (*(volatile f32 *) (u32) (v0 + -23952));
    (*(volatile f32 *) (u32) (sp + 48)) = f1.f;
    (*(volatile f32 *) (u32) (sp + 144)) = f0.f; v0 = func_001B9DF0();
    if (v0 != 0) goto L_008C0460;
    a0 = (*(volatile u8 *) (u32) (gp + -32364)); func_001B9DD0(a0);
    v0 = (s32) ((u32) sp + 0x18U);
    a0 = (s32) ((u32) sp + 0x98U);
    (*(volatile u32 *) (u32) (sp + 152)) = (u32) v0; func_001B9E30(a0, a1, a2, a3);
L_008C0460:;
L_008C0464:;
    return;
}
