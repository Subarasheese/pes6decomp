/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00293030(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0;

    v1 = a1 & 0xff;
    at = (u64) v1 < (u64) (s64) 13;
    { s32 c_ = at == 0; v0 = 9; if (c_) goto L_0029358C; }
    a1 = (s32) 0x3e0000U;
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0xffff9fa0U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x29305cU) goto L_0029305C; if (t_ == 0x29307cU) goto L_0029307C; if (t_ == 0x2930c0U) goto L_002930C0; if (t_ == 0x293108U) goto L_00293108; if (t_ == 0x293164U) goto L_00293164; if (t_ == 0x2931c0U) goto L_002931C0; if (t_ == 0x293230U) goto L_00293230; if (t_ == 0x2932a0U) goto L_002932A0; if (t_ == 0x293324U) goto L_00293324; if (t_ == 0x2933bcU) goto L_002933BC; if (t_ == 0x293440U) goto L_00293440; if (t_ == 0x2934b0U) goto L_002934B0; if (t_ == 0x293534U) goto L_00293534; }
L_0029305C:;
    v1 = (*(volatile u8 *) (u32) (a0 + 2));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_0029358C;
    v0 = 0; goto L_0029358C;
L_0029307C:;
    v1 = (*(volatile u8 *) (u32) (a0 + 3));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; v0 = 0; if (c_) goto L_002935AC; }
    v1 = (*(volatile u8 *) (u32) (a0 + 4));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 8; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 6));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_0029358C;
    v0 = 6; goto L_0029358C;
L_002930C0:;
    v1 = (*(volatile u8 *) (u32) (a0 + 3));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_0029358C;
    v1 = (*(volatile u8 *) (u32) (a0 + 4));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; v0 = 0; if (c_) goto L_002935B4; }
    v1 = (*(volatile u8 *) (u32) (a0 + 6));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_0029358C;
    v0 = 6; goto L_0029358C;
L_00293108:;
    v1 = (*(volatile u8 *) (u32) (a0 + 4));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_0029358C;
    v1 = (*(volatile u8 *) (u32) (a0 + 3));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; v0 = 0; if (c_) goto L_002935BC; }
    v1 = (*(volatile u8 *) (u32) (a0 + 6));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 6; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 5));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_0029358C;
    v0 = 2; goto L_0029358C;
L_00293164:;
    v1 = (*(volatile u8 *) (u32) (a0 + 5));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_0029358C;
    v1 = (*(volatile u8 *) (u32) (a0 + 7));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; v0 = 0; if (c_) goto L_002935C4; }
    v1 = (*(volatile u8 *) (u32) (a0 + 9));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 4; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 4));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_0029358C;
    v0 = 2; goto L_0029358C;
L_002931C0:;
    v1 = (*(volatile u8 *) (u32) (a0 + 6));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_0029358C;
    v1 = (*(volatile u8 *) (u32) (a0 + 8));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; v0 = 0; if (c_) goto L_002935CC; }
    v1 = (*(volatile u8 *) (u32) (a0 + 3));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 6; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 4));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 6; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 10));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_0029358C;
    v0 = 6; goto L_0029358C;
L_00293230:;
    v1 = (*(volatile u8 *) (u32) (a0 + 7));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_0029358C;
    v1 = (*(volatile u8 *) (u32) (a0 + 5));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; v0 = 0; if (c_) goto L_002935D4; }
    v1 = (*(volatile u8 *) (u32) (a0 + 9));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 8; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 8));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 4; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 11));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_0029358C;
    v0 = 2; goto L_0029358C;
L_002932A0:;
    v1 = (*(volatile u8 *) (u32) (a0 + 8));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_0029358C;
    v1 = (*(volatile u8 *) (u32) (a0 + 6));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; v0 = 0; if (c_) goto L_002935DC; }
    v1 = (*(volatile u8 *) (u32) (a0 + 10));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 8; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 12));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 4; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 7));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 4; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 9));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_0029358C;
    v0 = 2; goto L_0029358C;
L_00293324:;
    v1 = (*(volatile u8 *) (u32) (a0 + 9));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_0029358C;
    v1 = (*(volatile u8 *) (u32) (a0 + 7));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; v0 = 0; if (c_) goto L_002935E4; }
    v1 = (*(volatile u8 *) (u32) (a0 + 5));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 4; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 11));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 6; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 10));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 4; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 8));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 2; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 12));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_0029358C;
    v0 = 2; goto L_0029358C;
L_002933BC:;
    v1 = (*(volatile u8 *) (u32) (a0 + 10));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_0029358C;
    v1 = (*(volatile u8 *) (u32) (a0 + 12));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; v0 = 0; if (c_) goto L_002935EC; }
    v1 = (*(volatile u8 *) (u32) (a0 + 8));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 8; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 13));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 6; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 6));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 6; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 9));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_0029358C;
    v0 = 4; goto L_0029358C;
L_00293440:;
    v1 = (*(volatile u8 *) (u32) (a0 + 11));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_0029358C;
    v1 = (*(volatile u8 *) (u32) (a0 + 9));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; v0 = 0; if (c_) goto L_002935F4; }
    v1 = (*(volatile u8 *) (u32) (a0 + 13));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 6; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 7));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 2; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 12));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_0029358C;
    v0 = 2; goto L_0029358C;
L_002934B0:;
    v1 = (*(volatile u8 *) (u32) (a0 + 12));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_0029358C;
    v1 = (*(volatile u8 *) (u32) (a0 + 10));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; v0 = 0; if (c_) goto L_002935FC; }
    v1 = (*(volatile u8 *) (u32) (a0 + 13));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 8; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 8));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 4; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 9));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 2; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 11));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_0029358C;
    v0 = 2; goto L_0029358C;
L_00293534:;
    v1 = (*(volatile u8 *) (u32) (a0 + 13));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    v1 = v1 & 0xff;
    if (v1 != 0) goto L_0029358C;
    v1 = (*(volatile u8 *) (u32) (a0 + 12));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    { s32 c_ = v1 != 0; v0 = 0; if (c_) goto L_00293604; }
    v1 = (*(volatile u8 *) (u32) (a0 + 11));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 != 0) { v0 = 6; goto L_0029358C; }
    v1 = (*(volatile u8 *) (u32) (a0 + 10));
    v1 = (s64) ((u64) v1 << 56);
    v1 = (s64) ((u64) v1 >> 63);
    if (v1 == 0) goto L_0029358C;
    v0 = 6;
L_0029358C:;
    if (v0 < 0) { v0 = 0; goto L_00293594; }
L_00293594:;
    at = v0 < 10;
    if (at != 0) goto L_002935A4;
    v0 = 9;
L_002935A4:;
    v0 = v0 & 0xff; goto L_0029360C;
L_002935AC:;
    v0 = 8; goto L_0029358C;
L_002935B4:;
    v0 = 8; goto L_0029358C;
L_002935BC:;
    v0 = 8; goto L_0029358C;
L_002935C4:;
    v0 = 8; goto L_0029358C;
L_002935CC:;
    v0 = 8; goto L_0029358C;
L_002935D4:;
    v0 = 8; goto L_0029358C;
L_002935DC:;
    v0 = 8; goto L_0029358C;
L_002935E4:;
    v0 = 8; goto L_0029358C;
L_002935EC:;
    v0 = 8; goto L_0029358C;
L_002935F4:;
    v0 = 6; goto L_0029358C;
L_002935FC:;
    v0 = 8; goto L_0029358C;
L_00293604:;
    v0 = 8; goto L_0029358C;
L_0029360C:;
    return v0;
}
