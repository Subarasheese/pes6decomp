/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00152030(void);
s32 func_002DCA30(void);
void func_009B43E0(void);
void func_009B4410(s32);

void func_00BFEE00(s32 a0, s32 a1) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0; v0 = func_00152030();
    if (v0 == 0) goto L_00BFEF70;
    at = (u64) s0 < (u64) (s64) 6;
    if (at == 0) goto L_00BFEF84;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) s0 << 2);
    a0 = (s32) ((u32) a0 + 0x2a10U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xbfee44U) goto L_00BFEE44; if (t_ == 0xbfee64U) goto L_00BFEE64; if (t_ == 0xbfee84U) goto L_00BFEE84; if (t_ == 0xbfeea4U) goto L_00BFEEA4; if (t_ == 0xbfeed8U) goto L_00BFEED8; if (t_ == 0xbfef04U) goto L_00BFEF04; }
L_00BFEE44:;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (a0 + 7140));
    a0 = (s32) ((u32) a1 >> 1);
    a0 = a0 & 0xff;
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) (v1 + 7700)) = (u32) a0; goto L_00BFEF68;
L_00BFEE64:;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (a0 + 7140));
    a0 = (s32) ((u32) a1 >> 1);
    a0 = a0 & 0xff;
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) (v1 + 7700)) = (u32) a0; goto L_00BFEF68;
L_00BFEE84:;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (a0 + 7140));
    a0 = (s32) ((u32) a1 >> 1);
    a0 = a0 & 0xff;
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) (v1 + 7700)) = (u32) a0; goto L_00BFEF68;
L_00BFEEA4:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v0 >> 1);
    s0 = v0 & 0xff;
    a0 = s0; func_009B4410(a0);
    v1 = (s32) 0x590000U;
    a1 = s0 & 0xff;
    a0 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 7700)) = (u32) a0; goto L_00BFEF68;
L_00BFEED8:;
    v0 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -12818)); func_009B4410(a0);
    v1 = (s32) 0xcc0000U;
    a0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (v1 + -12818));
    a0 = (*(volatile u8 *) (u32) (a0 + 7140));
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 7700)) = (u32) a0; goto L_00BFEF68;
L_00BFEF04:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) ((u32) v0 >> 1);
    s0 = v0 & 0xff; v0 = func_002DCA30();
    if (v0 == 0) goto L_00BFEF48;
    a0 = s0; func_009B4410(a0);
    v1 = (s32) 0x590000U;
    a1 = s0 & 0xff;
    a0 = (*(volatile u8 *) (u32) (v1 + 7140));
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 7700)) = (u32) a0; goto L_00BFEF68;
L_00BFEF48:;
    a0 = s0; func_009B4410(a0);
    v1 = (s32) 0x590000U;
    a1 = s0 & 0xff;
    a0 = (*(volatile u8 *) (u32) (v1 + 7140));
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a1 + (u32) a0);
    (*(volatile u32 *) (u32) (v1 + 7700)) = (u32) a0;
L_00BFEF68:;
    goto L_00BFEF88;
L_00BFEF70:;
    func_009B43E0();
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + 7700)) = (u32) 0; goto L_00BFEF68;
L_00BFEF84:;
L_00BFEF88:;
    return;
}
