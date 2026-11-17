/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6EnterOverlay_Update(s64, s64, s64, s64);
s64 Pes6File_AllChannelsIdle(s64);
s64 Pes6MatchContext_SetByteC08(s64);
s64 Pes6Module_GetRegion(s64);
s64 Pes6Module_Load(s64);
s64 Pes6Scene_Set(s64, s64);
s64 func_001BD0B0(void);
s64 func_001F87E0(s64, s64, s64, s64, s64);
s64 func_001FC780(s64, s64);
s64 func_001FC7A0(s64);
s64 func_00204D90(s64, s64, s64, s64, s64);
s64 func_00205200(s64, s64, s64, s64, f32, f32, f32, f32);
s64 func_002727B0(void);

s64 Pes6Scene_Enter(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };
    union { f32 f; s32 i; } f14 = { fa14 };
    union { f32 f; s32 i; } f15 = { fa15 };

    v1 = (*(volatile u8 *) (u32) (gp + -22868));
    if (v1 == 0) goto L_00237EAC;
    v0 = func_00204D90(a0, a1, a2, a3, a4);
L_00237EAC:;
    v1 = (s32) 0x510000U;
    v1 = (*(volatile s32 *) (u32) (v1 + 4056));
    at = (u64) v1 < (u64) (s64) 10;
    if (at == 0) { ; goto L_002380E0; }
    a0 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0xffff8840U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x237edcU) goto L_00237EDC; if (t_ == 0x237ef0U) goto L_00237EF0; if (t_ == 0x237f50U) goto L_00237F50; if (t_ == 0x237f84U) goto L_00237F84; if (t_ == 0x237fa0U) goto L_00237FA0; if (t_ == 0x23800cU) goto L_0023800C; if (t_ == 0x23806cU) goto L_0023806C; if (t_ == 0x2380a8U) goto L_002380A8; if (t_ == 0x2380dcU) goto L_002380DC; }
L_00237EDC:;
    v0 = 12;
    (*(volatile u8 *) (u32) (gp + -22864)) = (u8) 0;
    (*(volatile u32 *) (u32) (gp + -22856)) = (u32) v0;
    v0 = 2;
    (*(volatile u8 *) (u32) (gp + -22860)) = (u8) v0;
L_00237EF0:;
    a0 = 4; v0 = Pes6MatchContext_SetByteC08(a0);
    v0 = (s32) 0x590000U;
    v1 = 5;
    a0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (a0 == v1) { a0 = 1; goto L_00237F1C; }
    v0 = 7;
    if (a0 != v0) goto L_00237F2C;
    a0 = 1;
L_00237F1C:;
    a1 = 2; v0 = Pes6Scene_Set(a0, a1);
    goto L_002380DC;
L_00237F2C:;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7982)) = (u8) 0;
    a0 = 1;
    (*(volatile u8 *) (u32) (v0 + 7981)) = (u8) 0;
    a1 = 3; v0 = Pes6Scene_Set(a0, a1);
    goto L_002380DC;
L_00237F50:;
    a0 = 7; v0 = Pes6Module_GetRegion(a0);
    a0 = v0; v0 = func_001FC7A0(a0);
    if (v0 != 0) { a0 = 1; goto L_00237F74; }
    a0 = 7; v0 = Pes6Module_Load(a0);
    a0 = 1;
L_00237F74:;
    a1 = 4; v0 = Pes6Scene_Set(a0, a1);
    goto L_002380DC;
L_00237F84:;
    v0 = Pes6File_AllChannelsIdle(a0);
    if (v0 == 0) goto L_002380DC;
    a0 = 1;
    a1 = 5; v0 = Pes6Scene_Set(a0, a1);
L_00237FA0:;
    v0 = Pes6EnterOverlay_Update(a0, a1, a2, a3);
    v1 = (s32) 0x590000U;
    a0 = 6;
    v1 = (*(volatile u8 *) (u32) (v1 + 7981));
    if (v1 != a0) goto L_002380DC;
    a0 = 7; v0 = Pes6Module_GetRegion(a0);
    a0 = v0; v0 = func_001FC780(a0, a1);
    v0 = (*(volatile u8 *) (u32) (gp + -22868));
    if (v0 != 0) goto L_00237FE8;
    v0 = func_002727B0();
    a0 = v0; v0 = func_00205200(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
L_00237FE8:;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 7982)) = (u8) 0;
    a0 = 1;
    (*(volatile u8 *) (u32) (v0 + 7981)) = (u8) 0;
    a1 = 6; v0 = Pes6Scene_Set(a0, a1);
    goto L_002380DC;
L_0023800C:;
    v1 = (*(volatile u8 *) (u32) (gp + -22868));
    if (v1 != 0) { a0 = 1; goto L_00238020; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00238058;
L_00238020:;
    a1 = 32; v0 = func_001F87E0(a0, a1, a2, a3, a4);
    if (v0 != 0) goto L_00238038;
    v1 = 0; goto L_00238058;
L_00238038:;
    v0 = func_002727B0();
    a0 = v0; v0 = func_00205200(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v0 = func_001BD0B0();
    (*(volatile u8 *) (u32) (gp + -22868)) = (u8) 0;
    v1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00238058:;
    if (v1 == 0) goto L_002380DC;
    a0 = 1;
    a1 = 8; v0 = Pes6Scene_Set(a0, a1);
L_0023806C:;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
    v1 = (*(volatile s32 *) (u32) v0);
    if (v1 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00238088; }
    v0 = 1;
    (*(volatile u8 *) (u32) v1) = (u8) v0;
    v0 = (*(volatile s32 *) (u32) (gp + -32252));
L_00238088:;
    v1 = (*(volatile s32 *) (u32) (v0 + 8));
    if (v1 == 0) { a0 = 1; goto L_002380A0; }
    v0 = 1;
    (*(volatile u8 *) (u32) v1) = (u8) v0;
    a0 = 1;
L_002380A0:;
    a1 = 9; v0 = Pes6Scene_Set(a0, a1);
L_002380A8:;
    v0 = (s32) 0x590000U;
    a0 = 1;
    (*(volatile u32 *) (u32) (v0 + 7700)) = (u32) 0;
    a1 = 0; v0 = Pes6Scene_Set(a0, a1);
    a0 = 2;
    a1 = 0; v0 = Pes6Scene_Set(a0, a1);
    a0 = 0; v0 = Pes6MatchContext_SetByteC08(a0);
    a0 = 0;
    a1 = 8; v0 = Pes6Scene_Set(a0, a1);
L_002380DC:;
L_002380E0:;
    return v0;
}
