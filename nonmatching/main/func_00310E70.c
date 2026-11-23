/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C3130(s32, s32);

void func_00310E70(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 frame[28];
    s32 sp = (s32) (u32) frame;

    a1 = a1 & 0xff;
    s0 = a0;
    a0 = (s32) ((u32) sp + 0x20U); func_002C3130(a0, a1);
    v1 = (*(volatile s32 *) (u32) (sp + 200));
    v0 = (*(volatile s32 *) (u32) (sp + 204));
    a1 = (*(volatile s32 *) (u32) (sp + 208));
    a0 = (*(volatile s32 *) (u32) (sp + 212));
    a2 = (s32) ((u32) v1 + (u32) v0);
    v1 = (*(volatile s32 *) (u32) (sp + 216));
    v0 = (*(volatile s32 *) (u32) (sp + 220));
    a0 = (s32) ((u32) a1 + (u32) a0);
    v1 = (s32) ((u32) v1 + (u32) v0);
    at = v1 < a0;
    if (at == 0) { v0 = v1; goto L_00310EC0; }
    v0 = a0;
L_00310EC0:;
    at = v0 < a2;
    if (at == 0) { at = v1 < a0; goto L_00310ED4; }
    v1 = a2; goto L_00310EE4;
L_00310ED4:;
    if (at == 0) goto L_00310EE4;
    v1 = a0; goto L_00310EE4;
L_00310EE4:;
    if (v1 != a2) goto L_00310EF8;
    v0 = 4;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00310F10;
L_00310EF8:;
    if (v1 != a0) { v0 = 3; goto L_00310F0C; }
    v0 = 7;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00310F10;
L_00310F0C:;
    (*(volatile u32 *) (u32) s0) = (u32) v0;
L_00310F10:;
    v0 = 1;
    return;
}
