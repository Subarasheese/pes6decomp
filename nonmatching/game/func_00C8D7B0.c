/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32, s32, s32, s32, s32, s32, s32);
s32 func_002DCA30(void);
s32 func_0081D2C0(s32, s32, s32, s32);
void func_0085EF40(s32, s32, s32, s32);
void func_0085F190(s32, s32, s32, s32);
void func_00C8DA00(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_00C8DBD0(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32);
void func_00C8E1C0(s32, s32, s32, s32);

s32 func_00C8D7B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    v0 = (*(volatile u8 *) (u32) (a0 + 5));
    v0 = v0 < 8;
    { s32 c_ = v0 != 0; s0 = a0; if (c_) goto L_00C8D7E4; }
    a1 = 3;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) a1;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0; func_00C8E1C0(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (s0 + 3)); goto L_00C8D830;
L_00C8D7E4:;
    v0 = func_002DCA30();
    if (v0 == 0) goto L_00C8D82C;
    v1 = (*(volatile u8 *) (u32) (s0 + 3));
    v0 = 3;
    if (v1 == v0) goto L_00C8D82C;
    v0 = func_0081D2C0(a0, a1, a2, a3);
    if (v0 > 0) goto L_00C8D82C;
    func_0085F190(a0, a1, a2, a3);
    v1 = 3;
    v0 = 1;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) v1; goto L_00C8D9EC;
L_00C8D82C:;
    v1 = (*(volatile u8 *) (u32) (s0 + 3));
L_00C8D830:;
    v0 = 3;
    if (v1 == v0) goto L_00C8D940;
    v0 = 2;
    if (v1 == v0) { v1 = (*(volatile u8 *) (u32) (s0 + 5)); goto L_00C8D884; }
    v0 = 1;
    if (v1 == v0) { a0 = s0; goto L_00C8D874; }
    if (v1 == 0) { a0 = s0; goto L_00C8D864; }
    v0 = (*(volatile u8 *) (u32) (s0 + 3)); goto L_00C8D9E4;
L_00C8D864:;
    func_00C8DBD0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    goto L_00C8D9E0;
L_00C8D874:;
    func_00C8DA00(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f);
    goto L_00C8D9E0;
L_00C8D884:;
    v0 = v1 < 8;
    if (v0 != 0) goto L_00C8D898;
    v1 = 0; goto L_00C8D8AC;
L_00C8D898:;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffd550U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (*(volatile s32 *) (u32) v0);
L_00C8D8AC:;
    v0 = v1 & 0x20;
    if (v0 == 0) { v0 = v1 & 0x40; goto L_00C8D910; }
    v0 = func_002DCA30();
    if (v0 == 0) { v0 = (s32) 0x84020000U; goto L_00C8D8EC; }
    v0 = (s32) 0x8b0000U;
    v1 = (*(volatile u8 *) (u32) s0);
    v0 = (*(volatile s8 *) (u32) (v0 + 5198));
    v0 = v0 & 0x1;
    if (v1 != v0) goto L_00C8D8E8;
    func_0085F190(a0, a1, a2, a3);
L_00C8D8E8:;
    v0 = (s32) 0x84020000U;
L_00C8D8EC:;
    a0 = v0 | 0x8400; SD_call(a0, a1, a2, a3, a4, a5, a6);
    a1 = 3;
    a0 = s0;
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) a1;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0; func_00C8E1C0(a0, a1, a2, a3);
    goto L_00C8D9E0;
L_00C8D910:;
    if (v0 == 0) goto L_00C8D9E0;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0, a1, a2, a3, a4, a5, a6);
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) 0;
    a0 = s0;
    a1 = 0;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0; func_00C8E1C0(a0, a1, a2, a3);
    goto L_00C8D9E0;
L_00C8D940:;
    v0 = func_002DCA30();
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) (s0 + 5)); goto L_00C8D964; }
    v0 = func_0081D2C0(a0, a1, a2, a3);
    if (v0 <= 0) goto L_00C8D9E0;
    v1 = (*(volatile u8 *) (u32) (s0 + 5));
L_00C8D964:;
    v0 = v1 < 8;
    if (v0 != 0) goto L_00C8D978;
    v0 = 0; goto L_00C8D98C;
L_00C8D978:;
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffd550U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
L_00C8D98C:;
    v0 = v0 & 0x40;
    if (v0 == 0) goto L_00C8D9E0;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0, a1, a2, a3, a4, a5, a6);
    (*(volatile u8 *) (u32) (s0 + 3)) = (u8) 0;
    a0 = s0;
    a1 = 0;
    (*(volatile u8 *) (u32) (s0 + 4)) = (u8) 0; func_00C8E1C0(a0, a1, a2, a3);
    v0 = func_002DCA30();
    if (v0 == 0) goto L_00C8D9E0;
    v0 = func_002DCA30();
    if (v0 == 0) goto L_00C8D9E0;
    func_0085EF40(a0, a1, a2, a3);
L_00C8D9E0:;
    v0 = (*(volatile u8 *) (u32) (s0 + 3));
L_00C8D9E4:;
    v0 = v0 ^ 0x3;
    v0 = (u64) v0 < (u64) (s64) 1;
L_00C8D9EC:;
    return v0;
}
