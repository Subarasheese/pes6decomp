/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_006288B0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_006288F0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_006289D0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00628A10(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00628A50(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00628AC0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00628B00(s32, s32, s32, s32, s32, s32, s32, s32);

void func_0063FD30(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (s32) 0x660000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -9888));
    v1 = v1 < 5;
    if (v1 != 0) { ; goto L_0063FDE4; }
    v1 = (*(volatile s32 *) (u32) (gp + -21880));
    at = (u64) v1 < (u64) (s64) 74;
    if (at == 0) goto L_0063FDE0;
    a0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffb520U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x63fd78U) goto L_0063FD78; if (t_ == 0x63fd88U) goto L_0063FD88; if (t_ == 0x63fd98U) goto L_0063FD98; if (t_ == 0x63fda8U) goto L_0063FDA8; if (t_ == 0x63fdb8U) goto L_0063FDB8; if (t_ == 0x63fdc8U) goto L_0063FDC8; if (t_ == 0x63fdd8U) goto L_0063FDD8; if (t_ == 0x63fde0U) goto L_0063FDE0; }
L_0063FD78:;
    func_00628B00(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0063FDE0;
L_0063FD88:;
    func_00628A10(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0063FDE0;
L_0063FD98:;
    func_006289D0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0063FDE0;
L_0063FDA8:;
    func_006288F0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0063FDE0;
L_0063FDB8:;
    func_00628A50(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0063FDE0;
L_0063FDC8:;
    func_00628AC0(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_0063FDE0;
L_0063FDD8:;
    func_006288B0(a0, a1, a2, a3, a4, a5, a6, a7);
L_0063FDE0:;
L_0063FDE4:;
    return;
}
