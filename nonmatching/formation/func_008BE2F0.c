/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_008B4920(void);
s64 func_008B9660(void);

s64 func_008BE2F0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = a0;
    s1 = (s64) ((u64) 0 + (u64) (s64) 255);
    s0 = 0; v0 = func_008B4920();
    if (v0 == 0) goto L_008BE340;
    v0 = (s32) 0x8b0000U;
    v1 = s2 & 0xff;
    v0 = (*(volatile s8 *) (u32) (v0 + 5198));
    v0 = v0 & 0x1;
    if (v1 != v0) { v0 = 255; goto L_008BE338; }
    v0 = 0;
L_008BE338:;
    goto L_008BE4B4;
L_008BE340:;
    v0 = func_008B9660();
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 4;
    if (v1 != v0) goto L_008BE368;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7606)); goto L_008BE4B0;
L_008BE368:;
    v0 = func_008B9660();
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 1;
    if (v1 != v0) goto L_008BE3D0;
    v0 = (s32) 0x590000U;
    a1 = (s32) 0x590000U;
    a0 = (*(volatile s8 *) (u32) (v0 + 7606));
    a2 = 0;
    a1 = (s32) ((u32) a1 + 0x2800U);
    v1 = s2 & 0xff;
L_008BE39C:;
    v0 = (*(volatile u8 *) (u32) a1);
    if (a0 != v0) { a2 = (s32) ((u32) a2 + 0x1U); goto L_008BE3C0; }
    v0 = (*(volatile u8 *) (u32) (a1 + 1));
    if (v1 != v0) goto L_008BE3BC;
    s0 = 1; goto L_008BE3D0;
L_008BE3BC:;
    a2 = (s32) ((u32) a2 + 0x1U);
L_008BE3C0:;
    v0 = a2 < 8;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x28U); if (c_) goto L_008BE39C; }
L_008BE3D0:;
    if (s0 == 0) goto L_008BE3FC;
    v0 = (s32) 0x590000U;
    v1 = s2 & 0xff;
    v0 = (s32) ((u32) v0 + 0x295bU);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = (*(volatile s8 *) (u32) (v0 + 7606));
    if (v1 != v0) goto L_008BE43C;
L_008BE3FC:;
    v0 = (s32) 0x590000U;
    v1 = s2 & 0xff;
    v0 = (s32) ((u32) v0 + 0x295bU);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    at = v0 < 8;
    if (at == 0) goto L_008BE43C;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (a0 + 10587));
    v1 = (*(volatile u8 *) (u32) (v1 + 10588));
    if (a0 == v1) goto L_008BE43C;
    goto L_008BE4B0;
L_008BE43C:;
    a1 = (s32) 0x590000U;
    v1 = s2 & 0xff;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0x2800U);
L_008BE44C:;
    v0 = (*(volatile u8 *) (u32) a1);
    at = v0 < 8;
    if (at == 0) { a0 = (s32) ((u32) a0 + 0x1U); goto L_008BE48C; }
    v0 = (*(volatile u8 *) (u32) (a1 + 1));
    if (v1 != v0) goto L_008BE488;
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0x2800U);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (*(volatile u8 *) (u32) v0); goto L_008BE498;
L_008BE488:;
    a0 = (s32) ((u32) a0 + 0x1U);
L_008BE48C:;
    v0 = a0 < 8;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x28U); if (c_) goto L_008BE44C; }
L_008BE498:;
    v0 = 1;
    if (s0 != v0) { v0 = s1; goto L_008BE4B0; }
    v0 = (s32) 0x590000U;
    s1 = (*(volatile u8 *) (u32) (v0 + 7606));
    v0 = s1;
L_008BE4B0:;
L_008BE4B4:;
    return v0;
}
