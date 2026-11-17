/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Job_GetManager(void);
s32 func_00292780(s32);
s32 func_00292B50(s32);
s32 func_003109B0(void);
s32 func_003414D0(s32, s32, s32, s32);

s32 func_0032F470(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[4];
    s32 sp = (s32) (u32) frame;

    at = (u64) a1 < (u64) (s64) 8;
    if (at == 0) goto L_0032F5E0;
    v1 = (s32) ((u32) a1 << 2);
    a1 = (s32) 0x3e0000U;
    a1 = (s32) ((u32) a1 + 0x1a70U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x32f49cU) goto L_0032F49C; if (t_ == 0x32f510U) goto L_0032F510; if (t_ == 0x32f524U) goto L_0032F524; if (t_ == 0x32f538U) goto L_0032F538; if (t_ == 0x32f54cU) goto L_0032F54C; if (t_ == 0x32f5a0U) goto L_0032F5A0; if (t_ == 0x32f5c0U) goto L_0032F5C0; if (t_ == 0x32f5e0U) goto L_0032F5E0; }
L_0032F49C:;
    v0 = func_003109B0();
    v1 = v0 & 0xff;
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_0032F4CC; }
    v0 = func_003109B0();
    v1 = v0 & 0xff;
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
L_0032F4CC:;
    v0 = (s32) ((u32) a0 << 3);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5c2U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 13056));
    a0 = (*(volatile u8 *) (u32) v1);
    v1 = (s32) ((u32) a0 << 6);
    a0 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s16 *) (u32) (v0 + 14)); goto L_0032F5E0;
L_0032F510:;
    v0 = Pes6Job_GetManager();
    v0 = (*(volatile s32 *) (u32) (v0 + 4132));
    v0 = (s32) ((u32) v0 + 0xffffffffU); goto L_0032F5E0;
L_0032F524:;
    v0 = Pes6Job_GetManager();
    v0 = (*(volatile s32 *) (u32) (v0 + 4136));
    v0 = (s32) ((u32) v0 + 0xffffffffU); goto L_0032F5E0;
L_0032F538:;
    v0 = Pes6Job_GetManager();
    v0 = (*(volatile s32 *) (u32) (v0 + 4140));
    v0 = (s32) ((u32) v0 + 0xffffffffU); goto L_0032F5E0;
L_0032F54C:;
    v0 = 5;
    if (a0 == v0) goto L_0032F58C;
    v0 = 4;
    if (a0 == v0) goto L_0032F578;
    v0 = Pes6Job_GetManager();
    v0 = (*(volatile s32 *) (u32) (v0 + 4120));
    v0 = (s32) ((u32) v0 + 0xffffffffU); goto L_0032F5E0;
L_0032F578:;
    v0 = Pes6Job_GetManager();
    v0 = (*(volatile s32 *) (u32) (v0 + 4120));
    v0 = (s32) ((u32) v0 + 0xfffffff5U); goto L_0032F5E0;
L_0032F58C:;
    v0 = Pes6Job_GetManager();
    v0 = (*(volatile s32 *) (u32) (v0 + 4120));
    v0 = (s32) ((u32) v0 + 0xfffffffaU); goto L_0032F5E0;
L_0032F5A0:;
    a0 = (s32) ((u32) sp + 0x1fU);
    a1 = 0;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (sp + 31)); v0 = func_00292780(a0);
    v0 = v0 & 0xff; goto L_0032F5E0;
L_0032F5C0:;
    a0 = (s32) ((u32) sp + 0x1fU);
    a1 = 0;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (sp + 31)); v0 = func_00292B50(a0);
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
L_0032F5E0:;
    return v0;
}
