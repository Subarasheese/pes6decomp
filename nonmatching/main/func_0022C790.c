/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00210DF0(void);
s64 func_00226240(void);
s64 func_00226710(void);
s64 func_0094C7B0(s64, s64, s64, s64);
s64 func_0099B4B0(s64, s64, s64, s64);

s64 func_0022C790(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) 0x590000U;
    v1 = 14;
    a0 = (*(volatile u8 *) (u32) (v0 + 7177));
    { s32 c_ = a0 == v1; s0 = -1; if (c_) goto L_0022CA04; }
    v0 = 4;
    if (a0 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -31680)); goto L_0022C940; }
    v0 = 2;
    if (a0 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -31680)); goto L_0022C864; }
    v0 = 1;
    if (a0 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -31680)); goto L_0022C7DC; }
    v0 = s0; goto L_0022CB3C;
L_0022C7DC:;
    v0 = (*(volatile u32 *) (u32) (v0 + 32));
    v0 = v0 & 0x4;
    if (v0 == 0) goto L_0022C7F4;
    v0 = 20427; goto L_0022CB48;
L_0022C7F4:;
    v0 = func_00226710();
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xfffffff5U);
    at = (u64) v0 < (u64) (s64) 17;
    if (at == 0) { v0 = s0; goto L_0022CB48; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff82d0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22c82cU) goto L_0022C82C; if (t_ == 0x22c834U) goto L_0022C834; if (t_ == 0x22c83cU) goto L_0022C83C; if (t_ == 0x22c844U) goto L_0022C844; if (t_ == 0x22c84cU) goto L_0022C84C; if (t_ == 0x22c854U) goto L_0022C854; if (t_ == 0x22c85cU) goto L_0022C85C; }
L_0022C82C:;
    s0 = 20367; goto L_0022CB44;
L_0022C834:;
    s0 = 20368; goto L_0022CB44;
L_0022C83C:;
    s0 = 20363; goto L_0022CB44;
L_0022C844:;
    s0 = 20369; goto L_0022CB44;
L_0022C84C:;
    s0 = 20365; goto L_0022CB44;
L_0022C854:;
    s0 = 20364; goto L_0022CB44;
L_0022C85C:;
    s0 = 20366; goto L_0022CB44;
L_0022C864:;
    v0 = (*(volatile u32 *) (u32) (v0 + 32));
    v0 = v0 & 0x4;
    if (v0 == 0) goto L_0022C87C;
    v0 = 20427; goto L_0022CB48;
L_0022C87C:;
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 58;
    if (v1 == v0) { s0 = 20086; goto L_0022CB44; }
    v0 = 8;
    if (v1 == v0) { s0 = 20084; goto L_0022CB44; }
    v0 = 7;
    if (v1 == v0) goto L_0022C934;
    v0 = 6;
    if (v1 == v0) goto L_0022C934;
    v0 = 5;
    if (v1 == v0) goto L_0022C934;
    v0 = 4;
    if (v1 == v0) { s0 = 20055; goto L_0022CB44; }
    v0 = 3;
    if (v1 == v0) { s0 = 20053; goto L_0022CB44; }
    v0 = 2;
    if (v1 == v0) { s0 = 20051; goto L_0022CB44; }
    v0 = 10;
    if (v1 == v0) { s0 = 20057; goto L_0022CB44; }
    v0 = 1;
    if (v1 == v0) goto L_0022C928;
    v0 = 9;
    if (v1 == v0) { s0 = 20082; goto L_0022CB44; }
    if (v1 == 0) goto L_0022C91C;
    goto L_0022CB44;
L_0022C91C:;
    s0 = 20082;
    goto L_0022CB44;
L_0022C928:;
    s0 = 20057;
    goto L_0022CB44;
L_0022C934:;
    s0 = 20084;
    goto L_0022CB44;
L_0022C940:;
    v0 = (*(volatile u32 *) (u32) (v0 + 32));
    v0 = v0 & 0x4;
    if (v0 == 0) goto L_0022C958;
    v0 = 20427; goto L_0022CB48;
L_0022C958:;
    v0 = func_00226710();
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xffffffe4U);
    at = (u64) v0 < (u64) (s64) 12;
    if (at == 0) { s0 = 20419; goto L_0022CB44; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff82a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22c82cU) goto L_0022C82C; if (t_ == 0x22c834U) goto L_0022C834; if (t_ == 0x22c83cU) goto L_0022C83C; if (t_ == 0x22c844U) goto L_0022C844; if (t_ == 0x22c84cU) goto L_0022C84C; if (t_ == 0x22c854U) goto L_0022C854; if (t_ == 0x22c85cU) goto L_0022C85C; if (t_ == 0x22c990U) goto L_0022C990; if (t_ == 0x22c998U) goto L_0022C998; if (t_ == 0x22c9a0U) goto L_0022C9A0; if (t_ == 0x22c9a8U) goto L_0022C9A8; if (t_ == 0x22c9d8U) goto L_0022C9D8; if (t_ == 0x22c9e0U) goto L_0022C9E0; if (t_ == 0x22c9e8U) goto L_0022C9E8; if (t_ == 0x22c9f0U) goto L_0022C9F0; }
L_0022C990:;
    s0 = 20417; goto L_0022CB44;
L_0022C998:;
    s0 = 20416; goto L_0022CB44;
L_0022C9A0:;
    s0 = 20420; goto L_0022CB44;
L_0022C9A8:;
    v0 = func_00210DF0();
    v1 = 2;
    if (v0 != v1) goto L_0022CB44;
    v0 = func_0099B4B0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { s0 = 20415; goto L_0022CB44; }
    s0 = 20420; goto L_0022CB44;
L_0022C9D8:;
    s0 = 20419; goto L_0022CB44;
L_0022C9E0:;
    s0 = 20418; goto L_0022CB44;
L_0022C9E8:;
    s0 = 20422; goto L_0022CB44;
L_0022C9F0:;
    s0 = 20423; goto L_0022CB44;
    s0 = 20419;
    goto L_0022CB44;
L_0022CA04:;
    v0 = func_00210DF0();
    v1 = 1;
    if (v0 != v1) goto L_0022CAAC;
    v0 = func_0094C7B0(a0, a1, a2, a3);
    if (v0 != 0) goto L_0022CA3C;
    v0 = (*(volatile s32 *) (u32) (gp + -31680));
    v0 = (*(volatile u32 *) (u32) (v0 + 32));
    v0 = v0 & 0x100;
    if (v0 == 0) goto L_0022CA88;
L_0022CA3C:;
    v0 = func_0094C7B0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v1 = (*(volatile s32 *) (u32) (gp + -31680)); goto L_0022CA68; }
    v0 = (*(volatile s32 *) (u32) (gp + -31680));
    v0 = (*(volatile u32 *) (u32) (v0 + 32));
    v0 = v0 & 0x100;
    if (v0 == 0) goto L_0022CA88;
    v1 = (*(volatile s32 *) (u32) (gp + -31680));
L_0022CA68:;
    v0 = (s32) 0x4000000U;
    v1 = (*(volatile u32 *) (u32) (v1 + 32));
    v0 = v1 & v0;
    if (v0 == 0) goto L_0022CAAC;
    v0 = v1 & 0x8;
    if (v0 != 0) goto L_0022CAAC;
L_0022CA88:;
    v0 = func_00226240();
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 != v0) { v0 = 20665; goto L_0022CAA4; }
    v0 = 20207;
L_0022CAA4:;
    goto L_0022CB4C;
L_0022CAAC:;
    v0 = func_00226710();
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xffffffd8U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_0022CB1C;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8250U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22cae4U) goto L_0022CAE4; if (t_ == 0x22caecU) goto L_0022CAEC; if (t_ == 0x22caf4U) goto L_0022CAF4; if (t_ == 0x22cafcU) goto L_0022CAFC; if (t_ == 0x22cb04U) goto L_0022CB04; if (t_ == 0x22cb0cU) goto L_0022CB0C; if (t_ == 0x22cb14U) goto L_0022CB14; }
L_0022CAE4:;
    s0 = 20196; goto L_0022CB44;
L_0022CAEC:;
    s0 = 20303; goto L_0022CB44;
L_0022CAF4:;
    s0 = 20205; goto L_0022CB44;
L_0022CAFC:;
    s0 = 20206; goto L_0022CB44;
L_0022CB04:;
    s0 = 20662; goto L_0022CB44;
L_0022CB0C:;
    s0 = 20666; goto L_0022CB44;
L_0022CB14:;
    s0 = 20663; goto L_0022CB44;
L_0022CB1C:;
    v0 = func_00226240();
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 != v0) { s0 = 20665; goto L_0022CB44; }
    s0 = 20207; goto L_0022CB44;
L_0022CB3C:;
    goto L_0022CB48;
L_0022CB44:;
    v0 = s0;
L_0022CB48:;
L_0022CB4C:;
    return v0;
}
