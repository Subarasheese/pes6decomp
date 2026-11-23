/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0025AB00(s64, s64, s64, s64);
void func_0025C360(void);

void func_0025A950(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0;

    a5 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s16 *) (u32) (v0 + -12404));
    a4 = (s32) 0x590000U;
    a5 = (s32) ((u32) a5 + 0xffffcf80U);
    a4 = (s32) ((u32) a4 + 0xffffcf88U);
    at = 0 < v0;
    { s32 c_ = at == 0; a7 = 0; if (c_) goto L_0025A9C0; }
    a6 = 0;
    a1 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
L_0025A990:;
    a2 = (*(volatile s32 *) (u32) (a0 + -12376));
    a7 = (s32) ((u32) a7 + 0x1U);
    a3 = (*(volatile s16 *) (u32) (a1 + -12402));
    a2 = (s32) ((u32) a2 + (u32) a6);
    (*(volatile u16 *) (u32) a2) = (u16) a3;
    a2 = (*(volatile s32 *) (u32) (v1 + -12372));
    a2 = (s32) ((u32) a2 + (u32) a6);
    (*(volatile u16 *) (u32) a2) = (u16) 0;
    a2 = (*(volatile s16 *) (u32) (v0 + -12404));
    a2 = a7 < a2;
    { s32 c_ = a2 != 0; a6 = (s32) ((u32) a6 + 0x2U); if (c_) goto L_0025A990; }
L_0025A9C0:;
    v1 = (*(volatile s16 *) (u32) a4);
    v0 = (*(volatile s16 *) (u32) a5);
    at = v0 < v1;
    if (at == 0) { a1 = v1; goto L_0025A9DC; }
    a1 = v0; goto L_0025A9E0;
L_0025A9DC:;
    v1 = v0;
L_0025A9E0:;
    a0 = (*(volatile s16 *) (u32) (a4 + 2));
    v0 = (*(volatile s16 *) (u32) (a5 + 2));
    at = v0 < a0;
    if (at == 0) { a2 = a0; goto L_0025A9FC; }
    a2 = v0; goto L_0025AA00;
L_0025A9FC:;
    a0 = v0;
L_0025AA00:;
    a4 = (s64) ((u64) a1 << 48);
    v0 = (s64) ((u64) v1 << 48);
    a4 = a4 >> 48;
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v0 - (u32) a4);
    a1 = (s64) ((u64) v0 << 48);
    a1 = a1 >> 48;
    v0 = a1 & 0x1;
    if (v0 == 0) goto L_0025AA38;
    v1 = 1;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + -12366)) = (u8) v1; goto L_0025AA40;
L_0025AA38:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + -12366)) = (u8) 0;
L_0025AA40:;
    a3 = (s64) ((u64) a2 << 48);
    v0 = (s64) ((u64) a0 << 48);
    a3 = a3 >> 48;
    v0 = v0 >> 48;
    v0 = (s32) ((u32) v0 - (u32) a3);
    a0 = (s64) ((u64) v0 << 48);
    a0 = a0 >> 48;
    v0 = a0 & 0x1;
    if (v0 == 0) goto L_0025AA78;
    v1 = 1;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + -12365)) = (u8) v1; goto L_0025AA80;
L_0025AA78:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + -12365)) = (u8) 0;
L_0025AA80:;
    v0 = (s32) a1 >> 1;
    a2 = (s64) ((u64) v0 << 48);
    a2 = a2 >> 48;
    if (a2 == 0) goto L_0025AAEC;
    v0 = (s32) a0 >> 1;
    a1 = (s64) ((u64) v0 << 48);
    a1 = a1 >> 48;
    if (a1 == 0) goto L_0025AAEC;
    v1 = (s64) ((u64) a2 << 48);
    v0 = (s32) 0x590000U;
    v1 = v1 >> 48;
    a0 = (s32) ((u32) a4 + (u32) v1);
    v1 = (s64) ((u64) a1 << 48);
    (*(volatile u16 *) (u32) (v0 + -12384)) = (u16) a0;
    v1 = v1 >> 48;
    v0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a3 + (u32) v1);
    (*(volatile u16 *) (u32) (v0 + -12382)) = (u16) a0;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v1 + -12380)) = (u16) a2;
    (*(volatile u16 *) (u32) (v0 + -12378)) = (u16) a1; func_0025AB00(a0, a1, a2, a3);
    goto L_0025AAF8;
L_0025AAEC:;
    func_0025C360();
L_0025AAF8:;
    return;
}
