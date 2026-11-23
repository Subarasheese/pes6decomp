/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0028CB20(s32);

void func_008BE4D0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s64 frame[36];
    s32 sp = (s32) (u32) frame;

    v0 = 255;
    a3 = (s32) ((u32) sp + 0x20U);
    a4 = 0;
    (*(volatile u8 *) (u32) (sp + 224)) = (u8) v0;
    s0 = a0;
    (*(volatile u8 *) (u32) (sp + 225)) = (u8) v0;
    a2 = 0;
    (*(volatile u8 *) (u32) (sp + 226)) = (u8) v0;
    a0 = a3;
    (*(volatile u8 *) (u32) (sp + 227)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 228)) = (u8) v0;
L_008BE508:;
    v1 = (s32) ((u32) s0 + (u32) a4);
    v0 = (*(volatile u8 *) (u32) (v1 + 1894));
    (*(volatile u8 *) (u32) a3) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 756));
    v0 = (s32) ((u32) v0 + (u32) a2);
    { s32 c_ = a1 != 0; (*(volatile u32 *) (u32) (a0 + 32)) = (u32) v0; if (c_) goto L_008BE538; }
    v0 = (*(volatile u8 *) (u32) (v1 + 403));
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (a3 + 160)) = (u8) v0; goto L_008BE558;
L_008BE538:;
    v0 = (*(volatile u8 *) (u32) (v1 + 51));
    v0 = (u64) 0 < (u64) v0;
    if (v0 == 0) { (*(volatile u8 *) (u32) (a3 + 160)) = (u8) v0; goto L_008BE558; }
    v0 = (*(volatile u8 *) (u32) (v1 + 403));
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    (*(volatile u8 *) (u32) (a3 + 160)) = (u8) v0;
L_008BE558:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < 32;
    a3 = (s32) ((u32) a3 + 0x1U);
    a2 = (s32) ((u32) a2 + 0x2cU);
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x4U); if (c_) goto L_008BE508; }
    a1 = 0;
    a2 = (s32) ((u32) sp + 0x20U);
L_008BE578:;
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
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x5U); if (c_) goto L_008BE578; }
    v1 = (s32) ((u32) a1 + (u32) s0);
    v0 = (s32) ((u32) a1 + (u32) sp);
    v1 = (*(volatile u8 *) (u32) (v1 + 2026));
    a0 = (s32) ((u32) sp + 0x20U);
    (*(volatile u8 *) (u32) (v0 + 229)) = (u8) v1; func_0028CB20(a0);
    v1 = (*(volatile u8 *) (u32) (sp + 224));
    (*(volatile u8 *) (u32) (s0 + 1999)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 225));
    (*(volatile u8 *) (u32) (s0 + 2000)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 226));
    (*(volatile u8 *) (u32) (s0 + 2001)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 227));
    (*(volatile u8 *) (u32) (s0 + 2002)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (sp + 228));
    (*(volatile u8 *) (u32) (s0 + 2003)) = (u8) v1;
    return;
}
