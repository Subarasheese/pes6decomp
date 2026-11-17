/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00B29640(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) 0x590000U;
    v1 = 5;
    a0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (a0 != v1) goto L_00B2965C;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 7180));
L_00B2965C:;
    v0 = 4;
    if (v1 == v0) goto L_00B297A0;
    v0 = 3;
    if (v1 == v0) { v0 = 0; goto L_00B297B0; }
    v0 = 2;
    if (v1 == v0) { v1 = 5; goto L_00B2973C; }
    v0 = 1;
    if (v1 == v0) { v1 = 5; goto L_00B296D8; }
    if (v1 == 0) { v0 = 5; goto L_00B2969C; }
    v0 = 0; goto L_00B297B0;
L_00B2969C:;
    if (a0 != v0) goto L_00B296AC;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7180));
L_00B296AC:;
    if (v0 != 0) { v0 = 5; goto L_00B296BC; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7184));
L_00B296BC:;
    if (v0 != 0) { v0 = 0; goto L_00B297B0; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7268));
    v0 = v0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1; goto L_00B297B0;
L_00B296D8:;
    if (a0 != v1) goto L_00B296E8;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 7180));
L_00B296E8:;
    v0 = 1;
    if (v1 != v0) { v0 = 0; goto L_00B296FC; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7188));
L_00B296FC:;
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) goto L_00B29724;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb7e0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb2972cU) goto L_00B2972C; if (t_ == 0xb29734U) goto L_00B29734; }
L_00B29724:;
    v0 = 0; goto L_00B297B0;
L_00B2972C:;
    v0 = 0; goto L_00B297B0;
L_00B29734:;
    v0 = 1; goto L_00B297B0;
L_00B2973C:;
    if (a0 != v1) goto L_00B2974C;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 7180));
L_00B2974C:;
    v0 = 2;
    if (v1 != v0) { v0 = 44; goto L_00B29760; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7260));
L_00B29760:;
    at = (u64) v0 < (u64) (s64) 44;
    if (at == 0) goto L_00B29788;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb730U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb2972cU) goto L_00B2972C; if (t_ == 0xb29734U) goto L_00B29734; if (t_ == 0xb29790U) goto L_00B29790; if (t_ == 0xb29798U) goto L_00B29798; }
L_00B29788:;
    v0 = 0; goto L_00B297B0;
L_00B29790:;
    v0 = 0; goto L_00B297B0;
L_00B29798:;
    v0 = 1; goto L_00B297B0;
L_00B297A0:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7268));
    v0 = v0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1;
L_00B297B0:;
    return v0;
}
