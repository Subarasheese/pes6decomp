/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0025EAE0(s32, s32);
void func_0025EB80(s32, s32, s32);

s32 func_0025E7F0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) a0);
    v0 = (*(volatile s16 *) (u32) (v0 + -11792));
    at = v1 < v0;
    { s32 c_ = at != 0; s0 = a0; if (c_) goto L_0025E940; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -11788));
    v0 = v0 < v1;
    if (v0 != 0) goto L_0025E940;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile s16 *) (u32) (s0 + 2));
    v0 = (*(volatile s16 *) (u32) (v0 + -11790));
    at = v1 < v0;
    if (at != 0) goto L_0025E948;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -11786));
    v0 = v0 < v1;
    if (v0 != 0) goto L_0025E948;
    a0 = 1;
    a1 = s0; v0 = func_0025EAE0(a0, a1);
    a0 = v0 & 0xff;
    v0 = (s32) 0x590000U;
    a1 = (s32) ((u32) a0 << 2);
    v1 = (*(volatile u8 *) (u32) (v0 + -11779));
    v0 = (s32) 0x590000U;
    a2 = (s32) ((u32) v1 << 2);
    a0 = (*(volatile s32 *) (u32) (v0 + -11808));
    v1 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 != v0) goto L_0025E950;
    v0 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 != v0) goto L_0025E950;
    v0 = (s32) ((u32) a0 + 0x2U);
    v1 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 != v0) goto L_0025E950;
    v0 = (s32) ((u32) a0 + 0x3U);
    v1 = (s32) ((u32) v0 + (u32) a1);
    v0 = (s32) ((u32) v0 + (u32) a2);
    v1 = (*(volatile u8 *) (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
    if (v1 != v0) goto L_0025E950;
    v0 = (s32) 0x590000U;
    a0 = 1;
    a2 = (*(volatile u8 *) (u32) (v0 + -11780));
    a1 = s0; func_0025EB80(a0, a1, a2);
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s16 *) (u32) (s0 + 2));
    v1 = (*(volatile s16 *) (u32) (v1 + -11804));
    v0 = 1;
    { s64 m_ = (s64) (s32) v1 * (s64) (s32) a0; lo = (s32) m_; hi = (s32) (m_ >> 32); a2 = lo; }
    a1 = (*(volatile s16 *) (u32) s0);
    v1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -11778));
    a0 = (s32) ((u32) a0 + 0xffffd1e8U);
    a1 = (s32) ((u32) a1 + (u32) a2);
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v1);
    v1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u8 *) (u32) v1) = (u8) v0; goto L_0025E954;
L_0025E940:;
    v0 = 0; goto L_0025E954;
L_0025E948:;
    v0 = 0; goto L_0025E954;
L_0025E950:;
    v0 = 0;
L_0025E954:;
    return v0;
}
