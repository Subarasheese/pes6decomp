/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SyncDCache(s32, s32);
void func_00258150(s32);
s32 func_00258170(void);
void func_0025CD00(s32, s32);
void func_0025E100(s32, s32);
void func_0025EC20(s32);
s32 func_0025ECE0(s32);
void memset(s32, s32, s32);

void func_0025A170(s32 a0, s32 a1, s32 a2) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = func_00258170();
    s0 = v0 & 0xff;
    a0 = (s32) ((u32) sp + 0x2cU); func_00258150(a0);
    a0 = 1; v0 = func_0025ECE0(a0);
    v1 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) (v1 + -12396));
    v1 = (s32) 0x590000U;
    a2 = (*(volatile s32 *) (u32) (v1 + -12400));
    { s32 c_ = a2 == 0; a0 = v0; if (c_) goto L_0025A1D0; }
L_0025A1AC:;
    v1 = (*(volatile u8 *) (u32) a1);
    if (v1 != 0) { (*(volatile u8 *) (u32) a0) = (u8) s0; goto L_0025A1B8; }
L_0025A1B8:;
    a2 = (s32) ((u32) a2 + 0xffffffffU);
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (a2 != 0) goto L_0025A1AC;
L_0025A1D0:;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -12400));
    a0 = v0;
    a1 = (s32) ((u32) v0 + (u32) v1); SyncDCache(a0, a1);
    a0 = 1; func_0025EC20(a0);
    a0 = 3;
    a1 = 0; func_0025CD00(a0, a1);
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -12396));
    v0 = (s32) 0x590000U;
    a2 = (*(volatile s32 *) (u32) (v0 + -12400));
    a1 = 0; memset(a0, a1, a2);
    v0 = (s32) 0x590000U;
    v1 = 2;
    (*(volatile u16 *) (u32) (v0 + -12364)) = (u16) 0;
    a0 = 5;
    v0 = (s32) 0x590000U;
    a1 = 0;
    (*(volatile u8 *) (u32) (v0 + -12362)) = (u8) v1;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a2 = (*(volatile s32 *) (u32) (v0 + -12388));
    (*(volatile u8 *) (u32) (a2 + 8)) = (u8) 0;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -12388));
    (*(volatile u8 *) (u32) (v1 + 9)) = (u8) 0;
    v0 = (*(volatile s32 *) (u32) (v0 + -12388));
    (*(volatile u8 *) (u32) (v0 + 10)) = (u8) 0; func_0025E100(a0, a1);
    return;
}
