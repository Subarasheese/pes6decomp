/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_001105C8(void);
void func_00110E58(s64, s64, s64);
s64 func_0012EF60(s64, s64);
void func_00362EA0(s64, s64, s64, s64);
void func_00363010(void);
void func_00363800(s64, s64, s64, s64);

void func_00362BF0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;
    s64 frame[16];
    s64 sp = (s32) (u32) frame;

    s3 = a0;
    goto L_00362D78;
L_00362C10:;
    func_00362EA0(a0, a1, a2, a3);
    s2 = 0;
L_00362C1C:;
    v0 = (s32) 0x620000U;
    v0 = (s32) ((u32) v0 + 0xffffed50U);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile u8 *) (u32) (v0 + 2));
    at = v0 < 4;
    if (at != 0) { s2 = (s32) ((u32) s2 + 0x1U); goto L_00362D64; }
    a0 = (s32) ((u32) v0 << 1);
    v1 = (*(volatile s32 *) (u32) (gp + -21324));
    v0 = (s32) 0x620000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -4784));
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = v0 & 0x1;
    v0 = (u64) 0 < (u64) v0;
    v0 = (s32) ((u32) 0 - (u32) v0);
    { s32 c_ = v0 != 0; s1 = (*(volatile u16 *) (u32) v1); if (c_) goto L_00362CC8; }
    v0 = s1 < 96;
    if (v0 != 0) { v0 = 110; goto L_00362CBC; }
    at = s1 < 106;
    if (at == 0) goto L_00362CB8;
    a2 = (s32) 0x3c0000U;
    a1 = (s32) ((u32) sp + 0x50U);
    a2 = (s32) ((u32) a2 + 0xffff8ca0U);
    a0 = 5;
L_00362C88:;
    v1 = (*(volatile s16 *) (u32) a2);
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    v0 = (*(volatile s16 *) (u32) (a2 + 2));
    (*(volatile u16 *) (u32) a1) = (u16) v1;
    (*(volatile u16 *) (u32) (a1 + 2)) = (u16) v0;
    a2 = (s32) ((u32) a2 + 0x4U);
    { s32 c_ = a0 > 0; a1 = (s32) ((u32) a1 + 0x4U); if (c_) goto L_00362C88; }
    v0 = (s32) ((u32) s1 << 1);
    v0 = (s32) ((u32) v0 + (u32) sp);
    s1 = (*(volatile u16 *) (u32) (v0 + -112)); goto L_00362CC8;
L_00362CB8:;
    v0 = 110;
L_00362CBC:;
    if (s1 != v0) { v1 = s1 & 0xffff; goto L_00362CCC; }
    s1 = (s64) ((u64) 0 + (u64) (s64) 46);
L_00362CC8:;
    v1 = s1 & 0xffff;
L_00362CCC:;
    if (v1 == 0) goto L_00362D60;
    v0 = (s32) 0x620000U;
    v0 = (s32) ((u32) v0 + 0xffffec50U);
    s0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) s0);
    if (v0 != 0) { v0 = 128; goto L_00362D5C; }
    v0 = (s32) 0x620000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -5022));
    if (v0 == 0) { a0 = 5; goto L_00362D00; }
    a0 = 4;
L_00362D00:;
    a1 = s1 & 0xffff;
    a2 = 0; func_00363800(a0, a1, a2, a3);
    (*(volatile u16 *) (u32) (gp + -21336)) = (u16) s1; v0 = func_001105C8();
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x7cU);
    a2 = (s32) ((u32) sp + 0x78U); func_00110E58(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (sp + 120));
    v0 = 1000;
    v1 = (*(volatile s32 *) (u32) (sp + 124));
    if ((u32) v0 != 0) { s64 q_ = (s32) ((u32) a0 / (u32) v0); hi = (s32) ((u32) a0 % (u32) v0); lo = q_; }
    v0 = (s32) ((u32) v1 << 5);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = lo;
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0x1f4U);
    (*(volatile u32 *) (u32) (gp + -21332)) = (u32) v0;
    v0 = 128;
L_00362D5C:;
    (*(volatile u8 *) (u32) s0) = (u8) v0;
L_00362D60:;
    s2 = (s32) ((u32) s2 + 0x1U);
L_00362D64:;
    v0 = s2 < 8;
    if (v0 != 0) goto L_00362C1C;
    a0 = s3; func_00363010();
L_00362D78:;
    a1 = (s32) 0x620000U;
    a0 = 0;
    a1 = (s32) ((u32) a1 + 0xffffed50U); v0 = func_0012EF60(a0, a1);
    if (v0 != 0) goto L_00362C10;
    v1 = (*(volatile u16 *) (u32) (gp + -21336));
    v0 = (s32) 0x620000U;
    v0 = (s32) ((u32) v0 + 0xffffec50U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 == 0) { ; goto L_00362E78; }
    v0 = func_001105C8();
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x74U);
    a2 = (s32) ((u32) sp + 0x70U); func_00110E58(a0, a1, a2);
    a1 = (*(volatile s32 *) (u32) (sp + 112));
    v1 = 1000;
    a0 = (*(volatile s32 *) (u32) (sp + 116));
    v0 = (*(volatile s32 *) (u32) (gp + -21332));
    if ((u32) v1 != 0) { s64 q_ = (s32) ((u32) a1 / (u32) v1); hi = (s32) ((u32) a1 % (u32) v1); lo = q_; }
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    a1 = lo;
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) a1 + (u32) v1);
    at = (u64) v0 < (u64) v1;
    if (at == 0) goto L_00362E74;
    if (s3 == 0) goto L_00362E74;
    v0 = (s32) 0x620000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -5022));
    if (v0 == 0) { a0 = 5; goto L_00362E1C; }
    a0 = 4;
L_00362E1C:;
    a1 = (*(volatile u16 *) (u32) (gp + -21336));
    a2 = 1; func_00363800(a0, a1, a2, a3);
    v0 = func_001105C8();
    a0 = v0;
    a1 = (s32) ((u32) sp + 0x6cU);
    a2 = (s32) ((u32) sp + 0x68U); func_00110E58(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (sp + 104));
    v0 = 1000;
    v1 = (*(volatile s32 *) (u32) (sp + 108));
    if ((u32) v0 != 0) { s64 q_ = (s32) ((u32) a0 / (u32) v0); hi = (s32) ((u32) a0 % (u32) v0); lo = q_; }
    v0 = (s32) ((u32) v1 << 5);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = lo;
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0x32U);
    (*(volatile u32 *) (u32) (gp + -21332)) = (u32) v0;
L_00362E74:;
L_00362E78:;
    v0 = 0;
    return;
}
