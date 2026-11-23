/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002CBF10(void);

s32 func_008F7260(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0; v0 = func_002CBF10();
    v1 = 3;
    if (v0 == v1) goto L_008F72C0;
    v1 = 2;
    if (v0 == v1) goto L_008F72A8;
    v1 = 1;
    v0 = (s32) 0x900000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffff9b10U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_008F72D4;
L_008F72A8:;
    v0 = (s32) 0x900000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffff9b20U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0); goto L_008F72D4;
L_008F72C0:;
    v0 = (s32) 0x900000U;
    v1 = (s32) ((u32) s0 << 2);
    v0 = (s32) ((u32) v0 + 0xffff9b30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
L_008F72D4:;
    at = (u64) v0 < (u64) (s64) 10;
    if (at == 0) { v0 = 0; goto L_008F734C; }
    v1 = (s32) 0x900000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9f50U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8f72fcU) goto L_008F72FC; if (t_ == 0x8f7308U) goto L_008F7308; if (t_ == 0x8f7310U) goto L_008F7310; if (t_ == 0x8f7318U) goto L_008F7318; if (t_ == 0x8f7320U) goto L_008F7320; if (t_ == 0x8f7328U) goto L_008F7328; if (t_ == 0x8f7330U) goto L_008F7330; if (t_ == 0x8f7338U) goto L_008F7338; if (t_ == 0x8f7340U) goto L_008F7340; if (t_ == 0x8f7348U) goto L_008F7348; }
L_008F72FC:;
    v0 = 0;
    goto L_008F734C;
L_008F7308:;
    v0 = 1; goto L_008F734C;
L_008F7310:;
    v0 = 2; goto L_008F734C;
L_008F7318:;
    v0 = 3; goto L_008F734C;
L_008F7320:;
    v0 = 4; goto L_008F734C;
L_008F7328:;
    v0 = 5; goto L_008F734C;
L_008F7330:;
    v0 = 6; goto L_008F734C;
L_008F7338:;
    v0 = 7; goto L_008F734C;
L_008F7340:;
    v0 = 8; goto L_008F734C;
L_008F7348:;
    v0 = 9;
L_008F734C:;
    return v0;
}
