/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
void memcpy(s32, s32, s32);
s32 strcmp(s32, s32);

void func_00624310(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    at = s3 < 29;
    s2 = a2;
    { s32 c_ = at == 0; a0 = 1; if (c_) goto L_0062444C; }
    v0 = (s32) 0x530000U;
    at = s3 < 29;
    { s32 c_ = at == 0; s1 = (*(volatile s32 *) (u32) (v0 + 3152)); if (c_) goto L_00624364; }
    v0 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v0 - (u32) s3);
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    s1 = (s32) ((u32) s1 + (u32) v0);
L_00624364:;
    if (a0 != 0) { s1 = (s32) ((u32) s1 + 0x15U); goto L_0062436C; }
L_0062436C:;
    at = s3 < 29;
    if (at == 0) { v0 = 0; goto L_00624398; }
    v0 = (s32) ((u32) a0 << 2);
    v1 = (s32) 0x650000U;
    a0 = (s32) ((u32) s3 << 3);
    v1 = (s32) ((u32) v1 + 0x6e40U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_001F08B0(a0);
L_00624398:;
    s0 = v0;
    a0 = v0;
    a1 = s2; v0 = strcmp(a0, a1);
    if (v0 != 0) goto L_006243FC;
    v0 = (s32) 0x530000U;
    v1 = (s32) ((u32) s3 << 3);
    a0 = (s32) ((u32) v1 - (u32) s3);
    a1 = (*(volatile s32 *) (u32) (v0 + 3152));
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = 1;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) a1 + (u32) v1); if (c_) goto L_006243E0; }
    (*(volatile u8 *) (u32) (v1 + 82)) = (u8) 0; goto L_006243E4;
L_006243E0:;
    (*(volatile u8 *) (u32) (v1 + 83)) = (u8) 0;
L_006243E4:;
    a0 = s1;
    a1 = s0;
    a2 = 61; memcpy(a0, a1, a2);
    v0 = 1; goto L_00624444;
L_006243FC:;
    v0 = (s32) 0x530000U;
    v1 = (s32) ((u32) s3 << 3);
    a0 = (s32) ((u32) v1 - (u32) s3);
    a1 = (*(volatile s32 *) (u32) (v0 + 3152));
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = 1;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) a1 + (u32) v1); if (c_) goto L_0062442C; }
    (*(volatile u8 *) (u32) (v1 + 82)) = (u8) v0; goto L_00624430;
L_0062442C:;
    (*(volatile u8 *) (u32) (v1 + 83)) = (u8) v0;
L_00624430:;
    a0 = s1;
    a1 = s2;
    a2 = 61; memcpy(a0, a1, a2);
    v0 = 1;
L_00624444:;
    goto L_00624454;
L_0062444C:;
    v0 = 0;
L_00624454:;
    return;
}
