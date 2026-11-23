/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void FlushCache(void);
void Pes6Heap_Free(s64);
s64 func_00101190(s64, s64, s64, s64, s64, s64, s64, s64);
void func_001014A8(s64, s64, s64, s64, s64, s64, s64, s64);
void func_00129A20(s64);
void func_00129AA0(s64);
s64 func_00140490(void);
s64 func_001404C0(void);
s64 func_001404D0(void);
s64 func_001404E0(void);
s64 func_00154070(s64);
void sceGsExecStoreImage(s64, s64, s64, s64, s64, s64, s64);
void sceGsSetDefDispEnv(s64, s64, s64, s64, s64, s64, s64, s64);

void func_00152420(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    u64 qh_v0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    volatile union { f32 f; s32 i; } f2 = { 0 };
    volatile union { f32 f; s32 i; } f3 = { 0 };
    volatile union { f32 f; s32 i; } f20 = { 0 };
    volatile union { f32 f; s32 i; } f21 = { 0 };
    volatile union { f32 f; s32 i; } f22 = { 0 };
    s64 frame[46];
    s64 sp = (s32) (u32) frame;

    s5 = a0;
    s4 = a1;
    v0 = func_001404D0();
    s0 = (s64) ((u64) v0 << 48);
    s0 = s0 >> 48; v0 = func_001404C0();
    f1.i = (s32) s0;
    s1 = (s64) ((u64) v0 << 48);
    v1 = (*(volatile s16 *) (u32) (s4 + 4));
    s1 = s1 >> 48;
    v0 = (*(volatile s16 *) (u32) (s4 + 6));
    f2.f = (f32) f1.i;
    f0.i = (s32) s1;
    f3.i = (s32) v1;
    f1.i = (s32) v0;
    f3.f = (f32) f3.i;
    f1.f = (f32) f1.i;
    f0.f = (f32) f0.i;
    f21.f = f2.f / f3.f;
    f22.f = f0.f / f1.f;
    v0 = func_001404E0();
    a1 = v0;
    a3 = s1;
    a0 = (s32) ((u32) sp + 0x140U);
    a2 = s0;
    a4 = 0;
    a5 = 0; sceGsSetDefDispEnv(a0, a1, a2, a3, a4, a5, a6, a7);
    s1 = (s32) ((u32) sp + 0x150U); v0 = func_00140490();
    a1 = (*(volatile u16 *) (u32) s1);
    v0 = (s32) ((u32) v0 >> 11);
    v1 = v0 & 0x1ff;
    a0 = (s32) ((u32) sp + 0x140U);
    v0 = -512;
    v0 = a1 & v0;
    v0 = v0 | v1;
    (*(volatile u16 *) (u32) s1) = (u16) v0; func_00129AA0(a0);
    a0 = (s32) ((u32) sp + 0x140U); func_00129A20(a0);
    a1 = (s32) ((u32) sp + 0x154U);
    a2 = (*(volatile s32 *) (u32) s1);
    a4 = (*(volatile u16 *) (u32) a1);
    v0 = (s64) ((u64) s0 << 48);
    a3 = (*(volatile s32 *) (u32) a1);
    v0 = v0 >> 48;
    v1 = (*(volatile u16 *) (u32) s1);
    a0 = (s32) ((u32) v0 << 1);
    v0 = (s64) ((u64) a2 << 44);
    s6 = (s64) ((u64) v0 >> 59);
    a1 = (*(volatile u8 *) (u32) (sp + 337));
    v0 = v1 & 0x1ff;
    fp = (s32) ((u32) v0 << 5);
    v1 = a4 & 0x7ff;
    v0 = (s64) ((u64) a3 << 42);
    s2 = (s64) ((u64) v1 << 48);
    v0 = (s64) ((u64) v0 >> 53);
    s2 = s2 >> 48;
    v0 = (s64) ((u64) v0 << 48);
    v1 = (s64) ((u64) a1 << 57);
    v0 = v0 >> 48;
    { u32 a_ = (u32) (sp + 192) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
    s7 = (s64) ((u64) v1 >> 58); v0 = func_00154070(a0);
    s1 = v0;
    v0 = (*(volatile s16 *) (u32) (s4 + 6));
    f20.i = (s32) 0;
    at = 0 < v0;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_00152668; }
    at = 0 < v0;
    if (at == 0) goto L_00152668;
    { u32 a_ = (u32) (sp + 192) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v0 = (s64) ((u64) v0 << 48);
    v0 = v0 >> 48;
    { u32 a_ = (u32) (sp + 176) & ~15U; *(volatile u64 *) a_ = (u64) v0; *(volatile u64 *) (a_ + 8) = qh_v0; }
L_0015259C:;
    f0.i = (s32) f20.f;
    a1 = (s64) ((u64) fp << 48);
    a2 = (s64) ((u64) s7 << 48);
    a3 = (s64) ((u64) s6 << 48);
    a1 = a1 >> 48;
    a2 = a2 >> 48;
    a3 = a3 >> 48;
    a0 = (s32) ((u32) sp + 0xd0U);
    a4 = s2;
    a6 = s0;
    a7 = 1;
    v0 = f0.i;
    v1 = (s64) ((u64) v0 << 48);
    { u32 a_ = (u32) (sp + 176) & ~15U; v0 = *(volatile s64 *) a_; qh_v0 = *(volatile u64 *) (a_ + 8); }
    v1 = v1 >> 48;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a5 = (s64) ((u64) v0 << 48);
    a5 = a5 >> 48; func_001014A8(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0; FlushCache();
    a0 = (s32) ((u32) sp + 0xd0U);
    a1 = s1; sceGsExecStoreImage(a0, a1, a2, a3, a4, a5, a6);
    a0 = 0;
    a1 = 0; v0 = func_00101190(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile s16 *) (u32) (s4 + 4));
    f1.i = (s32) 0;
    at = 0 < v0;
    { s32 c_ = at == 0; v1 = 0; if (c_) goto L_00152650; }
L_00152620:;
    v1 = (s32) ((u32) v1 + 0x1U);
    f0.i = (s32) f1.f;
    v0 = f0.i;
    f1.f = f1.f + f21.f;
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) s1 + (u32) v0);
    v0 = (*(volatile s16 *) (u32) v0);
    (*(volatile u16 *) (u32) s5) = (u16) v0;
    v0 = (*(volatile s16 *) (u32) (s4 + 4));
    v0 = v1 < v0;
    { s32 c_ = v0 != 0; s5 = (s32) ((u32) s5 + 0x2U); if (c_) goto L_00152620; }
L_00152650:;
    v0 = (*(volatile s16 *) (u32) (s4 + 6));
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < v0;
    { s32 c_ = v0 != 0; f20.f = f20.f + f22.f; if (c_) goto L_0015259C; }
L_00152668:;
    a0 = s1; Pes6Heap_Free(a0);
    return;
}
