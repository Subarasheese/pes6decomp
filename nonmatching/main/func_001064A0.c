/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 DIntr(void);
void EIntr(void);
void func_00105180(void);
s64 func_00105260(void);
s64 func_00105E30(void);

s64 func_001064A0(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[14];
    s64 sp = (s32) (u32) frame;

    s2 = a1;
    s1 = a0;
    v0 = func_00105E30();
    { s32 c_ = v0 != 0; v0 = -1; if (c_) goto L_00106600; }
    v0 = DIntr();
    { s32 c_ = v0 == 0; a0 = s1; if (c_) goto L_00106510; }
    a1 = sp; v0 = func_00105260();
    s0 = v0;
    { s32 c_ = s0 >= 0; v1 = (*(volatile s32 *) (u32) sp); if (c_) goto L_001064FC; }
    EIntr();
    v0 = s0; goto L_00106600;
L_001064FC:;
    v0 = 16;
    { s32 c_ = v1 == v0; v0 = (*(volatile s32 *) (u32) (sp + 8)); if (c_) goto L_00106518; }
    EIntr();
L_00106510:;
    v0 = -1; goto L_00106600;
L_00106518:;
    v1 = (*(volatile s32 *) (u32) (sp + 12));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + 0xfffffd60U);
    { u32 a_ = (u32) (v0 + 0) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 16) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 32) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 48) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 64) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 80) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 96) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 112) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 128) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 144) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 160) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 176) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 192) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 208) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 224) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 240) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 256) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 272) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 288) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 304) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 320) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 336) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 352) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 368) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 384) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 400) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 416) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 432) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 512) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 528) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 544) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 560) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 576) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 592) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 608) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    { u32 a_ = (u32) (v0 + 624) & ~15U; *(volatile u64 *) a_ = (u64) 0; *(volatile u64 *) (a_ + 8) = 0; }
    a4 = (s32) ((u32) s2 << 0);
    (*(volatile u64 *) (u32) (v0 + 64)) = (u64) a4;
    a4 = (*(volatile s32 *) (u32) (v0 + 448));
    (*(volatile u64 *) (u32) (v0 + 448)) = (u64) a4;
    (*(volatile u64 *) (u32) (v0 + 456)) = (u64) 0;
    a4 = (*(volatile s32 *) (u32) (v0 + 464));
    (*(volatile u64 *) (u32) (v0 + 464)) = (u64) a4;
    (*(volatile u64 *) (u32) (v0 + 472)) = (u64) 0;
    a4 = (*(volatile s32 *) (u32) (v0 + 480));
    (*(volatile u64 *) (u32) (v0 + 480)) = (u64) a4;
    (*(volatile u64 *) (u32) (v0 + 488)) = (u64) 0;
    a4 = (*(volatile s32 *) (u32) (v0 + 496));
    (*(volatile u64 *) (u32) (v0 + 496)) = (u64) a4;
    (*(volatile u64 *) (u32) (v0 + 504)) = (u64) 0;
    EIntr();
    a0 = s1;
    a1 = s2; func_00105180();
L_00106600:;
    return v0;
}
