/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0026B8B0(s32, s32, s32, s32);
s32 func_0026BB70(s32, s32, s32, s32);
s32 func_008FA980(s32);
s32 func_00901580(s32, s32, s32, s32);

s32 func_00901870(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) 0xb0000U;
    a0 = v0 | 0x2e; v0 = func_008FA980(a0);
    if (v0 >= 0) goto L_00901894;
    v0 = 0; goto L_00901944;
L_00901894:;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s8 *) (u32) (v0 + 7606)); v0 = func_00901580(a0, a1, a2, a3);
    v1 = -1;
    if (v0 != v1) goto L_009018B4;
    v0 = 0; goto L_00901944;
L_009018B4:;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x295bU);
    v0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (*(volatile s8 *) (u32) (v1 + 7606));
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == a0) goto L_00901920;
    v0 = func_0026B8B0(a0, a1, a2, a3);
    if (v0 < 0) goto L_00901920;
    at = v0 < 9;
    if (at == 0) goto L_00901920;
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0x2808U);
    a0 = (s32) ((u32) a0 << 3);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) goto L_00901920;
    v0 = 0; goto L_00901944;
L_00901920:;
    v0 = func_0026BB70(a0, a1, a2, a3);
    v0 = 0 < v0;
    if (v0 == 0) goto L_00901944;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7632));
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
L_00901944:;
    return v0;
}
