/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
s32 func_0023D820(void);
s32 func_00295290(void);
s32 func_002FC720(s32);

s32 func_00257B50(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0; v0 = func_0023D820();
    if (v0 == 0) goto L_00257B74;
    v0 = 4; goto L_00257C88;
L_00257B74:;
    if (s0 == 0) { v0 = 0; goto L_00257B80; }
    v0 = (*(volatile s8 *) (u32) s0);
L_00257B80:;
    s0 = v0 & 0xffff;
    a0 = v0 & 0xff; v0 = func_002FC720(a0);
    v1 = v0 & 0xff;
    v0 = 3;
    if (v1 == v0) goto L_00257C6C;
    v0 = 2;
    if (v1 == v0) goto L_00257C50;
    v0 = 1;
    if (v1 == v0) goto L_00257C34;
    if (v1 == 0) { v1 = s0 & 0xffff; goto L_00257BC4; }
    v0 = s0 & 0xff; goto L_00257C88;
L_00257BC4:;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1bb0U);
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile u16 *) (u32) v0);
    v0 = (s32) ((u32) a0 + 0xfffffedaU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v1 = a0 & 0xffff; goto L_00257BF8; }
    v0 = Pes6Team_ResolveSpecialId(a0);
    a0 = v0 & 0xffff;
    v1 = a0 & 0xffff;
L_00257BF8:;
    at = (u64) v1 < (u64) (s64) 328;
    if (at == 0) { v0 = 1; goto L_00257C14; }
    v0 = (s32) 0x3b0000U;
    v0 = (s32) ((u32) v0 + 0xffffac00U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
L_00257C14:;
    s0 = v0 & 0xffff; v0 = func_00295290();
    if (v0 == 0) { v0 = s0 & 0xffff; goto L_00257C2C; }
    v0 = s0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0x7U);
L_00257C2C:;
    s0 = v0 & 0xffff; goto L_00257C84;
L_00257C34:;
    v0 = func_00295290();
    if (v0 == 0) { v0 = 28; goto L_00257C48; }
    v0 = 29;
L_00257C48:;
    s0 = v0 & 0xffff; goto L_00257C84;
L_00257C50:;
    v0 = func_00295290();
    if (v0 == 0) { v0 = 30; goto L_00257C64; }
    v0 = 31;
L_00257C64:;
    s0 = v0 & 0xffff; goto L_00257C84;
L_00257C6C:;
    v0 = func_00295290();
    if (v0 == 0) { v0 = 32; goto L_00257C80; }
    v0 = 33;
L_00257C80:;
    s0 = v0 & 0xffff;
L_00257C84:;
    v0 = s0 & 0xff;
L_00257C88:;
    return v0;
}
