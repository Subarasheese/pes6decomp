/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D7960(s32, s32);
void func_00C75160(s32, s32);

s32 func_00C74AD0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    v0 = -1;
    s4 = a0;
    s3 = a1;
    s2 = 0;
    a2 = (*(volatile u8 *) (u32) a1);
    v1 = (*(volatile s8 *) (u32) (a1 + 1));
    { s32 c_ = v1 == v0; s0 = a2; if (c_) goto L_00C74B98; }
    v0 = 1;
    if (v1 == v0) { a1 = a2; goto L_00C74B20; }
    (*(volatile u8 *) (u32) s3) = (u8) s0; goto L_00C74BC8;
L_00C74B20:;
    func_00C75160(a0, a1);
    s0 = (s32) ((u32) s0 + 0x40U);
    at = s0 < 256;
    if (at != 0) goto L_00C74BC4;
    v0 = 319;
    if (s0 != v0) { s0 = 255; goto L_00C74BC4; }
    v1 = (*(volatile s8 *) (u32) s4);
    v0 = (*(volatile s8 *) (u32) (s4 + 1));
    v0 = (s32) ((u32) v1 - (u32) v0);
    { s32 c_ = v0 <= 0; s1 = 0; if (c_) goto L_00C74B88; }
    s0 = s4;
L_00C74B5C:;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = 0; func_001D7960(a0, a1);
    v1 = (*(volatile s8 *) (u32) s4);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = (*(volatile s8 *) (u32) (s4 + 1));
    v0 = (s32) ((u32) v1 - (u32) v0);
    v0 = s1 < v0;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00C74B5C; }
L_00C74B88:;
    (*(volatile u8 *) (u32) (s3 + 1)) = (u8) 0;
    s0 = 255;
    goto L_00C74BC4;
L_00C74B98:;
    if (a2 > 0) { s0 = (s32) ((u32) a2 + 0xffffffc0U); goto L_00C74BAC; }
    s0 = 0;
    s2 = 1; goto L_00C74BC4;
L_00C74BAC:;
    if (s0 >= 0) { a1 = a2 & 0xff; goto L_00C74BBC; }
    s0 = 0;
    a1 = a2 & 0xff;
L_00C74BBC:;
    a0 = s4; func_00C75160(a0, a1);
L_00C74BC4:;
    (*(volatile u8 *) (u32) s3) = (u8) s0;
L_00C74BC8:;
    v0 = s2;
    return v0;
}
