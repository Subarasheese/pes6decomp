/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_00246550(s32);
s32 func_002624E0(void);
s32 func_00262500(void);
s32 func_00262530(void);
s32 func_00262560(void);
s32 func_00262590(void);
s32 func_002625C0(void);
void func_00262630(s32);
void func_00262660(s32, s32, s32, s32);
void func_002626A0(s32, s32, s32, s32);
void func_00262760(s32, s32, s32, s32);
void func_002627A0(s32, s32, s32, s32);
void func_002627E0(s32, s32, s32, s32);
void func_008F6C60(s32, s32, s32, s32, s32, s32, s32, s32);

void func_008F65F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x3b0000U;
    v1 = (s32) 0x84000000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    s0 = v1 | 0xf803;
    v1 = (*(volatile s32 *) (u32) (v0 + 32));
    v0 = (*(volatile s32 *) (u32) (v0 + 36));
    v0 = (s32) ((u32) v1 + (u32) v0);
    at = (u64) v0 < (u64) (s64) 6;
    { s32 c_ = at == 0; s1 = a0; if (c_) goto L_008F67C4; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffe100U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8f6648U) goto L_008F6648; if (t_ == 0x8f66a8U) goto L_008F66A8; if (t_ == 0x8f66dcU) goto L_008F66DC; if (t_ == 0x8f6710U) goto L_008F6710; if (t_ == 0x8f6744U) goto L_008F6744; if (t_ == 0x8f6798U) goto L_008F6798; }
L_008F6648:;
    a0 = 170; v0 = func_00246550(a0);
    v1 = 1;
    if (v0 != v1) { s2 = 5; goto L_008F6660; }
    s2 = 6;
L_008F6660:;
    v0 = func_002624E0();
    v0 = v0 & 0xff;
    v1 = (s32) ((u32) s1 + (u32) v0);
    if (v1 >= 0) { v0 = v1 < s2; goto L_008F6684; }
    s0 = 0;
    v1 = 0; goto L_008F6694;
L_008F6684:;
    if (v0 != 0) { a0 = v1 & 0xff; goto L_008F6698; }
    v1 = (s32) ((u32) s2 + 0xffffffffU);
    s0 = 0;
L_008F6694:;
    a0 = v1 & 0xff;
L_008F6698:;
    func_00262630(a0);
    goto L_008F67C4;
L_008F66A8:;
    v0 = func_002625C0();
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0x2U);
    { s32 c_ = v0 >= 0; a0 = v0 & 0x1; if (c_) goto L_008F66CC; }
    if (a0 == 0) goto L_008F66CC;
    a0 = (s32) ((u32) a0 + 0xfffffffeU);
L_008F66CC:;
    func_002627E0(a0, a1, a2, a3);
    goto L_008F67C4;
L_008F66DC:;
    v0 = func_00262590();
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0x2U);
    { s32 c_ = v0 >= 0; a0 = v0 & 0x1; if (c_) goto L_008F6700; }
    if (a0 == 0) goto L_008F6700;
    a0 = (s32) ((u32) a0 + 0xfffffffeU);
L_008F6700:;
    func_002627A0(a0, a1, a2, a3);
    goto L_008F67C4;
L_008F6710:;
    v0 = func_00262560();
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0x2U);
    { s32 c_ = v0 >= 0; a0 = v0 & 0x1; if (c_) goto L_008F6734; }
    if (a0 == 0) goto L_008F6734;
    a0 = (s32) ((u32) a0 + 0xfffffffeU);
L_008F6734:;
    func_00262760(a0, a1, a2, a3);
    goto L_008F67C4;
L_008F6744:;
    v0 = func_00262530();
    v1 = v0 & 0xffff;
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s16 *) (u32) (v0 + 30));
    { s32 c_ = v0 == 0; v1 = (s32) ((u32) v1 + 0xffffffffU); if (c_) goto L_008F6770; }
    v0 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    s1 = (s32) ((u32) v0 << 1);
L_008F6770:;
    v1 = (s32) ((u32) v1 + (u32) s1);
    v0 = 100;
    v1 = (s32) ((u32) v1 + 0x64U);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    v0 = (s32) ((u32) v0 + 0x1U);
    a0 = v0 & 0xffff; func_002626A0(a0, a1, a2, a3);
    goto L_008F67C4;
L_008F6798:;
    v0 = func_00262500();
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0x2U);
    { s32 c_ = v0 >= 0; a0 = v0 & 0x1; if (c_) goto L_008F67BC; }
    if (a0 == 0) goto L_008F67BC;
    a0 = (s32) ((u32) a0 + 0xfffffffeU);
L_008F67BC:;
    func_00262660(a0, a1, a2, a3);
L_008F67C4:;
    if (s0 == 0) goto L_008F67D4;
    a0 = s0; SD_call(a0);
L_008F67D4:;
    func_008F6C60(a0, a1, a2, a3, a4, a5, a6, a7);
    return;
}
