/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_008F8CA0(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) 0x590000U;
    a1 = (*(volatile s8 *) (u32) (v0 + 7606));
    v0 = a1 < 8;
    if (v0 != 0) { v1 = (s32) ((u32) a1 << 3); goto L_008F8CBC; }
    v0 = 0; goto L_008F8CD4;
L_008F8CBC:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0x1971U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
L_008F8CD4:;
    a0 = v0 & 0xff;
    v0 = a1 < 8;
    if (v0 != 0) { v1 = (s32) ((u32) a1 << 3); goto L_008F8CEC; }
    v0 = 0; goto L_008F8D04;
L_008F8CEC:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v0 = (s32) ((u32) v0 + 0x1974U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
L_008F8D04:;
    v1 = v0 & 0xff;
    if (v1 != 0) goto L_008F8D28;
    v0 = a0 & 0xff;
    at = v0 < 3;
    if (at == 0) goto L_008F8D28;
    v0 = 0; goto L_008F8D6C;
L_008F8D28:;
    if (v1 == 0) goto L_008F8D48;
    v0 = a0 & 0xff;
    v0 = v0 < 3;
    if (v0 != 0) goto L_008F8D48;
    v0 = 1; goto L_008F8D6C;
L_008F8D48:;
    if (v1 == 0) { v0 = 3; goto L_008F8D6C; }
    v0 = a0 & 0xff;
    at = v0 < 3;
    if (at == 0) goto L_008F8D68;
    v0 = 2; goto L_008F8D6C;
L_008F8D68:;
    v0 = 3;
L_008F8D6C:;
    return v0;
}
