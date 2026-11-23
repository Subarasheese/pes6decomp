/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 Pes6Settings_Get_B01_b7_w1(void);
void SD_call(s32);
s32 func_0023D820(void);
s32 func_00262FC0(void);
s32 func_00C99E60(s32, s32, s32, s32);

s32 func_0092CAC0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;

    a0 = 1;
    a1 = 8;
    s0 = 0; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) 0x84020000U;
    (*(volatile u32 *) (u32) (v1 + -5680)) = (u32) v0;
    a0 = a0 | 0x8400; SD_call(a0);
    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -5776));
    at = (u64) v0 < (u64) (s64) 10;
    if (at == 0) { v0 = (s32) 0xc0000U; goto L_0092CB24; }
    v1 = (s32) 0x930000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffecb0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x92cb20U) goto L_0092CB20; if (t_ == 0x92cb2cU) goto L_0092CB2C; if (t_ == 0x92cb50U) goto L_0092CB50; if (t_ == 0x92cb84U) goto L_0092CB84; if (t_ == 0x92cbbcU) goto L_0092CBBC; if (t_ == 0x92cbc8U) goto L_0092CBC8; }
L_0092CB20:;
    v0 = (s32) 0xc0000U;
L_0092CB24:;
    a0 = v0 | 0x39; goto L_0092CBE8;
L_0092CB2C:;
    v0 = (*(volatile s32 *) (u32) (gp + -30036));
    v0 = (*(volatile s32 *) (u32) (v0 + 708));
    if (v0 == 0) { v0 = (s32) 0xc0000U; goto L_0092CB48; }
    v0 = (s32) 0xc0000U;
    a0 = v0 | 0x5c; goto L_0092CBE8;
L_0092CB48:;
    a0 = v0 | 0x39; goto L_0092CBE8;
L_0092CB50:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7607));
    if (v0 != 0) { v0 = (s32) 0xc0000U; goto L_0092CB74; }
    v0 = func_0023D820();
    if (v0 == 0) { a0 = 0; goto L_0092CBE8; }
    v0 = (s32) 0xc0000U;
L_0092CB74:;
    s0 = (s32) 0xcb0000U;
    s0 = (s32) ((u32) s0 + 0xffff9640U);
    a0 = v0 | 0x39; goto L_0092CBE8;
L_0092CB84:;
    v0 = func_00262FC0();
    if (v0 != 0) { v0 = (s32) 0xc0000U; goto L_0092CBB4; }
    v0 = (s32) 0x3b0000U;
    s0 = (s32) 0x930000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    v1 = 1;
    s0 = (s32) ((u32) s0 + 0xffffe0e8U);
    a0 = 0;
    (*(volatile u16 *) (u32) v0) = (u16) v1; goto L_0092CBE8;
L_0092CBB4:;
    a0 = v0 | 0x39; goto L_0092CBE8;
L_0092CBBC:;
    v0 = (s32) 0xd0000U;
    a0 = v0 | 0x12; goto L_0092CBE8;
L_0092CBC8:;
    v0 = Pes6Settings_Get_B01_b7_w1();
    if (v0 == 0) { v0 = (s32) 0xc0000U; goto L_0092CBE4; }
    v0 = (s32) 0xc0000U;
    a0 = v0 | 0x38; goto L_0092CBE8;
L_0092CBE4:;
    a0 = v0 | 0x39;
L_0092CBE8:;
    a2 = (s32) 0x930000U;
    a3 = (s32) 0x930000U;
    a4 = (s32) 0x930000U;
    a1 = s0;
    a2 = (s32) ((u32) a2 + 0xffffc780U);
    a3 = (s32) ((u32) a3 + 0xffffc700U);
    a4 = (s32) ((u32) a4 + 0xffffc830U); v0 = func_00C99E60(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    (*(volatile u32 *) (u32) (v1 + 4)) = (u32) v0;
    v0 = 0;
    return v0;
}
