/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(s32);
s32 func_00152130(s32, s32, s32, s32, s32);
void func_0017E120(s32);
void func_001AFD20(void);
void func_009B45E0(s32);
void func_009B4660(s32);
s32 func_009B4670(void);
void func_009B5D20(s32, s32, f32, f32, f32);

void func_00BD13C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, f32 fa12, f32 fa13, f32 fa14) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };

    v0 = func_009B4670();
    v1 = v0 & 0xff;
    at = (u64) v1 < (u64) (s64) 7;
    if (at == 0) goto L_00BD14E0;
    a0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x23e0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0xbd13fcU) goto L_00BD13FC; if (t_ == 0xbd1428U) goto L_00BD1428; if (t_ == 0xbd1454U) goto L_00BD1454; if (t_ == 0xbd1464U) goto L_00BD1464; if (t_ == 0xbd147cU) goto L_00BD147C; if (t_ == 0xbd148cU) goto L_00BD148C; if (t_ == 0xbd14a8U) goto L_00BD14A8; }
L_00BD13FC:;
    a0 = 1;
    a1 = 16; v0 = func_00152130(a0, a1, a2, a3, a4);
    if (v0 == 0) goto L_00BD14E0;
    a0 = 0; func_0017E120(a0);
    a0 = 2; func_009B4660(a0);
    goto L_00BD14A8;
L_00BD1428:;
    a0 = 0; func_009B45E0(a0);
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7140));
    a0 = (s32) ((u32) v1 << 3);
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 1; if (c_) goto L_00BD144C; }
    v1 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) v1 >> 1;
L_00BD144C:;
    (*(volatile u8 *) (u32) (gp + -19488)) = (u8) v1; goto L_00BD14A8;
L_00BD1454:;
    a0 = 4; func_009B4660(a0);
    goto L_00BD14A8;
L_00BD1464:;
    v0 = Pes6File_AllChannelsIdle(a0);
    if (v0 != 0) goto L_00BD14B0;
    goto L_00BD14E4;
L_00BD147C:;
    a0 = 1; func_0017E120(a0);
    a0 = 6; func_009B4660(a0);
L_00BD148C:;
    a0 = 0;
    a1 = 16; v0 = func_00152130(a0, a1, a2, a3, a4);
    if (v0 != 0) goto L_00BD14D0;
    goto L_00BD14E0;
L_00BD14A8:;
    goto L_00BD14E0;
L_00BD14B0:;
    func_001AFD20();
    func_009B5D20(a0, a1, f12.f, f13.f, f14.f);
    a0 = 5; func_009B4660(a0);
    goto L_00BD14A8;
L_00BD14D0:;
    a0 = 0; func_009B4660(a0);
    goto L_00BD14A8;
L_00BD14E0:;
L_00BD14E4:;
    return;
}
