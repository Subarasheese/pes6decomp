/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6World_SetActive(s64);
void func_001A5670(f32);
void func_001AAF40(s64, s64);
void func_001AFD70(s64);
void func_001FCF60(s64, s64, s64, s64, f32, f32, f32, f32);
void func_00205200(s64, s64, s64, s64, f32, f32, f32, f32);
void func_00207360(s64);
void func_00209A00(s64, s64, s64);
void func_00270580(s64);
void func_002726D0(s64, s64, s64, s64);
s64 func_002727B0(void);
void func_002727C0(s64, s64, s64, s64);
void func_009B39E0(void);
void func_009B4460(s64);
s64 func_009B44E0(void);
void func_009B44F0(s64);
void func_009B4500(s64);
s64 func_009B4580(void);
void func_009B4590(s64);
void func_009B45E0(s64);
void func_009B6420(s64);
void memcpy(s64, s64, s64);

void func_00C94DA0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };
    s64 hi = 0, lo = 0;

    v0 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -9888));
    a0 = (*(volatile s32 *) (u32) (gp + -32228));
    v0 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) v1);
    a3 = (*(volatile u8 *) (u32) (v0 + -9872));
    v0 = (s32) 0xcd0000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -9880));
    v0 = (s32) 0x30000U;
    a2 = v0 | 0xe674;
    v0 = (s32) ((u32) a3 << 1);
    v0 = (s32) ((u32) v0 + (u32) a3);
    v0 = (s32) ((u32) v0 << 2);
    s0 = (s32) ((u32) v1 + (u32) v0); memcpy(a0, a1, a2);
    a0 = 0; func_00270580(a0);
    a0 = 0; Pes6World_SetActive(a0);
    v0 = (s32) 0xcd0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -9884));
    if (v1 == 0) { s1 = 0; goto L_00C94EAC; }
    v0 = 4;
    if (v1 == v0) goto L_00C94E48;
    v0 = 3;
    if (v1 == v0) goto L_00C94E48;
    v0 = 2;
    if (v1 == v0) goto L_00C94E48;
    v0 = 1;
    if (v1 == v0) goto L_00C94E48;
    goto L_00C94EA8;
L_00C94E48:;
    v0 = func_002727B0();
    a0 = v0; func_00205200(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    func_002726D0(a0, a1, a2, a3);
    a0 = 3; func_002727C0(a0, a1, a2, a3);
    v0 = (s32) 0x44b20000U;
    v0 = v0 | 0xc000;
    f12.i = (s32) v0;
    func_001A5670(f12.f);
    v0 = (s32) 0x590000U;
    v1 = 8;
    (*(volatile u8 *) (u32) (v0 + 10050)) = (u8) 0;
    a0 = 3;
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + 10064)) = (u32) v1;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v1 + 10051)) = (u8) a0;
    (*(volatile u8 *) (u32) (v0 + 10052)) = (u8) 0; func_001FCF60(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
L_00C94EA8:;
    s1 = 0;
L_00C94EAC:;
    v0 = 255;
L_00C94EB0:;
    if (s1 == v0) { a0 = 1; goto L_00C94EC4; }
    v0 = 23;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) s1 / (s32) v0); hi = (s32) ((s32) s1 % (s32) v0); lo = q_; }
    a0 = hi;
L_00C94EC4:;
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + 0xffffe5b0U);
    v1 = (s32) ((u32) v1 << 6);
    a1 = 0;
    s2 = (s32) ((u32) v0 + (u32) v1);
    a0 = (*(volatile s32 *) (u32) (s2 + 4));
    a2 = 0; func_00209A00(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) (s2 + 4)); func_00207360(a0);
    v1 = (*(volatile s32 *) (u32) (s2 + 4));
    v0 = (*(volatile u8 *) (u32) (v1 + 44));
    if (v0 == 0) goto L_00C94F20;
    a0 = (*(volatile s32 *) (u32) v1);
    a1 = 0; func_001AAF40(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s2 + 4));
    a0 = (*(volatile s32 *) (u32) v0); func_001AFD70(a0);
L_00C94F20:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 23;
    if (v0 != 0) { v0 = 255; goto L_00C94EB0; }
    a0 = 0; func_009B4500(a0);
    s2 = (*(volatile s16 *) (u32) (s0 + 4));
    if (s2 == 0) { a0 = 299; goto L_00C94F6C; }
    s1 = (s64) ((u64) s2 << 48);
    s1 = s1 >> 48; v0 = func_009B4580();
    v0 = v0 & 0xffff;
    at = v0 < s1;
    if (at == 0) goto L_00C94F68;
    a0 = s2 & 0xffff; func_009B4590(a0);
L_00C94F68:;
    a0 = 299;
L_00C94F6C:;
    func_009B4460(a0);
    s1 = (*(volatile s16 *) (u32) (s0 + 6));
    if (s1 == 0) goto L_00C94FA4;
    s0 = (s64) ((u64) s1 << 48);
    s0 = s0 >> 48; v0 = func_009B44E0();
    v0 = v0 & 0xffff;
    at = s0 < v0;
    if (at == 0) goto L_00C94FA4;
    a0 = s1 & 0xffff; func_009B44F0(a0);
L_00C94FA4:;
    v0 = func_009B4580();
    a0 = v0; func_009B6420(a0);
    func_009B39E0();
    a0 = 1; func_009B45E0(a0);
    return;
}
