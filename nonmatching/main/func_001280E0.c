/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_001280E0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0;

    v1 = (*(volatile s32 *) (u32) (a0 + 5844));
    at = v1 < 14;
    if (at != 0) { a3 = (s32) ((u32) a3 << (v1 & 31)); goto L_00128168; }
    a4 = (s32) ((u32) a3 << (v1 & 31));
    a5 = a4 & 0xffff;
    v1 = a3 & 0xffff;
    a4 = (*(volatile u16 *) (u32) (a0 + 5840));
    a3 = 16;
    a4 = a4 | a5;
    (*(volatile u16 *) (u32) (a0 + 5840)) = (u16) a4;
    a5 = (*(volatile s32 *) (u32) (a0 + 28));
    a6 = (*(volatile u16 *) (u32) (a0 + 5840));
    a4 = (s32) ((u32) a5 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) a4;
    a4 = (*(volatile s32 *) (u32) (a0 + 8));
    a4 = (s32) ((u32) a4 + (u32) a5);
    (*(volatile u8 *) (u32) a4) = (u8) a6;
    a4 = (*(volatile u16 *) (u32) (a0 + 5840));
    a5 = (*(volatile s32 *) (u32) (a0 + 28));
    a6 = (s32) a4 >> 8;
    a4 = (s32) ((u32) a5 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) a4;
    a4 = (*(volatile s32 *) (u32) (a0 + 8));
    a4 = (s32) ((u32) a4 + (u32) a5);
    (*(volatile u8 *) (u32) a4) = (u8) a6;
    a4 = (*(volatile s32 *) (u32) (a0 + 5844));
    a3 = (s32) ((u32) a3 - (u32) a4);
    v1 = (s32) v1 >> (a3 & 31);
    (*(volatile u16 *) (u32) (a0 + 5840)) = (u16) v1;
    v1 = (*(volatile s32 *) (u32) (a0 + 5844));
    v1 = (s32) ((u32) v1 + 0xfffffff3U);
    (*(volatile u32 *) (u32) (a0 + 5844)) = (u32) v1; goto L_00128184;
L_00128168:;
    v1 = (*(volatile u16 *) (u32) (a0 + 5840));
    a3 = a3 & 0xffff;
    v1 = v1 | a3;
    (*(volatile u16 *) (u32) (a0 + 5840)) = (u16) v1;
    v1 = (*(volatile s32 *) (u32) (a0 + 5844));
    v1 = (s32) ((u32) v1 + 0x3U);
    (*(volatile u32 *) (u32) (a0 + 5844)) = (u32) v1;
L_00128184:;
    v1 = (s64) ((u64) a2 << 32);
    a2 = (*(volatile s32 *) (u32) (a0 + 5844));
    at = a2 < 9;
    { s32 c_ = at == 0; v1 = v1 >> 32; if (c_) goto L_00128280; }
    if (a2 <= 0) goto L_001281BC;
    a3 = (*(volatile s32 *) (u32) (a0 + 28));
    a4 = (*(volatile u16 *) (u32) (a0 + 5840));
    a2 = (s32) ((u32) a3 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) a2;
    a2 = (*(volatile s32 *) (u32) (a0 + 8));
    a2 = (s32) ((u32) a2 + (u32) a3);
    (*(volatile u8 *) (u32) a2) = (u8) a4;
L_001281BC:;
    (*(volatile u16 *) (u32) (a0 + 5840)) = (u16) 0;
    t4 = v1 & 0xffff;
    a2 = 8;
    (*(volatile u32 *) (u32) (a0 + 5844)) = (u32) 0;
    (*(volatile u32 *) (u32) (a0 + 5836)) = (u32) a2;
    a7 = (s32) t4 >> 8;
    a4 = (*(volatile s32 *) (u32) (a0 + 28));
    a2 = ~(v1 | 0);
    a6 = a2 & 0xffff;
    a2 = v1;
    a5 = (s32) a6 >> 8;
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a3 = (s32) ((u32) a4 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) a3;
    a3 = (*(volatile s32 *) (u32) (a0 + 8));
    a3 = (s32) ((u32) a3 + (u32) a4);
    (*(volatile u8 *) (u32) a3) = (u8) t4;
    a4 = (*(volatile s32 *) (u32) (a0 + 28));
    a3 = (s32) ((u32) a4 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) a3;
    a3 = (*(volatile s32 *) (u32) (a0 + 8));
    a3 = (s32) ((u32) a3 + (u32) a4);
    (*(volatile u8 *) (u32) a3) = (u8) a7;
    a4 = (*(volatile s32 *) (u32) (a0 + 28));
    a3 = (s32) ((u32) a4 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) a3;
    a3 = (*(volatile s32 *) (u32) (a0 + 8));
    a3 = (s32) ((u32) a3 + (u32) a4);
    (*(volatile u8 *) (u32) a3) = (u8) a6;
    a4 = (*(volatile s32 *) (u32) (a0 + 28));
    a3 = (s32) ((u32) a4 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) a3;
    a3 = (*(volatile s32 *) (u32) (a0 + 8));
    a3 = (s32) ((u32) a3 + (u32) a4);
    { s32 c_ = a2 == 0; (*(volatile u8 *) (u32) a3) = (u8) a5; if (c_) goto L_001282C0; }
L_0012824C:;
    a4 = (*(volatile s32 *) (u32) (a0 + 28));
    a2 = v1;
    a5 = (*(volatile s8 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    a3 = (s32) ((u32) a4 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) a3;
    a1 = (s32) ((u32) a1 + 0x1U);
    a3 = (*(volatile s32 *) (u32) (a0 + 8));
    a3 = (s32) ((u32) a3 + (u32) a4);
    { s32 c_ = a2 != 0; (*(volatile u8 *) (u32) a3) = (u8) a5; if (c_) goto L_0012824C; }
    goto L_001282C0;
L_00128280:;
    a3 = (*(volatile s32 *) (u32) (a0 + 28));
    a4 = (*(volatile u16 *) (u32) (a0 + 5840));
    a2 = (s32) ((u32) a3 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) a2;
    a2 = (*(volatile s32 *) (u32) (a0 + 8));
    a2 = (s32) ((u32) a2 + (u32) a3);
    (*(volatile u8 *) (u32) a2) = (u8) a4;
    a2 = (*(volatile u16 *) (u32) (a0 + 5840));
    a3 = (*(volatile s32 *) (u32) (a0 + 28));
    a4 = (s32) a2 >> 8;
    a2 = (s32) ((u32) a3 + 0x1U);
    (*(volatile u32 *) (u32) (a0 + 28)) = (u32) a2;
    a2 = (*(volatile s32 *) (u32) (a0 + 8));
    a2 = (s32) ((u32) a2 + (u32) a3);
    (*(volatile u8 *) (u32) a2) = (u8) a4; goto L_001281BC;
L_001282C0:;
    return;
}
