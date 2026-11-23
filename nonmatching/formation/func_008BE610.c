/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0028C460(s32);
void func_0028CB20(s32);

void func_008BE610(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[46];
    s32 sp = (s32) (u32) frame;

    a3 = 0;
    a2 = (s32) ((u32) sp + 0x70U);
    v1 = 0;
    v0 = (*(volatile u8 *) (u32) (a0 + 1999));
    s0 = a0;
    s5 = (s32) ((u32) s0 + 0x7cfU);
    s4 = (s32) ((u32) s0 + 0x7d0U);
    s3 = (s32) ((u32) s0 + 0x7d1U);
    s2 = (s32) ((u32) s0 + 0x7d2U);
    (*(volatile u8 *) (u32) (sp + 304)) = (u8) v0;
    s1 = (s32) ((u32) s0 + 0x7d3U);
    a4 = (*(volatile u8 *) (u32) (a0 + 2000));
    v0 = a2;
    (*(volatile u8 *) (u32) (sp + 305)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a0 + 2001));
    (*(volatile u8 *) (u32) (sp + 306)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a0 + 2002));
    (*(volatile u8 *) (u32) (sp + 307)) = (u8) a4;
    a4 = (*(volatile u8 *) (u32) (a0 + 2003));
    (*(volatile u8 *) (u32) (sp + 308)) = (u8) a4;
    a0 = (*(volatile u8 *) (u32) (a0 + 2004));
    (*(volatile u8 *) (u32) (sp + 352)) = (u8) a0;
    a5 = 1;
    a6 = 12;
L_008BE690:;
    a4 = (s32) ((u32) s0 + (u32) a3);
    a0 = (*(volatile u8 *) (u32) (a4 + 1894));
    { s32 c_ = a1 != 0; (*(volatile u8 *) (u32) a2) = (u8) a0; if (c_) goto L_008BE6B8; }
    a0 = (*(volatile u8 *) (u32) (a4 + 403));
    a0 = (u64) 0 < (u64) a0;
    a0 = a0 ^ 0x1;
    (*(volatile u8 *) (u32) (a2 + 208)) = (u8) a0;
    (*(volatile u8 *) (u32) (a2 + 160)) = (u8) a0; goto L_008BE6F8;
L_008BE6B8:;
    a0 = (*(volatile u8 *) (u32) (a4 + 51));
    a0 = (u64) 0 < (u64) a0;
    if (a0 == 0) { (*(volatile u8 *) (u32) (a2 + 208)) = (u8) a0; goto L_008BE6D8; }
    a0 = (*(volatile u8 *) (u32) (a4 + 403));
    a0 = (u64) 0 < (u64) a0;
    a0 = a0 ^ 0x1;
    (*(volatile u8 *) (u32) (a2 + 208)) = (u8) a0;
L_008BE6D8:;
    (*(volatile u8 *) (u32) (a2 + 160)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (a4 + 211));
    if (a0 != a6) goto L_008BE6F8;
    a0 = (*(volatile u8 *) (u32) (a4 + 403));
    if (a0 != 0) goto L_008BE6F8;
    (*(volatile u8 *) (u32) (a2 + 208)) = (u8) a5;
L_008BE6F8:;
    a4 = (*(volatile s32 *) (u32) (s0 + 756));
    a3 = (s32) ((u32) a3 + 0x1U);
    a2 = (s32) ((u32) a2 + 0x1U);
    a0 = a3 < 32;
    a4 = (s32) ((u32) a4 + (u32) v1);
    (*(volatile u32 *) (u32) (v0 + 32)) = (u32) a4;
    v1 = (s32) ((u32) v1 + 0x2cU);
    { s32 c_ = a0 != 0; v0 = (s32) ((u32) v0 + 0x4U); if (c_) goto L_008BE690; }
    a1 = 0;
    a2 = (s32) ((u32) sp + 0x70U);
L_008BE724:;
    a0 = (s32) ((u32) s0 + (u32) a1);
    v1 = (*(volatile u8 *) (u32) (a0 + 2026));
    a1 = (s32) ((u32) a1 + 0x5U);
    v0 = a1 < 6;
    (*(volatile u8 *) (u32) (a2 + 197)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a0 + 2027));
    (*(volatile u8 *) (u32) (a2 + 198)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a0 + 2028));
    (*(volatile u8 *) (u32) (a2 + 199)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a0 + 2029));
    (*(volatile u8 *) (u32) (a2 + 200)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (a0 + 2030));
    (*(volatile u8 *) (u32) (a2 + 201)) = (u8) v1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x5U); if (c_) goto L_008BE724; }
    v1 = (s32) ((u32) a1 + (u32) s0);
    v0 = (s32) ((u32) a1 + (u32) sp);
    v1 = (*(volatile u8 *) (u32) (v1 + 2026));
    a0 = (s32) ((u32) sp + 0x70U);
    (*(volatile u8 *) (u32) (v0 + 309)) = (u8) v1; func_0028CB20(a0);
    a0 = (s32) ((u32) sp + 0x70U); v0 = func_0028C460(a0);
    (*(volatile u8 *) (u32) (s0 + 2004)) = (u8) v0;
    v1 = (*(volatile u8 *) (u32) (sp + 304));
    (*(volatile u8 *) (u32) s5) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 305));
    (*(volatile u8 *) (u32) s4) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 306));
    (*(volatile u8 *) (u32) s3) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 307));
    (*(volatile u8 *) (u32) s2) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 308));
    (*(volatile u8 *) (u32) s1) = (u8) v1;
    return;
}
