/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6OptionData_GetEditedPlayers(void);
s32 func_00210DF0(void);
s32 func_002228B0(s32, s32, s32, s32);
s32 func_00223C00(void);
s32 func_00229600(s32);

s32 func_00221500(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    s0 = s1 & 0xffff;
    if (s0 != 0) { at = s0 < 4784; goto L_00221528; }
    v0 = 1; goto L_00221618;
L_00221528:;
    if (at == 0) { v0 = 0x8000; goto L_00221538; }
    v0 = 0; goto L_00221618;
L_00221538:;
    v0 = s0 < v0;
    if (v0 != 0) goto L_00221580;
    at = 0x80b8;
    at = s0 < at;
    if (at == 0) goto L_00221580;
    v0 = Pes6OptionData_GetEditedPlayers();
    a0 = (s32) ((u32) s0 + 0xffff8000U);
    v1 = (s32) ((u32) a0 << 5);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0);
    v0 = v0 ^ 0;
    v0 = (u64) v0 < (u64) (s64) 1; goto L_00221618;
L_00221580:;
    v0 = func_00210DF0();
    v1 = 2;
    if (v0 != v1) { v0 = s0 < 6000; goto L_002215C8; }
    v0 = s0 < 28672;
    if (v0 != 0) goto L_002215C4;
    at = s0 < 28704;
    if (at == 0) goto L_002215C4;
    a0 = s1; v0 = func_00229600(a0);
    v0 = v0 & 0xff;
    v0 = v0 ^ 0xff;
    v0 = (u64) v0 < (u64) (s64) 1; goto L_00221618;
L_002215C4:;
    v0 = s0 < 6000;
L_002215C8:;
    if (v0 != 0) { a0 = s1; goto L_002215F4; }
    at = s0 < 28672;
    if (at == 0) goto L_002215F0;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    v0 = v0 ^ 0xe;
    v0 = (u64) 0 < (u64) v0; goto L_00221618;
L_002215F0:;
    a0 = s1;
L_002215F4:;
    a1 = 0;
    a2 = 3;
    a3 = 0; v0 = func_002228B0(a0, a1, a2, a3);
    s0 = v0; v0 = func_00223C00();
    if (s0 != v0) { v0 = 0; goto L_00221618; }
    v0 = 1;
L_00221618:;
    return v0;
}
