/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_00292D30(void);

s32 func_008FCB60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 hi = 0, lo = 0;

    v0 = a1 & 0xff;
    s3 = a0;
    s2 = a2;
    v1 = s2 & 0xff;
    if (v0 != v1) goto L_008FCB98;
    v0 = 0; goto L_008FCEF0;
L_008FCB98:;
    at = v1 < v0;
    if (at == 0) { s1 = a1 & 0xff; goto L_008FCBB0; }
    s2 = v0;
    a1 = v1 & 0xff;
    s1 = a1 & 0xff;
L_008FCBB0:;
    at = s1 < 11;
    if (at == 0) { v0 = s1 < 11; goto L_008FCBD0; }
    v0 = s2 & 0xff;
    v0 = v0 < 11;
    if (v0 != 0) { v1 = 139; goto L_008FCBEC; }
    v0 = s1 < 11;
L_008FCBD0:;
    if (v0 != 0) { v0 = 139; goto L_008FCC6C; }
    v0 = s2 & 0xff;
    v0 = v0 < 11;
    if (v0 != 0) goto L_008FCC68;
    v1 = 139;
L_008FCBEC:;
    v0 = s2 & 0xff;
    { s64 m_ = (s64) (s32) s3 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1a97U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = s1 != 0; v0 = (*(volatile u8 *) (u32) v0); if (c_) goto L_008FCC5C; }
    v1 = v0 & 0xff;
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) s3 << 4);
    a0 = (s32) ((u32) a0 + 0x2a54U);
    a2 = (s32) ((u32) v0 - (u32) s3);
    v0 = (s32) ((u32) v1 << 4);
    a1 = (s32) ((u32) a2 << 3);
    v1 = (s32) ((u32) v0 - (u32) v1);
    a1 = (s32) ((u32) a1 - (u32) a2);
    v0 = (s32) ((u32) v1 << 3);
    a1 = (s32) ((u32) a1 << 8);
    v0 = (s32) ((u32) v0 - (u32) v1);
    a0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v0 != 0) { v0 = 1; goto L_008FCEF0; }
    v0 = 0; goto L_008FCEF0;
L_008FCC5C:;
    v0 = 1;
    goto L_008FCEF0;
L_008FCC68:;
    v0 = 139;
L_008FCC6C:;
    a2 = (s32) 0x590000U;
    { s64 m_ = (s64) (s32) s3 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); s0 = lo; }
    a0 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + 0x1a97U);
    a1 = a1 & 0xff;
    a0 = (s32) ((u32) a0 + 0x2a56U);
    v0 = (s32) ((u32) s3 << 4);
    v1 = (s32) ((u32) v0 - (u32) s3);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v1 = (s32) ((u32) a2 + (u32) s0);
    v0 = (s32) ((u32) v0 << 8);
    a1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + (u32) v0);
    a2 = (*(volatile u8 *) (u32) a1);
    a1 = (s32) ((u32) a2 << 4);
    a2 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a2 << 3);
    a1 = (s32) ((u32) a1 - (u32) a2);
    a1 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) a0);
    if (a0 == 0) goto L_008FCCD4;
    v0 = 0; goto L_008FCEF0;
L_008FCCD4:;
    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x2a55U);
    a0 = (s32) ((u32) a0 + (u32) v0);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = (*(volatile u8 *) (u32) a0);
    a0 = a0 < 2;
    if (a0 != 0) { a1 = s2 & 0xff; goto L_008FCCFC; }
    v0 = 0; goto L_008FCEF0;
L_008FCCFC:;
    a0 = (s32) 0x590000U;
    a1 = (s32) ((u32) v1 + (u32) a1);
    a0 = (s32) ((u32) a0 + 0x2a54U);
    a1 = (*(volatile u8 *) (u32) a1);
    v1 = (s32) ((u32) a0 + (u32) v0);
    a0 = (s32) ((u32) a1 << 4);
    a1 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 - (u32) a1);
    a0 = (s32) ((u32) a0 << 3);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 != 0) goto L_008FCD3C;
    v0 = 0; goto L_008FCEF0;
L_008FCD3C:;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x2a57U);
    v1 = (s32) ((u32) v1 + (u32) v0);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == 0) goto L_008FCD60;
    v0 = 0; goto L_008FCEF0;
L_008FCD60:;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x2a44U);
    v1 = (s32) ((u32) v1 + (u32) v0);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == 0) goto L_008FCE00;
    a1 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a1 = (s32) ((u32) a1 + 0x1a90U);
    v1 = (s32) ((u32) v1 + 0x2980U);
    s4 = 1;
    a2 = 0;
    a0 = (s32) ((u32) v1 + (u32) v0);
    a1 = (s32) ((u32) a1 + (u32) s0);
L_008FCD9C:;
    if (a2 == s1) goto L_008FCDD0;
    v1 = (*(volatile u8 *) (u32) (a1 + 7));
    v0 = (s32) ((u32) v1 << 4);
    v1 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v0 + 196));
    if (v0 == 0) goto L_008FCDD0;
    s4 = (s32) ((u32) s4 + 0x1U);
L_008FCDD0:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < 11;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x1U); if (c_) goto L_008FCD9C; }
    v0 = func_00292D30();
    v0 = v0 & 0xff;
    at = v0 < s4;
    if (at == 0) goto L_008FCE00;
    v0 = 0; goto L_008FCEF0;
L_008FCE00:;
    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1ef6U);
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = (*(volatile u8 *) (u32) v0);
    { s32 c_ = v0 <= 0; v1 = 0; if (c_) goto L_008FCEC0; }
    a1 = (s32) 0x590000U;
    a0 = s2 & 0xff;
    a1 = (s32) ((u32) a1 + 0x1e00U);
    a3 = (s32) ((u32) a1 + (u32) s3);
    a1 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (a3 + 248));
    a1 = (s32) ((u32) a1 + 0x1a90U);
    a6 = (s32) ((u32) a1 + (u32) s0);
    a1 = (s32) ((u32) a6 + (u32) s1);
    a0 = (s32) ((u32) a6 + (u32) a0);
    a5 = (*(volatile u8 *) (u32) (a1 + 7));
    a3 = (s32) ((u32) a3 + 0xf6U);
    a4 = (*(volatile u8 *) (u32) (a0 + 7));
    a1 = (s32) ((u32) a2 << 3);
    a7 = (s32) ((u32) a6 + (u32) a1);
    a2 = 2;
    a1 = 1;
L_008FCE5C:;
    a0 = (*(volatile u8 *) (u32) (a7 + 83));
    { s32 c_ = a0 != a5; a6 = 0; if (c_) goto L_008FCE70; }
    a0 = (s32) ((u32) a6 + 0x1U);
    a6 = a0 & 0xff;
L_008FCE70:;
    a0 = (*(volatile u8 *) (u32) (a7 + 82));
    if (a0 != a4) goto L_008FCE88;
    a0 = (s32) ((u32) a6 + 0x1U);
    a6 = a0 & 0xff;
L_008FCE88:;
    a0 = a6 & 0xff;
    if (a0 != a2) goto L_008FCE9C;
    v0 = 3; goto L_008FCEF0;
L_008FCE9C:;
    if (a0 != a1) { a0 = (*(volatile u8 *) (u32) a3); goto L_008FCEAC; }
    v0 = 0; goto L_008FCEF0;
L_008FCEAC:;
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = v1 < a0;
    { s32 c_ = a0 != 0; a7 = (s32) ((u32) a7 + 0x8U); if (c_) goto L_008FCE5C; }
L_008FCEC0:;
    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1ef8U);
    a0 = (s32) ((u32) v1 + (u32) s3);
    a0 = (*(volatile u8 *) (u32) a0);
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7107));
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) ((u32) v0 + 0x1U);
    at = v1 < v0;
    if (at == 0) { v0 = 2; goto L_008FCEF0; }
    v0 = 0;
L_008FCEF0:;
    return v0;
}
