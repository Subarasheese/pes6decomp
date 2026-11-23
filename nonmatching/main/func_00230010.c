/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetUnavailableFlag(void);
s64 func_00226710(void);

s64 func_00230010(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;

    v0 = Pes6SaveData_GetUnavailableFlag();
    v0 = (u64) 0 < (u64) v0;
    a1 = 1;
    if (v0 != a1) goto L_00230038;
    a1 = 0; goto L_00230080;
L_00230038:;
    v0 = (s32) 0x590000U;
    v1 = 5;
    a0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (a0 == v1) { v1 = (*(volatile s32 *) (u32) (gp + -31680)); goto L_00230064; }
    v0 = 4;
    if (a0 == v0) { v0 = 1; goto L_00230084; }
    a1 = 0; goto L_00230080;
    v1 = (*(volatile s32 *) (u32) (gp + -31680));
L_00230064:;
    v0 = (s32) 0x20000U;
    v1 = (*(volatile u32 *) (u32) (v1 + 32));
    v0 = v1 & v0;
    a1 = (s64) ((u64) v0 << 32);
    a1 = a1 >> 32; goto L_00230080;
    a1 = 0;
L_00230080:;
    v0 = 1;
L_00230084:;
    if (a1 == v0) goto L_00230094;
    v0 = 0; goto L_002300F0;
L_00230094:;
    v0 = func_00226710();
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xffffffe4U);
    at = (u64) v0 < (u64) (s64) 11;
    if (at == 0) { v0 = 0; goto L_002300F0; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8600U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2300ccU) goto L_002300CC; if (t_ == 0x2300d4U) goto L_002300D4; if (t_ == 0x2300dcU) goto L_002300DC; if (t_ == 0x2300e4U) goto L_002300E4; if (t_ == 0x2300ecU) goto L_002300EC; }
L_002300CC:;
    v0 = 1; goto L_002300F0;
L_002300D4:;
    v0 = 2; goto L_002300F0;
L_002300DC:;
    v0 = 3; goto L_002300F0;
L_002300E4:;
    v0 = 4; goto L_002300F0;
L_002300EC:;
    v0 = 0;
L_002300F0:;
    return v0;
}
