/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_00223520(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 hi = 0, lo = 0;

    a3 = (*(volatile u16 *) (u32) a0);
    { s32 c_ = a3 < 0; v0 = 0; if (c_) goto L_00223538; }
    at = a3 < 57;
    if (at != 0) goto L_00223768;
L_00223538:;
    v1 = a3 < 57;
    if (v1 != 0) { a2 = 284; goto L_00223554; }
    at = a3 < 64;
    if (at != 0) goto L_00223768;
    a2 = 284;
L_00223554:;
    if (a3 != a2) { v0 = 285; goto L_002235CC; }
    { s32 c_ = a3 == a2; v0 = 0; if (c_) goto L_0022356C; }
    v0 = 3; goto L_002235C4;
L_0022356C:;
    a4 = (*(volatile u8 *) (u32) a1);
    v1 = (s32) 0xb2160000U;
    v1 = v1 | 0x42c9;
    a3 = 23;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a4; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) a4 >> 31);
    v1 = hi;
    v1 = (s32) ((u32) v1 + (u32) a4);
    v1 = (s32) v1 >> 4;
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0x41U);
    (*(volatile u16 *) (u32) a0) = (u16) v1;
    v1 = (*(volatile u8 *) (u32) a1);
    if ((u32) a3 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) a3); hi = (s32) ((u32) v1 % (u32) a3); lo = q_; }
    v1 = hi;
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    v1 = (*(volatile u16 *) (u32) a0);
    at = v1 < 73;
    if (at != 0) goto L_002235C4;
    v0 = 3;
L_002235C4:;
    goto L_00223768;
L_002235CC:;
    if (a3 != v0) { v0 = a3 < 64; goto L_00223664; }
    v0 = (*(volatile u8 *) (u32) a1);
    at = v0 < 32;
    if (at == 0) { v0 = 3; goto L_00223768; }
    v1 = (s32) ((u32) v0 + 0x98U);
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    (*(volatile u16 *) (u32) a0) = (u16) a2;
    v1 = (*(volatile u16 *) (u32) a0);
    { s32 c_ = v1 == a2; v0 = 0; if (c_) goto L_00223604; }
    v0 = 3; goto L_0022365C;
L_00223604:;
    a4 = (*(volatile u8 *) (u32) a1);
    v1 = (s32) 0xb2160000U;
    v1 = v1 | 0x42c9;
    a3 = 23;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a4; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a2 = (s32) ((u32) a4 >> 31);
    v1 = hi;
    v1 = (s32) ((u32) v1 + (u32) a4);
    v1 = (s32) v1 >> 4;
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0x41U);
    (*(volatile u16 *) (u32) a0) = (u16) v1;
    v1 = (*(volatile u8 *) (u32) a1);
    if ((u32) a3 != 0) { s64 q_ = (s32) ((u32) v1 / (u32) a3); hi = (s32) ((u32) v1 % (u32) a3); lo = q_; }
    v1 = hi;
    (*(volatile u8 *) (u32) a1) = (u8) v1;
    v1 = (*(volatile u16 *) (u32) a0);
    at = v1 < 73;
    if (at != 0) goto L_0022365C;
    v0 = 3;
L_0022365C:;
    goto L_00223768;
L_00223664:;
    if (v0 != 0) { v0 = a3 < 272; goto L_00223690; }
    at = a3 < 204;
    if (at == 0) goto L_0022368C;
    v1 = (*(volatile u16 *) (u32) a0);
    v0 = 1;
    v1 = (s32) ((u32) v1 + 0xffffffc0U);
    (*(volatile u16 *) (u32) a0) = (u16) v1; goto L_00223768;
L_0022368C:;
    v0 = a3 < 272;
L_00223690:;
    if (v0 != 0) { v0 = 274; goto L_002236C8; }
    at = a3 < 274;
    if (at == 0) goto L_002236C4;
    v1 = (*(volatile u16 *) (u32) a0);
    v0 = 1;
    v1 = (s32) ((u32) v1 + 0xfffffef0U);
    (*(volatile u16 *) (u32) a0) = (u16) v1;
    v1 = (*(volatile u16 *) (u32) a0);
    v1 = (s32) ((u32) v1 + 0x92U);
    (*(volatile u16 *) (u32) a0) = (u16) v1; goto L_00223768;
L_002236C4:;
    v0 = 274;
L_002236C8:;
    if (a3 != v0) { v0 = 275; goto L_002236E0; }
    v1 = 140;
    v0 = 1;
    (*(volatile u16 *) (u32) a0) = (u16) v1; goto L_00223768;
L_002236E0:;
    if (a3 != v0) { v0 = 276; goto L_002236F8; }
    v1 = 141;
    v0 = 1;
    (*(volatile u16 *) (u32) a0) = (u16) v1; goto L_00223768;
L_002236F8:;
    if (a3 != v0) { v0 = 277; goto L_00223710; }
    v1 = 142;
    v0 = 1;
    (*(volatile u16 *) (u32) a0) = (u16) v1; goto L_00223768;
L_00223710:;
    if (a3 != v0) { v0 = 278; goto L_00223728; }
    v1 = 143;
    v0 = 1;
    (*(volatile u16 *) (u32) a0) = (u16) v1; goto L_00223768;
L_00223728:;
    if (a3 != v0) { v0 = 279; goto L_00223740; }
    v1 = 144;
    v0 = 1;
    (*(volatile u16 *) (u32) a0) = (u16) v1; goto L_00223768;
L_00223740:;
    if (a3 != v0) { v0 = (s32) ((u32) a3 + 0xfffffedaU); goto L_00223758; }
    v1 = 145;
    v0 = 1;
    (*(volatile u16 *) (u32) a0) = (u16) v1; goto L_00223768;
L_00223758:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = 3; goto L_00223768; }
    v0 = 2;
L_00223768:;
    return v0;
}
