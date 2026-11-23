/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001F08B0(s32);
s32 func_00264280(s32, s32);
s32 func_00264300(s32, s32);
s32 func_002644E0(void);
s32 func_002E92F0(void);
void func_0063A660(s32);
s32 func_0063A9F0(s32);
s32 func_0063E160(s32, s32);
void func_0063EF00(s32, s32, s32, s32);
void func_0064FE30(void);
void func_00651600(s32, s32, s32, s32, s32, s32, s32, s32);
void memcpy(s32, s32, s32);

void func_00651480(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;

    v0 = (s32) 0x660000U;
    s4 = a0;
    a0 = (*(volatile s32 *) (u32) (v0 + -10088)); v0 = func_0063A9F0(a0);
    s1 = v0;
    at = (u64) s1 < (u64) (s64) 13;
    if (at == 0) { a0 = s4 & 0xff; goto L_00651574; }
    a0 = (s32) 0x660000U;
    v1 = (s32) ((u32) s1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffbbc0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x6514dcU) goto L_006514DC; if (t_ == 0x6514ecU) goto L_006514EC; if (t_ == 0x651540U) goto L_00651540; if (t_ == 0x651550U) goto L_00651550; if (t_ == 0x651568U) goto L_00651568; if (t_ == 0x651570U) goto L_00651570; }
L_006514DC:;
    func_00651600(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_00651570;
L_006514EC:;
    v0 = (s32) 0x660000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -4240)); v0 = func_002644E0();
    s3 = v0;
    s2 = 0;
    v0 = 7;
    (*(volatile u8 *) (u32) (s0 + 12)) = (u8) v0;
L_00651508:;
    a1 = s2 & 0xff;
    a0 = s3;
    s5 = (s32) ((u32) s0 + (u32) s2); v0 = func_00264300(a0, a1);
    (*(volatile u8 *) (u32) (s5 + 44)) = (u8) v0;
    a1 = s2 & 0xff;
    a0 = s3; v0 = func_00264280(a0, a1);
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 5;
    { s32 c_ = v1 != 0; (*(volatile u8 *) (u32) (s5 + 52)) = (u8) v0; if (c_) goto L_00651508; }
    goto L_00651570;
L_00651540:;
    func_0064FE30();
    goto L_00651570;
L_00651550:;
    v0 = func_002E92F0();
    a0 = v0; func_0063A660(a0);
    goto L_00651570;
L_00651568:;
    func_0063EF00(a0, a1, a2, a3);
L_00651570:;
    a0 = s4 & 0xff;
L_00651574:;
    v1 = a0 < 36;
    if (v1 != 0) { a1 = 0; goto L_00651588; }
    a0 = 0; goto L_00651594;
L_00651588:;
    v0 = func_0063E160(a0, a1);
    a0 = v0;
L_00651594:;
    v1 = (s32) 0x660000U;
    { s32 c_ = a0 == 0; s0 = (*(volatile s32 *) (u32) (v1 + -4240)); if (c_) goto L_006515D8; }
    if (s0 == 0) { ; goto L_006515DC; }
    v1 = (*(volatile u8 *) (u32) (a0 + 12));
    v0 = s1 & 0xff;
    if (v1 != v0) { v0 = (s32) 0x670000U; goto L_006515C0; }
    v0 = (s32) ((u32) a0 + 0x12b8U); goto L_006515C8;
L_006515C0:;
    a0 = v0 | 0x29; v0 = func_001F08B0(a0);
L_006515C8:;
    a0 = (s32) ((u32) s0 + 0x12b8U);
    a1 = v0;
    a2 = 46; memcpy(a0, a1, a2);
L_006515D8:;
L_006515DC:;
    return;
}
