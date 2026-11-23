/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002E4EA0(s32, s32);
void func_002E56A0(s32, s32, s32, s32);

void func_00955570(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;

    s1 = a0;
    v1 = (*(volatile s32 *) (u32) (gp + -18204));
    { s32 c_ = v1 <= 0; s0 = 0; if (c_) goto L_009555E0; }
    v0 = (s32) 0x970000U;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcff0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s2 = (s32) ((u32) v0 + 0x2c0U);
    a0 = (*(volatile s32 *) (u32) s2);
L_009555AC:;
    a1 = s0; v0 = func_002E4EA0(a0, a1);
    { s32 c_ = v0 == 0; a0 = v0; if (c_) goto L_009555C8; }
    a1 = 7;
    a2 = 8; func_002E56A0(a0, a1, a2, a3);
L_009555C8:;
    v1 = (*(volatile s32 *) (u32) (gp + -18204));
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < v1;
    if (v1 != 0) { a0 = (*(volatile s32 *) (u32) s2); goto L_009555AC; }
L_009555E0:;
    v1 = (s32) 0x970000U;
    v1 = (s32) ((u32) v1 + 0xffffd182U);
    v1 = (s32) ((u32) v1 + (u32) s1);
    v1 = (*(volatile s8 *) (u32) v1);
    at = (u64) v1 < (u64) (s64) 6;
    if (at == 0) goto L_00955A08;
    a0 = (s32) 0x960000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x6b20U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x955618U) goto L_00955618; if (t_ == 0x95569cU) goto L_0095569C; if (t_ == 0x955780U) goto L_00955780; if (t_ == 0x9558b0U) goto L_009558B0; if (t_ == 0x955968U) goto L_00955968; if (t_ == 0x9559c0U) goto L_009559C0; }
L_00955618:;
    v0 = (s32) 0x970000U;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffd2b0U);
    s1 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = 0; v0 = func_002E4EA0(a0, a1);
    { s32 c_ = v0 == 0; a0 = v0; if (c_) goto L_00955648; }
    a1 = 3;
    a2 = 0; func_002E56A0(a0, a1, a2, a3);
L_00955648:;
    v1 = (*(volatile s32 *) (u32) (gp + -18204));
    s0 = 1;
    at = v1 < 2;
    { s32 c_ = at != 0; s2 = 0; if (c_) goto L_00955A08; }
L_0095565C:;
    a0 = (*(volatile s32 *) (u32) s1);
    a1 = s0; v0 = func_002E4EA0(a0, a1);
    { s32 c_ = v0 == 0; a0 = v0; if (c_) goto L_00955680; }
    a1 = 0;
    a2 = s2; func_002E56A0(a0, a1, a2, a3);
L_00955680:;
    v1 = (*(volatile s32 *) (u32) (gp + -18204));
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < v1;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x1U); if (c_) goto L_0095565C; }
    goto L_00955A08;
L_0095569C:;
    v0 = (s32) 0x590000U;
    v1 = 3;
    v0 = (*(volatile u8 *) (u32) (v0 + 7980));
    if (v0 != v1) goto L_00955708;
    v0 = (s32) 0x970000U;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcff0U);
    s1 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = 10;
    s2 = (s32) ((u32) v0 + 0x2c0U);
L_009556CC:;
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = s1; v0 = func_002E4EA0(a0, a1);
    { s32 c_ = v0 == 0; a0 = v0; if (c_) goto L_009556F0; }
    a1 = 0;
    a2 = s0; func_002E56A0(a0, a1, a2, a3);
L_009556F0:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 22;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_009556CC; }
    goto L_00955A08;
L_00955708:;
    v0 = (s32) 0x970000U;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcff0U);
    s1 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = 22;
    s2 = (s32) ((u32) v0 + 0x2c0U);
L_00955724:;
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = s1; v0 = func_002E4EA0(a0, a1);
    if (v0 == 0) goto L_00955748;
    a0 = v0;
    a1 = 0;
    a2 = s0; func_002E56A0(a0, a1, a2, a3);
L_00955748:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 29;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_00955724; }
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = s1; v0 = func_002E4EA0(a0, a1);
    { s32 c_ = v0 == 0; a0 = v0; if (c_) goto L_00955A08; }
    a1 = 4;
    a2 = 0; func_002E56A0(a0, a1, a2, a3);
    goto L_00955A08;
L_00955780:;
    v0 = (s32) 0x590000U;
    v1 = 3;
    v0 = (*(volatile u8 *) (u32) (v0 + 7980));
    if (v0 != v1) goto L_0095585C;
    v0 = (s32) 0x970000U;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcff0U);
    s1 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = 22;
    s2 = (s32) ((u32) v0 + 0x2c0U);
L_009557B0:;
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = s1; v0 = func_002E4EA0(a0, a1);
    if (v0 == 0) goto L_009557D8;
    a0 = v0;
    a1 = 0;
    a2 = s0; func_002E56A0(a0, a1, a2, a3);
L_009557D8:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 29;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_009557B0; }
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = s1; v0 = func_002E4EA0(a0, a1);
    { s32 c_ = v0 == 0; a0 = v0; if (c_) goto L_00955808; }
    a1 = 4;
    a2 = 0; func_002E56A0(a0, a1, a2, a3);
L_00955808:;
    v1 = (*(volatile s32 *) (u32) (gp + -18204));
    s1 = (s32) ((u32) s1 + 0x1U);
    at = s1 < v1;
    if (at == 0) goto L_00955A08;
    a0 = (*(volatile s32 *) (u32) s2);
L_00955820:;
    a1 = s1; v0 = func_002E4EA0(a0, a1);
    { s32 c_ = v0 == 0; a0 = v0; if (c_) goto L_00955840; }
    a1 = 7;
    a2 = 8; func_002E56A0(a0, a1, a2, a3);
L_00955840:;
    v1 = (*(volatile s32 *) (u32) (gp + -18204));
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < v1;
    if (v1 != 0) { a0 = (*(volatile s32 *) (u32) s2); goto L_00955820; }
    goto L_00955A08;
L_0095585C:;
    v0 = (s32) 0x970000U;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcff0U);
    s1 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) v0 + 0x2c0U);
    a0 = (*(volatile s32 *) (u32) s0);
L_00955878:;
    a1 = s1; v0 = func_002E4EA0(a0, a1);
    { s32 c_ = v0 == 0; a0 = v0; if (c_) goto L_00955898; }
    a1 = 1;
    a2 = s1; func_002E56A0(a0, a1, a2, a3);
L_00955898:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 23;
    if (v1 != 0) { a0 = (*(volatile s32 *) (u32) s0); goto L_00955878; }
    goto L_00955A08;
L_009558B0:;
    v0 = (s32) 0x590000U;
    v1 = 3;
    v0 = (*(volatile u8 *) (u32) (v0 + 7980));
    if (v0 != v1) goto L_00955918;
    v0 = (s32) 0x970000U;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcff0U);
    s1 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) v0 + 0x2c0U);
    a0 = (*(volatile s32 *) (u32) s0);
L_009558E0:;
    a1 = s1; v0 = func_002E4EA0(a0, a1);
    { s32 c_ = v0 == 0; a0 = v0; if (c_) goto L_00955900; }
    a1 = 1;
    a2 = s1; func_002E56A0(a0, a1, a2, a3);
L_00955900:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 11;
    if (v1 != 0) { a0 = (*(volatile s32 *) (u32) s0); goto L_009558E0; }
    goto L_00955A08;
L_00955918:;
    v0 = (s32) 0x970000U;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcff0U);
    s1 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) v0 + 0x2c0U);
    a0 = (*(volatile s32 *) (u32) s0);
L_00955934:;
    a1 = s1; v0 = func_002E4EA0(a0, a1);
    { s32 c_ = v0 == 0; a0 = v0; if (c_) goto L_00955950; }
    a1 = 2;
    a2 = s1; func_002E56A0(a0, a1, a2, a3);
L_00955950:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 12;
    if (v1 != 0) { a0 = (*(volatile s32 *) (u32) s0); goto L_00955934; }
    goto L_00955A08;
L_00955968:;
    v0 = (s32) 0x970000U;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcff0U);
    s1 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = 11;
    s2 = (s32) ((u32) v0 + 0x2c0U);
L_00955984:;
    a0 = (*(volatile s32 *) (u32) s2);
    a1 = s1; v0 = func_002E4EA0(a0, a1);
    { s32 c_ = v0 == 0; a0 = v0; if (c_) goto L_009559A8; }
    a1 = 1;
    a2 = s0; func_002E56A0(a0, a1, a2, a3);
L_009559A8:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 23;
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x1U); if (c_) goto L_00955984; }
    goto L_00955A08;
L_009559C0:;
    v0 = (s32) 0x970000U;
    v1 = (s32) ((u32) s1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffcff0U);
    s1 = 0;
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (s32) ((u32) v0 + 0x2c0U);
    a0 = (*(volatile s32 *) (u32) s0);
L_009559DC:;
    a1 = s1; v0 = func_002E4EA0(a0, a1);
    { s32 c_ = v0 == 0; a0 = v0; if (c_) goto L_009559F8; }
    a1 = 2;
    a2 = s1; func_002E56A0(a0, a1, a2, a3);
L_009559F8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v1 = s1 < 12;
    if (v1 != 0) { a0 = (*(volatile s32 *) (u32) s0); goto L_009559DC; }
L_00955A08:;
    return;
}
