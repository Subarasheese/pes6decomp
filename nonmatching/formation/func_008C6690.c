/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001D67B0(s64, s64, s64, s64);
void func_001DF820(s64, s64, s64, s64);
void func_0020A380(s64, s64, s64, s64);
s64 func_0021E4B0(s64, s64, s64);
s64 func_008B2930(s64);
s64 func_008B99F0(s64, s64, s64, s64);

void func_008C6690(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;

    s5 = a0;
    s4 = a2;
    s3 = a3;
    if (s5 == 0) goto L_008C68B8;
    s2 = a1 & 0xff;
    at = s2 < 10;
    if (at == 0) { ; goto L_008C68BC; }
    v1 = (s32) ((u32) s2 << 1);
    s1 = s4 & 0xffff;
    v1 = (s32) ((u32) v1 + (u32) s5);
    s6 = (s32) ((u32) v1 + 0xaU);
    v1 = (*(volatile u16 *) (u32) (v1 + 10));
    if (v1 == s1) goto L_008C68B8;
    if (s3 != 0) { s0 = (s32) ((u32) s2 << 2); goto L_008C6708; }
    goto L_008C68B8;
    s0 = (s32) ((u32) s2 << 2);
L_008C6708:;
    v1 = (s32) ((u32) s0 + (u32) s5);
    a0 = (*(volatile s32 *) (u32) (v1 + 136));
    { s32 c_ = a0 == 0; s7 = (s32) ((u32) v1 + 0x88U); if (c_) goto L_008C672C; }
    func_001D67B0(a0, a1, a2, a3);
    v1 = s0;
    v1 = (s32) ((u32) v1 + (u32) s5);
    (*(volatile u32 *) (u32) (v1 + 136)) = (u32) 0;
L_008C672C:;
    a2 = (*(volatile u16 *) (u32) s6);
    v1 = 0xffff;
    if (a2 == v1) { v1 = 0xffff; goto L_008C674C; }
    a0 = (*(volatile s32 *) (u32) (s5 + 76));
    a1 = 1; func_0020A380(a0, a1, a2, a3);
    v1 = 0xffff;
L_008C674C:;
    { s32 c_ = s1 == v1; (*(volatile u16 *) (u32) s6) = (u16) s4; if (c_) goto L_008C6788; }
    v1 = (s32) ((u32) s0 + (u32) s5);
    a1 = (s32) ((u32) s2 + 0xaeU);
    { s32 c_ = a1 >= 0; (*(volatile u32 *) (u32) (v1 + 32)) = (u32) s3; if (c_) goto L_008C676C; }
    v1 = 0; goto L_008C6780;
L_008C676C:;
    a0 = (*(volatile s32 *) (u32) (s5 + 120));
    a2 = (*(volatile s32 *) (u32) (s5 + 76));
    a3 = s4; v0 = func_008B99F0(a0, a1, a2, a3);
    v1 = v0;
L_008C6780:;
    (*(volatile u32 *) (u32) s7) = (u32) v1; goto L_008C6798;
L_008C6788:;
    a0 = 4; v0 = func_008B2930(a0);
    v1 = (s32) ((u32) s0 + (u32) s5);
    (*(volatile u32 *) (u32) (v1 + 32)) = (u32) v0;
L_008C6798:;
    a0 = (*(volatile u8 *) (u32) (s5 + 80));
    v1 = 3;
    if (a0 == v1) { v1 = (s64) ((u64) 0 + (u64) (s64) 13); goto L_008C681C; }
    v1 = 4;
    if (a0 == v1) { v1 = (*(volatile u8 *) (u32) (s5 + 81)); goto L_008C681C; }
    v1 = 2;
    if (a0 == v1) { v1 = (s64) ((u64) 0 + (u64) (s64) 12); goto L_008C681C; }
    v1 = 1;
    if (a0 == v1) { v1 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_008C681C; }
    if (a0 == 0) { v1 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_008C681C; }
    v1 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_008C681C;
    v1 = (s64) ((u64) 0 + (u64) (s64) 10);
    goto L_008C681C;
    v1 = (s64) ((u64) 0 + (u64) (s64) 11);
    goto L_008C681C;
    v1 = (s64) ((u64) 0 + (u64) (s64) 12);
    goto L_008C681C;
    v1 = (*(volatile u8 *) (u32) (s5 + 81));
    goto L_008C681C;
    v1 = (s64) ((u64) 0 + (u64) (s64) 13);
    goto L_008C681C;
    v1 = (s64) ((u64) 0 + (u64) (s64) 255);
L_008C681C:;
    v1 = v1 & 0xff;
    if (s2 != v1) goto L_008C68B8;
    a1 = (s32) 0x8f0000U;
    v1 = 4;
    { s32 c_ = a0 == v1; a1 = (s32) ((u32) a1 + 0xffffce98U); if (c_) goto L_008C6894; }
    v1 = 2;
    if (a0 == v1) { a0 = (*(volatile u16 *) (u32) (s5 + 74)); goto L_008C6870; }
    v1 = 1;
    if (a0 == v1) goto L_008C686C;
    v1 = 3;
    if (a0 == v1) goto L_008C686C;
    if (a0 == 0) goto L_008C686C;
    v1 = (*(volatile s32 *) (u32) (s5 + 132)); goto L_008C68A8;
L_008C686C:;
    a0 = (*(volatile u16 *) (u32) (s5 + 74));
L_008C6870:;
    v1 = 0xffff;
    if (a0 == v1) goto L_008C68A4;
    a3 = (*(volatile u16 *) (u32) (s5 + 72));
    a1 = 0;
    a2 = 0; v0 = func_0021E4B0(a0, a1, a2);
    a1 = v0; goto L_008C68A4;
L_008C6894:;
    v1 = (*(volatile u8 *) (u32) (s5 + 81));
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s5);
    a1 = (*(volatile s32 *) (u32) (v1 + 32));
L_008C68A4:;
    v1 = (*(volatile s32 *) (u32) (s5 + 132));
L_008C68A8:;
    if (v1 == 0) goto L_008C68B8;
    a0 = (*(volatile s32 *) (u32) (v1 + 12)); func_001DF820(a0, a1, a2, a3);
L_008C68B8:;
L_008C68BC:;
    return;
}
