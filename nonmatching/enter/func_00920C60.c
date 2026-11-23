/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D76B0(s64, s64);
void func_001D7D60(s64, s64);
void func_001DF420(s64, s64);
void func_001DF4F0(s64, s64);
void func_001ED8F0(s64, s64);
void func_001EDAE0(s64, s64);
s64 func_001EDC80(s64, s64);
void func_001EF900(s64, s64);
s64 func_00292D50(void);
void func_002D5630(s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);
void func_002F99A0(s64, s64, s64);
s64 func_0035EE00(s64, s64);
void func_00921C20(s64, s64);

s64 func_00920C60(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    s4 = (*(volatile s32 *) (u32) (v0 + 96)); v0 = func_00292D50();
    s3 = v0 & 0xff;
    at = s3 < 24;
    { s32 c_ = at != 0; s2 = 0; if (c_) goto L_00920CAC; }
    s3 = 23;
L_00920CAC:;
    { s32 c_ = s3 <= 0; s1 = 0; if (c_) goto L_00920D08; }
    s0 = 0;
    a0 = s4;
L_00920CBC:;
    a1 = s1; v0 = func_0035EE00(a0, a1);
    v1 = 1;
    if (v0 != v1) goto L_00920CF8;
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u32 *) (u32) (v0 + 204)) = (u32) s1;
    s0 = (s32) ((u32) s0 + 0x4U);
L_00920CF8:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s3;
    if (v0 != 0) { a0 = s4; goto L_00920CBC; }
L_00920D08:;
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    a0 = 0;
    a1 = 11;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 200)) = (u32) s2; func_00921C20(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 92));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19868)); goto L_00920DC8; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a1 = (*(volatile s32 *) (u32) (gp + -19868)); goto L_00920D74; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = (*(volatile s32 *) (u32) (gp + -19868));
L_00920D74:;
    v1 = (s32) 0x930000U;
    v0 = (s32) 0x930000U;
    a0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 + 0xffffa570U);
    v0 = (s32) ((u32) v0 + 0xffffa574U);
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a0 = (*(volatile s32 *) (u32) a0);
    a1 = (*(volatile s32 *) (u32) (a0 + 76));
    a0 = (*(volatile s32 *) (u32) (a0 + 96));
    a1 = (s32) ((u32) a1 << 3);
    a0 = (s32) ((u32) a0 << 7);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) a1 + (u32) v1);
    v0 = (s32) ((u32) a1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    a2 = s0; func_002F99A0(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
L_00920DC8:;
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 92));
    v0 = v0 & 0x1;
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19868)); goto L_00920EC8; }
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00920E38; }
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
L_00920E00:;
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 1; func_001D7D60(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19868)); goto L_00920E00; }
L_00920E38:;
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 92));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19868)); goto L_00920E8C; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_00920E80; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_00920E80:;
    a1 = 1; func_001EDAE0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
L_00920E8C:;
    v0 = (s32) ((u32) gp + 0xffffb268U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_00920EBC; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_00920EBC:;
    a1 = 1; func_001DF4F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
L_00920EC8:;
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 92));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) goto L_00920F20;
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_00920F0C; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_00920F0C:;
    a1 = 0; v0 = func_001EDC80(a0, a1);
    a0 = v0;
    a1 = 1; func_001EF900(a0, a1);
L_00920F20:;
    s0 = (s32) 0x930000U;
    s4 = 0;
    s0 = (s32) ((u32) s0 + 0xffffe9d8U);
L_00920F2C:;
    s3 = 0;
L_00920F30:;
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    a0 = (*(volatile s32 *) (u32) s0);
    v0 = (s32) ((u32) gp + 0xffffb268U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s2 = (s32) ((u32) s3 + (u32) a0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s1 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) goto L_00920F68;
    s1 = (*(volatile s32 *) (u32) (v0 + 12));
L_00920F68:;
    a0 = s1;
    a1 = s2; v0 = func_001EDC80(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    a0 = v0;
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s8 *) (u32) (v0 + 32));
    a1 = (u64) 0 < (u64) v0; func_001EF900(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 12;
    if (v0 != 0) goto L_00920F30;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = (u64) s4 < (u64) (s64) 3;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00920F2C; }
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_00920FF0; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_00920FF0:;
    a1 = 1; func_001DF4F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 92));
    v0 = v0 & 0x1;
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19868)); goto L_009210EC; }
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s0 = v0;
    { s32 c_ = s0 <= 0; s1 = 0; if (c_) goto L_00921070; }
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
L_00921034:;
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s1; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 0; func_001D76B0(a0, a1);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < s0;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19868)); goto L_00921034; }
L_00921070:;
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_009210A4; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_009210A4:;
    a1 = 0; func_001ED8F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s0 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s0; goto L_009210E0; }
    s0 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s0;
L_009210E0:;
    a1 = 0; func_001DF420(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
L_009210EC:;
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a1 = (*(volatile s32 *) (u32) (v0 + 88));
    a0 = (s32) ((u32) v0 + 0x50U); func_002D5630(a0, a1);
    v0 = 1;
    return v0;
}
