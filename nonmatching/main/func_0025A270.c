/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SyncDCache(s32, s32);
void func_00259CB0(s32);
void func_0025EC20(s32);

void func_0025A270(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15, f32 fa16, f32 fa17, f32 fa18, f32 fa19) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    volatile union { f32 f; s32 i; } f16 = { fa16 };
    volatile union { f32 f; s32 i; } f17 = { fa17 };
    volatile union { f32 f; s32 i; } f18 = { fa18 };
    volatile union { f32 f; s32 i; } f19 = { fa19 };

    a0 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + 0xffffcf88U);
    func_00259CB0(a0);
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -12396));
    s1 = (*(volatile s32 *) (u32) (v1 + -12388));
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -12368));
    v1 = (s32) 0x3b0000U;
    v1 = (s32) ((u32) v1 + 0xffffaf90U);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64, s64, s64, s64, s64, f32, f32, f32, f32, f32, f32, f32, f32)) t_)(a0, a1, a2, a3, a4, a5, a6, a7, f12.f, f13.f, f14.f, f15.f, f16.f, f17.f, f18.f, f19.f); }
    v0 = (s32) 0x590000U;
    a0 = s0;
    v0 = (*(volatile s32 *) (u32) (v0 + -12400));
    a1 = (s32) ((u32) s0 + (u32) v0); SyncDCache(a0, a1);
    v0 = (s32) 0x590000U;
    a0 = (s32) 0x590000U;
    a1 = (*(volatile s16 *) (u32) (v0 + -12364));
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (s1 + 8)) = (u8) a1;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s16 *) (u32) (a0 + -12364));
    (*(volatile u8 *) (u32) (s1 + 9)) = (u8) a0;
    v1 = (*(volatile s16 *) (u32) (v1 + -12364));
    (*(volatile u8 *) (u32) (s1 + 10)) = (u8) v1;
    v0 = (*(volatile s16 *) (u32) (v0 + -12364));
    if (v0 <= 0) { v1 = 2; goto L_0025A3A0; }
    v0 = v0 < 255;
    if (v0 != 0) goto L_0025A320;
    v1 = -2;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + -12362)) = (u8) v1;
L_0025A320:;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a1 = (*(volatile s8 *) (u32) (v1 + -12362));
    a0 = (*(volatile s16 *) (u32) (v0 + -12364));
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v0 = (s32) 0x590000U;
    (*(volatile u16 *) (u32) (v1 + -12364)) = (u16) a0;
    a0 = (*(volatile s16 *) (u32) (v0 + -12364));
    at = a0 < 256;
    if (at != 0) goto L_0025A358;
    a0 = 255; goto L_0025A368;
L_0025A358:;
    if (a0 >= 0) goto L_0025A368;
    a0 = 0; goto L_0025A368;
L_0025A368:;
    v0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -12392));
    (*(volatile u16 *) (u32) (v1 + -12364)) = (u16) a0;
    a0 = s1;
    v0 = (s32) ((u32) v0 << 2);
    a1 = (s32) ((u32) s1 + (u32) v0); SyncDCache(a0, a1);
    a0 = 3; func_0025EC20(a0);
    a0 = 1;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + -12367)) = (u8) a0; goto L_0025A3AC;
L_0025A3A0:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + -12362)) = (u8) v1; goto L_0025A320;
L_0025A3AC:;
    return;
}
