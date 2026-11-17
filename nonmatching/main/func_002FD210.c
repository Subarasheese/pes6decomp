/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001520C0(void);
s32 func_001520F0(void);
s32 func_002D4870(s32);
s32 func_002D4970(s32);
s32 func_002FC780(s32, s32, s32, s32);
s32 func_002FC840(s32, s32, s32, s32);
s32 func_002FC940(void);
s32 func_002FCB30(s32, s32, s32, s32);
s32 func_002FCC30(void);
s32 func_002FCD90(s32, s32, s32, s32);
s32 func_002FCEE0(s32, s32, s32, s32);
s32 func_002FD0E0(void);
s32 func_00305E50(s32);
s32 func_00305E60(s32, s32);
s32 func_00360AB0(s32);
s32 func_009B45F0(s32, s32, s32, s32);
s32 func_009E1C90(s32, s32, s32, s32);
s32 func_00BF6260(s32, s32, s32, s32);
s32 func_00BF6280(s32, s32, s32, s32);
s32 func_00C00FC0(s32, s32, s32, s32);
s32 func_00C01090(s32, s32, s32, s32);

s32 func_002FD210(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s32 gp = 0x3ef370;
    union { f32 f; s32 i; } f0 = { 0 };
    union { f32 f; s32 i; } f1 = { 0 };
    union { f32 f; s32 i; } f2 = { 0 };
    s32 hi = 0, lo = 0;
    s32 fcc = 0;

    s1 = a0;
    s0 = 0; v0 = func_009B45F0(a0, a1, a2, a3);
    if (v0 != 0) goto L_002FD960;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7972));
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) { a0 = s0; goto L_002FD8F0; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd390U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2fd268U) goto L_002FD268; if (t_ == 0x2fd360U) goto L_002FD360; if (t_ == 0x2fd368U) goto L_002FD368; if (t_ == 0x2fd378U) goto L_002FD378; if (t_ == 0x2fd3dcU) goto L_002FD3DC; if (t_ == 0x2fd3ecU) goto L_002FD3EC; if (t_ == 0x2fd3fcU) goto L_002FD3FC; if (t_ == 0x2fd4dcU) goto L_002FD4DC; }
L_002FD268:;
    v0 = func_00BF6280(a0, a1, a2, a3);
    v1 = 2;
    if (v0 != v1) goto L_002FD28C;
    v0 = func_002FC780(a0, a1, a2, a3);
    s0 = v0; goto L_002FD8EC;
L_002FD28C:;
    v0 = func_00BF6260(a0, a1, a2, a3);
    v1 = 255;
    if (v0 == v1) { v1 = 1; goto L_002FD2C0; }
    v0 = func_00BF6260(a0, a1, a2, a3);
    v1 = 23;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    v1 = hi;
    v0 = (s32) ((u32) v1 << 3); goto L_002FD2C4;
    v1 = 1;
L_002FD2C0:;
    v0 = (s32) ((u32) v1 << 3);
L_002FD2C4:;
    a1 = (*(volatile s32 *) (u32) (gp + -32252));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 << 6);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    v0 = (s32) 0x45e70000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = v0 | 0x667;
    v1 = (*(volatile s16 *) (u32) (v1 + 20));
    f1.f = (*(volatile f32 *) (u32) (a1 + 16));
    f0.i = (s32) v0;
    f2.i = (s32) v1;
    f2.f = (f32) f2.i;
    f1.f = f1.f * f2.f;
    fcc = f0.f < f1.f;
    if (!fcc) { s0 = 6; goto L_002FD358; }
    v0 = (s32) 0x46520000U;
    v0 = v0 | 0x6400;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_002FD354;
    f0.f = (*(volatile f32 *) (u32) (a1 + 24));
    f1.i = f0.i & 0x7FFFFFFF;
    v0 = (s32) 0x45a10000U;
    v0 = v0 | 0x4000;
    f0.i = (s32) v0;
    fcc = f1.f < f0.f;
    if (!fcc) goto L_002FD354;
    s0 = 43; goto L_002FD358;
L_002FD354:;
    s0 = 6;
L_002FD358:;
    goto L_002FD8EC;
L_002FD360:;
    s0 = 58; goto L_002FD8EC;
L_002FD368:;
    v0 = func_002FCC30();
    s0 = v0; goto L_002FD8EC;
L_002FD378:;
    v0 = (s32) 0xcc0000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + -16892));
    if (a0 == v1) { a0 = 1; goto L_002FD3A4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_002FD3A8;
    a0 = 1;
L_002FD3A4:;
    v1 = (s32) ((u32) a0 << 3);
L_002FD3A8:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 18));
    if (v0 != 0) { s0 = 80; goto L_002FD3D4; }
    s0 = 76; goto L_002FD3D4;
    s0 = 80;
L_002FD3D4:;
    goto L_002FD8EC;
L_002FD3DC:;
    v0 = func_002FCB30(a0, a1, a2, a3);
    s0 = v0; goto L_002FD8EC;
L_002FD3EC:;
    v0 = func_002FC940();
    s0 = v0; goto L_002FD8EC;
L_002FD3FC:;
    v0 = func_00BF6280(a0, a1, a2, a3);
    v1 = 16;
    if (v0 != v1) goto L_002FD420;
    a0 = s1; v0 = func_002FCD90(a0, a1, a2, a3);
    s0 = v0; goto L_002FD8EC;
L_002FD420:;
    v0 = func_00BF6280(a0, a1, a2, a3);
    if (v0 != 0) { a0 = s1; goto L_002FD4CC; }
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (a0 == v1) { a0 = 1; goto L_002FD45C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_002FD460;
    a0 = 1;
L_002FD45C:;
    v1 = (s32) ((u32) a0 << 3);
L_002FD460:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 18));
    if (v0 != 0) goto L_002FD4A4;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7952));
    if (v0 == 0) { s0 = 29; goto L_002FD4C0; }
    s0 = 34; goto L_002FD4C0;
    s0 = 29;
    goto L_002FD4C0;
L_002FD4A4:;
    v0 = (s32) 0x590000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 7952));
    if (v0 == 0) { s0 = 32; goto L_002FD4C0; }
    s0 = 31; goto L_002FD4C0;
    s0 = 32;
L_002FD4C0:;
    goto L_002FD8EC;
    a0 = s1;
L_002FD4CC:;
    v0 = func_002FC840(a0, a1, a2, a3);
    s0 = v0; goto L_002FD8EC;
L_002FD4DC:;
    a0 = (*(volatile s32 *) (u32) (gp + -31080));
    v0 = (*(volatile s32 *) (u32) (a0 + 4));
    at = (u64) v0 < (u64) (s64) 13;
    if (at == 0) goto L_002FD8B0;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffd350U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2fd50cU) goto L_002FD50C; if (t_ == 0x2fd51cU) goto L_002FD51C; if (t_ == 0x2fd580U) goto L_002FD580; if (t_ == 0x2fd648U) goto L_002FD648; if (t_ == 0x2fd658U) goto L_002FD658; if (t_ == 0x2fd660U) goto L_002FD660; if (t_ == 0x2fd6d8U) goto L_002FD6D8; if (t_ == 0x2fd74cU) goto L_002FD74C; if (t_ == 0x2fd7e0U) goto L_002FD7E0; if (t_ == 0x2fd8b0U) goto L_002FD8B0; }
L_002FD50C:;
    v0 = func_002FD0E0();
    s0 = v0; goto L_002FD8B0;
L_002FD51C:;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (a0 == v1) { a0 = 1; goto L_002FD548; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_002FD54C;
    a0 = 1;
L_002FD548:;
    v1 = (s32) ((u32) a0 << 3);
L_002FD54C:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 18));
    if (v0 != 0) { s0 = 26; goto L_002FD578; }
    s0 = 25; goto L_002FD578;
    s0 = 26;
L_002FD578:;
    goto L_002FD8B0;
L_002FD580:;
    v1 = (*(volatile s32 *) (u32) (gp + -32252));
    f0.f = (*(volatile f32 *) (u32) (v1 + 16));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_002FD5A8; }
    at = v0 < 9242; goto L_002FD5AC;
    v0 = (s32) ((u32) 0 - (u32) v0);
L_002FD5A8:;
    at = v0 < 9242;
L_002FD5AC:;
    if (at != 0) goto L_002FD8B0;
    f0.f = (*(volatile f32 *) (u32) (v1 + 24));
    f0.i = (s32) f0.f;
    v0 = f0.i;
    if (v0 <= 0) { v0 = (s32) ((u32) 0 - (u32) v0); goto L_002FD5D8; }
    at = v0 < 5160; goto L_002FD5DC;
    v0 = (s32) ((u32) 0 - (u32) v0);
L_002FD5D8:;
    at = v0 < 5160;
L_002FD5DC:;
    if (at == 0) goto L_002FD8B0;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (a0 == v1) { a0 = 1; goto L_002FD610; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_002FD614;
    a0 = 1;
L_002FD610:;
    v1 = (s32) ((u32) a0 << 3);
L_002FD614:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 18));
    if (v0 != 0) { s0 = 24; goto L_002FD640; }
    s0 = 23; goto L_002FD640;
    s0 = 24;
L_002FD640:;
    goto L_002FD8B0;
L_002FD648:;
    v0 = func_002FCEE0(a0, a1, a2, a3);
    s0 = v0; goto L_002FD8B0;
L_002FD658:;
    s0 = 5; goto L_002FD8B0;
L_002FD660:;
    v1 = (*(volatile s32 *) (u32) (a0 + 68));
    v0 = 3;
    if (v1 != v0) goto L_002FD8B0;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (a0 == v1) { a0 = 1; goto L_002FD69C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
    v0 = (s32) ((u32) a0 << 3); goto L_002FD6A0;
    a0 = 1;
L_002FD69C:;
    v0 = (s32) ((u32) a0 << 3);
L_002FD6A0:;
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) v0 + (u32) a0);
    v1 = (s32) ((u32) v1 + 0xffffe5b0U);
    a0 = (s32) ((u32) a0 << 6);
    v0 = 1;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) (v1 + 18));
    if (v1 != v0) { s0 = 21; goto L_002FD6D0; }
    s0 = 16; goto L_002FD6D0;
    s0 = 21;
L_002FD6D0:;
    goto L_002FD8B0;
L_002FD6D8:;
    v0 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v0 + 7705));
    v0 = 255;
    if (v1 == v0) { a0 = 1; goto L_002FD704; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_002FD708;
    a0 = 1;
L_002FD704:;
    v1 = (s32) ((u32) a0 << 3);
L_002FD708:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v1 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v1 + 16));
    if (v0 != 0) goto L_002FD8B0;
    v1 = (*(volatile u8 *) (u32) (v1 + 18));
    v0 = 1;
    if (v1 != v0) { s0 = 22; goto L_002FD744; }
    s0 = 17; goto L_002FD744;
    s0 = 22;
L_002FD744:;
    goto L_002FD8B0;
L_002FD74C:;
    v1 = (*(volatile u8 *) (u32) (a0 + 36));
    v0 = 6;
    if (v1 == v0) goto L_002FD77C;
    v0 = 2;
    if (v1 == v0) goto L_002FD77C;
    v0 = 1;
    if (v1 == v0) goto L_002FD77C;
    goto L_002FD7D8;
L_002FD77C:;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (a0 == v1) { a0 = 1; goto L_002FD7A8; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_002FD7AC;
    a0 = 1;
L_002FD7A8:;
    v1 = (s32) ((u32) a0 << 3);
L_002FD7AC:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 18));
    if (v0 != 0) { s0 = 20; goto L_002FD7D8; }
    s0 = 15; goto L_002FD7D8;
    s0 = 20;
L_002FD7D8:;
    goto L_002FD8B0;
L_002FD7E0:;
    v0 = (*(volatile u8 *) (u32) (a0 + 41));
    v0 = v0 & 0x1;
    if (v0 == 0) goto L_002FD854;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (a0 == v1) { a0 = 1; goto L_002FD81C; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_002FD820;
    a0 = 1;
L_002FD81C:;
    v1 = (s32) ((u32) a0 << 3);
L_002FD820:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 18));
    if (v0 != 0) { s0 = 19; goto L_002FD8B0; }
    s0 = 14; goto L_002FD8B0;
    s0 = 19;
    goto L_002FD8B0;
L_002FD854:;
    v0 = (s32) 0x590000U;
    v1 = 255;
    a0 = (*(volatile u8 *) (u32) (v0 + 7705));
    if (a0 == v1) { a0 = 1; goto L_002FD880; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) a0 / (s32) v0); hi = (s32) ((s32) a0 % (s32) v0); lo = q_; }
    a0 = hi;
    v1 = (s32) ((u32) a0 << 3); goto L_002FD884;
    a0 = 1;
L_002FD880:;
    v1 = (s32) ((u32) a0 << 3);
L_002FD884:;
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) (v0 + 18));
    if (v0 != 0) { s0 = 18; goto L_002FD8B0; }
    s0 = 13; goto L_002FD8B0;
    s0 = 18;
L_002FD8B0:;
    v0 = func_00C00FC0(a0, a1, a2, a3);
    if (v0 != 0) goto L_002FD8EC;
    a0 = 28; v0 = func_00C01090(a0, a1, a2, a3);
    if (v0 == 0) { a0 = 30; goto L_002FD8D8; }
    s0 = 73;
    a0 = 30;
L_002FD8D8:;
    v0 = func_00C01090(a0, a1, a2, a3);
    if (v0 == 0) goto L_002FD8EC;
    s0 = 74;
L_002FD8EC:;
    a0 = s0;
L_002FD8F0:;
    v0 = func_002D4970(a0);
    a0 = 1; v0 = func_009E1C90(a0, a1, a2, a3);
    v1 = v0 & 0xff;
    v0 = 5;
    if (v1 != v0) goto L_002FD920;
    a1 = (s32) 0x300000U;
    a0 = s1;
    a1 = (s32) ((u32) a1 + 0xffffdc60U); v0 = func_00305E60(a0, a1);
L_002FD920:;
    v0 = func_001520F0();
    s2 = v0; v0 = func_001520C0();
    { s32 c_ = s2 != 0; s0 = v0; if (c_) goto L_002FD958; }
    v0 = (*(volatile s32 *) (u32) (gp + -32008));
    if (v0 == 0) { (*(volatile u32 *) (u32) (gp + -32008)) = (u32) s2; goto L_002FD95C; }
    v0 = (*(volatile s32 *) (u32) (gp + -32004));
    if (v0 != 0) goto L_002FD958;
    a0 = 0; v0 = func_002D4870(a0);
L_002FD958:;
    (*(volatile u32 *) (u32) (gp + -32008)) = (u32) s2;
L_002FD95C:;
    (*(volatile u32 *) (u32) (gp + -32004)) = (u32) s0;
L_002FD960:;
    v0 = (s32) 0x510000U;
    v1 = 8;
    a0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (a0 == v1) goto L_002FD9B8;
    v0 = 11;
    if (a0 == v0) goto L_002FD9B8;
    v0 = 12;
    if (a0 == v0) goto L_002FD9B8;
    v0 = 9;
    if (a0 == v0) goto L_002FD9B8;
    v0 = 15;
    if (a0 == v0) goto L_002FD9B8;
    a0 = 1; v0 = func_002D4970(a0);
    a0 = s1;
    (*(volatile u8 *) (u32) (gp + -21728)) = (u8) 0; v0 = func_00305E50(a0);
L_002FD9B8:;
    v0 = (s32) 0x510000U;
    v1 = 12;
    v0 = (*(volatile s32 *) (u32) (v0 + 4048));
    if (v0 != v1) { ; goto L_002FD9EC; }
    v0 = func_00360AB0(a0);
    if (v0 != 0) goto L_002FD9E8;
    a0 = s1;
    (*(volatile u8 *) (u32) (gp + -21728)) = (u8) 0; v0 = func_00305E50(a0);
L_002FD9E8:;
L_002FD9EC:;
    v0 = 1;
    return v0;
}
