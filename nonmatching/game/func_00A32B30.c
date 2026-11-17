/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

f32 func_001CD9E0(void);
s64 func_0098ED30(s64);
s64 func_009B30B0(s64, s64);
s64 func_009B33A0(s64, s64, s64);
s64 func_00A09950(s64);
s64 func_00A2A010(s64, s64, s64, s64, f32, f32, f32);
s64 func_00AB4460(s64);

s64 func_00A32B30(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13, f32 fa14) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    s64 hi = 0, lo = 0;

    v1 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + 0x1e4fU);
    v0 = 255;
    s4 = a0;
    a0 = (*(volatile u8 *) (u32) (a0 + 19));
    a0 = a0 ^ 0x1;
    a0 = (s32) ((u32) a0 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) v1);
    if (v1 == v0) { v1 = 1; goto L_00A32B84; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v1 = hi;
L_00A32B84:;
    v0 = (s32) ((u32) v1 << 3);
    a0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) a0 + 0xffffe5b0U);
    v1 = (*(volatile u8 *) (u32) (s4 + 22));
    a1 = (s32) ((u32) v0 << 6);
    v0 = 22;
    { s32 c_ = v1 != v0; s0 = (s32) ((u32) a0 + (u32) a1); if (c_) goto L_00A32BC0; }
    a0 = s4;
    a1 = s0;
    a2 = 72; v0 = func_00A2A010(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    s3 = v0; goto L_00A32BD4;
L_00A32BC0:;
    a0 = s4;
    a1 = s0;
    a2 = 80; v0 = func_00A2A010(a0, a1, a2, a3, f12.f, f13.f, f14.f);
    s3 = v0;
L_00A32BD4:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (gp + -32252)); goto L_00A32DE4; }
L_00A32BE4:;
    at = s3 < 256;
    if (at == 0) goto L_00A32BF4;
    s3 = 256;
L_00A32BF4:;
    a0 = s4; v0 = func_00A09950(a0);
    v1 = 1;
    if (v0 == v1) goto L_00A32E68;
L_00A32C08:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00A32C0C:;
    v0 = v0 & 0xff;
    if (v0 != 0) { s2 = (*(volatile s32 *) (u32) (s4 + 276)); goto L_00A32C6C; }
    v0 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) (v0 + 7964));
    v0 = (s32) 0x590000U;
    a2 = (*(volatile s32 *) (u32) (v0 + 7968));
    a0 = s4; v0 = func_009B33A0(a0, a1, a2);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00A32C44; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_00A32C5C;
L_00A32C44:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_00A32C5C:;
    f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    s2 = f0.i;
L_00A32C6C:;
    v0 = (*(volatile u8 *) (u32) (s4 + 74));
    at = (u64) v0 < (u64) (s64) 10;
    { s32 c_ = at == 0; s1 = 4096; if (c_) goto L_00A32D98; }
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffae50U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xa32c98U) goto L_00A32C98; if (t_ == 0xa32cacU) goto L_00A32CAC; if (t_ == 0xa32cd0U) goto L_00A32CD0; if (t_ == 0xa32d04U) goto L_00A32D04; if (t_ == 0xa32d38U) goto L_00A32D38; if (t_ == 0xa32d98U) goto L_00A32D98; }
L_00A32C98:;
    at = s3 < 512;
    if (at == 0) goto L_00A32DA8;
    s3 = 512; goto L_00A32DA8;
L_00A32CAC:;
    at = s3 < 640;
    if (at == 0) goto L_00A32CBC;
    s3 = 640;
L_00A32CBC:;
    at = s3 < s2;
    if (at == 0) goto L_00A32DA8;
    s3 = s2; goto L_00A32DA8;
L_00A32CD0:;
    at = s3 < 512;
    if (at == 0) goto L_00A32CE0;
    s3 = 512;
L_00A32CE0:;
    v1 = (*(volatile u8 *) (u32) (s4 + 22));
    v0 = 22;
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) s4); goto L_00A32E98; }
L_00A32CF0:;
    at = s1 < s3;
    if (at == 0) goto L_00A32DA8;
    s3 = s1; goto L_00A32DA8;
L_00A32D04:;
    at = s3 < 256;
    if (at == 0) goto L_00A32D14;
    s3 = 256;
L_00A32D14:;
    v1 = (*(volatile u8 *) (u32) (s4 + 22));
    v0 = 22;
    if (v1 == v0) { a0 = (*(volatile u8 *) (u32) s4); goto L_00A32EB8; }
L_00A32D24:;
    at = s1 < s3;
    if (at == 0) goto L_00A32DA8;
    s3 = s1; goto L_00A32DA8;
L_00A32D38:;
    v1 = 1;
    v0 = 22;
    (*(volatile u8 *) (u32) (s4 + 72)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) (s4 + 22));
    if (v1 != v0) goto L_00A32D54;
    s1 = s2;
L_00A32D54:;
    at = s1 < s3;
    if (at == 0) goto L_00A32D64;
    s3 = s1;
L_00A32D64:;
    at = s3 < 81;
    if (at != 0) goto L_00A32ED8;
    s3 = (s32) ((u32) s3 + 0xffffffb0U); goto L_00A32ED8;
L_00A32D78:;
    if (at == 0) goto L_00A32DA8;
    s3 = 384; goto L_00A32DA8;
L_00A32D88:;
    if (at == 0) goto L_00A32DA8;
    s3 = 256; goto L_00A32DA8;
L_00A32D98:;
    at = s3 < 3073;
    if (at != 0) goto L_00A32DA8;
    s3 = 3072;
L_00A32DA8:;
    v0 = (s32) ((u32) s2 + 0x100U);
    at = v0 < s3;
    if (at != 0) { s3 = v0; goto L_00A32DDC; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7756));
    if (v0 == 0) goto L_00A32DDC;
    v0 = (s32) ((u32) s2 + 0xfffffe00U);
    at = s3 < v0;
    if (at == 0) goto L_00A32DDC;
    s3 = v0;
L_00A32DDC:;
    v0 = s3; goto L_00A32F08;
L_00A32DE4:;
    f1.f = (*(volatile f32 *) (u32) (v0 + 5204));
    f0.f = (*(volatile f32 *) (u32) (v0 + 5212));
    f1.i = (s32) f1.f;
    f0.i = (s32) f0.f;
    a1 = f1.i;
    a2 = f0.i;
    a0 = s0; v0 = func_009B33A0(a0, a1, a2);
    if (v0 < 0) { v1 = (s32) ((u32) v0 >> 1); goto L_00A32E18; }
    f0.i = (s32) v0;
    f12.f = (f32) f0.i; goto L_00A32E30;
L_00A32E18:;
    v0 = v0 & 0x1;
    v1 = v1 | v0;
    f0.i = (s32) v1;
    f12.f = (f32) f0.i;
    f12.f = f12.f + f12.f;
L_00A32E30:;
    f0.f = func_001CD9E0();
    f0.i = (s32) f0.f;
    v0 = f0.i;
    at = v0 < 513;
    if (at != 0) goto L_00A32E54;
    v0 = (s32) ((u32) v0 + 0xfffffe00U);
L_00A32E54:;
    at = v0 < s3;
    if (at == 0) { s3 = 512; goto L_00A32BE4; }
    s3 = (s32) ((u32) s3 - (u32) v0); goto L_00A32BE4;
L_00A32E68:;
    v0 = func_00AB4460(a0);
    at = v0 < 2;
    if (at != 0) goto L_00A32C08;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = 1;
    v1 = (*(volatile u16 *) (u32) (v1 + 132));
    if (v1 != v0) goto L_00A32C08;
    v0 = 0; goto L_00A32C0C;
L_00A32E98:;
    s1 = 3072; v0 = func_0098ED30(a0);
    v0 = v0 & 0xff;
    v0 = v0 < 4;
    if (v0 != 0) goto L_00A32CF0;
    s1 = 1536; goto L_00A32CF0;
L_00A32EB8:;
    s1 = 2048; v0 = func_0098ED30(a0);
    v0 = v0 & 0xff;
    v0 = v0 < 4;
    if (v0 != 0) goto L_00A32D24;
    s1 = 1024; goto L_00A32D24;
L_00A32ED8:;
    v0 = (*(volatile u8 *) (u32) s4);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    a0 = (*(volatile u16 *) (u32) (v0 + 296));
    a1 = (*(volatile u16 *) (u32) (s0 + 288)); v0 = func_009B30B0(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 17;
    if (at != 0) { at = s3 < 256; goto L_00A32D88; }
    at = s3 < 384; goto L_00A32D78;
L_00A32F08:;
    return v0;
}
