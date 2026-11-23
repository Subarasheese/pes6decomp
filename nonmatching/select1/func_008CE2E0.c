/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_008CC830(void);
void func_008CD080(s32, s32, s32, s32);
void func_008CDAC0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_008CE230(s32, s32, s32, s32);

void func_008CE2E0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;
    s64 frame[8];
    s32 sp = (s32) (u32) frame;

    a1 = (s32) 0x8e0000U;
    a1 = (s32) ((u32) a1 + 0xffffa640U);
    v1 = 7;
    s0 = a0;
    a0 = (s32) ((u32) sp + 0x38U);
L_008CE304:;
    v0 = (*(volatile s8 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 > 0) goto L_008CE304;
    a1 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) sp + 0x30U);
    a1 = (s32) ((u32) a1 + 0xffffa648U);
    v1 = 7;
L_008CE330:;
    v0 = (*(volatile s8 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    a1 = (s32) ((u32) a1 + 0x1U);
    a0 = (s32) ((u32) a0 + 0x1U);
    if (v1 > 0) goto L_008CE330;
    v0 = func_008CC830();
    if (v0 == 0) { ; goto L_008CE6FC; }
    a1 = (*(volatile s32 *) (u32) (v0 + 168));
    at = (u64) a1 < (u64) (s64) 7;
    if (at == 0) goto L_008CE6E8;
    a0 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + 0xffffaaf0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x8ce388U) goto L_008CE388; if (t_ == 0x8ce45cU) goto L_008CE45C; if (t_ == 0x8ce530U) goto L_008CE530; if (t_ == 0x8ce594U) goto L_008CE594; if (t_ == 0x8ce5acU) goto L_008CE5AC; if (t_ == 0x8ce61cU) goto L_008CE61C; if (t_ == 0x8ce680U) goto L_008CE680; }
L_008CE388:;
    v1 = (*(volatile u8 *) (u32) (v0 + 214));
    v0 = 1;
    if (v1 != v0) { v0 = (s32) ((u32) a1 + (u32) sp); goto L_008CE3FC; }
    v0 = (s32) ((u32) a1 + (u32) sp);
    s1 = (*(volatile u8 *) (u32) (v0 + 56)); v0 = func_008CC830();
    if (v0 == 0) goto L_008CE6E8;
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (v0 + 172)); goto L_008CE3D0; }
    v1 = (*(volatile s32 *) (u32) (v0 + 172));
    a0 = (s32) ((u32) v1 + 0x1U);
    v1 = a0 < s1;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (v0 + 172)) = (u32) a0; if (c_) goto L_008CE3E8; }
    (*(volatile u32 *) (u32) (v0 + 172)) = (u32) 0; goto L_008CE3E8;
L_008CE3D0:;
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_008CE3E4; }
    v1 = (s32) ((u32) s1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (v0 + 172)) = (u32) v1; goto L_008CE3E8;
L_008CE3E4:;
    (*(volatile u32 *) (u32) (v0 + 172)) = (u32) v1;
L_008CE3E8:;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    goto L_008CE6E8;
L_008CE3FC:;
    s1 = (*(volatile u8 *) (u32) (v0 + 48)); v0 = func_008CC830();
    if (v0 == 0) goto L_008CE6E8;
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (v0 + 172)); goto L_008CE430; }
    v1 = (*(volatile s32 *) (u32) (v0 + 172));
    a0 = (s32) ((u32) v1 + 0x1U);
    v1 = a0 < s1;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (v0 + 172)) = (u32) a0; if (c_) goto L_008CE448; }
    (*(volatile u32 *) (u32) (v0 + 172)) = (u32) 0; goto L_008CE448;
L_008CE430:;
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_008CE444; }
    v1 = (s32) ((u32) s1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (v0 + 172)) = (u32) v1; goto L_008CE448;
L_008CE444:;
    (*(volatile u32 *) (u32) (v0 + 172)) = (u32) v1;
L_008CE448:;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    goto L_008CE6E8;
L_008CE45C:;
    v1 = (*(volatile u8 *) (u32) (v0 + 214));
    v0 = 1;
    if (v1 != v0) { v0 = (s32) ((u32) a1 + (u32) sp); goto L_008CE4D0; }
    v0 = (s32) ((u32) a1 + (u32) sp);
    s1 = (*(volatile u8 *) (u32) (v0 + 56)); v0 = func_008CC830();
    if (v0 == 0) goto L_008CE6E8;
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (v0 + 176)); goto L_008CE4A4; }
    v1 = (*(volatile s32 *) (u32) (v0 + 176));
    a0 = (s32) ((u32) v1 + 0x1U);
    v1 = a0 < s1;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (v0 + 176)) = (u32) a0; if (c_) goto L_008CE4BC; }
    (*(volatile u32 *) (u32) (v0 + 176)) = (u32) 0; goto L_008CE4BC;
L_008CE4A4:;
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_008CE4B8; }
    v1 = (s32) ((u32) s1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (v0 + 176)) = (u32) v1; goto L_008CE4BC;
L_008CE4B8:;
    (*(volatile u32 *) (u32) (v0 + 176)) = (u32) v1;
L_008CE4BC:;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    goto L_008CE6E8;
L_008CE4D0:;
    s1 = (*(volatile u8 *) (u32) (v0 + 48)); v0 = func_008CC830();
    if (v0 == 0) goto L_008CE6E8;
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (v0 + 176)); goto L_008CE504; }
    v1 = (*(volatile s32 *) (u32) (v0 + 176));
    a0 = (s32) ((u32) v1 + 0x1U);
    v1 = a0 < s1;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (v0 + 176)) = (u32) a0; if (c_) goto L_008CE51C; }
    (*(volatile u32 *) (u32) (v0 + 176)) = (u32) 0; goto L_008CE51C;
L_008CE504:;
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_008CE518; }
    v1 = (s32) ((u32) s1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (v0 + 176)) = (u32) v1; goto L_008CE51C;
L_008CE518:;
    (*(volatile u32 *) (u32) (v0 + 176)) = (u32) v1;
L_008CE51C:;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    goto L_008CE6E8;
L_008CE530:;
    v0 = (s32) ((u32) a1 + (u32) sp);
    s1 = (*(volatile u8 *) (u32) (v0 + 56)); v0 = func_008CC830();
    if (v0 == 0) goto L_008CE6E8;
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (v0 + 180)); goto L_008CE568; }
    v1 = (*(volatile s32 *) (u32) (v0 + 180));
    a0 = (s32) ((u32) v1 + 0x1U);
    v1 = a0 < s1;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (v0 + 180)) = (u32) a0; if (c_) goto L_008CE580; }
    (*(volatile u32 *) (u32) (v0 + 180)) = (u32) 0; goto L_008CE580;
L_008CE568:;
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_008CE57C; }
    v1 = (s32) ((u32) s1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (v0 + 180)) = (u32) v1; goto L_008CE580;
L_008CE57C:;
    (*(volatile u32 *) (u32) (v0 + 180)) = (u32) v1;
L_008CE580:;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    goto L_008CE6E8;
L_008CE594:;
    v0 = (s32) ((u32) a1 + (u32) sp);
    a1 = (*(volatile u8 *) (u32) (v0 + 56));
    a0 = s0; func_008CE230(a0, a1, a2, a3);
    goto L_008CE6E8;
L_008CE5AC:;
    v0 = (s32) ((u32) a1 + (u32) sp);
    s1 = (*(volatile u8 *) (u32) (v0 + 56)); v0 = func_008CC830();
    if (v0 == 0) goto L_008CE6E8;
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (v0 + 188)); goto L_008CE5F8; }
    a0 = (*(volatile s32 *) (u32) (v0 + 188));
    v1 = (s32) ((u32) s1 + 0xffffffffU);
    at = a0 < v1;
    if (at == 0) goto L_008CE6E8;
    a0 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) 0x84000000U;
    (*(volatile u32 *) (u32) (v0 + 188)) = (u32) a0;
    a0 = v1 | 0xf802; SD_call(a0);
    goto L_008CE6E8;
L_008CE5F8:;
    if (v1 == 0) goto L_008CE6E8;
    a0 = (s32) ((u32) v1 + 0xffffffffU);
    v1 = (s32) 0x84000000U;
    (*(volatile u32 *) (u32) (v0 + 188)) = (u32) a0;
    a0 = v1 | 0xf802; SD_call(a0);
    goto L_008CE6E8;
L_008CE61C:;
    v0 = (s32) ((u32) a1 + (u32) sp);
    s1 = (*(volatile u8 *) (u32) (v0 + 56)); v0 = func_008CC830();
    if (v0 == 0) goto L_008CE6E8;
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (v0 + 192)); goto L_008CE654; }
    v1 = (*(volatile s32 *) (u32) (v0 + 192));
    a0 = (s32) ((u32) v1 + 0x1U);
    v1 = a0 < s1;
    { s32 c_ = v1 != 0; (*(volatile u32 *) (u32) (v0 + 192)) = (u32) a0; if (c_) goto L_008CE66C; }
    (*(volatile u32 *) (u32) (v0 + 192)) = (u32) 0; goto L_008CE66C;
L_008CE654:;
    if (v1 != 0) { v1 = (s32) ((u32) v1 + 0xffffffffU); goto L_008CE668; }
    v1 = (s32) ((u32) s1 + 0xffffffffU);
    (*(volatile u32 *) (u32) (v0 + 192)) = (u32) v1; goto L_008CE66C;
L_008CE668:;
    (*(volatile u32 *) (u32) (v0 + 192)) = (u32) v1;
L_008CE66C:;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    goto L_008CE6E8;
L_008CE680:;
    v0 = (s32) ((u32) a1 + (u32) sp);
    s1 = (*(volatile u8 *) (u32) (v0 + 56)); v0 = func_008CC830();
    if (v0 == 0) goto L_008CE6E8;
    if (s0 <= 0) { v1 = (*(volatile s32 *) (u32) (v0 + 196)); goto L_008CE6CC; }
    a0 = (*(volatile s32 *) (u32) (v0 + 196));
    v1 = (s32) ((u32) s1 + 0xffffffffU);
    at = a0 < v1;
    if (at == 0) goto L_008CE6E8;
    a0 = (s32) ((u32) a0 + 0x1U);
    v1 = (s32) 0x84000000U;
    (*(volatile u32 *) (u32) (v0 + 196)) = (u32) a0;
    a0 = v1 | 0xf802; SD_call(a0);
    goto L_008CE6E8;
L_008CE6CC:;
    if (v1 == 0) goto L_008CE6E8;
    a0 = (s32) ((u32) v1 + 0xffffffffU);
    v1 = (s32) 0x84000000U;
    (*(volatile u32 *) (u32) (v0 + 196)) = (u32) a0;
    a0 = v1 | 0xf802; SD_call(a0);
L_008CE6E8:;
    func_008CD080(a0, a1, a2, a3);
    func_008CDAC0(a0, a1, a2, a3, a4, a5, a6, a7);
L_008CE6FC:;
    return;
}
