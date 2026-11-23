/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void FlushCache(void);
void func_00134F80(s32, s32, s32, s32, s32);
void func_00136DB0(s32);
void sceGsPutDispEnv(s32);
void sceGsSetDefDispEnv(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_00135CD0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = 1;
    a0 = 0;
    (*(volatile u32 *) (u32) (gp + -32604)) = (u32) v0;
    a1 = 0;
    v0 = (s32) 0x400000U;
    a2 = 0;
    a4 = (*(volatile s32 *) (u32) (v0 + -20224));
    a3 = 640; func_00134F80(a0, a1, a2, a3, a4);
    a0 = (*(volatile s32 *) (u32) (gp + -23504));
    v1 = (s32) 0x540000U;
    v0 = (s32) 0x400000U;
    at = (s32) 0x530000U;
    a3 = (*(volatile s16 *) (u32) (v0 + -20224));
    at = at | 0xceb0;
    a2 = 640;
    a4 = 0;
    a5 = 0;
    v1 = (s32) ((u32) a0 + (u32) v1);
    a1 = (*(volatile s16 *) (u32) (v1 + -12048));
    a0 = (s32) ((u32) a0 + (u32) at); sceGsSetDefDispEnv(a0, a1, a2, a3, a4, a5, a6, a7);
    a3 = (*(volatile s32 *) (u32) (gp + -23504));
    a1 = (s32) 0x540000U;
    v1 = a1;
    v0 = a1;
    a2 = -512;
    a0 = 0;
    a1 = (s32) ((u32) a3 + (u32) a1);
    v1 = (s32) ((u32) a3 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) (a1 + -12052));
    v0 = (s32) ((u32) a3 + (u32) v0);
    v1 = (*(volatile u16 *) (u32) (v1 + -12608));
    a1 = (s32) ((u32) a1 >> 11);
    v1 = v1 & a2;
    a1 = a1 & 0x1ff;
    v1 = v1 | a1;
    (*(volatile u16 *) (u32) (v0 + -12608)) = (u16) v1; FlushCache();
    v0 = (*(volatile s32 *) (u32) (gp + -23504));
    at = (s32) 0x530000U;
    at = at | 0xceb0;
    a0 = (s32) ((u32) v0 + (u32) at); sceGsPutDispEnv(a0);
    a0 = 16383; func_00136DB0(a0);
    v0 = 0;
    return v0;
}
