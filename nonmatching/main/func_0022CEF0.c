/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_GetEntry7980(s64);
s64 Pes6SaveData_GetUnavailableFlag(void);
s64 func_00226710(void);
s64 func_0022BFF0(s64, s64);
s64 func_0022C140(s64);
s64 func_0022C1E0(void);
s64 func_00235B60(void);

s64 func_0022CEF0(s64 a0, s64 a1) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 gp = 0x3ef370;

    s0 = 0; v0 = func_0022C1E0();
    s2 = v0; v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = (u64) 0 < (u64) v0;
    v0 = 1;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (gp + -31684)); goto L_0022CF34; }
    s1 = 0; goto L_0022CF38;
L_0022CF34:;
    s1 = (s32) ((u32) v0 + 0xcU);
L_0022CF38:;
    v0 = Pes6SaveData_GetUnavailableFlag();
    v1 = (u64) 0 < (u64) v0;
    v0 = 1;
    if (v1 != v0) goto L_0022CF58;
    v0 = 0; goto L_0022D16C;
L_0022CF58:;
    v0 = func_00235B60();
    a0 = v0 & 0xff; v0 = Pes6SaveData_GetEntry7980(a0);
    if (s2 != 0) goto L_0022CF78;
    v0 = 0; goto L_0022D16C;
L_0022CF78:;
    if (s1 != 0) goto L_0022CF88;
    v0 = 0; goto L_0022D16C;
L_0022CF88:;
    if (v0 != 0) { s3 = (*(volatile u8 *) (u32) v0); goto L_0022CF98; }
    v0 = 0; goto L_0022D16C;
L_0022CF98:;
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 7;
    if (v1 == v0) { v0 = s3; goto L_0022D16C; }
    v0 = 1;
    if (v1 == v0) goto L_0022D168;
    v0 = 56;
    if (v1 == v0) goto L_0022D168;
    v0 = 44;
    if (v1 == v0) goto L_0022D168;
    if (v1 == 0) goto L_0022D168;
    v0 = 57;
    if (v1 == v0) { s2 = (*(volatile u8 *) (u32) (s2 + 1)); goto L_0022D064; }
    v0 = 45;
    if (v1 == v0) goto L_0022D060;
    v0 = 10;
    if (v1 == v0) goto L_0022D060;
    v0 = 9;
    if (v1 == v0) goto L_0022D060;
    v0 = 8;
    if (v1 == v0) goto L_0022D060;
    v0 = 58;
    if (v1 == v0) { s3 = 0; goto L_0022D060; }
    v0 = 5;
    if (v1 == v0) goto L_0022D05C;
    v0 = 4;
    if (v1 == v0) goto L_0022D05C;
    v0 = 3;
    if (v1 == v0) goto L_0022D05C;
    v0 = 2;
    if (v1 == v0) goto L_0022D05C;
    s3 = (*(volatile u8 *) (u32) (s1 + 41)); goto L_0022D168;
L_0022D05C:;
    s3 = 0;
L_0022D060:;
    s2 = (*(volatile u8 *) (u32) (s2 + 1));
L_0022D064:;
    a0 = s2; v0 = func_0022C140(a0);
    s1 = v0;
    if (s1 != 0) { v0 = (*(volatile u8 *) (u32) (s1 + 5)); goto L_0022D080; }
    v0 = 0; goto L_0022D16C;
L_0022D080:;
    { s32 c_ = v0 <= 0; s4 = 0; if (c_) goto L_0022D0D0; }
    a0 = s2;
L_0022D08C:;
    a1 = s4; v0 = func_0022BFF0(a0, a1);
    if (v0 == 0) goto L_0022D0B8;
    v1 = (*(volatile u8 *) (u32) (v0 + 22));
    v1 = (s64) ((u64) v1 << 61);
    v0 = 1;
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != v0) goto L_0022D0B8;
    s0 = v0;
L_0022D0B8:;
    v0 = (s32) ((u32) s4 + 0x1U);
    s4 = v0 & 0xff;
    v0 = (*(volatile u8 *) (u32) (s1 + 5));
    v0 = s4 < v0;
    if (v0 != 0) { a0 = s2; goto L_0022D08C; }
L_0022D0D0:;
    a1 = (*(volatile u8 *) (u32) (s1 + 3));
    a0 = s2; v0 = func_0022BFF0(a0, a1);
    if (v0 != 0) { a0 = 1; goto L_0022D0EC; }
    v0 = 0; goto L_0022D16C;
L_0022D0EC:;
    if (s0 != a0) { v1 = (*(volatile u8 *) (u32) v0); goto L_0022D144; }
    a0 = (*(volatile u8 *) (u32) v0);
    v1 = (*(volatile u8 *) (u32) (v0 + 22));
    a0 = (s32) ((u32) a0 + 0xffffffffU);
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s64) ((u64) v1 << 57);
    a0 = a0 & 0xff;
    v1 = (s64) ((u64) v1 >> 63);
    a0 = (s32) ((u32) s3 + (u32) a0);
    { s32 c_ = v1 == 0; s3 = a0 & 0xff; if (c_) goto L_0022D124; }
    v1 = (s32) ((u32) s3 + 0x1U);
    s3 = v1 & 0xff;
L_0022D124:;
    v1 = (*(volatile u8 *) (u32) (v0 + 22));
    v1 = (s64) ((u64) v1 << 62);
    v0 = 1;
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != v0) goto L_0022D168;
    s3 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_0022D168;
L_0022D144:;
    v0 = (*(volatile u8 *) (u32) (v0 + 22));
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    v1 = v1 & 0xff;
    v1 = (s32) ((u32) s3 + (u32) v1);
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    { s32 c_ = v0 != a0; s3 = v1 & 0xff; if (c_) goto L_0022D168; }
    s3 = (s64) ((u64) 0 + (u64) (s64) 6);
L_0022D168:;
    v0 = s3;
L_0022D16C:;
    return v0;
}
