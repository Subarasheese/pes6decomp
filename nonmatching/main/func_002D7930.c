/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Team_ResolveSpecialId(s32);
s32 func_00237530(s32);
void D_002D7930(s32 a0, s32 a1, s32 a2, s32 a3);

void func_002D7930(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    v0 = s0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffedaU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = s0 & 0xffff; goto L_002D7AE0; }
    v0 = func_00237530(a0);
    if (v0 == 0) goto L_002D7ADC;
    a0 = s0; v0 = Pes6Team_ResolveSpecialId(a0);
    s0 = v0 & 0xffff;
    v0 = (s32) ((u32) s0 + 0xfffffedaU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { at = (u64) v0 < (u64) (s64) 2; goto L_002D7988; }
    v0 = 0; goto L_002D7B04;
L_002D7988:;
    if (at == 0) { v0 = s0 & 0xffff; goto L_002D7AB0; }
    a0 = s0; v0 = func_00237530(a0);
    if (v0 == 0) goto L_002D7AAC;
    a0 = s0; v0 = Pes6Team_ResolveSpecialId(a0);
    s0 = v0 & 0xffff;
    v0 = (s32) ((u32) s0 + 0xfffffedaU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { at = (u64) v0 < (u64) (s64) 2; goto L_002D79C4; }
    v0 = 0; goto L_002D7AD4;
L_002D79C4:;
    if (at == 0) { v0 = s0 & 0xffff; goto L_002D7A80; }
    a0 = s0; v0 = func_00237530(a0);
    if (v0 == 0) goto L_002D7A7C;
    a0 = s0; v0 = Pes6Team_ResolveSpecialId(a0);
    s0 = v0 & 0xffff;
    v0 = (s32) ((u32) s0 + 0xfffffedaU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { at = (u64) v0 < (u64) (s64) 2; goto L_002D7A00; }
    v0 = 0; goto L_002D7AA4;
L_002D7A00:;
    if (at == 0) { v0 = s0 & 0xffff; goto L_002D7A50; }
    a0 = s0; v0 = func_00237530(a0);
    if (v0 == 0) goto L_002D7A4C;
    a0 = s0; v0 = Pes6Team_ResolveSpecialId(a0);
    a0 = v0 & 0xffff;
    v0 = (s32) ((u32) a0 + 0xfffffedaU);
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_002D7A3C;
    v0 = 0; goto L_002D7A74;
L_002D7A3C:;
    D_002D7930(a0, a1, a2, a3);
    goto L_002D7A74;
L_002D7A4C:;
    v0 = s0 & 0xffff;
L_002D7A50:;
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) v0 << 4);
    v1 = (s32) ((u32) v1 + 0xfffff3aeU);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = 1;
    v1 = (*(volatile u16 *) (u32) v1);
    v1 = v1 & 0x1;
    if (v1 != v0) { v0 = 0; goto L_002D7A74; }
L_002D7A74:;
    goto L_002D7AA4;
L_002D7A7C:;
    v0 = s0 & 0xffff;
L_002D7A80:;
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) v0 << 4);
    v1 = (s32) ((u32) v1 + 0xfffff3aeU);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = 1;
    v1 = (*(volatile u16 *) (u32) v1);
    v1 = v1 & 0x1;
    if (v1 != v0) { v0 = 0; goto L_002D7AA4; }
L_002D7AA4:;
    goto L_002D7AD4;
L_002D7AAC:;
    v0 = s0 & 0xffff;
L_002D7AB0:;
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) v0 << 4);
    v1 = (s32) ((u32) v1 + 0xfffff3aeU);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = 1;
    v1 = (*(volatile u16 *) (u32) v1);
    v1 = v1 & 0x1;
    if (v1 != v0) { v0 = 0; goto L_002D7AD4; }
L_002D7AD4:;
    goto L_002D7B08;
L_002D7ADC:;
    v0 = s0 & 0xffff;
L_002D7AE0:;
    v1 = (s32) 0x3e0000U;
    a0 = (s32) ((u32) v0 << 4);
    v1 = (s32) ((u32) v1 + 0xfffff3aeU);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = 1;
    v1 = (*(volatile u16 *) (u32) v1);
    v1 = v1 & 0x1;
    if (v1 != v0) { v0 = 0; goto L_002D7B04; }
L_002D7B04:;
L_002D7B08:;
    return;
}
