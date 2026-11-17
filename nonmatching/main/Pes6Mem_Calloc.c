/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Mem_Malloc(s64, s64);

s64 Pes6Mem_Calloc(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 hi = 0, lo = 0;

    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); a1 = lo; } v0 = Pes6Mem_Malloc(a0, a1);
    if (v0 == 0) goto L_0012C1F0;
    a0 = (*(volatile s32 *) (u32) (v0 + -4));
    v1 = a0 & 0x2;
    if (v1 != 0) goto L_0012C0F8;
    v1 = -4;
    v1 = a0 & v1;
    v1 = (s32) ((u32) v1 + 0xfffffffcU);
    a0 = (s32) ((u32) v1 >> 2);
    at = (u64) a0 < (u64) (s64) 10;
    if (at != 0) goto L_0012C1A4;
    v1 = (u64) a0 < (u64) (s64) 8;
    { s32 c_ = v1 != 0; a2 = v0; if (c_) goto L_0012C19C; }
    v1 = (s32) ((u32) a0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 >> 3);
    a0 = a0 & 0x7;
    a1 = (s64) ((u64) v1 << 32);
    a1 = (s64) ((u64) a1 >> 32);
L_0012C084:;
    at = (u64) a0 < (u64) (s64) 8;
    if (at == 0) goto L_0012C1F0;
    v1 = (s32) ((u32) a0 << 2);
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x67d0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x12c0acU) goto L_0012C0AC; if (t_ == 0x12c0b4U) goto L_0012C0B4; if (t_ == 0x12c0bcU) goto L_0012C0BC; if (t_ == 0x12c0c4U) goto L_0012C0C4; if (t_ == 0x12c0ccU) goto L_0012C0CC; if (t_ == 0x12c0d4U) goto L_0012C0D4; if (t_ == 0x12c0dcU) goto L_0012C0DC; if (t_ == 0x12c0e4U) goto L_0012C0E4; }
L_0012C0AC:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C0B4:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C0BC:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C0C4:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C0CC:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C0D4:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C0DC:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C0E4:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    { s32 c_ = a1 <= 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_0012C1F0; }
    a1 = (s64) ((u64) a1 + (u64) (s64) -1); goto L_0012C0AC;
L_0012C0F8:;
    v1 = -4;
    v1 = a0 & v1;
    v1 = (s32) ((u32) v1 + 0xfffffff8U);
    a0 = (s32) ((u32) v1 >> 2);
    v1 = (u64) a0 < (u64) (s64) 8;
    { s32 c_ = v1 != 0; a2 = v0; if (c_) goto L_0012C1E8; }
    v1 = (s32) ((u32) a0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 >> 3);
    a0 = a0 & 0x7;
    a1 = (s64) ((u64) v1 << 32);
    a1 = (s64) ((u64) a1 >> 32);
L_0012C128:;
    at = (u64) a0 < (u64) (s64) 8;
    if (at == 0) goto L_0012C1F0;
    v1 = (s32) ((u32) a0 << 2);
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0x67b0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x12c0acU) goto L_0012C0AC; if (t_ == 0x12c0b4U) goto L_0012C0B4; if (t_ == 0x12c0bcU) goto L_0012C0BC; if (t_ == 0x12c0c4U) goto L_0012C0C4; if (t_ == 0x12c0ccU) goto L_0012C0CC; if (t_ == 0x12c0d4U) goto L_0012C0D4; if (t_ == 0x12c0dcU) goto L_0012C0DC; if (t_ == 0x12c0e4U) goto L_0012C0E4; if (t_ == 0x12c150U) goto L_0012C150; if (t_ == 0x12c158U) goto L_0012C158; if (t_ == 0x12c160U) goto L_0012C160; if (t_ == 0x12c168U) goto L_0012C168; if (t_ == 0x12c170U) goto L_0012C170; if (t_ == 0x12c178U) goto L_0012C178; if (t_ == 0x12c180U) goto L_0012C180; if (t_ == 0x12c188U) goto L_0012C188; }
L_0012C150:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C158:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C160:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C168:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C170:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C178:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C180:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (s32) ((u32) a2 + 0x4U);
L_0012C188:;
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    { s32 c_ = a1 <= 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_0012C1F0; }
    a1 = (s64) ((u64) a1 + (u64) (s64) -1); goto L_0012C150;
L_0012C19C:;
    a1 = 0; goto L_0012C084;
L_0012C1A4:;
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    at = (u64) a0 < (u64) (s64) 5;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0;
    { s32 c_ = at != 0; (*(volatile u32 *) (u32) (v0 + 8)) = (u32) 0; if (c_) goto L_0012C1F0; }
    (*(volatile u32 *) (u32) (v0 + 12)) = (u32) 0;
    at = (u64) a0 < (u64) (s64) 7;
    { s32 c_ = at != 0; (*(volatile u32 *) (u32) (v0 + 16)) = (u32) 0; if (c_) goto L_0012C1F0; }
    (*(volatile u32 *) (u32) (v0 + 20)) = (u32) 0;
    at = (u64) a0 < (u64) (s64) 9;
    { s32 c_ = at != 0; (*(volatile u32 *) (u32) (v0 + 24)) = (u32) 0; if (c_) goto L_0012C1F0; }
    (*(volatile u32 *) (u32) (v0 + 28)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 32)) = (u32) 0;
    goto L_0012C1F4;
L_0012C1E8:;
    a1 = 0; goto L_0012C128;
L_0012C1F0:;
L_0012C1F4:;
    return v0;
}
