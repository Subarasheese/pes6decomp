/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00B29510(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) 0x590000U;
    v1 = 5;
    a0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (a0 != v1) goto L_00B2952C;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 7180));
L_00B2952C:;
    v0 = 4;
    if (v1 == v0) goto L_00B2960C;
    v0 = 3;
    if (v1 == v0) { v0 = 0; goto L_00B2961C; }
    v0 = 2;
    if (v1 == v0) { v0 = 1; goto L_00B2961C; }
    v0 = 1;
    if (v1 == v0) { v1 = 5; goto L_00B295A8; }
    if (v1 == 0) { v0 = 5; goto L_00B2956C; }
    v0 = 0; goto L_00B2961C;
L_00B2956C:;
    if (a0 != v0) goto L_00B2957C;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7180));
L_00B2957C:;
    if (v0 != 0) { v0 = 5; goto L_00B2958C; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7184));
L_00B2958C:;
    if (v0 != 0) { v0 = 0; goto L_00B2961C; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7272));
    v0 = v0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1; goto L_00B2961C;
L_00B295A8:;
    if (a0 != v1) goto L_00B295B8;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 7180));
L_00B295B8:;
    v0 = 1;
    if (v1 != v0) { v0 = 0; goto L_00B295CC; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7188));
L_00B295CC:;
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) goto L_00B295F4;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb710U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb295fcU) goto L_00B295FC; if (t_ == 0xb29604U) goto L_00B29604; }
L_00B295F4:;
    v0 = 0; goto L_00B2961C;
L_00B295FC:;
    v0 = 0; goto L_00B2961C;
L_00B29604:;
    v0 = 1; goto L_00B2961C;
L_00B2960C:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7272));
    v0 = v0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1;
L_00B2961C:;
    return v0;
}
