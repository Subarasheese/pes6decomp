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
s64 func_002D55B0(s64);
s64 func_002D5870(s64);
s64 func_002D58A0(s64);
void func_002D5930(s64, s64, s64);
s64 func_002F9630(s64);
s64 func_002F96F0(s64, s64);
s64 func_0035A260(void);
s64 func_00920A40(void);
s64 func_00920C60(void);

s64 func_00920670(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;

    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) v0);
    s0 = (*(volatile s32 *) (u32) (a0 + 72));
    at = (u64) s0 < (u64) (s64) 8;
    { s32 c_ = at == 0; s1 = 0; if (c_) goto L_009208D8; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffeaf0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x9206c8U) goto L_009206C8; if (t_ == 0x9206e0U) goto L_009206E0; if (t_ == 0x92070cU) goto L_0092070C; if (t_ == 0x920738U) goto L_00920738; if (t_ == 0x920754U) goto L_00920754; if (t_ == 0x920798U) goto L_00920798; if (t_ == 0x9207b0U) goto L_009207B0; if (t_ == 0x9207dcU) goto L_009207DC; }
L_009206C8:;
    v0 = func_00920C60();
    v1 = 1;
    if (v0 != v1) { v1 = (*(volatile s32 *) (u32) (gp + -19868)); goto L_009206E4; }
    s0 = (s32) ((u32) s0 + 0x1U);
L_009206E0:;
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
L_009206E4:;
    v0 = (s32) ((u32) gp + 0xffffb268U);
    a1 = 255;
    a2 = 15;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8U); func_002D5930(a0, a1, a2);
    s0 = (s32) ((u32) s0 + 0x1U); goto L_009208DC;
L_0092070C:;
    a0 = (s32) ((u32) a0 + 0x8U);
    s2 = 0; v0 = func_002D5870(a0);
    if (v0 != 0) { v0 = 1; goto L_00920728; }
    s2 = 1;
    v0 = 1;
L_00920728:;
    if (s2 != v0) { v0 = (*(volatile s32 *) (u32) (gp + -19868)); goto L_009208E0; }
    s0 = (s32) ((u32) s0 + 0x1U); goto L_009208DC;
L_00920738:;
    v0 = func_00920A40();
    v1 = 1;
    if (v0 != v1) goto L_009208DC;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_009208DC;
L_00920754:;
    a0 = (s32) ((u32) a0 + 0x50U);
    s2 = 0; v0 = func_002D55B0(a0);
    v1 = 1;
    if (v0 == v1) { s2 = 1; goto L_00920784; }
    v0 = func_0035A260();
    v1 = 1;
    if (v0 != v1) { v0 = 1; goto L_00920788; }
    s2 = 1;
L_00920784:;
    v0 = 1;
L_00920788:;
    if (s2 != v0) goto L_009208DC;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_009208DC;
L_00920798:;
    a0 = (s32) ((u32) a0 + 0x8U);
    a1 = 0;
    a2 = 15; func_002D5930(a0, a1, a2);
    s0 = (s32) ((u32) s0 + 0x1U); goto L_009208DC;
L_009207B0:;
    a0 = (s32) ((u32) a0 + 0x8U);
    s2 = 0; v0 = func_002D5870(a0);
    if (v0 != 0) { v0 = 1; goto L_009207CC; }
    s2 = 1;
    v0 = 1;
L_009207CC:;
    if (s2 != v0) goto L_009208DC;
    s0 = (s32) ((u32) s0 + 0x1U); goto L_009208DC;
L_009207DC:;
    v0 = (*(volatile u8 *) (u32) (a0 + 92));
    v0 = v0 & 0x1;
    if (v0 == 0) { s0 = (s32) ((u32) s0 + 0x1U); goto L_009208DC; }
    a0 = (*(volatile s32 *) (u32) a0); v0 = func_002F9630(a0);
    s2 = v0;
    { s32 c_ = s2 <= 0; s3 = 0; if (c_) goto L_00920840; }
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
L_00920804:;
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s3; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = 0; func_001D7D60(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s2;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19868)); goto L_00920804; }
L_00920840:;
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 92));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63);
    if (v0 == 0) { v1 = (*(volatile s32 *) (u32) (gp + -19868)); goto L_00920894; }
    a0 = (*(volatile s32 *) (u32) (v1 + 4));
    a1 = 0;
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s2; goto L_00920888; }
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s2;
L_00920888:;
    a1 = 0; func_001EDAE0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
L_00920894:;
    v0 = (s32) ((u32) gp + 0xffffb268U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s2; goto L_009208C4; }
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s2;
L_009208C4:;
    a1 = 0; func_001DF4F0(a0, a1);
    s0 = (s32) ((u32) s0 + 0x1U);
    goto L_009208DC;
L_009208D8:;
    s1 = 1;
L_009208DC:;
    v0 = (*(volatile s32 *) (u32) (gp + -19868));
L_009208E0:;
    v1 = (s32) ((u32) gp + 0xffffb268U);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    (*(volatile u32 *) (u32) (v0 + 72)) = (u32) s0;
    v0 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8U); v0 = func_002D5870(a0);
    if (v0 == 0) { v0 = s1; goto L_00920A24; }
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (s32) ((u32) v0 + 0x8U); v0 = func_002D58A0(a0);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    s0 = v0;
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u8 *) (u32) (v1 + 92));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_00920A20;
    a0 = (*(volatile s32 *) (u32) v1); v0 = func_002F9630(a0);
    s2 = v0;
    { s32 c_ = s2 <= 0; s3 = 0; if (c_) goto L_009209A8; }
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
L_00920970:;
    v0 = (s32) ((u32) gp + 0xffffb268U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = s3; v0 = func_002F96F0(a0, a1);
    a0 = v0;
    a1 = s0 & 0xff; func_001D76B0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < s2;
    if (v0 != 0) { v1 = (*(volatile s32 *) (u32) (gp + -19868)); goto L_00920970; }
L_009209A8:;
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a0 = s2; goto L_009209DC; }
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
    a0 = s2;
L_009209DC:;
    a1 = s0 & 0xff; func_001ED8F0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (gp + -19868));
    v0 = (s32) ((u32) gp + 0xffffb268U);
    a1 = 1;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (v0 + 4));
    s2 = 0; v0 = func_002F96F0(a0, a1);
    if (v0 == 0) { a1 = s0 & 0xff; goto L_00920A18; }
    s2 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s0 & 0xff;
L_00920A18:;
    a0 = s2; func_001DF420(a0, a1);
L_00920A20:;
    v0 = s1;
L_00920A24:;
    return v0;
}
