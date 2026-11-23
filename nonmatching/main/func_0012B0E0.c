/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void FlushCache(void);
void func_00100270(s64, s64, s64, s64);
s64 func_001010F8(void);
s64 func_00101190(s64, s64, s64, s64, s64, s64, s64, s64);
void sceGsPutDrawEnv(s64, s64, s64, s64, s64, s64, s64, s64);
void sceGsSetDefDBuff(s64, s64, s64, s64, s64, s64, s64, s64);

void func_0012B0E0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[76];
    s64 sp = (s32) (u32) frame;

    s0 = a0;
    v1 = s0 & 0x100;
    if (v1 == 0) goto L_0012B204;
    a0 = 0; v0 = func_001010F8();
    a1 = s0 & 0x200;
    v1 = 3;
    v0 = 2;
    a0 = 0;
    if (a1 == 0) v1 = v0;
    a1 = 1;
    a2 = (s64) ((u64) v1 << 48);
    a2 = a2 >> 48;
    a3 = a1; func_00100270(a0, a1, a2, a3);
    a2 = 512;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = 0;
    a4 = 0;
    a3 = a2;
    a5 = 49;
    a6 = 1; sceGsSetDefDBuff(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0; FlushCache();
    a0 = 0; v0 = func_001010F8();
    s1 = (s32) ((u32) sp + 0x80U);
    a0 = s1; sceGsPutDrawEnv(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0;
    a1 = 0; v0 = func_00101190(a0, a1, a2, a3, a4, a5, a6, a7);
    s0 = (s32) ((u32) sp + 0x170U);
    a0 = s0; sceGsPutDrawEnv(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0;
    a1 = 0; v0 = func_00101190(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (*(volatile u16 *) (u32) (sp + 144));
    v0 = -512;
    v1 = (*(volatile u16 *) (u32) (sp + 384));
    a0 = 0;
    a2 = a1 & 0x1ff;
    a1 = a1 & v0;
    a2 = (s32) ((u32) a2 + 0x100U);
    v0 = v1 & v0;
    a2 = a2 & 0x1ff;
    v1 = v1 & 0x1ff;
    a1 = a1 | a2;
    v1 = (s32) ((u32) v1 + 0x100U);
    (*(volatile u16 *) (u32) (sp + 144)) = (u16) a1;
    v1 = v1 & 0x1ff;
    v0 = v0 | v1;
    (*(volatile u16 *) (u32) (sp + 384)) = (u16) v0; FlushCache();
    a0 = 0; v0 = func_001010F8();
    a0 = s1; sceGsPutDrawEnv(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0;
    a1 = 0; v0 = func_00101190(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0; sceGsPutDrawEnv(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0;
    a1 = 0; v0 = func_00101190(a0, a1, a2, a3, a4, a5, a6, a7);
L_0012B204:;
    return;
}
