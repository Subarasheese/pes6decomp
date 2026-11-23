/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00230930(void);
s32 func_00230AA0(void);
s32 func_00230EF0(void);
s32 func_00231010(void);
s32 func_00231130(void);
s32 func_00292BF0(void);
s32 func_00292CD0(s32);

s32 func_00237C40(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x590000U;
    s3 = a0;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = 14;
    { s32 c_ = v1 == v0; s2 = 0; if (c_) goto L_00237CB4; }
    v0 = 4;
    if (v1 == v0) goto L_00237C9C;
    v0 = 2;
    if (v1 == v0) goto L_00237C9C;
    v0 = 1;
    if (v1 == v0) goto L_00237C9C;
    goto L_00237D08;
L_00237C9C:;
    v0 = func_00230EF0();
    if (v0 == 0) goto L_00237CB4;
    v0 = (s32) 0x80000U;
    s2 = s2 | v0;
L_00237CB4:;
    v0 = func_00231130();
    if (v0 != 0) { v0 = (s32) 0x40000U; goto L_00237CE8; }
    v0 = func_00231010();
    if (v0 != 0) goto L_00237CE4;
    v0 = func_00230AA0();
    if (v0 == 0) goto L_00237CF0;
L_00237CE4:;
    v0 = (s32) 0x40000U;
L_00237CE8:;
    s2 = s2 | v0; goto L_00237D08;
L_00237CF0:;
    v0 = func_00230930();
    if (v0 == 0) goto L_00237D08;
    v0 = (s32) 0x280000U;
    s2 = s2 | v0;
L_00237D08:;
    v0 = (s32) 0x590000U;
    v1 = 255;
    v0 = (*(volatile u8 *) (u32) (v0 + 10587));
    s1 = 0;
    (*(volatile u8 *) (u32) (sp + 93)) = (u8) 0;
    { s32 c_ = v0 == v1; (*(volatile u8 *) (u32) (sp + 92)) = (u8) 0; if (c_) goto L_00237D30; }
    v0 = 1;
    (*(volatile u8 *) (u32) (sp + 92)) = (u8) v0; goto L_00237D48;
L_00237D30:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 10588));
    if (v0 == v1) goto L_00237D48;
    v0 = 1;
    (*(volatile u8 *) (u32) (sp + 93)) = (u8) v0;
L_00237D48:;
    a0 = (s32) 0x590000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0x2800U);
    v1 = 1;
L_00237D58:;
    v0 = (*(volatile u8 *) (u32) (a0 + 1));
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) goto L_00237D70;
    v0 = (s32) ((u32) v0 + (u32) sp);
    (*(volatile u8 *) (u32) (v0 + 92)) = (u8) v1;
L_00237D70:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < 8;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x28U); if (c_) goto L_00237D58; }
    s0 = 0;
    at = s0 < 2;
    if (at == 0) goto L_00237DE0;
    v0 = (s32) ((u32) s0 + (u32) sp);
L_00237D94:;
    v0 = (*(volatile u8 *) (u32) (v0 + 92));
    if (v0 == 0) goto L_00237DD0;
    a0 = s0; v0 = func_00292CD0(a0);
    v1 = 1;
    if (v0 == v1) goto L_00237DC8;
    if (v0 == 0) goto L_00237DC8;
    goto L_00237DD0;
L_00237DC8:;
    s1 = 1;
L_00237DD0:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 2;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + (u32) sp); goto L_00237D94; }
L_00237DE0:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = 14;
    if (v1 == v0) goto L_00237E20;
    v0 = 4;
    if (v1 == v0) goto L_00237E20;
    v0 = 2;
    if (v1 == v0) goto L_00237E20;
    v0 = 1;
    if (v1 == v0) goto L_00237E20;
    goto L_00237E50;
L_00237E20:;
    if (s1 != 0) goto L_00237E50;
    v0 = (s32) 0xc0000U;
    v0 = s2 & v0;
    if (v0 != 0) goto L_00237E50;
    v0 = func_00292BF0();
    if (v0 != 0) goto L_00237E50;
    v0 = (s32) 0x20000U;
    s2 = s2 | v0;
L_00237E50:;
    if (s3 == 0) { v0 = (s32) 0x20000U; goto L_00237E68; }
    v0 = (*(volatile s32 *) (u32) s3);
    v0 = v0 | s2;
    (*(volatile u32 *) (u32) s3) = (u32) v0;
    v0 = (s32) 0x20000U;
L_00237E68:;
    v0 = s2 & v0;
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    return v0;
}
