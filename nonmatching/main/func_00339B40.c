/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6BitSet_Lookup(s64, s64);
void Pes6BitSet_Write(s64, s64, s64);
s64 Pes6Job_GetArg(s64, s64);
s64 func_00291BC0(s64, s64, s64, s64);
s64 func_00292C50(void);
s64 func_0030DA50(void);
s64 func_0030DAF0(s64);
s64 func_0030DB90(void);
s64 func_00325C20(s64);
s64 func_00325DE0(s64);
s64 func_00325F60(s64);
void func_00325FE0(s64, s64, s64);
s64 func_00326120(s64);
s64 func_003263A0(s64);
s64 func_003265F0(s64, s64);
s64 func_00333600(s64);
s64 func_00333740(s64, s64);

void func_00339B40(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    u64 qh_v1 = 0;
    s64 gp = 0x3ef370;
    s64 frame[46];
    s64 sp = (s32) (u32) frame;

    s4 = a0;
    v0 = (*(volatile s32 *) (u32) (a1 + 72));
    s0 = a1;
    s3 = (*(volatile s32 *) (u32) (a1 + 68));
    a0 = s0;
    (*(volatile u32 *) (u32) (sp + 336)) = (u32) v0;
    a1 = 0; v0 = Pes6Job_GetArg(a0, a1);
    v0 = v0 & 0xff;
    a0 = s0;
    { u32 a_ = (u32) (sp + 224) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a1 = 2; v0 = Pes6Job_GetArg(a0, a1);
    a0 = s0;
    s1 = v0;
    a1 = 1; v0 = Pes6Job_GetArg(a0, a1);
    { u32 a_ = (u32) (sp + 208) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    v0 = 1;
    s2 = (*(volatile s32 *) (u32) s3);
    (*(volatile u32 *) (u32) (sp + 288)) = (u32) v0;
    v0 = 18;
    if (s2 == v0) { a0 = s3; goto L_00339BE4; }
    a0 = 19; v0 = func_00333600(a0);
    if (v0 != 0) goto L_00339BE0;
    (*(volatile u32 *) (u32) (sp + 288)) = (u32) 0;
L_00339BE0:;
    a0 = s3;
L_00339BE4:;
    v0 = func_00326120(a0);
    s0 = v0;
    v0 = (*(volatile s32 *) (u32) (gp + -21540));
    (*(volatile u32 *) (u32) (sp + 320)) = (u32) v0; v0 = func_00292C50();
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; } v0 = func_0030DB90();
    s7 = v0;
    a0 = (*(volatile s32 *) (u32) (sp + 336));
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    s6 = v0 & 0xff;
    a1 = s6; v0 = func_00333740(a0, a1);
    s5 = v0; v0 = func_0030DA50();
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = 0; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 240)) = (u16) v0;
    a0 = 1; v0 = func_0030DAF0(a0);
    (*(volatile u16 *) (u32) (sp + 256)) = (u16) v0;
    a0 = s3; v0 = func_00325DE0(a0);
    fp = v0;
    a0 = s2; v0 = func_00325C20(a0);
    a2 = (*(volatile s16 *) (u32) (sp + 240));
    a0 = s6;
    a3 = (*(volatile s16 *) (u32) (sp + 256));
    a1 = 4;
    (*(volatile u32 *) (u32) (sp + 316)) = (u32) v0; v0 = func_00291BC0(a0, a1, a2, a3);
    { u32 a_ = (u32) (sp + 160) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    a0 = 18;
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) 0; v0 = func_00333600(a0);
    if (v0 == 0) { a0 = (s32) ((u32) sp + 0x16cU); goto L_00339CA0; }
    a0 = s3; v0 = func_003263A0(a0);
    if (v0 == 0) goto L_00339C9C;
    v0 = 1;
    (*(volatile u32 *) (u32) (sp + 272)) = (u32) v0;
L_00339C9C:;
    a0 = (s32) ((u32) sp + 0x16cU);
L_00339CA0:;
    a1 = s3;
    a2 = s6; func_00325FE0(a0, a1, a2);
    a0 = s3; v0 = func_00325F60(a0);
    a2 = v0;
    a0 = s4;
    a1 = 21; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 316));
    a0 = s4;
    a1 = 22; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x12;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 23; Pes6BitSet_Write(a0, a1, a2);
    a0 = 22; v0 = func_00333600(a0);
    v0 = (u64) 0 < (u64) v0;
    a0 = s4;
    a2 = v0 ^ 0x1;
    a1 = 24; Pes6BitSet_Write(a0, a1, a2);
    a0 = 22; v0 = func_00333600(a0);
    v1 = (*(volatile s32 *) (u32) (sp + 288));
    a0 = s4;
    a1 = 25;
    v0 = v1 | v0;
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    v0 = s2 ^ 0x6;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 != 0) { a0 = s4; goto L_00339D44; }
    v0 = s2 ^ 0x7;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s4;
L_00339D44:;
    a1 = 32; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s4;
    a1 = 33;
    v0 = v0 ^ 0x1;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s3 + 48));
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_00339D84; }
    v0 = s1 < 14;
    a2 = v0 ^ 0x1;
    a0 = s4;
L_00339D84:;
    a1 = 34; Pes6BitSet_Write(a0, a1, a2);
    v0 = (u64) 0 < (u64) fp;
    a0 = s4;
    v1 = v0 ^ 0x1;
    a1 = 35;
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = v0 & v1; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_00339DC8; }
    v0 = s1 < 14;
    a2 = v0 ^ 0x1;
    a0 = s4;
L_00339DC8:;
    a1 = 36; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 < 14;
    a0 = s4;
    a2 = v0 ^ 0x1;
    a1 = 37; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0xd;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 38; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 208) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_00339E14; }
    a2 = (u64) 0 < (u64) fp;
    a0 = s4;
L_00339E14:;
    a1 = 39; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 160) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s4; goto L_00339E34; }
    a2 = (u64) 0 < (u64) fp;
    a0 = s4;
L_00339E34:;
    a1 = 40; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) s3);
    v0 = 11;
    a2 = 0;
    { s32 c_ = v1 == v0; a0 = 1; if (c_) goto L_00339E60; }
    v0 = 12;
    if (v1 == v0) goto L_00339E60;
    a0 = 0;
L_00339E60:;
    if (a0 == 0) { a0 = s4; goto L_00339E7C; }
    at = s1 < 14;
    if (at != 0) goto L_00339E78;
    a2 = 1;
L_00339E78:;
    a0 = s4;
L_00339E7C:;
    a1 = 41; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x2;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 42; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x3;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 44; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x4;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 45; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x5;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 46; Pes6BitSet_Write(a0, a1, a2);
    v0 = s0 ^ 0x6;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 47; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (sp + 316));
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s4; goto L_00339F0C; }
    a0 = 19; v0 = func_00333600(a0);
    v0 = (u64) 0 < (u64) v0;
    a2 = v0 ^ 0x1;
    a0 = s4;
L_00339F0C:;
    a1 = 48; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 < 14;
    a0 = s4;
    a2 = v0 ^ 0x1;
    a1 = 49; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 224) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = v0 & 0xff;
    v1 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + (u32) s3);
    v0 = 1;
    s0 = (s32) ((u32) v1 + 0x8dcU);
    v1 = (*(volatile s32 *) (u32) (v1 + 2268));
    { s32 c_ = v1 != v0; a2 = 0; if (c_) goto L_00339F5C; }
    at = s5 < 14;
    if (at != 0) { a0 = s4; goto L_00339F60; }
    a2 = v0;
L_00339F5C:;
    a0 = s4;
L_00339F60:;
    a1 = 50; Pes6BitSet_Write(a0, a1, a2);
    v0 = s5 ^ 0xd;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 51; Pes6BitSet_Write(a0, a1, a2);
    a2 = s5 < 13;
    a0 = s4;
    a1 = 52; Pes6BitSet_Write(a0, a1, a2);
    a2 = s1 < 13;
    a0 = s4;
    a1 = 53; Pes6BitSet_Write(a0, a1, a2);
    v0 = s5 < 14;
    a2 = v0 ^ 0x1;
    if (a2 == 0) { a0 = s4; goto L_00339FBC; }
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = v0 ^ 0x1;
    a2 = (u64) 0 < (u64) v0;
    a0 = s4;
L_00339FBC:;
    a1 = 54; Pes6BitSet_Write(a0, a1, a2);
    v0 = s5 ^ 0xd;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 55; Pes6BitSet_Write(a0, a1, a2);
    a2 = s5 < 13;
    if (a2 == 0) { a0 = s4; goto L_00339FF4; }
    v0 = (*(volatile s32 *) (u32) s0);
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1;
    a0 = s4;
L_00339FF4:;
    a1 = 56; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0xd;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 57; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 < 14;
    a0 = s4;
    a2 = v0 ^ 0x1;
    a1 = 58; Pes6BitSet_Write(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (sp + 320));
    a0 = s4;
    a1 = 59; Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 60;
    a2 = s7; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a2 = (u64) 0 < (u64) v0;
    if (a2 == 0) { a0 = s4; goto L_0033A060; }
    v0 = s1 < 14;
    a2 = v0 ^ 0x1;
    a0 = s4;
L_0033A060:;
    a1 = 62; Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 63;
    a2 = s7; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x10;
    a2 = (u64) v0 < (u64) (s64) 1;
    if (a2 == 0) { a0 = s4; goto L_0033A09C; }
    v0 = (*(volatile s32 *) (u32) (sp + 336));
    v0 = (*(volatile u8 *) (u32) (v0 + 55));
    a2 = v0 ^ s6;
    a2 = (u64) a2 < (u64) (s64) 1;
    a0 = s4;
L_0033A09C:;
    a1 = 65; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x10;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 66; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x11;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 67; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x12;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 68; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x13;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 69; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 < 20;
    a0 = s4;
    a2 = v0 ^ 0x1;
    a1 = 70; Pes6BitSet_Write(a0, a1, a2);
    a0 = s3;
    a1 = 0; v0 = func_003265F0(a0, a1);
    a2 = v0;
    a0 = s4;
    a1 = 72; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    a0 = s4;
    a1 = 73;
    v0 = v0 ^ 0x2;
    a2 = (u64) v0 < (u64) (s64) 1; Pes6BitSet_Write(a0, a1, a2);
    a0 = s4;
    a1 = 73; v0 = Pes6BitSet_Lookup(a0, a1);
    s0 = v0;
    a0 = s4;
    a1 = 72; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = s0 | v0;
    a0 = s4;
    a1 = 71; Pes6BitSet_Write(a0, a1, a2);
    a2 = s1 < 13;
    a0 = s4;
    a1 = 75; Pes6BitSet_Write(a0, a1, a2);
    v0 = s1 ^ 0x7;
    a0 = s4;
    a2 = (u64) v0 < (u64) (s64) 1;
    a1 = 76; Pes6BitSet_Write(a0, a1, a2);
    a2 = s7;
    a0 = s4;
    a1 = 77; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (sp + 320));
    a0 = s4;
    v0 = (*(volatile s32 *) (u32) (sp + 272));
    a1 = 78;
    a2 = v1 | v0; Pes6BitSet_Write(a0, a1, a2);
    { u32 a_ = (u32) (sp + 176) & ~15U; v1 = *(volatile s64 *) a_; qh_v1 = *(volatile u64 *) (a_ + 8); }
    a0 = s4;
    v0 = (*(volatile s32 *) (u32) (sp + 272));
    a1 = 79;
    a2 = v1 | v0; Pes6BitSet_Write(a0, a1, a2);
    v0 = 1;
    return;
}
