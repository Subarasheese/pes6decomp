/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_0090B7A0(s64 a0) {
    s64 at = 0, v0 = 0, v1 = 0;

    v1 = (s64) ((u64) a0 << 56);
    v1 = v1 >> 56;
    { s32 c_ = v1 <= 0; v0 = 0; if (c_) goto L_0090B7BC; }
    v1 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -3674)); goto L_0090B7C4;
L_0090B7BC:;
    v1 = (s32) 0x930000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -3676));
L_0090B7C4:;
    v1 = v1 & 0xff;
    at = (u64) v1 < (u64) (s64) 21;
    if (at == 0) goto L_0090B828;
    a0 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffd9d0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x90b7f0U) goto L_0090B7F0; if (t_ == 0x90b7f8U) goto L_0090B7F8; if (t_ == 0x90b800U) goto L_0090B800; if (t_ == 0x90b80cU) goto L_0090B80C; if (t_ == 0x90b814U) goto L_0090B814; if (t_ == 0x90b81cU) goto L_0090B81C; if (t_ == 0x90b824U) goto L_0090B824; if (t_ == 0x90b828U) goto L_0090B828; }
L_0090B7F0:;
    v0 = 0; goto L_0090B828;
L_0090B7F8:;
    v0 = 0; goto L_0090B828;
L_0090B800:;
    v0 = (s32) 0x10000U;
    v0 = v0 | 0x100; goto L_0090B828;
L_0090B80C:;
    v0 = 0; goto L_0090B828;
L_0090B814:;
    v0 = 0; goto L_0090B828;
L_0090B81C:;
    v0 = 0; goto L_0090B828;
L_0090B824:;
    v0 = 0;
L_0090B828:;
    return v0;
}
