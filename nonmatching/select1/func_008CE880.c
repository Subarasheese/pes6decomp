/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Settings_Set_B01_b0_w3(s32);
void Pes6Settings_Set_B04_b5_w1(s32);
void Pes6Settings_Set_B05_b3_w3(s32);
void SD_call(s32);
void func_00226AC0(s32);
void func_002F3A20(s32);
s32 func_008CC830(void);
void func_008CD080(s32, s32, s32, s32);
void func_008CDAC0(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_008CE880(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v0 = func_008CC830();
    s0 = v0;
    if (s0 != 0) { v0 = (*(volatile u8 *) (u32) (s0 + 524)); goto L_008CE8A4; }
    v0 = 0; goto L_008CE9EC;
L_008CE8A4:;
    a0 = 1;
    if (v0 != a0) { v0 = (*(volatile s32 *) (u32) (s0 + 168)); goto L_008CE8D4; }
    a0 = (*(volatile s32 *) (u32) (s0 + 228)); func_002F3A20(a0);
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    (*(volatile u8 *) (u32) (s0 + 524)) = (u8) 0; func_008CD080(a0, a1, a2, a3);
    v0 = 0; goto L_008CE9EC;
L_008CE8D4:;
    at = (u64) v0 < (u64) (s64) 7;
    if (at == 0) goto L_008CE9D4;
    v1 = (s32) 0x8e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffab30U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x8ce8fcU) goto L_008CE8FC; if (t_ == 0x8ce918U) goto L_008CE918; if (t_ == 0x8ce92cU) goto L_008CE92C; if (t_ == 0x8ce948U) goto L_008CE948; if (t_ == 0x8ce954U) goto L_008CE954; if (t_ == 0x8ce984U) goto L_008CE984; if (t_ == 0x8ce998U) goto L_008CE998; }
L_008CE8FC:;
    a0 = (*(volatile s32 *) (u32) (s0 + 172)); Pes6Settings_Set_B01_b0_w3(a0);
    v0 = 1;
    (*(volatile u32 *) (u32) (s0 + 168)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (s0 + 172));
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) v0; goto L_008CE9D4;
L_008CE918:;
    a0 = (*(volatile s32 *) (u32) (s0 + 176)); Pes6Settings_Set_B05_b3_w3(a0);
    v0 = 2;
    (*(volatile u32 *) (u32) (s0 + 168)) = (u32) v0; goto L_008CE9D4;
L_008CE92C:;
    v0 = (*(volatile s32 *) (u32) (s0 + 180));
    if (v0 != 0) { v0 = 3; goto L_008CE940; }
    (*(volatile u32 *) (u32) (s0 + 184)) = (u32) 0;
    v0 = 3;
L_008CE940:;
    (*(volatile u32 *) (u32) (s0 + 168)) = (u32) v0; goto L_008CE9D4;
L_008CE948:;
    v0 = 4;
    (*(volatile u32 *) (u32) (s0 + 168)) = (u32) v0; goto L_008CE9D4;
L_008CE954:;
    v0 = (*(volatile s32 *) (u32) (s0 + 188));
    if (v0 != 0) { a0 = 0; goto L_008CE970; }
    Pes6Settings_Set_B04_b5_w1(a0);
    v0 = 5; goto L_008CE97C;
L_008CE970:;
    Pes6Settings_Set_B04_b5_w1(a0);
    v0 = 5;
L_008CE97C:;
    (*(volatile u32 *) (u32) (s0 + 168)) = (u32) v0; goto L_008CE9D4;
L_008CE984:;
    a0 = (*(volatile s32 *) (u32) (s0 + 192)); func_00226AC0(a0);
    v0 = 6;
    (*(volatile u32 *) (u32) (s0 + 168)) = (u32) v0; goto L_008CE9D4;
L_008CE998:;
    v0 = (*(volatile s32 *) (u32) (s0 + 196));
    if (v0 != 0) { (*(volatile u32 *) (u32) (s0 + 168)) = (u32) 0; goto L_008CE9B4; }
    v0 = 2;
    (*(volatile u32 *) (u32) (s0 + 224)) = (u32) v0;
    (*(volatile u8 *) (u32) (s0 + 164)) = (u8) a0; goto L_008CE9D4;
L_008CE9B4:;
    v0 = 2;
    (*(volatile u32 *) (u32) (s0 + 172)) = (u32) v0;
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) v0;
    (*(volatile u32 *) (u32) (s0 + 180)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 184)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 192)) = (u32) a0;
    (*(volatile u32 *) (u32) (s0 + 188)) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 196)) = (u32) 0;
L_008CE9D4:;
    func_008CDAC0(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 0;
L_008CE9EC:;
    return v0;
}
