/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002A9530(s32);
s32 func_002A96B0(s32);
s32 func_002AD880(s32, s32, s32, s32, f32, f32, f32, f32);
s32 func_009B3070(s32, s32);
s32 func_009B3480(s32, s32, s32, s32, f32, f32);
s32 func_00BBCFF0(s32, s32, s32, s32);
void func_00BBD840(void);

s32 func_00BBC8A0(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s32 hi = 0, lo = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    v0 = 255;
    fp = a1;
    s5 = a0;
    s4 = a2;
    if (s5 == v0) goto L_00BBC8F4;
    v0 = 23;
    if ((u32) v0 != 0) { s64 q_ = (s32) ((u32) s5 / (u32) v0); hi = (s32) ((u32) s5 % (u32) v0); lo = q_; }
    a0 = hi; goto L_00BBC8F8;
L_00BBC8F4:;
    a0 = 1;
L_00BBC8F8:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    s3 = 43;
    s0 = (s32) ((u32) v0 + (u32) v1);
    s6 = 0;
    v0 = (s32) 0x5e0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 9393));
    { s32 c_ = s5 != v0; s1 = 0; if (c_) goto L_00BBC958; }
    a0 = (s32) ((u32) sp + 0xa0U); func_002A9530(a0);
    f12.f = (*(volatile f32 *) (u32) (sp + 160));
    f13.f = (*(volatile f32 *) (u32) (sp + 168));
    a0 = s0; v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    a0 = (*(volatile u16 *) (u32) (s0 + 38));
    a1 = v0; v0 = func_009B3070(a0, a1);
    s7 = v0 & 0xffff;
    s1 = 8192;
    s6 = 1;
L_00BBC958:;
    func_00BBD840();
L_00BBC960:;
    s2 = 0;
    s0 = fp;
L_00BBC968:;
    v0 = (s32) 0x5e0000U;
    a1 = (*(volatile s32 *) (u32) s0);
    v0 = (*(volatile u8 *) (u32) (v0 + 9395));
    if (a1 != v0) goto L_00BBC9F0;
L_00BBC980:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 43;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00BBC968; }
L_00BBC990:;
    v0 = 43;
    if (s3 != v0) goto L_00BBCA94;
    if (s1 <= 0) goto L_00BBCA70;
    s1 = (s32) ((u32) s1 + 0xfffff800U); goto L_00BBCA70;
L_00BBC9B0:;
    v0 = -769;
    s4 = s4 & v0; goto L_00BBC960;
L_00BBC9C0:;
    v0 = s4 & 0xf0;
    if (v0 == 0) goto L_00BBC9D8;
    v0 = -241;
    s4 = s4 & v0; goto L_00BBC960;
L_00BBC9D8:;
    v0 = s4 & 0xf;
    if (v0 == 0) goto L_00BBCA88;
    v0 = -16;
    s4 = s4 & v0; goto L_00BBC960;
L_00BBC9F0:;
    a0 = s5 & 0xff;
    a2 = 0; v0 = func_00BBCFF0(a0, a1, a2, a3);
    if (v0 == 0) goto L_00BBC980;
    a0 = (*(volatile s32 *) (u32) s0); v0 = func_002A96B0(a0);
    v0 = (*(volatile s32 *) (u32) (v0 + 12));
    v0 = s4 & v0;
    if (v0 != 0) goto L_00BBC980;
    if (s6 == 0) goto L_00BBCA60;
    a1 = (*(volatile s32 *) (u32) s0);
    a0 = s5 & 0xff; v0 = func_002AD880(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    a1 = v0 & 0xffff;
    a0 = s7; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = s1 < v0;
    if (at == 0) goto L_00BBC980;
    v0 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) fp + (u32) v0);
    s3 = (*(volatile s32 *) (u32) v0); goto L_00BBC990;
L_00BBCA60:;
    v0 = (s32) ((u32) s2 << 2);
    v0 = (s32) ((u32) fp + (u32) v0);
    s3 = (*(volatile s32 *) (u32) v0); goto L_00BBC990;
L_00BBCA70:;
    v0 = s4 & 0x300;
    if (v0 == 0) goto L_00BBC9C0;
    goto L_00BBC9B0;
L_00BBCA88:;
    if (s1 != 0) goto L_00BBC960;
    s3 = (*(volatile s32 *) (u32) fp);
L_00BBCA94:;
    v0 = s3;
    return v0;
}
