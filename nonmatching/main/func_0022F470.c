/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetEntry7980(s64);
s64 Pes6SaveData_GetUnavailableFlag(void);
s64 func_00226710(void);
void func_00229380(void);
s64 func_00229B70(void);
void func_00295640(void);

s64 func_0022F470(s64 a0) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    v0 = (*(volatile s32 *) (u32) (gp + -31676));
    a0 = (*(volatile u8 *) (u32) (v0 + 5873));
    s1 = (s64) ((u64) 0 + (u64) (s64) 1); v0 = Pes6SaveData_GetEntry7980(a0);
    s0 = v0; func_00229380();
    func_00295640();
    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = (u64) 0 < (u64) v0;
    v0 = 1;
    if (v1 != v0) goto L_0022F4C0;
    goto L_0022F8B8;
L_0022F4C0:;
    v0 = func_00226710();
    v0 = v0 & 0xff;
    at = (u64) v0 < (u64) (s64) 59;
    if (at == 0) { s1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_0022F894; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8440U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22f4f4U) goto L_0022F4F4; if (t_ == 0x22f578U) goto L_0022F578; if (t_ == 0x22f610U) goto L_0022F610; if (t_ == 0x22f64cU) goto L_0022F64C; if (t_ == 0x22f654U) goto L_0022F654; if (t_ == 0x22f65cU) goto L_0022F65C; if (t_ == 0x22f664U) goto L_0022F664; if (t_ == 0x22f66cU) goto L_0022F66C; if (t_ == 0x22f674U) goto L_0022F674; if (t_ == 0x22f67cU) goto L_0022F67C; if (t_ == 0x22f684U) goto L_0022F684; if (t_ == 0x22f6e8U) goto L_0022F6E8; if (t_ == 0x22f73cU) goto L_0022F73C; if (t_ == 0x22f744U) goto L_0022F744; if (t_ == 0x22f74cU) goto L_0022F74C; if (t_ == 0x22f754U) goto L_0022F754; if (t_ == 0x22f75cU) goto L_0022F75C; if (t_ == 0x22f7b0U) goto L_0022F7B0; if (t_ == 0x22f7b8U) goto L_0022F7B8; if (t_ == 0x22f814U) goto L_0022F814; if (t_ == 0x22f81cU) goto L_0022F81C; if (t_ == 0x22f880U) goto L_0022F880; if (t_ == 0x22f888U) goto L_0022F888; if (t_ == 0x22f890U) goto L_0022F890; }
L_0022F4F4:;
    if (s0 == 0) { v0 = s1 & 0xff; goto L_0022F898; }
    a0 = (*(volatile u8 *) (u32) (s0 + 3));
    { s32 c_ = a0 <= 0; v0 = (*(volatile u8 *) (u32) s0); if (c_) goto L_0022F894; }
    v1 = v0 & 0xff;
    v0 = a0 < v1;
    if (v0 != 0) { v1 = (s32) ((u32) v1 - (u32) a0); goto L_0022F548; }
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a0); hi = (s32) ((s32) v0 % (s32) a0); lo = q_; }
    v0 = lo;
    v0 = (s32) ((u32) v0 + 0x8U);
    s1 = v0 & 0xff;
    at = s1 < 13;
    if (at != 0) goto L_0022F894;
    v0 = (s32) ((u32) s1 + 0xfffffff4U);
    s1 = v0 & 0xff; goto L_0022F894;
L_0022F548:;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a0); hi = (s32) ((s32) v0 % (s32) a0); lo = q_; }
    v0 = lo;
    v0 = (s32) ((u32) v0 + 0x1U);
    s1 = v0 & 0xff;
    at = s1 < 13;
    if (at != 0) goto L_0022F894;
    v0 = (s32) ((u32) s1 + 0xfffffff4U);
    s1 = v0 & 0xff; goto L_0022F894;
L_0022F578:;
    v0 = (*(volatile s32 *) (u32) (gp + -31676));
    a0 = (*(volatile u8 *) (u32) (v0 + 5872)); v0 = Pes6SaveData_GetEntry7980(a0);
    if (v0 == 0) goto L_0022F894;
    v1 = (*(volatile u8 *) (u32) v0);
    a0 = (*(volatile u8 *) (u32) (v0 + 3));
    v0 = (s32) ((u32) v1 + 0xffffffffU);
    { s32 c_ = a0 <= 0; v0 = v0 & 0xff; if (c_) goto L_0022F894; }
    v1 = v0 & 0xff;
    v0 = a0 < v1;
    if (v0 != 0) { v1 = (s32) ((u32) v1 - (u32) a0); goto L_0022F5E0; }
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a0); hi = (s32) ((s32) v0 % (s32) a0); lo = q_; }
    v0 = lo;
    v0 = (s32) ((u32) v0 + 0x8U);
    s1 = v0 & 0xff;
    at = s1 < 13;
    if (at != 0) goto L_0022F894;
    v0 = (s32) ((u32) s1 + 0xfffffff4U);
    s1 = v0 & 0xff; goto L_0022F894;
L_0022F5E0:;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    if ((s32) a0 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a0); hi = (s32) ((s32) v0 % (s32) a0); lo = q_; }
    v0 = lo;
    v0 = (s32) ((u32) v0 + 0x1U);
    s1 = v0 & 0xff;
    at = s1 < 13;
    if (at != 0) goto L_0022F894;
    v0 = (s32) ((u32) s1 + 0xfffffff4U);
    s1 = v0 & 0xff; goto L_0022F894;
L_0022F610:;
    v0 = func_00229B70();
    v1 = v0 & 0xff;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 2; if (c_) goto L_0022F62C; }
    v0 = (s32) ((u32) v1 + 0x3U);
    v0 = (s32) v0 >> 2;
L_0022F62C:;
    v0 = (s32) ((u32) v0 + 0x9U);
    s1 = v0 & 0xff;
    at = s1 < 13;
    if (at != 0) goto L_0022F894;
    v0 = (s32) ((u32) s1 + 0xfffffff4U);
    s1 = v0 & 0xff; goto L_0022F894;
L_0022F64C:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 6); goto L_0022F894;
L_0022F654:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 8); goto L_0022F894;
L_0022F65C:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 7); goto L_0022F894;
L_0022F664:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 8); goto L_0022F894;
L_0022F66C:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 8); goto L_0022F894;
L_0022F674:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 6); goto L_0022F894;
L_0022F67C:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 8); goto L_0022F894;
L_0022F684:;
    if (s0 == 0) goto L_0022F894;
    v0 = (*(volatile u8 *) (u32) s0);
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_0022F894;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8420U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22f6b8U) goto L_0022F6B8; if (t_ == 0x22f6c0U) goto L_0022F6C0; if (t_ == 0x22f6c8U) goto L_0022F6C8; if (t_ == 0x22f6d0U) goto L_0022F6D0; if (t_ == 0x22f6d8U) goto L_0022F6D8; if (t_ == 0x22f6e0U) goto L_0022F6E0; }
L_0022F6B8:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_0022F894;
L_0022F6C0:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_0022F894;
L_0022F6C8:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 6); goto L_0022F894;
L_0022F6D0:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 9); goto L_0022F894;
L_0022F6D8:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_0022F894;
L_0022F6E0:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_0022F894;
L_0022F6E8:;
    if (s0 == 0) goto L_0022F894;
    v0 = (*(volatile u8 *) (u32) s0);
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_0022F894;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8400U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22f71cU) goto L_0022F71C; if (t_ == 0x22f724U) goto L_0022F724; if (t_ == 0x22f72cU) goto L_0022F72C; if (t_ == 0x22f734U) goto L_0022F734; }
L_0022F71C:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_0022F894;
L_0022F724:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_0022F894;
L_0022F72C:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 6); goto L_0022F894;
L_0022F734:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 8); goto L_0022F894;
L_0022F73C:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_0022F894;
L_0022F744:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_0022F894;
L_0022F74C:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 6); goto L_0022F894;
L_0022F754:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_0022F894;
L_0022F75C:;
    if (s0 == 0) goto L_0022F894;
    v0 = (*(volatile u8 *) (u32) s0);
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_0022F894;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff83e0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22f790U) goto L_0022F790; if (t_ == 0x22f798U) goto L_0022F798; if (t_ == 0x22f7a0U) goto L_0022F7A0; if (t_ == 0x22f7a8U) goto L_0022F7A8; }
L_0022F790:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 9); goto L_0022F894;
L_0022F798:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_0022F894;
L_0022F7A0:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_0022F894;
L_0022F7A8:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 6); goto L_0022F894;
L_0022F7B0:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_0022F894;
L_0022F7B8:;
    if (s0 == 0) goto L_0022F894;
    v0 = (*(volatile u8 *) (u32) s0);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_0022F894;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8390U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22f7ecU) goto L_0022F7EC; if (t_ == 0x22f7f4U) goto L_0022F7F4; if (t_ == 0x22f7fcU) goto L_0022F7FC; if (t_ == 0x22f804U) goto L_0022F804; if (t_ == 0x22f80cU) goto L_0022F80C; }
L_0022F7EC:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 9); goto L_0022F894;
L_0022F7F4:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_0022F894;
L_0022F7FC:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_0022F894;
L_0022F804:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 6); goto L_0022F894;
L_0022F80C:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_0022F894;
L_0022F814:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_0022F894;
L_0022F81C:;
    if (s0 == 0) goto L_0022F894;
    v0 = (*(volatile u8 *) (u32) s0);
    at = (u64) v0 < (u64) (s64) 10;
    if (at == 0) goto L_0022F894;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8360U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22f850U) goto L_0022F850; if (t_ == 0x22f858U) goto L_0022F858; if (t_ == 0x22f860U) goto L_0022F860; if (t_ == 0x22f868U) goto L_0022F868; if (t_ == 0x22f870U) goto L_0022F870; if (t_ == 0x22f878U) goto L_0022F878; }
L_0022F850:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_0022F894;
L_0022F858:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 3); goto L_0022F894;
L_0022F860:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 6); goto L_0022F894;
L_0022F868:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 8); goto L_0022F894;
L_0022F870:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 9); goto L_0022F894;
L_0022F878:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_0022F894;
L_0022F880:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_0022F894;
L_0022F888:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 6); goto L_0022F894;
L_0022F890:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_0022F894:;
    v0 = s1 & 0xff;
L_0022F898:;
    if (v0 > 0) { v0 = s1; goto L_0022F8B4; }
    at = v0 < 13;
    if (at != 0) goto L_0022F8B0;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_0022F8B0:;
    v0 = s1;
L_0022F8B4:;
L_0022F8B8:;
    return v0;
}
