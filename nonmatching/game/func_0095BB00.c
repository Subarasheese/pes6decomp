/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00952420(s64, s64, s64, s64, f32, f32);
s64 func_009B3070(s64, s64);
s64 func_00C04E00(s64, s64);

s64 func_0095BB00(s64 a0, s64 a1, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, a2 = 0, a3 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 gp = 0x3ef370;
    union { f32 f; s32 i; } f12 = { fa12 };
    union { f32 f; s32 i; } f13 = { fa13 };

    v0 = 0xffff;
    s3 = a0;
    s2 = a1;
    v1 = s2 & 0xffff;
    if (v1 != v0) goto L_0095BB30;
    s2 = (*(u16 *) (u32) (s3 + 280));
L_0095BB30:;
    a1 = (*(u16 *) (u32) (s3 + 288));
    a0 = (*(u16 *) (u32) (s3 + 38)); v0 = func_009B3070(a0, a1);
    a0 = (*(u16 *) (u32) (s3 + 288));
    s1 = v0 & 0xffff;
    a1 = s2; v0 = func_009B3070(a0, a1);
    s0 = v0 & 0xffff;
    v1 = (*(u8 *) (u32) (s3 + 19));
    v0 = (*(s32 *) (u32) (gp + -31080));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    if (v0 == 0) { a1 = (*(u16 *) (u32) (s3 + 288)); goto L_0095BC74; }
    a0 = (*(s32 *) (u32) (s3 + 292));
L_0095BB6C:;
    at = (s32) 0x1b90000U;
    at = (u64) a0 < (u64) at;
    if (at == 0) goto L_0095BBBC;
    v1 = s1 & 0xffff;
    v0 = v1 < 12288;
    if (v0 != 0) { v0 = s0 & 0xffff; goto L_0095BC94; }
L_0095BB8C:;
    at = v1 < 18432;
    if (at == 0) goto L_0095BBBC;
    v0 = s0 & 0xffff;
    v0 = v0 < 24576;
    if (v0 != 0) goto L_0095BBBC;
    a0 = s3;
    a1 = 0; v0 = func_00C04E00(a0, a1);
    v0 = 1; goto L_0095BCB0;
L_0095BBBC:;
    v1 = (*(u8 *) (u32) (s3 + 19));
    v0 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 + 0x5390U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(u8 *) (u32) v0);
    if (v0 != 0) goto L_0095BC6C;
    at = (s32) 0x2a40000U;
    at = (u64) a0 < (u64) at;
    if (at == 0) goto L_0095BC6C;
    v0 = s1 & 0xffff;
    at = v0 < 6144;
    if (at == 0) goto L_0095BC6C;
    a0 = (*(u16 *) (u32) (s3 + 38));
    a1 = s2; v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    v0 = v0 < 8192;
    if (v0 != 0) goto L_0095BC6C;
    v0 = (*(s32 *) (u32) (s3 + 292));
    at = (s32) 0x1000000U;
    at = at | 0x1;
    at = (u64) v0 < (u64) at;
    if (at != 0) goto L_0095BC6C;
    at = (s32) 0x4000000U;
    at = (u64) v0 < (u64) at;
    if (at == 0) goto L_0095BC6C;
    a1 = (*(u16 *) (u32) (s3 + 42));
    a0 = (*(u16 *) (u32) (s3 + 288)); v0 = func_009B3070(a0, a1);
    v0 = v0 & 0xffff;
    at = v0 < 5888;
    if (at == 0) goto L_0095BC6C;
    a0 = s3;
    a1 = 3; v0 = func_00C04E00(a0, a1);
    v0 = 1; goto L_0095BCB0;
L_0095BC6C:;
    v0 = 0; goto L_0095BCB0;
L_0095BC74:;
    a0 = s3;
    a2 = 4096;
    a3 = (s32) 0x400000U; v0 = func_00952420(a0, a1, a2, a3, f12.f, f13.f);
    if (v0 == 0) goto L_0095BC6C;
    a0 = (*(s32 *) (u32) (s3 + 292)); goto L_0095BB6C;
L_0095BC94:;
    v0 = v0 < 8192;
    if (v0 != 0) goto L_0095BB8C;
    a0 = s3;
    a1 = 0; v0 = func_00C04E00(a0, a1);
    v0 = 1;
L_0095BCB0:;
    return v0;
}
