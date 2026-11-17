/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00292F30(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0;

    v0 = a1 & 0xff;
    at = (u64) v0 < (u64) (s64) 13;
    if (at == 0) goto L_0029301C;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9f60U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x292f5cU) goto L_00292F5C; if (t_ == 0x292f6cU) goto L_00292F6C; if (t_ == 0x292f7cU) goto L_00292F7C; if (t_ == 0x292f8cU) goto L_00292F8C; if (t_ == 0x292f9cU) goto L_00292F9C; if (t_ == 0x292facU) goto L_00292FAC; if (t_ == 0x292fbcU) goto L_00292FBC; if (t_ == 0x292fccU) goto L_00292FCC; if (t_ == 0x292fdcU) goto L_00292FDC; if (t_ == 0x292fecU) goto L_00292FEC; if (t_ == 0x292ffcU) goto L_00292FFC; if (t_ == 0x29300cU) goto L_0029300C; if (t_ == 0x29301cU) goto L_0029301C; }
L_00292F5C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 2));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_00293020;
L_00292F6C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 3));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_00293020;
L_00292F7C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 4));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_00293020;
L_00292F8C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 5));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_00293020;
L_00292F9C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 6));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_00293020;
L_00292FAC:;
    v0 = (*(volatile u8 *) (u32) (a0 + 7));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_00293020;
L_00292FBC:;
    v0 = (*(volatile u8 *) (u32) (a0 + 8));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_00293020;
L_00292FCC:;
    v0 = (*(volatile u8 *) (u32) (a0 + 9));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_00293020;
L_00292FDC:;
    v0 = (*(volatile u8 *) (u32) (a0 + 10));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_00293020;
L_00292FEC:;
    v0 = (*(volatile u8 *) (u32) (a0 + 11));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_00293020;
L_00292FFC:;
    v0 = (*(volatile u8 *) (u32) (a0 + 12));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_00293020;
L_0029300C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 13));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_00293020;
L_0029301C:;
    v0 = 0;
L_00293020:;
    return v0;
}
