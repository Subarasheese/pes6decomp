/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
void func_0023EC10(s64, s64);
void func_00945940(void);
void func_00945D40(void);
void func_00946530(void);

void func_00951F60(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 at = 0, v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;

    a1 = (s32) 0x970000U;
    a0 = (s32) 0x970000U;
    v0 = (s32) 0x970000U;
    s6 = (s32) 0x540000U;
    a1 = (s32) ((u32) a1 + 0xffff80c4U);
    a0 = (s32) ((u32) a0 + 0xffff80c8U);
    s6 = (s32) ((u32) s6 + 0xffffc300U);
    s2 = (*(volatile s8 *) (u32) (v0 + -32540));
    v0 = (s32) 0x8e0000U;
    a2 = (s32) ((u32) s2 << 4);
    v1 = (*(volatile s32 *) (u32) (v0 + -15824));
    s1 = (s32) ((u32) a1 + (u32) a2);
    s0 = (s32) ((u32) a0 + (u32) a2);
    s4 = (*(volatile s32 *) (u32) s1);
    s3 = (*(volatile s32 *) (u32) s0);
    v0 = 128;
    { s32 c_ = v1 == v0; a3 = 0; if (c_) goto L_0095222C; }
    v0 = 64;
    if (v1 == v0) goto L_00952170;
    v0 = 32;
    if (v1 == v0) goto L_009520C8;
    v0 = 16;
    if (v1 == v0) goto L_00951FF8;
    goto L_009522E4;
L_00951FF8:;
    a2 = (s32) 0x960000U;
    v0 = (s32) ((u32) s4 << 5);
    a2 = (s32) ((u32) a2 + 0x7f20U);
    a0 = 3;
    a1 = (s32) ((u32) a2 + (u32) v0);
    a3 = (s32) 0x970000U;
    v0 = 6;
    a4 = (s32) 0x970000U;
    v1 = 5;
    a5 = (s32) 0x970000U;
    t4 = -1;
    a6 = 0xffff;
    s3 = (s32) ((u32) s3 + 0xffffffffU);
L_0095202C:;
    if (s3 >= 0) goto L_00952090;
    at = s4 < 3;
    { s32 c_ = at == 0; s3 = a0; if (c_) goto L_00952058; }
    a7 = (*(volatile s8 *) (u32) (a5 + -32540));
    a7 = (s32) ((u32) a7 << 4);
    a7 = (s32) ((u32) a2 + (u32) a7);
    (*(volatile u32 *) (u32) (a7 + 432)) = (u32) v1; goto L_00952088;
L_00952058:;
    at = s4 < 5;
    if (at == 0) goto L_00952078;
    a7 = (*(volatile s8 *) (u32) (a4 + -32540));
    a7 = (s32) ((u32) a7 << 4);
    a7 = (s32) ((u32) a2 + (u32) a7);
    (*(volatile u32 *) (u32) (a7 + 432)) = (u32) v0; goto L_00952088;
L_00952078:;
    a7 = (*(volatile s8 *) (u32) (a3 + -32540));
    a7 = (s32) ((u32) a7 << 4);
    a7 = (s32) ((u32) a2 + (u32) a7);
    (*(volatile u32 *) (u32) (a7 + 432)) = (u32) a0;
L_00952088:;
    (*(volatile u32 *) (u32) s0) = (u32) t4;
L_00952090:;
    a7 = (s32) ((u32) s3 << 3);
    a7 = (s32) ((u32) a1 + (u32) a7);
    a7 = (*(volatile u16 *) (u32) (a7 + 4684));
    if (a7 == a6) { s3 = (s32) ((u32) s3 + 0xffffffffU); goto L_0095202C; }
    v0 = (*(volatile s32 *) (u32) s0);
    if (s3 == v0) { a3 = 1; goto L_009522E4; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    a3 = 1;
    goto L_009522E4;
L_009520C8:;
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) s4 << 5);
    v1 = (s32) ((u32) v1 + 0x7f20U);
    a5 = 2;
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (s32) 0x970000U;
    a6 = 4;
    a1 = (s32) 0x970000U;
    a4 = -1;
    a2 = 0xffff;
    s3 = (s32) ((u32) s3 + 0x1U);
L_009520F4:;
    a3 = s3 < 4;
    if (a3 != 0) goto L_00952138;
    at = s4 < 4;
    { s32 c_ = at == 0; s3 = 0; if (c_) goto L_00952120; }
    a3 = (*(volatile s8 *) (u32) (a1 + -32540));
    a3 = (s32) ((u32) a3 << 4);
    a3 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u32 *) (u32) (a3 + 432)) = (u32) a6; goto L_00952130;
L_00952120:;
    a3 = (*(volatile s8 *) (u32) (a0 + -32540));
    a3 = (s32) ((u32) a3 << 4);
    a3 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u32 *) (u32) (a3 + 432)) = (u32) a5;
L_00952130:;
    (*(volatile u32 *) (u32) s0) = (u32) a4;
L_00952138:;
    a3 = (s32) ((u32) s3 << 3);
    a3 = (s32) ((u32) v0 + (u32) a3);
    a3 = (*(volatile u16 *) (u32) (a3 + 4684));
    if (a3 == a2) { s3 = (s32) ((u32) s3 + 0x1U); goto L_009520F4; }
    v0 = (*(volatile s32 *) (u32) s0);
    if (s3 == v0) { a3 = 1; goto L_009522E4; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    a3 = 1;
    goto L_009522E4;
L_00952170:;
    v0 = (s32) 0x960000U;
    v1 = (s32) ((u32) s3 << 3);
    v0 = (s32) ((u32) v0 + 0x7f20U);
    s5 = (s32) ((u32) v0 + (u32) v1);
    s4 = (s32) ((u32) s4 + 0xffffffffU);
L_00952184:;
    v0 = -1;
    if (s4 != v0) goto L_009521F0;
    v0 = (s32) 0x960000U;
    v1 = 2;
    a0 = (*(volatile s8 *) (u32) (v0 + 32544));
    if (a0 == v1) goto L_009521E0;
    if (a0 == 0) goto L_009521D0;
    v0 = 1;
    if (a0 == v0) goto L_009521C0;
    goto L_009521E8;
L_009521C0:;
    func_00945940();
    goto L_009521E8;
L_009521D0:;
    func_00945D40();
    goto L_009521E8;
L_009521E0:;
    func_00946530();
L_009521E8:;
    s4 = 7;
L_009521F0:;
    v0 = (s32) ((u32) s4 << 5);
    v1 = (s32) ((u32) s5 + (u32) v0);
    v1 = (*(volatile u16 *) (u32) (v1 + 4684));
    v0 = 0xffff;
    if (v1 == v0) { s4 = (s32) ((u32) s4 + 0xffffffffU); goto L_00952184; }
    v0 = (*(volatile s32 *) (u32) s1);
    if (s4 == v0) { a3 = 1; goto L_009522E4; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    a3 = 1;
    goto L_009522E4;
L_0095222C:;
    v0 = (s32) 0x960000U;
    v1 = (s32) ((u32) s3 << 3);
    v0 = (s32) ((u32) v0 + 0x7f20U);
    s5 = (s32) ((u32) v0 + (u32) v1);
    s4 = (s32) ((u32) s4 + 0x1U);
L_00952240:;
    v0 = 8;
    if (s4 != v0) goto L_009522B0;
    v0 = (s32) 0x960000U;
    v1 = 2;
    a0 = (*(volatile s8 *) (u32) (v0 + 32544));
    if (a0 == v1) goto L_009522A0;
    if (a0 == 0) goto L_00952290;
    v0 = 1;
    if (a0 == v0) goto L_00952280;
    goto L_009522A8;
L_00952280:;
    func_00945940();
    goto L_009522A8;
L_00952290:;
    func_00945D40();
    goto L_009522A8;
L_009522A0:;
    func_00946530();
L_009522A8:;
    s4 = 0;
L_009522B0:;
    v0 = (s32) ((u32) s4 << 5);
    v1 = (s32) ((u32) s5 + (u32) v0);
    v1 = (*(volatile u16 *) (u32) (v1 + 4684));
    v0 = 0xffff;
    if (v1 == v0) { s4 = (s32) ((u32) s4 + 0x1U); goto L_00952240; }
    v0 = (*(volatile s32 *) (u32) s1);
    if (s4 == v0) { a3 = 1; goto L_009522E4; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    a3 = 1;
L_009522E4:;
    v0 = (s32) 0x970000U;
    v1 = (s64) ((u64) a3 << 56);
    (*(volatile u8 *) (u32) (v0 + -32540)) = (u8) s2;
    v1 = v1 >> 56;
    (*(volatile u32 *) (u32) s1) = (u32) s4;
    a1 = 1;
    { s32 c_ = v1 != a1; (*(volatile u32 *) (u32) s0) = (u32) s3; if (c_) goto L_0095230C; }
    a0 = (s32) ((u32) s6 + 0x10U); func_0023EC10(a0, a1);
L_0095230C:;
    v0 = 0;
    return;
}
