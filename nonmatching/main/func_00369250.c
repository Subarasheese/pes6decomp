/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Job_GetManager(void);
s32 func_0032E980(s32);
s32 func_003336A0(s32, s32);
s32 func_00C59D90(s32, s32, s32, s32);
s32 memset(s32, s32, s32);

s32 func_00369250(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s64 frame[34];
    s32 sp = (s32) (u32) frame;

    a2 = 2;
    s5 = a0;
    a0 = (s32) ((u32) s5 + 0x7U);
    s0 = a1;
    a1 = 255; v0 = memset(a0, a1, a2);
    a0 = s0;
    a1 = 0; v0 = func_003336A0(a0, a1);
    a0 = s0;
    (*(volatile u16 *) (u32) (s5 + 20)) = (u16) v0;
    a1 = 1; v0 = func_003336A0(a0, a1);
    (*(volatile u16 *) (u32) (s5 + 22)) = (u16) v0;
    s3 = 0;
    v0 = (*(volatile u8 *) (u32) (s5 + 4));
    s2 = -1;
    { s32 c_ = v0 <= 0; s4 = 0; if (c_) goto L_003693D0; }
    s1 = (s32) 0xcc0000U;
    s1 = (s32) ((u32) s1 + 0xffffd3b0U);
L_003692CC:;
    v0 = (s32) ((u32) s3 << 4);
    v0 = (s32) ((u32) v0 + (u32) sp);
    s0 = (s32) ((u32) v0 + 0x90U); v0 = Pes6Job_GetManager();
    v1 = (*(volatile s32 *) (u32) (v0 + 4092));
    v0 = 255;
    if (v1 == v0) goto L_00369300;
    s7 = (*(volatile u8 *) (u32) (s1 + 4)); v0 = Pes6Job_GetManager();
    v0 = (*(volatile s32 *) (u32) (v0 + 4092));
    if (s7 != v0) goto L_003693B8;
L_00369300:;
    v0 = (*(volatile u8 *) (u32) (s1 + 7));
    if (v0 == 0) goto L_00369318;
    goto L_00369370;
L_00369318:;
    v1 = (*(volatile s16 *) (u32) (s5 + 20));
    v0 = (*(volatile u8 *) (u32) (s1 + 34));
    if (v1 != v0) goto L_00369340;
    v1 = (*(volatile s16 *) (u32) (s5 + 22));
    v0 = (*(volatile u8 *) (u32) (s1 + 35));
    if (v1 != v0) goto L_00369340;
    s6 = (*(volatile u8 *) (u32) (s1 + 10));
    s2 = s4;
L_00369340:;
    a0 = (*(volatile u8 *) (u32) (s1 + 10));
    v1 = (*(volatile u8 *) (u32) s1);
    s3 = (s32) ((u32) s3 + 0x1U);
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) s4;
    (*(volatile u32 *) (u32) s0) = (u32) a0;
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v1;
    v0 = (*(volatile u8 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0;
    (*(volatile u8 *) (u32) (s0 + 6)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 11));
    (*(volatile u8 *) (u32) (s0 + 7)) = (u8) v0; goto L_003693B8;
L_00369370:;
    a0 = s4 & 0xff; v0 = func_00C59D90(a0, a1, a2, a3);
    v1 = -1;
    if (v0 == v1) goto L_003693B8;
    a1 = (*(volatile u8 *) (u32) (s1 + 10));
    a0 = 1;
    (*(volatile u8 *) (u32) (s0 + 8)) = (u8) s4;
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = (*(volatile u8 *) (u32) s1);
    (*(volatile u32 *) (u32) s0) = (u32) a1;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) a0;
    v0 = (*(volatile u8 *) (u32) (s1 + 4));
    (*(volatile u8 *) (u32) (s0 + 5)) = (u8) v1;
    (*(volatile u8 *) (u32) (s0 + 6)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s1 + 11));
    (*(volatile u8 *) (u32) (s0 + 7)) = (u8) v0;
L_003693B8:;
    v0 = (*(volatile u8 *) (u32) (s5 + 4));
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < v0;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x34U); if (c_) goto L_003692CC; }
L_003693D0:;
    { s32 c_ = s3 <= 0; a1 = 0; if (c_) goto L_00369440; }
    a3 = (s32) ((u32) sp + 0x90U);
    a0 = a3;
L_003693E0:;
    (*(volatile u8 *) (u32) (a3 + 9)) = (u8) 0;
    { s32 c_ = s3 <= 0; a4 = 0; if (c_) goto L_00369430; }
    a2 = a0;
L_003693F0:;
    v1 = (*(volatile u8 *) (u32) (a3 + 8));
    v0 = (*(volatile u8 *) (u32) (a2 + 8));
    if (v1 == v0) goto L_00369420;
    v1 = (*(volatile s32 *) (u32) a3);
    v0 = (*(volatile s32 *) (u32) a2);
    at = v1 < v0;
    if (at == 0) goto L_00369420;
    v0 = (*(volatile u8 *) (u32) (a3 + 9));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) (a3 + 9)) = (u8) v0;
L_00369420:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < s3;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x10U); if (c_) goto L_003693F0; }
L_00369430:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < s3;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0x10U); if (c_) goto L_003693E0; }
L_00369440:;
    v0 = -1;
    if (s2 == v0) { a0 = 0; goto L_00369544; }
    (*(volatile u8 *) (u32) (s5 + 8)) = (u8) s2;
    a0 = 0;
    { s32 c_ = s3 <= 0; s0 = 0; if (c_) goto L_003694A0; }
    a2 = (s32) ((u32) sp + 0x90U);
    a1 = (s32) ((u32) sp + 0xf0U);
L_00369464:;
    v1 = (*(volatile u8 *) (u32) (a2 + 8));
    if (s2 == v1) goto L_00369490;
    v0 = (*(volatile s32 *) (u32) a2);
    v0 = v0 < s6;
    if (v0 != 0) goto L_00369490;
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    s0 = (s32) ((u32) s0 + 0x1U);
    a1 = (s32) ((u32) a1 + 0x4U);
L_00369490:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < s3;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x10U); if (c_) goto L_00369464; }
L_003694A0:;
    if (s0 == 0) { v1 = (*(volatile u8 *) (u32) (s5 + 7)); goto L_003694C4; }
    a0 = s0; v0 = func_0032E980(a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 240));
    (*(volatile u8 *) (u32) (s5 + 7)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s5 + 7));
L_003694C4:;
    v0 = 255;
    if (v1 != v0) goto L_00369520;
    a0 = 0;
    { s32 c_ = s3 <= 0; s0 = 0; if (c_) goto L_00369520; }
    a2 = (s32) ((u32) sp + 0x90U);
    a1 = (s32) ((u32) sp + 0xf0U);
L_003694E4:;
    v1 = (*(volatile u8 *) (u32) (a2 + 8));
    if (s2 == v1) goto L_00369510;
    v0 = (*(volatile s32 *) (u32) a2);
    at = v0 < s6;
    if (at == 0) goto L_00369510;
    (*(volatile u32 *) (u32) a1) = (u32) v1;
    s0 = (s32) ((u32) s0 + 0x1U);
    a1 = (s32) ((u32) a1 + 0x4U);
L_00369510:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < s3;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x10U); if (c_) goto L_003694E4; }
L_00369520:;
    if (s0 == 0) { a3 = (*(volatile u8 *) (u32) (s5 + 7)); goto L_003696EC; }
    a0 = s0; v0 = func_0032E980(a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 240));
    (*(volatile u8 *) (u32) (s5 + 7)) = (u8) v0; goto L_003696E8;
L_00369544:;
    { s32 c_ = s3 <= 0; v1 = 0; if (c_) goto L_00369580; }
    a2 = (s32) ((u32) sp + 0x90U);
    a1 = (s32) ((u32) sp + 0xf0U);
L_00369554:;
    v0 = (*(volatile u8 *) (u32) (a2 + 4));
    if (v0 != 0) goto L_00369570;
    v0 = (*(volatile u8 *) (u32) (a2 + 8));
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u32 *) (u32) a1) = (u32) v0;
    a1 = (s32) ((u32) a1 + 0x4U);
L_00369570:;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = a0 < s3;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x10U); if (c_) goto L_00369554; }
L_00369580:;
    if (v1 == 0) { v0 = (*(volatile u8 *) (u32) (s5 + 8)); goto L_003695D8; }
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (sp + 240)); goto L_003695B8; }
    v0 = 2;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) (sp + 240)); goto L_003695A8; }
    v0 = (s32) ((u32) v1 << 2); goto L_003695C0;
L_003695A8:;
    v0 = (*(volatile s32 *) (u32) (sp + 244));
    (*(volatile u8 *) (u32) (s5 + 7)) = (u8) v1;
    (*(volatile u8 *) (u32) (s5 + 8)) = (u8) v0; goto L_003695D4;
L_003695B8:;
    (*(volatile u8 *) (u32) (s5 + 8)) = (u8) v0; goto L_003695D4;
L_003695C0:;
    v0 = (s32) ((u32) v0 + (u32) sp);
    v1 = (*(volatile s32 *) (u32) (v0 + 232));
    v0 = (*(volatile s32 *) (u32) (v0 + 236));
    (*(volatile u8 *) (u32) (s5 + 7)) = (u8) v1;
    (*(volatile u8 *) (u32) (s5 + 8)) = (u8) v0;
L_003695D4:;
    v0 = (*(volatile u8 *) (u32) (s5 + 8));
L_003695D8:;
    v1 = 255;
    if (v0 == v1) { a1 = 0; goto L_003695F4; }
    v0 = (*(volatile u8 *) (u32) (s5 + 7));
    if (v0 != v1) goto L_003696E8;
    a1 = 0;
L_003695F4:;
    { s32 c_ = s3 <= 0; a0 = 0; if (c_) goto L_00369638; }
    a3 = (s32) ((u32) sp + 0x90U);
    a2 = (s32) ((u32) sp + 0xf0U);
    v1 = 1;
L_00369608:;
    v0 = (*(volatile u8 *) (u32) (a3 + 4));
    if (v0 != v1) goto L_00369628;
    v0 = (*(volatile u8 *) (u32) (a3 + 8));
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) a2) = (u32) v0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_00369628:;
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < s3;
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0x10U); if (c_) goto L_00369608; }
L_00369638:;
    v0 = 1;
    if (a0 == v0) { v1 = (*(volatile u8 *) (u32) (s5 + 8)); goto L_00369654; }
    if (a0 == 0) goto L_003696E8;
    v1 = (*(volatile u8 *) (u32) (s5 + 8)); goto L_0036966C;
L_00369654:;
    v0 = 255;
    if (v1 == v0) goto L_003696E8;
    v0 = (*(volatile s32 *) (u32) (sp + 240));
    (*(volatile u8 *) (u32) (s5 + 7)) = (u8) v0; goto L_003696E8;
L_0036966C:;
    v0 = 255;
    if (v1 == v0) { s0 = a0; goto L_00369694; }
    v0 = func_0032E980(a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 240));
    (*(volatile u8 *) (u32) (s5 + 7)) = (u8) v0; goto L_003696E8;
L_00369694:;
    a0 = s0; v0 = func_0032E980(a0);
    v0 = (s32) ((u32) v0 << 2);
    a0 = s0;
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 240));
    (*(volatile u8 *) (u32) (s5 + 8)) = (u8) v0; v0 = func_0032E980(a0);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 240));
    (*(volatile u8 *) (u32) (s5 + 7)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (s5 + 8));
    v0 = (*(volatile u8 *) (u32) (s5 + 7));
    if (v0 == v1) goto L_00369694;
    at = v1 < v0;
    if (at == 0) goto L_003696E8;
    (*(volatile u8 *) (u32) (s5 + 8)) = (u8) v0;
    (*(volatile u8 *) (u32) (s5 + 7)) = (u8) v1;
L_003696E8:;
    a3 = (*(volatile u8 *) (u32) (s5 + 7));
L_003696EC:;
    v1 = (s32) 0xcc0000U;
    a1 = (*(volatile u8 *) (u32) (s5 + 8));
    v1 = (s32) ((u32) v1 + 0xffffd3b4U);
    v0 = (s32) ((u32) a3 << 1);
    a0 = (s32) ((u32) v0 + (u32) a3);
    v0 = (s32) ((u32) a1 << 1);
    a0 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) a3);
    v0 = (s32) ((u32) v0 << 2);
    a2 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) a1);
    a0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != v0) { a0 = (*(volatile u8 *) (u32) (s5 + 8)); goto L_00369778; }
    at = a1 < a3;
    if (at == 0) goto L_00369774;
    v1 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0xffffd3b7U);
    v0 = (s32) ((u32) v1 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_00369774;
    v0 = (s32) ((u32) v1 + (u32) a2);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) goto L_00369774;
    (*(volatile u8 *) (u32) (s5 + 8)) = (u8) a3;
    (*(volatile u8 *) (u32) (s5 + 7)) = (u8) a1;
L_00369774:;
    a0 = (*(volatile u8 *) (u32) (s5 + 8));
L_00369778:;
    v1 = 255;
    if (a0 == v1) { v0 = 0; goto L_003697C8; }
    v0 = (*(volatile u8 *) (u32) (s5 + 7));
    if (v0 != v1) goto L_0036979C;
    v0 = 0;
    goto L_003697C8;
L_0036979C:;
    if (a0 != v0) { v0 = (*(volatile u8 *) (u32) s5); goto L_003697AC; }
    v0 = 0; goto L_003697C8;
L_003697AC:;
    at = v0 < 2;
    if (at == 0) { v0 = 1; goto L_003697C8; }
    v0 = (s32) ((u32) v0 + (u32) s5);
    v1 = 1;
    (*(volatile u8 *) (u32) (v0 + 9)) = (u8) v1;
    v0 = 1;
L_003697C8:;
    return v0;
}
