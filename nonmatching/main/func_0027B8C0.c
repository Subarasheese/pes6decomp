/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Heap_Alloc(s64, s64, s64, s64);
s64 func_00141390(s64);
void func_0017B0F0(s64, s64);
void func_0017BE90(s64, s64, s64, s64);
void func_0017BF80(s64, s64, s64, s64);
void func_0017BFF0(s64, s64, s64);
void func_0017C010(s64, s64, s64);
void func_0017C080(s64, s64, s64, s64);
s64 func_0017C500(s64, s64, s64, s64, s64);
void func_0017D060(s64, s64, s64);
void func_0017D080(s64, s64, s64);
void func_0017D110(s64, s64, s64, s64, s64, s64, s64, s64);

s64 func_0027B8C0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    u64 qh_a0 = 0;
    u64 qh_a1 = 0;
    u64 qh_a2 = 0;

    s1 = a0;
    v0 = (*(volatile s8 *) (u32) (a0 + 3));
    a1 = (*(volatile s8 *) (u32) (a0 + 4));
    a2 = (*(volatile s8 *) (u32) (a0 + 5));
    a3 = (*(volatile s8 *) (u32) (a0 + 6));
    a4 = (*(volatile s8 *) (u32) (a0 + 7));
    a0 = v0; v0 = func_0017C500(a0, a1, a2, a3, a4);
    s0 = v0;
    v0 = (*(volatile s8 *) (u32) (s1 + 4));
    if (v0 <= 0) goto L_0027BB08;
    at = 0 < v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_0027B960; }
    s2 = 0;
L_0027B918:;
    v0 = (*(volatile s32 *) (u32) (s1 + 20));
    v0 = (s32) ((u32) v0 + (u32) s2);
    a2 = (*(volatile s32 *) (u32) v0);
    if (a2 == 0) goto L_0027B948;
    a0 = s0;
    a1 = s3; func_0017BE90(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (s32) ((u32) v0 + (u32) s2);
    (*(volatile u32 *) (u32) (s0 + 44)) = (u32) v0;
L_0027B948:;
    v0 = (*(volatile s8 *) (u32) (s1 + 4));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x8U); if (c_) goto L_0027B918; }
L_0027B960:;
    v0 = (*(volatile s32 *) (u32) (s1 + 240));
    if (v0 == 0) goto L_0027BB08;
    v0 = (*(volatile s32 *) (u32) (s0 + 20));
    a0 = (*(volatile s32 *) (u32) v0); v0 = func_00141390(a0);
    s2 = v0;
    a1 = 16;
    a0 = s2; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    at = 0 < s2;
    (*(volatile u32 *) (u32) (s0 + 240)) = (u32) v0;
    { s32 c_ = at == 0; v1 = 0; if (c_) goto L_0027BB08; }
    at = s2 < 9;
    { s32 c_ = at != 0; v0 = (s32) ((u32) s2 + 0xfffffff8U); if (c_) goto L_0027BAD0; }
    at = s2 < 0;
    a2 = 0;
    { s32 c_ = at != 0; a0 = 0; if (c_) goto L_0027BCF0; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = s2 < at;
    if (at == 0) goto L_0027BCF0;
    a0 = 1; goto L_0027BCF0;
L_0027B9D0:;
    a0 = s2 & a0;
    { s32 c_ = a0 != 0; a1 = 1; if (c_) goto L_0027B9E8; }
    if (a0 == 0) goto L_0027B9E8;
    a1 = 0;
L_0027B9E8:;
    if (a1 == 0) goto L_0027B9F4;
    a2 = 1;
L_0027B9F4:;
    if (a2 == 0) goto L_0027BAD0;
    a0 = 0;
L_0027BA00:;
    a3 = (*(volatile s32 *) (u32) (s1 + 240));
    v1 = (s32) ((u32) v1 + 0x8U);
    a2 = (*(volatile s32 *) (u32) (s0 + 240));
    a1 = v1 < v0;
    a4 = (s32) ((u32) a3 + (u32) a0);
    a3 = (s32) ((u32) a2 + (u32) a0);
    { u32 a_ = (u32) (a4 + 0) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a3 + 0) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    a3 = (*(volatile s32 *) (u32) (s1 + 240));
    a2 = (*(volatile s32 *) (u32) (s0 + 240));
    a4 = (s32) ((u32) a3 + (u32) a0);
    a3 = (s32) ((u32) a2 + (u32) a0);
    { u32 a_ = (u32) (a4 + 16) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a3 + 16) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    a3 = (*(volatile s32 *) (u32) (s1 + 240));
    a2 = (*(volatile s32 *) (u32) (s0 + 240));
    a4 = (s32) ((u32) a3 + (u32) a0);
    a3 = (s32) ((u32) a2 + (u32) a0);
    { u32 a_ = (u32) (a4 + 32) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a3 + 32) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    a3 = (*(volatile s32 *) (u32) (s1 + 240));
    a2 = (*(volatile s32 *) (u32) (s0 + 240));
    a4 = (s32) ((u32) a3 + (u32) a0);
    a3 = (s32) ((u32) a2 + (u32) a0);
    { u32 a_ = (u32) (a4 + 48) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a3 + 48) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    a3 = (*(volatile s32 *) (u32) (s1 + 240));
    a2 = (*(volatile s32 *) (u32) (s0 + 240));
    a4 = (s32) ((u32) a3 + (u32) a0);
    a3 = (s32) ((u32) a2 + (u32) a0);
    { u32 a_ = (u32) (a4 + 64) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a3 + 64) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    a3 = (*(volatile s32 *) (u32) (s1 + 240));
    a2 = (*(volatile s32 *) (u32) (s0 + 240));
    a4 = (s32) ((u32) a3 + (u32) a0);
    a3 = (s32) ((u32) a2 + (u32) a0);
    { u32 a_ = (u32) (a4 + 80) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a3 + 80) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    a3 = (*(volatile s32 *) (u32) (s1 + 240));
    a2 = (*(volatile s32 *) (u32) (s0 + 240));
    a4 = (s32) ((u32) a3 + (u32) a0);
    a3 = (s32) ((u32) a2 + (u32) a0);
    { u32 a_ = (u32) (a4 + 96) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (a3 + 96) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; }
    a3 = (*(volatile s32 *) (u32) (s1 + 240));
    a2 = (*(volatile s32 *) (u32) (s0 + 240));
    a4 = (s32) ((u32) a3 + (u32) a0);
    a3 = (s32) ((u32) a2 + (u32) a0);
    { u32 a_ = (u32) (a4 + 112) & ~15U; a2 = *(volatile s64 *) a_; qh_a2 = *(volatile u64 *) (a_ + 8); }
    a0 = (s32) ((u32) a0 + 0x80U);
    { s32 c_ = a1 != 0; { u32 a_ = (u32) (a3 + 112) & ~15U; *(volatile u64 *) a_ = (u64) a2; *(volatile u64 *) (a_ + 8) = qh_a2; } if (c_) goto L_0027BA00; }
L_0027BAD0:;
    at = v1 < s2;
    if (at == 0) goto L_0027BB08;
    a3 = (s32) ((u32) v1 << 4);
L_0027BAE0:;
    a1 = (*(volatile s32 *) (u32) (s1 + 240));
    v1 = (s32) ((u32) v1 + 0x1U);
    a0 = (*(volatile s32 *) (u32) (s0 + 240));
    v0 = v1 < s2;
    a2 = (s32) ((u32) a1 + (u32) a3);
    a1 = (s32) ((u32) a0 + (u32) a3);
    { u32 a_ = (u32) (a2 + 0) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    a3 = (s32) ((u32) a3 + 0x10U);
    { s32 c_ = v0 != 0; { u32 a_ = (u32) (a1 + 0) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; } if (c_) goto L_0027BAE0; }
L_0027BB08:;
    v0 = (*(volatile s8 *) (u32) (s1 + 7));
    if (v0 <= 0) goto L_0027BB80;
    at = 0 < v0;
    { s32 c_ = at == 0; s2 = 0; if (c_) goto L_0027BB80; }
    s3 = 0;
L_0027BB24:;
    v0 = (*(volatile s32 *) (u32) (s1 + 32));
    v0 = (s32) ((u32) v0 + (u32) s3);
    a2 = (*(volatile s32 *) (u32) (v0 + 8));
    if (a2 == 0) goto L_0027BB68;
    a0 = s0;
    a1 = s2; func_0017BF80(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    v0 = (s32) ((u32) v0 + (u32) s3);
    (*(volatile u32 *) (u32) (s0 + 52)) = (u32) v0;
    v1 = (*(volatile s32 *) (u32) (s0 + 20));
    v0 = (*(volatile s32 *) (u32) (s0 + 32));
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    v0 = (s32) ((u32) v0 + (u32) s3);
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) v1;
L_0027BB68:;
    v0 = (*(volatile s8 *) (u32) (s1 + 7));
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < v0;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x14U); if (c_) goto L_0027BB24; }
L_0027BB80:;
    v0 = (*(volatile s8 *) (u32) (s1 + 5));
    if (v0 <= 0) goto L_0027BC10;
    at = 0 < v0;
    { s32 c_ = at == 0; s2 = 0; if (c_) goto L_0027BC10; }
    s3 = 0;
L_0027BB9C:;
    v0 = (*(volatile s32 *) (u32) (s1 + 24));
    v0 = (s32) ((u32) v0 + (u32) s3);
    a2 = (*(volatile s32 *) (u32) (v0 + 4));
    if (a2 == 0) goto L_0027BBF8;
    a0 = s0;
    a1 = s2; func_0017D110(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s32 *) (u32) (s0 + 24));
    v1 = 1;
    a0 = s0;
    v0 = (s32) ((u32) v0 + (u32) s3);
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (s1 + 24));
    v0 = (s32) ((u32) v0 + (u32) s3);
    a2 = (*(volatile u8 *) (u32) (v0 + 12));
    a1 = s2; func_0017D060(a0, a1, a2);
    a2 = (s32) 0x370000U;
    a0 = s0;
    a1 = s2;
    a2 = (s32) ((u32) a2 + 0x5b30U); func_0017D080(a0, a1, a2);
L_0027BBF8:;
    v0 = (*(volatile s8 *) (u32) (s1 + 5));
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < v0;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x1cU); if (c_) goto L_0027BB9C; }
L_0027BC10:;
    v0 = (*(volatile s8 *) (u32) (s1 + 6));
    if (v0 <= 0) goto L_0027BCD8;
    at = 0 < v0;
    { s32 c_ = at == 0; s2 = 0; if (c_) goto L_0027BCB8; }
    s3 = 0;
L_0027BC2C:;
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    v0 = (s32) ((u32) v0 + (u32) s3);
    a2 = (*(volatile s32 *) (u32) (v0 + 4));
    if (a2 == 0) goto L_0027BCA0;
    a0 = s0;
    a1 = s2; func_0017C080(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    v1 = 1;
    a0 = s0;
    v0 = (s32) ((u32) v0 + (u32) s3);
    (*(volatile u32 *) (u32) v0) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s1 + 28));
    v0 = (*(volatile s32 *) (u32) (s0 + 28));
    v1 = (s32) ((u32) v1 + (u32) s3);
    v1 = (*(volatile u8 *) (u32) (v1 + 13));
    v0 = (s32) ((u32) v0 + (u32) s3);
    (*(volatile u8 *) (u32) (v0 + 13)) = (u8) v1;
    v0 = (*(volatile s32 *) (u32) (s1 + 28));
    v0 = (s32) ((u32) v0 + (u32) s3);
    a2 = (*(volatile u8 *) (u32) (v0 + 12));
    a1 = s2; func_0017BFF0(a0, a1, a2);
    a2 = (s32) 0x370000U;
    a0 = s0;
    a1 = s2;
    a2 = (s32) ((u32) a2 + 0x5b30U); func_0017C010(a0, a1, a2);
L_0027BCA0:;
    v0 = (*(volatile s8 *) (u32) (s1 + 6));
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < v0;
    { s32 c_ = v0 != 0; s3 = (s32) ((u32) s3 + 0x14U); if (c_) goto L_0027BC2C; }
L_0027BCB8:;
    { u32 a_ = (u32) (s1 + 144) & ~15U; a1 = *(volatile s64 *) a_; qh_a1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s1 + 160) & ~15U; a0 = *(volatile s64 *) a_; qh_a0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s1 + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s1 + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    { u32 a_ = (u32) (s0 + 144) & ~15U; *(volatile u64 *) a_ = (u64) a1; *(volatile u64 *) (a_ + 8) = qh_a1; }
    { u32 a_ = (u32) (s0 + 160) & ~15U; *(volatile u64 *) a_ = (u64) a0; *(volatile u64 *) (a_ + 8) = qh_a0; }
    { u32 a_ = (u32) (s0 + 176) & ~15U; *(volatile u64 *) a_ = (u64) v1; *(volatile u64 *) (a_ + 8) = qh_v1; }
    { u32 a_ = (u32) (s0 + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_0027BCD8:;
    a0 = s0;
    a1 = 1; func_0017B0F0(a0, a1);
    (*(volatile u8 *) (u32) s0) = (u8) 0;
    v0 = s0; goto L_0027BD00;
L_0027BCF0:;
    if (a0 == 0) goto L_0027B9F4;
    a0 = (s32) 0x80000000U; goto L_0027B9D0;
L_0027BD00:;
    return v0;
}
