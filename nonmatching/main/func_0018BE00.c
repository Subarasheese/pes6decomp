/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00189060(s32);
f32 func_001A3840(void);
void func_001CEA60(s32, s32, s32, s32);
void func_001CEAB0(void);
void func_001CEB90(void);
void func_001CEBD0(s32);
void func_001CEC30(void);
void func_001CEC60(s32);
void func_001CEC70(void);
void func_001CECC0(s32);
void func_001D3FF0(s32, s32, s32, s32);

void func_0018BE00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    s32 fcc = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    a0 = (s32) ((u32) sp + 0x30U); v0 = func_00189060(a0);
    if (v0 == 0) goto L_0018BF24;
    a0 = 664; func_001CECC0(a0);
    func_001CEB90();
    func_001CEC30();
    a0 = 2; func_001CEBD0(a0);
    a0 = 72; func_001CEC60(a0);
    func_001CEAB0();
    a0 = 11010; func_001CEA60(a0, a1, a2, a3);
    f2.f = (*(volatile f32 *) (u32) (sp + 48));
    v0 = (s32) 0x390000U;
    f1.f = (*(volatile f32 *) (u32) (sp + 52));
    v1 = 1;
    f0.f = (*(volatile f32 *) (u32) (sp + 56));
    v0 = (s32) ((u32) v0 + 0x7370U);
    (*(volatile u32 *) (u32) (sp + 40)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v0;
    v1 = (s32) ((u32) sp + 0x3cU);
    v0 = 230;
    (*(volatile u32 *) (u32) (sp + 44)) = (u32) v1;
    (*(volatile u8 *) (u32) (sp + 60)) = (u8) v0;
    (*(volatile f32 *) (u32) (sp + 16)) = f2.f;
    (*(volatile u8 *) (u32) (sp + 61)) = (u8) v0;
    (*(volatile f32 *) (u32) (sp + 20)) = f1.f;
    (*(volatile u8 *) (u32) (sp + 62)) = (u8) v0;
    (*(volatile f32 *) (u32) (sp + 24)) = f0.f; f0.f = func_001A3840();
    f1.i = (s32) 0;
    fcc = f0.f <= f1.f;
    if (fcc) { f0.f = (*(volatile f32 *) (u32) (sp + 16)); goto L_0018BEE0; }
    f0.f = (*(volatile f32 *) (u32) (sp + 16));
    fcc = f0.f <= f1.f;
    if (fcc) { v1 = (s32) 0x447a0000U; goto L_0018BED0; }
    v1 = (s32) 0x442f0000U;
    v0 = 180;
    f0.i = (s32) v1;
    (*(volatile u8 *) (u32) (sp + 63)) = (u8) v0; goto L_0018BF0C;
L_0018BED0:;
    v0 = 100;
    f0.i = (s32) v1;
    (*(volatile u8 *) (u32) (sp + 63)) = (u8) v0; goto L_0018BF0C;
L_0018BEE0:;
    fcc = f0.f <= f1.f;
    if (fcc) { v1 = (s32) 0x442f0000U; goto L_0018BF00; }
    v1 = (s32) 0x447a0000U;
    v0 = 100;
    f0.i = (s32) v1;
    (*(volatile u8 *) (u32) (sp + 63)) = (u8) v0; goto L_0018BF0C;
L_0018BF00:;
    v0 = 180;
    f0.i = (s32) v1;
    (*(volatile u8 *) (u32) (sp + 63)) = (u8) v0;
L_0018BF0C:;
    (*(volatile f32 *) (u32) (sp + 28)) = f0.f;
    a0 = (s32) ((u32) sp + 0x10U);
    (*(volatile f32 *) (u32) (sp + 32)) = f0.f; func_001D3FF0(a0, a1, a2, a3);
    func_001CEC70();
L_0018BF24:;
    return;
}
