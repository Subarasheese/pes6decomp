/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00B297D0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) 0x590000U;
    v1 = 5;
    a0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (a0 != v1) goto L_00B297EC;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 7180));
L_00B297EC:;
    v0 = 4;
    if (v1 == v0) goto L_00B29930;
    v0 = 3;
    if (v1 == v0) { v0 = 0; goto L_00B29940; }
    v0 = 2;
    if (v1 == v0) { v1 = 5; goto L_00B298CC; }
    v0 = 1;
    if (v1 == v0) { v1 = 5; goto L_00B29868; }
    if (v1 == 0) { v0 = 5; goto L_00B2982C; }
    v0 = 0; goto L_00B29940;
L_00B2982C:;
    if (a0 != v0) goto L_00B2983C;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7180));
L_00B2983C:;
    if (v0 != 0) { v0 = 5; goto L_00B2984C; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7184));
L_00B2984C:;
    if (v0 != 0) { v0 = 0; goto L_00B29940; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7264));
    v0 = v0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1; goto L_00B29940;
L_00B29868:;
    if (a0 != v1) goto L_00B29878;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 7180));
L_00B29878:;
    v0 = 1;
    if (v1 != v0) { v0 = 0; goto L_00B2988C; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7188));
L_00B2988C:;
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) goto L_00B298B4;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb8b0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb298bcU) goto L_00B298BC; if (t_ == 0xb298c4U) goto L_00B298C4; }
L_00B298B4:;
    v0 = 0; goto L_00B29940;
L_00B298BC:;
    v0 = 0; goto L_00B29940;
L_00B298C4:;
    v0 = 1; goto L_00B29940;
L_00B298CC:;
    if (a0 != v1) goto L_00B298DC;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s32 *) (u32) (v0 + 7180));
L_00B298DC:;
    v0 = 2;
    if (v1 != v0) { v0 = 44; goto L_00B298F0; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7260));
L_00B298F0:;
    at = (u64) v0 < (u64) (s64) 44;
    if (at == 0) goto L_00B29918;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb800U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xb298bcU) goto L_00B298BC; if (t_ == 0xb298c4U) goto L_00B298C4; if (t_ == 0xb29920U) goto L_00B29920; if (t_ == 0xb29928U) goto L_00B29928; }
L_00B29918:;
    v0 = 0; goto L_00B29940;
L_00B29920:;
    v0 = 0; goto L_00B29940;
L_00B29928:;
    v0 = 1; goto L_00B29940;
L_00B29930:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 7264));
    v0 = v0 ^ 0x1;
    v0 = (u64) v0 < (u64) (s64) 1;
L_00B29940:;
    return v0;
}
