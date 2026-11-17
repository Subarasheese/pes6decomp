/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32, s32);
s32 Pes6Texture_GetPsm(s32);
void Pes6Texture_SetClut(s32, s32, s32);
s32 func_00154070(s32);
s32 func_001E6560(s32);
void func_001EAF80(s32, s32, s32, s32);
void memcpy(s32, s32, s32);

void func_001E8650(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s1 = a0;
    { s32 c_ = s1 == 0; s0 = a1; if (c_) goto L_001E871C; }
    if (s0 == 0) goto L_001E871C;
    if (s1 == 0) { s2 = 0; goto L_001E86C8; }
    a0 = (*(volatile s32 *) (u32) (s1 + 8)); v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) { s2 = 64; goto L_001E86C8; }
    v1 = 19;
    if (v0 == v1) { s2 = 1024; goto L_001E86C8; }
    v1 = 2;
    if (v0 == v1) goto L_001E86C0;
    if (v0 == 0) goto L_001E86C0;
    goto L_001E86C8;
L_001E86C0:;
    s2 = 0; goto L_001E86C8;
L_001E86C8:;
    a0 = s2; v0 = func_00154070(a0);
    s3 = v0;
    a2 = s2;
    a0 = s3;
    a1 = s0; memcpy(a0, a1, a2);
    a0 = s1; v0 = func_001E6560(a0);
    if (v0 == 0) goto L_001E8700;
    a0 = v0;
    a1 = s3; func_001EAF80(a0, a1, a2, a3);
L_001E8700:;
    a0 = (*(volatile s32 *) (u32) (s1 + 8));
    a1 = s3; Pes6Texture_SetClut(a0, a1, a2);
    a0 = s3; Pes6Heap_Free(a0, a1);
    v0 = s0; goto L_001E8720;
L_001E871C:;
    v0 = 0;
L_001E8720:;
    return;
}
