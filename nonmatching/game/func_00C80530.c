/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7BE0(s32, s32);
s32 func_002D5410(void);
void func_002D5960(s32, s32);
void func_002D5980(s32, s32);
void func_002F8FE0(s32, s32);
void func_002F9040(s32, s32);
void func_002F9120(s32, s32, s32, s32, s32, f32, f32);
s32 func_002F9370(s32);
s32 func_002F9390(s32, s32, s32, s32);
s32 func_00C86050(void);
void func_00C88DD0(s32, s32, s32, s32);
void func_00C88EC0(s32, s32, s32);
s32 func_00C944D0(void);
void func_00C944E0(s32);
void memset(s32, s32, s32);

void func_00C80530(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = func_002D5410();
    s0 = v0;
    a0 = s0; func_00C944E0(a0);
    a0 = (s32) 0xcd0000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffc130U);
    a2 = 160; memset(a0, a1, a2);
    v0 = (s32) 0xcd0000U;
    v0 = (s32) ((u32) v0 + 0xffffc130U);
    (*(volatile u32 *) (u32) (gp + -19196)) = (u32) v0; v0 = func_00C944D0();
    a0 = (s32) 0xcd0000U;
    v1 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v1 + -15980)) = (u32) s0;
    (*(volatile u32 *) (u32) (a0 + -15984)) = (u32) v0;
    v1 = 255;
    v0 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v0 + -15976)) = (u32) v1; v0 = func_00C86050();
    s1 = v0;
    v0 = (s32) 0xcd0000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -15984));
    a1 = (*(volatile s32 *) (u32) s0);
    a0 = s1; v0 = func_002F9390(a0, a1, a2, a3);
    v1 = (s32) 0xcd0000U;
    a1 = s0;
    a2 = s1;
    a0 = v0;
    (*(volatile u32 *) (u32) (v1 + -16080)) = (u32) v0; func_002F9120(a0, a1, a2, a3, a4, f12.f, f13.f);
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -16080));
    a1 = 0; func_002F9040(a0, a1);
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -16080));
    a1 = 0; func_002F8FE0(a0, a1);
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -16080)); v0 = func_002F9370(a0);
    a1 = (s32) 0xcd0000U;
    a0 = v0;
    a1 = (s32) ((u32) a1 + 0xffffc180U);
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (a1 + 12)) = (u32) 0; func_001D7BE0(a0, a1);
    s0 = (s32) 0xcd0000U;
    a1 = 0;
    s0 = (s32) ((u32) s0 + 0xffffc134U);
    a0 = s0; func_002D5980(a0, a1);
    a0 = s0;
    a1 = 0; func_002D5960(a0, a1);
    a1 = (s32) 0xc80000U;
    a2 = (s32) 0xc80000U;
    a0 = 8;
    a1 = (s32) ((u32) a1 + 0x500U);
    a2 = (s32) ((u32) a2 + 0x4c0U); func_00C88EC0(a0, a1, a2);
    a1 = (s32) 0xc80000U;
    a0 = 8;
    a1 = (s32) ((u32) a1 + 0x470U);
    a2 = 0; func_00C88DD0(a0, a1, a2, a3);
    return;
}
