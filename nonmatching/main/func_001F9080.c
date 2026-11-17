/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDAA0(void);
s32 func_0027C230(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_002C7B30(s32);
s32 func_002CD000(s32, s32, s32, s32, s32);
s32 func_009B4450(s32, s32, s32, s32);
s32 func_009B6A60(s32, s32, s32, s32);
s32 func_00BBB970(s32, s32, s32, s32);

s32 func_001F9080(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v0 = func_001CDAA0();
    a0 = (s32) 0x3c0000U;
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0x54c0U);
    v0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (*(volatile u8 *) (u32) v0);
    a0 = 0;
    (*(volatile u8 *) (u32) (v1 + 7140)) = (u8) v0; v0 = func_009B4450(a0, a1, a2, a3);
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7640)) = (u8) 0; v0 = func_00BBB970(a0, a1, a2, a3);
    a0 = 0; v0 = func_002C7B30(a0);
    a0 = 1; v0 = func_002C7B30(a0);
    v0 = (s32) 0x10000U;
    a1 = 4;
    a0 = v0 | 0x41; v0 = func_0027C230(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x590000U;
    v1 = 1;
    (*(volatile u8 *) (u32) (v0 + 7680)) = (u8) 0;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7681)) = (u8) v1;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 7110));
    v0 = (s32) 0x590000U;
    a1 = (*(volatile u8 *) (u32) (v0 + 7111));
    v0 = (s32) 0x590000U;
    a2 = (*(volatile u8 *) (u32) (v0 + 7112));
    v0 = (s32) 0x590000U;
    a3 = (*(volatile u8 *) (u32) (v0 + 7113));
    v0 = (s32) 0x590000U;
    a4 = (*(volatile u8 *) (u32) (v0 + 7661)); v0 = func_002CD000(a0, a1, a2, a3, a4);
    a0 = 0; v0 = func_009B6A60(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (gp + -19484)) = (u8) v0;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 9084)) = (u8) 0;
    v0 = 1;
    (*(volatile u8 *) (u32) (v1 + 9085)) = (u8) v0;
    return v0;
}
