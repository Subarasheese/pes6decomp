/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00B29450(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) 0x590000U;
    v1 = 5;
    a0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (a0 != v1) goto L_00B2946C;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 7180));
L_00B2946C:;
    v0 = 4;
    if (v1 == v0) { v0 = 1; goto L_00B29504; }
    v0 = 3;
    if (v1 == v0) { v0 = 0; goto L_00B29504; }
    v0 = 2;
    if (v1 == v0) { v0 = 0; goto L_00B29504; }
    v0 = 1;
    if (v1 == v0) { v1 = 5; goto L_00B294A4; }
    if (v1 != 0) v0 = 0; goto L_00B29504;
L_00B294A4:;
    if (a0 != v1) goto L_00B294B4;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 7180));
L_00B294B4:;
    v0 = 1;
    if (v1 != v0) { v0 = 0; goto L_00B294C8; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7188));
L_00B294C8:;
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) goto L_00B294F0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb6f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb294f8U) goto L_00B294F8; if (t_ == 0xb29500U) goto L_00B29500; }
L_00B294F0:;
    v0 = 0; goto L_00B29504;
L_00B294F8:;
    v0 = 0; goto L_00B29504;
L_00B29500:;
    v0 = 1;
L_00B29504:;
    return v0;
}
