/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_GetUnavailableFlag(void);
void func_0023E0E0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0023EC10(s32, s32);
s32 func_002DCA30(void);
s32 func_002DEC40(s32, s32, s32, s32);
void func_00941F00(s32, s32, s32, s32);
s32 func_00942AB0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00942E60(s32, s32, s32, s32);
s32 func_00943150(s32, s32, s32, s32);
s32 func_00943660(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00943CC0(s32, s32, s32, s32);
void func_00944100(s32, s32, s32, s32, f32, f32);
void func_00944FF0(s32, s32, s32, s32);
s32 func_009453B0(s32, s32, s32, s32);
void func_00D0CB50(s32, s32, s32, s32);

s32 func_009432F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    s1 = (s32) 0x540000U;
    v0 = (*(volatile s32 *) (u32) (gp + -18308));
    at = (u64) v0 < (u64) (s64) 6;
    { s32 c_ = at == 0; s1 = (s32) ((u32) s1 + 0xffffc300U); if (c_) goto L_0094358C; }
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x6890U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x943330U) goto L_00943330; if (t_ == 0x943438U) goto L_00943438; if (t_ == 0x943464U) goto L_00943464; if (t_ == 0x943528U) goto L_00943528; if (t_ == 0x943548U) goto L_00943548; if (t_ == 0x943574U) goto L_00943574; }
L_00943330:;
    v0 = (s32) 0x540000U;
    v1 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -15480)) = (u32) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -15500)) = (u32) 0;
    v0 = (*(volatile u8 *) (u32) (v0 + 7980));
    v1 = 3;
    if (v0 != v1) { (*(volatile u16 *) (u32) (s1 + 6)) = (u16) 0; goto L_0094335C; }
    v0 = 2;
    (*(volatile u16 *) (u32) (s1 + 6)) = (u16) v0;
L_0094335C:;
    v1 = (*(volatile s8 *) (u32) (s1 + 9));
    v0 = 2;
    if (v1 == v0) goto L_00943380;
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) { (*(volatile u32 *) (u32) (gp + -18308)) = (u32) v1; goto L_0094358C; }
L_00943380:;
    s0 = (s32) 0x540000U;
    s0 = (s32) ((u32) s0 + 0xffffc300U); func_00944100(a0, a1, a2, a3, f12.f, f13.f);
    v0 = (s32) 0x590000U;
    v1 = 5;
    v0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (v0 != v1) goto L_009433AC;
    v1 = 1;
    v0 = (s32) 0x540000U;
    (*(volatile u32 *) (u32) (v0 + -15480)) = (u32) v1;
L_009433AC:;
    v0 = func_002DCA30();
    if (v0 == 0) { a0 = 3; goto L_009433F4; }
    a0 = (s32) 0x940000U;
    a0 = (s32) ((u32) a0 + 0x29d0U); v0 = func_002DEC40(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -22804)) = (u32) v0;
    a0 = 30; func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    func_00D0CB50(a0, a1, a2, a3);
    v1 = -1;
    v0 = 0xffff;
    (*(volatile u16 *) (u32) (gp + -30692)) = (u16) v0;
    (*(volatile u16 *) (u32) (gp + -30696)) = (u16) v1;
    (*(volatile u32 *) (u32) (gp + -30688)) = (u32) v1; goto L_009433FC;
L_009433F4:;
    func_0023E0E0(a0, a1, a2, a3, a4, a5, a6, a7);
L_009433FC:;
    a0 = (s32) ((u32) s0 + 0x10U);
    a1 = 64; func_0023EC10(a0, a1);
    v0 = (*(volatile s16 *) (u32) (s1 + 6));
    if (v0 != 0) { v0 = (*(volatile s32 *) (u32) (gp + -18308)); goto L_00943420; }
    a0 = 0; func_00943CC0(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18308));
L_00943420:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18308)) = (u32) v0;
    func_00942E60(a0, a1, a2, a3);
    v0 = 0; goto L_00943590;
L_00943438:;
    v0 = func_00943150(a0, a1, a2, a3);
    if (v0 == 0) goto L_00943454;
    v0 = (*(volatile s32 *) (u32) (gp + -18308));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18308)) = (u32) v0;
L_00943454:;
    func_00942E60(a0, a1, a2, a3);
    goto L_0094358C;
L_00943464:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) { v1 = (*(volatile s16 *) (u32) (s1 + 6)); goto L_00943484; }
    func_00941F00(a0, a1, a2, a3);
    v1 = 1; goto L_009434E0;
L_00943484:;
    v0 = 2;
    if (v1 == v0) { a0 = 1; goto L_009434CC; }
    a0 = 1;
    if (v1 == a0) goto L_009434BC;
    if (v1 == 0) { a0 = 0; goto L_009434AC; }
    v0 = 0; goto L_009434DC;
L_009434AC:;
    func_00944FF0(a0, a1, a2, a3);
    goto L_009434DC;
L_009434BC:;
    func_00944FF0(a0, a1, a2, a3);
    goto L_009434DC;
L_009434CC:;
    v0 = func_009453B0(a0, a1, a2, a3);
    a0 = 0; v0 = func_009453B0(a0, a1, a2, a3);
L_009434DC:;
    v1 = 1;
L_009434E0:;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (gp + -18308)); goto L_0094350C; }
    v1 = 2;
    if (v0 == v1) { v0 = (*(volatile s32 *) (u32) (gp + -18308)); goto L_009434FC; }
    goto L_00943518;
L_009434FC:;
    (*(volatile u8 *) (u32) (s1 + 9)) = (u8) v1;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18308)) = (u32) v0; goto L_00943518;
L_0094350C:;
    (*(volatile u8 *) (u32) (s1 + 9)) = (u8) v1;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18308)) = (u32) v0;
L_00943518:;
    func_00942E60(a0, a1, a2, a3);
    goto L_0094358C;
L_00943528:;
    v0 = func_00942AB0(a0, a1, a2, a3, a4, a5, a6, a7);
    if (v0 == 0) goto L_0094358C;
    v0 = (*(volatile s32 *) (u32) (gp + -18308));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (gp + -18308)) = (u32) v0; goto L_0094358C;
L_00943548:;
    v1 = (*(volatile s8 *) (u32) (s1 + 9));
    v0 = 1;
    if (v1 != v0) { v0 = (*(volatile s8 *) (u32) (s1 + 9)); goto L_0094356C; }
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v1 + 7090)) = (u16) 0;
    (*(volatile u16 *) (u32) (v0 + 7088)) = (u16) 0;
    v0 = (*(volatile s8 *) (u32) (s1 + 9));
L_0094356C:;
    (*(volatile u32 *) (u32) (gp + -18308)) = (u32) 0; goto L_00943590;
L_00943574:;
    a0 = 1; v0 = func_00943660(a0, a1, a2, a3, a4, a5, a6, a7);
    v1 = 1;
    if (v0 != v1) goto L_0094358C;
    (*(volatile u32 *) (u32) (gp + -18308)) = (u32) v1;
L_0094358C:;
    v0 = 0;
L_00943590:;
    return v0;
}
