/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_009B44E0(void);

s32 func_002D8440(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;

    v0 = (s32) 0x5e0000U;
    s1 = a0;
    s0 = a1;
    (*(volatile u8 *) (u32) (v0 + 24161)) = (u8) 0; v0 = func_009B44E0();
    a0 = v0 & 0xffff;
    v1 = 852;
    { s64 m_ = (s64) (s32) a0 * (s64) (s32) v1; lo = (s32) m_; hi = (s32) (m_ >> 32); a0 = lo; }
    v1 = (*(volatile s32 *) (u32) (gp + -32228));
    v1 = (s32) ((u32) a0 + (u32) v1);
    v1 = (*(volatile s16 *) (u32) (v1 + 840));
    if (v1 <= 0) goto L_002D8494;
    a0 = 1;
    v1 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v1 + 24156)) = (u32) a0; goto L_002D849C;
L_002D8494:;
    v1 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v1 + 24156)) = (u32) 0;
L_002D849C:;
    a0 = (s32) 0x5e0000U;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (a0 + 24163)) = (u8) s0;
    v1 = (*(volatile u8 *) (u32) (v1 + 24163));
    if (v1 == 0) { s1 = 0; goto L_002D84C4; }
    v1 = v1 < 23;
    if (v1 != 0) { a0 = s1 & 0xff; goto L_002D84C8; }
    s1 = 0;
L_002D84C4:;
    a0 = s1 & 0xff;
L_002D84C8:;
    v1 = 4;
    if (a0 == v1) { a0 = 1; goto L_002D8544; }
    v1 = 3;
    if (a0 == v1) { a0 = 8; goto L_002D852C; }
    a1 = 2;
    if (a0 == a1) { a0 = 7; goto L_002D8514; }
    v1 = 1;
    if (a0 == v1) { a0 = 6; goto L_002D8500; }
    v1 = (s32) 0x5e0000U; goto L_002D85DC;
L_002D8500:;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24160)) = (u8) a0;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24162)) = (u8) 0; goto L_002D868C;
L_002D8514:;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24160)) = (u8) a0;
    a0 = 1;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24162)) = (u8) a0; goto L_002D868C;
L_002D852C:;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24160)) = (u8) a0;
    a0 = 2;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24162)) = (u8) a0; goto L_002D868C;
L_002D8544:;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24162)) = (u8) a0;
    v1 = (s32) 0x5e0000U;
    a0 = (s32) 0x5e0000U;
    a2 = (*(volatile s32 *) (u32) (v1 + 24152));
    v1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a2 + 0x1U);
    v1 = (*(volatile s32 *) (u32) (v1 + 12228));
    v1 = (u64) a1 < (u64) v1;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (a0 + 24152)) = (u32) a1; if (c_) goto L_002D8578; }
    v1 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v1 + 24152)) = (u32) 0;
L_002D8578:;
    a0 = 3;
    if (a2 == a0) { a0 = 2; goto L_002D85D0; }
    v1 = 2;
    if (a2 == v1) { a0 = 1; goto L_002D85C4; }
    v1 = 1;
    if (a2 == v1) goto L_002D85B8;
    if (a2 == 0) goto L_002D85AC;
    goto L_002D8690;
L_002D85AC:;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24160)) = (u8) 0; goto L_002D868C;
L_002D85B8:;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24160)) = (u8) a0; goto L_002D868C;
L_002D85C4:;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24160)) = (u8) a0; goto L_002D868C;
L_002D85D0:;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24160)) = (u8) a0; goto L_002D868C;
L_002D85DC:;
    a0 = (s32) 0x5e0000U;
    a2 = (*(volatile s32 *) (u32) (v1 + 24148));
    (*(volatile u8 *) (u32) (a0 + 24162)) = (u8) a1;
    a0 = (s32) 0x5e0000U;
    v1 = (s32) 0x3b0000U;
    a1 = (s32) ((u32) a2 + 0x1U);
    v1 = (*(volatile s32 *) (u32) (v1 + 12224));
    v1 = (u64) a1 < (u64) v1;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (a0 + 24148)) = (u32) a1; if (c_) goto L_002D860C; }
    v1 = (s32) 0x5e0000U;
    (*(volatile u32 *) (u32) (v1 + 24148)) = (u32) 0;
L_002D860C:;
    at = (u64) a2 < (u64) (s64) 6;
    if (at == 0) goto L_002D868C;
    a0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) a2 << 2);
    a0 = (s32) ((u32) a0 + 0xffffbfc0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x2d8634U) goto L_002D8634; if (t_ == 0x2d8640U) goto L_002D8640; if (t_ == 0x2d8650U) goto L_002D8650; if (t_ == 0x2d8660U) goto L_002D8660; if (t_ == 0x2d8670U) goto L_002D8670; if (t_ == 0x2d8680U) goto L_002D8680; }
L_002D8634:;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24160)) = (u8) 0; goto L_002D868C;
L_002D8640:;
    a0 = 3;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24160)) = (u8) a0; goto L_002D868C;
L_002D8650:;
    a0 = 4;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24160)) = (u8) a0; goto L_002D868C;
L_002D8660:;
    a0 = 1;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24160)) = (u8) a0; goto L_002D868C;
L_002D8670:;
    a0 = 2;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24160)) = (u8) a0; goto L_002D868C;
L_002D8680:;
    a0 = 5;
    v1 = (s32) 0x5e0000U;
    (*(volatile u8 *) (u32) (v1 + 24160)) = (u8) a0;
L_002D868C:;
L_002D8690:;
    return v0;
}
