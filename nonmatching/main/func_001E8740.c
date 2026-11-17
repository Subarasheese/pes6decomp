/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Texture_GetClut(s32);
s32 Pes6Texture_GetPsm(s32);
s32 func_001E6560(s32);
void func_001EAE30(s32, s32, s32, s32);
void memcpy(s32, s32, s32);

void func_001E8740(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s4 = a0;
    s3 = a1;
    if (s4 == 0) goto L_001E87F4;
    if (s3 == 0) goto L_001E87F4;
    s1 = (*(volatile s32 *) (u32) (s4 + 8)); v0 = func_001E6560(a0);
    a0 = s1;
    s2 = v0; v0 = Pes6Texture_GetClut(a0);
    s1 = v0;
    if (s1 == 0) { v0 = 0; goto L_001E8820; }
    if (s4 == 0) { s0 = 0; goto L_001E87DC; }
    a0 = (*(volatile s32 *) (u32) (s4 + 8)); v0 = Pes6Texture_GetPsm(a0);
    v1 = 20;
    if (v0 == v1) { s0 = 64; goto L_001E87DC; }
    v1 = 19;
    if (v0 == v1) { s0 = 1024; goto L_001E87DC; }
    v1 = 2;
    if (v0 == v1) goto L_001E87D4;
    if (v0 == 0) goto L_001E87D4;
    goto L_001E87DC;
L_001E87D4:;
    s0 = 0; goto L_001E87DC;
L_001E87DC:;
    if (s0 != 0) { a1 = s1; goto L_001E87FC; }
L_001E87E4:;
    if (s2 != 0) { a0 = s2; goto L_001E8810; }
L_001E87EC:;
    v0 = s3; goto L_001E8820;
L_001E87F4:;
    v0 = 0; goto L_001E8820;
L_001E87FC:;
    a2 = s0;
    a0 = s3; memcpy(a0, a1, a2);
    goto L_001E87E4;
L_001E8810:;
    a1 = s3; func_001EAE30(a0, a1, a2, a3);
    goto L_001E87EC;
L_001E8820:;
    return;
}
