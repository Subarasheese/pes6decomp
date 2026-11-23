/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00931750(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile s32 *) (u32) (gp + -22756));
    at = (u64) v1 < (u64) (s64) 9;
    if (at == 0) { a0 = (*(volatile s32 *) (u32) (gp + -18804)); goto L_00931844; }
    a1 = (s32) 0x960000U;
    a0 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0x6310U);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    { u32 t_ = (u32) a0; ; if (t_ == 0x93177cU) goto L_0093177C; if (t_ == 0x9317d8U) goto L_009317D8; if (t_ == 0x9317e8U) goto L_009317E8; if (t_ == 0x9317f8U) goto L_009317F8; if (t_ == 0x931808U) goto L_00931808; if (t_ == 0x931818U) goto L_00931818; if (t_ == 0x931828U) goto L_00931828; if (t_ == 0x931834U) goto L_00931834; if (t_ == 0x931840U) goto L_00931840; }
L_0093177C:;
    a1 = (*(volatile s32 *) (u32) (gp + -18788));
    a0 = 4;
    if (a1 == a0) { a1 = 7; goto L_009317CC; }
    a0 = 3;
    if (a1 == a0) goto L_009317C0;
    a0 = 2;
    if (a1 == a0) goto L_009317C0;
    a0 = 1;
    if (a1 == a0) goto L_009317C0;
    if (a1 == 0) goto L_009317C0;
    goto L_00931840;
L_009317C0:;
    a0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 7177)) = (u8) 0; goto L_00931840;
L_009317CC:;
    a0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 7177)) = (u8) a1; goto L_00931840;
L_009317D8:;
    a1 = 1;
    a0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 7177)) = (u8) a1; goto L_00931840;
L_009317E8:;
    a1 = 5;
    a0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 7177)) = (u8) a1; goto L_00931840;
L_009317F8:;
    a1 = 2;
    a0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 7177)) = (u8) a1; goto L_00931840;
L_00931808:;
    a1 = 4;
    a0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 7177)) = (u8) a1; goto L_00931840;
L_00931818:;
    a1 = 6;
    a0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 7177)) = (u8) a1; goto L_00931840;
L_00931828:;
    a0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 7177)) = (u8) 0; goto L_00931840;
L_00931834:;
    a1 = 14;
    a0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 7177)) = (u8) a1;
L_00931840:;
    a0 = (*(volatile s32 *) (u32) (gp + -18804));
L_00931844:;
    a3 = 1;
    if (a0 != a3) goto L_00931860;
    a0 = 4;
    v1 = (s32) 0x540000U;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00931980;
L_00931860:;
    a0 = (s32) 0x590000U;
    a1 = 6;
    a2 = (*(volatile u8 *) (u32) (a0 + 7177));
    if (a2 == a1) { a0 = 14; goto L_00931978; }
    a0 = 5;
    if (a2 == a0) { a0 = 13; goto L_00931968; }
    a0 = 4;
    if (a2 == a0) { a0 = 12; goto L_0093195C; }
    a0 = 2;
    if (a2 == a0) { a0 = 10; goto L_00931950; }
    if (a2 == a3) { a0 = 11; goto L_00931944; }
    a0 = 14;
    if (a2 == a0) { a0 = 9; goto L_00931938; }
    a0 = 7;
    if (a2 == a0) { a0 = 8; goto L_009318CC; }
    if (a2 == 0) goto L_009318C8;
    goto L_00931980;
L_009318C8:;
    a0 = 8;
L_009318CC:;
    if (v1 != a0) { a0 = (*(volatile s32 *) (u32) (gp + -18788)); goto L_009318E4; }
    a0 = 7;
    v1 = (s32) 0x540000U;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00931980;
L_009318E4:;
    v1 = 1;
    if (a0 == v1) { a0 = 6; goto L_00931920; }
    v1 = 3;
    if (a0 == v1) { a0 = 8; goto L_00931914; }
    v1 = 2;
    if (a0 == v1) goto L_00931910;
    a0 = 5; goto L_0093192C;
L_00931910:;
    a0 = 8;
L_00931914:;
    v1 = (s32) 0x540000U;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00931980;
L_00931920:;
    v1 = (s32) 0x540000U;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00931980;
L_0093192C:;
    v1 = (s32) 0x540000U;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00931980;
L_00931938:;
    v1 = (s32) 0x540000U;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00931980;
L_00931944:;
    v1 = (s32) 0x540000U;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00931980;
L_00931950:;
    v1 = (s32) 0x540000U;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00931980;
L_0093195C:;
    v1 = (s32) 0x540000U;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00931980;
L_00931968:;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (gp + -18848)) = (u32) 0;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0; goto L_00931980;
L_00931978:;
    v1 = (s32) 0x540000U;
    (*(volatile u16 *) (u32) (v1 + -15614)) = (u16) a0;
L_00931980:;
    return;
}
