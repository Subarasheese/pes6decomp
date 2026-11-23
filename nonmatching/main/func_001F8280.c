/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001C80F0(s32);
s32 func_001F8390(s32);

void func_001F8280(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    s2 = a1;
    s1 = 0;
    s0 = 0; v0 = func_001C80F0(a0);
    if (v0 == 0) goto L_001F8360;
    v0 = (s32) ((u32) s3 + (u32) s0);
L_001F82B8:;
    a0 = (*(volatile u8 *) (u32) v0);
    v0 = a0 & 0x80;
    if (v0 != 0) goto L_001F82E0;
    v0 = (s32) ((u32) s1 << 1);
    v0 = (s32) ((u32) s2 + (u32) v0);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u16 *) (u32) v0) = (u16) a0; goto L_001F8348;
L_001F82E0:;
    v0 = a0 < 160;
    if (v0 != 0) goto L_001F8318;
    at = a0 < 224;
    if (at == 0) goto L_001F8318;
    v0 = func_001F8390(a0);
    v1 = (s32) ((u32) s1 << 1);
    v1 = (s32) ((u32) s2 + (u32) v1);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u16 *) (u32) v1) = (u16) v0; goto L_001F8348;
L_001F8318:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = (s32) ((u32) s3 + (u32) s0);
    v0 = (s32) ((u32) a0 << 8);
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = v0 | v1;
    a0 = v0 & 0xffff; v0 = func_001F8390(a0);
    v1 = (s32) ((u32) s1 << 1);
    v1 = (s32) ((u32) s2 + (u32) v1);
    s1 = (s32) ((u32) s1 + 0x1U);
    (*(volatile u16 *) (u32) v1) = (u16) v0;
L_001F8348:;
    a0 = s3;
    s0 = (s32) ((u32) s0 + 0x1U); v0 = func_001C80F0(a0);
    v0 = (u64) s0 < (u64) v0;
    if (v0 != 0) { v0 = (s32) ((u32) s3 + (u32) s0); goto L_001F82B8; }
L_001F8360:;
    v0 = (s32) ((u32) s1 << 1);
    v1 = (s32) ((u32) s2 + (u32) v0);
    (*(volatile u16 *) (u32) v1) = (u16) 0;
    v0 = s2;
    return;
}
