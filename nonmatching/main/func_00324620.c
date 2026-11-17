/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00324620(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0;

    at = (u64) a1 < (u64) (s64) 9;
    if (at == 0) { (*(volatile u32 *) (u32) a0) = (u32) a2; goto L_003246B0; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0x1610U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x324648U) goto L_00324648; if (t_ == 0x324650U) goto L_00324650; if (t_ == 0x324658U) goto L_00324658; if (t_ == 0x324690U) goto L_00324690; if (t_ == 0x324698U) goto L_00324698; if (t_ == 0x3246a0U) goto L_003246A0; if (t_ == 0x3246a8U) goto L_003246A8; if (t_ == 0x3246acU) goto L_003246AC; }
L_00324648:;
    a2 = 6; goto L_003246AC;
L_00324650:;
    a2 = 7; goto L_003246AC;
L_00324658:;
    a1 = 5;
    if (a2 == a1) { a2 = 2; goto L_003246AC; }
    v1 = 4;
    if (a2 == v1) { a2 = 3; goto L_003246AC; }
    v0 = 3;
    if (a2 == v0) { a2 = v1; goto L_003246AC; }
    v0 = 2;
    if (a2 == v0) { a2 = a1; goto L_003246AC; }
    goto L_003246AC;
L_00324690:;
    a2 = 3; goto L_003246AC;
L_00324698:;
    a2 = 4; goto L_003246AC;
L_003246A0:;
    a2 = 5; goto L_003246AC;
L_003246A8:;
    a2 = 0;
L_003246AC:;
    (*(volatile u32 *) (u32) a0) = (u32) a2;
L_003246B0:;
    v0 = 1; return v0;
}
