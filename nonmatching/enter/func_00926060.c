/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002321B0(s32);
s32 func_00235360(s32);
s32 func_002355C0(s32);
s32 func_00235B60(void);
s32 func_00235CB0(s32);
s32 func_00235E30(s32);

void func_00926060(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s32 gp = 0x3ef370;
    s64 frame[60];
    s32 sp = (s32) (u32) frame;

    v0 = func_00235B60();
    a0 = v0 & 0xff; v0 = func_002321B0(a0);
    s0 = v0 & 0xff;
    at = s0 < 33;
    if (at != 0) { s4 = 0; goto L_009260A0; }
    s0 = 32;
    s4 = 0;
L_009260A0:;
    if (s0 <= 0) goto L_009260F8;
    s3 = (s32) ((u32) sp + 0x60U);
L_009260AC:;
    a0 = s4 & 0xff; v0 = func_00235360(a0);
    s2 = v0 & 0xffff;
    a0 = s4 & 0xff; v0 = func_002355C0(a0);
    s1 = v0 & 0xff;
    a0 = s1; v0 = func_00235E30(a0);
    a0 = s1 & 0xff;
    s1 = v0 & 0xff; v0 = func_00235CB0(a0);
    (*(volatile u32 *) (u32) s3) = (u32) s2;
    v0 = v0 & 0xff;
    (*(volatile u32 *) (u32) (s3 + 4)) = (u32) s1;
    s4 = (s32) ((u32) s4 + 0x1U);
    (*(volatile u32 *) (u32) (s3 + 8)) = (u32) v0;
    v0 = s4 < s0;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0xcU); if (c_) goto L_009260AC; }
L_009260F8:;
    a0 = (*(volatile s32 *) (u32) (gp + -19836));
    v0 = (s32) ((u32) gp + 0xffffb288U);
    v1 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) { v1 = (s32) ((u32) s0 + 0x7U); goto L_00926344; }
    v0 = (s32) 0x930000U;
    v1 = (s32) ((u32) a0 << 9);
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    a1 = 0;
    a0 = (s32) ((u32) v0 + (u32) v1);
    v1 = -1;
L_0092612C:;
    (*(volatile u32 *) (u32) (a0 + 136)) = (u32) v1;
    a1 = (s32) ((u32) a1 + 0x8U);
    (*(volatile u32 *) (u32) (a0 + 132)) = (u32) 0;
    v0 = a1 < 32;
    (*(volatile u32 *) (u32) (a0 + 148)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 144)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 160)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 156)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 172)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 168)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 184)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 180)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 196)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 192)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 208)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 204)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 220)) = (u32) v1;
    (*(volatile u32 *) (u32) (a0 + 216)) = (u32) 0;
    { s32 c_ = v0 != 0; a0 = (s32) ((u32) a0 + 0x60U); if (c_) goto L_0092612C; }
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff798U);
    a1 = 0;
    v1 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = s0 <= 0; (*(volatile u32 *) (u32) v0) = (u32) 0; if (c_) goto L_00926328; }
    at = s0 < 9;
    { s32 c_ = at != 0; v0 = (s32) ((u32) s0 + 0xfffffff8U); if (c_) goto L_009262C0; }
    { s32 c_ = s0 < 0; v1 = 0; if (c_) goto L_009261C8; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = s0 < at;
    if (at == 0) goto L_009261C8;
    v1 = 1;
L_009261C8:;
    if (v1 == 0) goto L_009262C0;
    a2 = (*(volatile s32 *) (u32) (gp + -19836));
    v1 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + 0xfffff720U);
    a0 = (s32) ((u32) sp + 0x60U);
    a2 = (s32) ((u32) a2 << 9);
    v1 = (s32) ((u32) v1 + (u32) a2);
L_009261E8:;
    a5 = (*(volatile s32 *) (u32) (a0 + 8));
    a1 = (s32) ((u32) a1 + 0x8U);
    a4 = (*(volatile s32 *) (u32) a0);
    a2 = a1 < v0;
    a3 = (*(volatile s32 *) (u32) (a0 + 4));
    (*(volatile u32 *) (u32) (v1 + 128)) = (u32) a5;
    (*(volatile u32 *) (u32) (v1 + 136)) = (u32) a4;
    (*(volatile u32 *) (u32) (v1 + 132)) = (u32) a3;
    a5 = (*(volatile s32 *) (u32) (a0 + 20));
    a4 = (*(volatile s32 *) (u32) (a0 + 12));
    a3 = (*(volatile s32 *) (u32) (a0 + 16));
    (*(volatile u32 *) (u32) (v1 + 140)) = (u32) a5;
    (*(volatile u32 *) (u32) (v1 + 148)) = (u32) a4;
    (*(volatile u32 *) (u32) (v1 + 144)) = (u32) a3;
    a5 = (*(volatile s32 *) (u32) (a0 + 32));
    a4 = (*(volatile s32 *) (u32) (a0 + 24));
    a3 = (*(volatile s32 *) (u32) (a0 + 28));
    (*(volatile u32 *) (u32) (v1 + 152)) = (u32) a5;
    (*(volatile u32 *) (u32) (v1 + 160)) = (u32) a4;
    (*(volatile u32 *) (u32) (v1 + 156)) = (u32) a3;
    a5 = (*(volatile s32 *) (u32) (a0 + 44));
    a4 = (*(volatile s32 *) (u32) (a0 + 36));
    a3 = (*(volatile s32 *) (u32) (a0 + 40));
    (*(volatile u32 *) (u32) (v1 + 164)) = (u32) a5;
    (*(volatile u32 *) (u32) (v1 + 172)) = (u32) a4;
    (*(volatile u32 *) (u32) (v1 + 168)) = (u32) a3;
    a5 = (*(volatile s32 *) (u32) (a0 + 56));
    a4 = (*(volatile s32 *) (u32) (a0 + 48));
    a3 = (*(volatile s32 *) (u32) (a0 + 52));
    (*(volatile u32 *) (u32) (v1 + 176)) = (u32) a5;
    (*(volatile u32 *) (u32) (v1 + 184)) = (u32) a4;
    (*(volatile u32 *) (u32) (v1 + 180)) = (u32) a3;
    a5 = (*(volatile s32 *) (u32) (a0 + 68));
    a4 = (*(volatile s32 *) (u32) (a0 + 60));
    a3 = (*(volatile s32 *) (u32) (a0 + 64));
    (*(volatile u32 *) (u32) (v1 + 188)) = (u32) a5;
    (*(volatile u32 *) (u32) (v1 + 196)) = (u32) a4;
    (*(volatile u32 *) (u32) (v1 + 192)) = (u32) a3;
    a5 = (*(volatile s32 *) (u32) (a0 + 80));
    a4 = (*(volatile s32 *) (u32) (a0 + 72));
    a3 = (*(volatile s32 *) (u32) (a0 + 76));
    (*(volatile u32 *) (u32) (v1 + 200)) = (u32) a5;
    (*(volatile u32 *) (u32) (v1 + 208)) = (u32) a4;
    (*(volatile u32 *) (u32) (v1 + 204)) = (u32) a3;
    a5 = (*(volatile s32 *) (u32) (a0 + 92));
    a4 = (*(volatile s32 *) (u32) (a0 + 84));
    a3 = (*(volatile s32 *) (u32) (a0 + 88));
    (*(volatile u32 *) (u32) (v1 + 212)) = (u32) a5;
    (*(volatile u32 *) (u32) (v1 + 220)) = (u32) a4;
    (*(volatile u32 *) (u32) (v1 + 216)) = (u32) a3;
    a0 = (s32) ((u32) a0 + 0x60U);
    { s32 c_ = a2 != 0; v1 = (s32) ((u32) v1 + 0x60U); if (c_) goto L_009261E8; }
L_009262C0:;
    at = a1 < s0;
    if (at == 0) goto L_00926328;
    v0 = (s32) ((u32) a1 << 1);
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
    a0 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) 0x930000U;
    a2 = (s32) ((u32) a0 << 2);
    v0 = (s32) ((u32) v0 + 0xfffff720U);
    v1 = (s32) ((u32) v1 << 9);
    a0 = (s32) ((u32) a2 + (u32) sp);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a4 = (s32) ((u32) a0 + 0x60U);
    a3 = (s32) ((u32) a2 + (u32) v0);
L_009262F8:;
    a2 = (*(volatile s32 *) (u32) (a4 + 8));
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = (*(volatile s32 *) (u32) a4);
    v0 = a1 < s0;
    v1 = (*(volatile s32 *) (u32) (a4 + 4));
    (*(volatile u32 *) (u32) (a3 + 128)) = (u32) a2;
    (*(volatile u32 *) (u32) (a3 + 136)) = (u32) a0;
    (*(volatile u32 *) (u32) (a3 + 132)) = (u32) v1;
    a4 = (s32) ((u32) a4 + 0xcU);
    { s32 c_ = v0 != 0; a3 = (s32) ((u32) a3 + 0xcU); if (c_) goto L_009262F8; }
L_00926328:;
    v1 = (*(volatile s32 *) (u32) (gp + -19836));
    v0 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 + 0xfffff79cU);
    v1 = (s32) ((u32) v1 << 9);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) s0;
    v1 = (s32) ((u32) s0 + 0x7U);
L_00926344:;
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 3; if (c_) goto L_00926354; }
    v0 = (s32) ((u32) v1 + 0x7U);
    v0 = (s32) v0 >> 3;
L_00926354:;
    if (v0 > 0) goto L_00926360;
    v0 = 1;
L_00926360:;
    return;
}
