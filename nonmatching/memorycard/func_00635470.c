/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
s32 func_00220B70(s32);

s32 func_00635470(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = 20;
    { s32 c_ = a0 == v0; v1 = -1; if (c_) goto L_00635540; }
    a7 = 5;
    if (a0 == a7) { v1 = 22; goto L_00635544; }
    a6 = 4;
    if (a0 == a6) { v1 = 21; goto L_00635544; }
    a5 = 3;
    if (a0 == a5) { v1 = v0; goto L_00635544; }
    a4 = 2;
    if (a0 == a4) { v1 = 19; goto L_00635544; }
    a3 = 1;
    if (a0 == a3) { v1 = 23; goto L_00635544; }
    if (a0 == 0) { v1 = 18; goto L_00635544; }
    a2 = 6;
    if (a0 == a2) { v0 = (s32) ((u32) a1 + 0xfffffff5U); goto L_006354DC; }
    v0 = 18; goto L_00635548;
L_006354DC:;
    at = (u64) v0 < (u64) (s64) 17;
    if (at == 0) { v1 = 0; goto L_00635544; }
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb030U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x635504U) goto L_00635504; if (t_ == 0x635510U) goto L_00635510; if (t_ == 0x635518U) goto L_00635518; if (t_ == 0x635520U) goto L_00635520; if (t_ == 0x635528U) goto L_00635528; if (t_ == 0x635530U) goto L_00635530; if (t_ == 0x635538U) goto L_00635538; }
L_00635504:;
    v1 = 0;
    goto L_00635544;
L_00635510:;
    v1 = a6; goto L_00635544;
L_00635518:;
    v1 = a3; goto L_00635544;
L_00635520:;
    v1 = a2; goto L_00635544;
L_00635528:;
    v1 = a5; goto L_00635544;
L_00635530:;
    v1 = a4; goto L_00635544;
L_00635538:;
    v1 = a7; goto L_00635544;
L_00635540:;
    v1 = 28;
L_00635544:;
    v0 = 18;
L_00635548:;
    if (a0 != v0) { v0 = -1; goto L_00635558; }
    v0 = (s32) ((u32) gp + 0xffff83acU); goto L_00635588;
L_00635558:;
    if (v1 != v0) { a0 = v1; goto L_00635580; }
    v0 = (s32) 0x660000U;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xffffa3d0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
    goto L_0063558C;
L_00635580:;
    v0 = func_00220B70(a0);
L_00635588:;
L_0063558C:;
    return v0;
}
