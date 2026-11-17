/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0020B360(s32);
void func_009B45B0(s32);
s32 func_009B4650(void);
s32 func_009B4670(void);
void func_009B5D20(s32, s32, f32, f32, f32);
void func_009B6630(s32, f32);
s32 func_00A1C6B0(void);
void func_00B265E0(void);
void func_00BD13C0(s32, s32, s32, s32, s32);

void func_00BD1220(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13, f32 fa14) {
    s32 at = 0, v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };

    v0 = func_009B4670();
    v0 = v0 & 0xff;
    if (v0 != 0) goto L_00BD1394;
    v0 = func_009B4650();
    v0 = v0 & 0xff;
    at = v0 < 12;
    if (at == 0) goto L_00BD12A4;
    v0 = func_009B4650();
    v1 = v0 & 0xff;
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffe820U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) goto L_00BD12A4;
    v0 = func_009B4650();
    v1 = v0 & 0xff;
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffe820U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
L_00BD12A4:;
    func_00B265E0();
    v0 = (s32) 0x590000U;
    v1 = 1;
    v0 = (*(volatile u8 *) (u32) (v0 + 7115));
    if (v0 != v1) goto L_00BD12C8;
    a0 = 0; func_0020B360(a0);
L_00BD12C8:;
    v0 = func_009B4650();
    v0 = v0 & 0xff;
    at = v0 < 12;
    if (at == 0) goto L_00BD1340;
    v0 = func_009B4650();
    v1 = v0 & 0xff;
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffe850U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    if (v0 == 0) goto L_00BD1340;
    v0 = func_009B4650();
    v1 = v0 & 0xff;
    v0 = (s32) 0xca0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffe850U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; v0 = ((s64 (*)(s64, s64, s64, s64)) t_)(a0, a1, a2, a3); }
    if (v0 == 0) goto L_00BD1384;
    goto L_00BD13B8;
L_00BD1340:;
    v0 = func_00A1C6B0();
    if (v0 != 0) goto L_00BD13A4;
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile u16 *) (u32) (v1 + -22016));
    v0 = (*(volatile u16 *) (u32) (v0 + -22014));
    if (v1 == v0) goto L_00BD13A4;
    v0 = (s32) 0x3e000000U;
    f12.i = (s32) v0;
    a0 = 0; func_009B6630(a0, f12.f);
    v1 = 0;
L_00BD137C:;
    if (v1 != 0) goto L_00BD13B4;
L_00BD1384:;
    func_009B5D20(a0, a1, f12.f, f13.f, f14.f);
    goto L_00BD13B4;
L_00BD1394:;
    func_00BD13C0(a0, a1, a2, a3, a4);
    goto L_00BD13B4;
L_00BD13A4:;
    a0 = 6; func_009B45B0(a0);
    v1 = 0; goto L_00BD137C;
L_00BD13B4:;
L_00BD13B8:;
    return;
}
