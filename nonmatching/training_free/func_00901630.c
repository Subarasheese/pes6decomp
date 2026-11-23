/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00901630(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 hi = 0, lo = 0;

    a5 = (*(volatile u8 *) (u32) (a1 + 3));
    a3 = (*(volatile u8 *) (u32) a1);
    v1 = a5 < 128;
    { s32 c_ = v1 != 0; a4 = (*(volatile s8 *) (u32) a2); if (c_) goto L_0090168C; }
    v1 = a3 & 0xff;
    a4 = (s64) ((u64) a4 << 56);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a4 = a4 >> 56;
    v1 = 255;
    a3 = (s32) ((u32) v1 - (u32) a5);
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) a4 * (s64) (u64) (u32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    v1 = (s32) 0x80800000U;
    v1 = v1 | 0x8081;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a4; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a3 = (s32) ((u32) a4 >> 31);
    v1 = hi;
    v1 = (s32) ((u32) v1 + (u32) a4);
    v1 = (s32) v1 >> 7;
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = v1 & 0xff; goto L_009016D4;
L_0090168C:;
    a3 = a3 & 0xff;
    v1 = (s64) ((u64) a4 << 56);
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); a5 = lo; }
    v1 = v1 >> 56;
    a3 = (s32) 0x81020000U;
    a4 = (s32) ((u32) a5 >> 31);
    a3 = a3 | 0x409;
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a3 = hi;
    a3 = (s32) ((u32) a3 + (u32) a5);
    a3 = (s32) a3 >> 6;
    a3 = (s32) ((u32) a3 + (u32) a4);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = v1 & 0xff;
    at = v1 < 256;
    if (at != 0) { (*(volatile u8 *) (u32) a0) = (u8) v1; goto L_009016D8; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 255);
L_009016D4:;
    (*(volatile u8 *) (u32) a0) = (u8) v1;
L_009016D8:;
    a5 = (*(volatile u8 *) (u32) (a1 + 3));
    a3 = (*(volatile u8 *) (u32) (a1 + 1));
    v1 = a5 < 128;
    { s32 c_ = v1 != 0; a4 = (*(volatile s8 *) (u32) (a2 + 1)); if (c_) goto L_00901734; }
    v1 = a3 & 0xff;
    a4 = (s64) ((u64) a4 << 56);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a4 = a4 >> 56;
    v1 = 255;
    a3 = (s32) ((u32) v1 - (u32) a5);
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) a4 * (s64) (u64) (u32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); a4 = lo; }
    v1 = (s32) 0x80800000U;
    v1 = v1 | 0x8081;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a4; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a3 = (s32) ((u32) a4 >> 31);
    v1 = hi;
    v1 = (s32) ((u32) v1 + (u32) a4);
    v1 = (s32) v1 >> 7;
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = v1 & 0xff; goto L_0090177C;
L_00901734:;
    a3 = a3 & 0xff;
    v1 = (s64) ((u64) a4 << 56);
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); a5 = lo; }
    v1 = v1 >> 56;
    a3 = (s32) 0x81020000U;
    a4 = (s32) ((u32) a5 >> 31);
    a3 = a3 | 0x409;
    { s64 m_ = (s64) (s32) a3 * (s64) (s32) a5; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a3 = hi;
    a3 = (s32) ((u32) a3 + (u32) a5);
    a3 = (s32) a3 >> 6;
    a3 = (s32) ((u32) a3 + (u32) a4);
    v1 = (s32) ((u32) v1 + (u32) a3);
    v1 = v1 & 0xff;
    at = v1 < 256;
    if (at != 0) { (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1; goto L_00901780; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 255);
L_0090177C:;
    (*(volatile u8 *) (u32) (a0 + 1)) = (u8) v1;
L_00901780:;
    a3 = (*(volatile u8 *) (u32) (a1 + 3));
    a1 = (*(volatile u8 *) (u32) (a1 + 2));
    v1 = a3 < 128;
    { s32 c_ = v1 != 0; a2 = (*(volatile s8 *) (u32) (a2 + 2)); if (c_) goto L_009017DC; }
    v1 = a1 & 0xff;
    a2 = (s64) ((u64) a2 << 56);
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    a2 = a2 >> 56;
    v1 = 255;
    a1 = (s32) ((u32) v1 - (u32) a3);
    { s64 m_ = (s64) (((u64) (u32) hi << 32) | (u32) lo) + (s64) (u64) (u32) a2 * (s64) (u64) (u32) a1; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    v1 = (s32) 0x80800000U;
    v1 = v1 | 0x8081;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a2; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = (s32) ((u32) a2 >> 31);
    v1 = hi;
    v1 = (s32) ((u32) v1 + (u32) a2);
    v1 = (s32) v1 >> 7;
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = v1 & 0xff; goto L_00901824;
L_009017DC:;
    a1 = a1 & 0xff;
    v1 = (s64) ((u64) a2 << 56);
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    v1 = v1 >> 56;
    a1 = (s32) 0x81020000U;
    a2 = (s32) ((u32) a3 >> 31);
    a1 = a1 | 0x409;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) a3; lo = (s32) m_; hi = (s32) (m_ >> 32); }
    a1 = hi;
    a1 = (s32) ((u32) a1 + (u32) a3);
    a1 = (s32) a1 >> 6;
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = v1 & 0xff;
    at = v1 < 256;
    if (at != 0) { (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1; goto L_00901828; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 255);
L_00901824:;
    (*(volatile u8 *) (u32) (a0 + 2)) = (u8) v1;
L_00901828:;
    return;
}
