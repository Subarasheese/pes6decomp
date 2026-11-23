/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
s32 func_001454A0(s32);
s32 func_001454B0(s32);
void func_0014D780(s32, s32);
void func_0014DB80(s32, s32);
void func_0014DF70(s32, s32, s32);
void func_00151080(s32, s32);
s32 func_00154070(s32);
s32 func_001E6E10(s32);
s32 func_0025F820(void);
void func_0025F830(s32);
void memcpy(s32, s32, s32);

void func_0025E970(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    v1 = 1;
    (*(volatile u32 *) (u32) (v0 + -11776)) = (u32) a0;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + -11755)) = (u8) v1; v0 = func_001E6E10(a0);
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -11772)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (v0 + 8)); v0 = func_001454B0(a0);
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (a0 + -11760)) = (u16) v0;
    v0 = (*(volatile s32 *) (u32) (v1 + -11772));
    a0 = (*(volatile s32 *) (u32) (v0 + 8)); v0 = func_001454A0(a0);
    v1 = (s32) 0x590000U;
    s0 = (s32) 0x590000U;
    s0 = (s32) ((u32) s0 + 0xffffd218U);
    (*(volatile u16 *) (u32) (v1 + -11758)) = (u16) v0;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s16 *) (u32) (s0 + 16));
    v1 = (*(volatile s16 *) (u32) (s0 + 18));
    v0 = (*(volatile s32 *) (u32) (v0 + -11772));
    (*(volatile u16 *) (u32) (sp + 64)) = (u16) 0;
    (*(volatile u16 *) (u32) (sp + 66)) = (u16) 0;
    a1 = (*(volatile s32 *) (u32) (s0 + 8));
    (*(volatile u16 *) (u32) (sp + 68)) = (u16) a0;
    (*(volatile u16 *) (u32) (sp + 70)) = (u16) v1;
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a2 = (s32) ((u32) sp + 0x40U); func_0014DF70(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = (*(volatile s32 *) (u32) (s0 + 8)); func_00151080(a0, a1);
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -11772));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = (*(volatile s32 *) (u32) (s0 + 12)); func_0014DB80(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = (*(volatile s32 *) (u32) (s0 + 12)); func_0014D780(a0, a1);
    s0 = (s32) 0x590000U;
    a0 = (s32) ((u32) sp + 0x4cU);
    s0 = (s32) ((u32) s0 + 0xffffd230U); func_0025F830(a0);
    v0 = func_0025F820();
    s2 = v0 & 0xffff;
    a0 = 1024; v0 = func_00154070(a0);
    s1 = v0;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -11772));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = s1; func_0014DB80(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = (*(volatile s32 *) (u32) (s0 + 12)); func_0014DB80(a0, a1);
    v0 = s2 & 0xffff;
    v1 = (*(volatile u8 *) (u32) (sp + 76));
    a2 = (s32) ((u32) v0 << 2);
    v0 = (*(volatile s32 *) (u32) (s0 + 12));
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) s1 + (u32) v1);
    a0 = (s32) ((u32) v0 + (u32) v1); memcpy(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = (*(volatile s32 *) (u32) (s0 + 12)); func_0014D780(a0, a1);
    a0 = s1; Pes6Heap_Free(a0);
    return;
}
