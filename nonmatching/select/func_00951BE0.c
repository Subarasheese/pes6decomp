/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
void func_0023EC10(s64, s64);
void func_00945940(void);
void func_00945D40(void);
void func_00946530(void);

void func_00951BE0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;

    a2 = (s32) 0x970000U;
    a1 = (s32) 0x970000U;
    v0 = (s32) 0x970000U;
    s6 = (s32) 0x540000U;
    a2 = (s32) ((u32) a2 + 0xffff80c4U);
    a1 = (s32) ((u32) a1 + 0xffff80c8U);
    v1 = 128;
    s6 = (s32) ((u32) s6 + 0xffffc300U);
    s2 = (*(volatile s8 *) (u32) (v0 + -32540));
    v0 = (s32) 0x8e0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -15824));
    v0 = (s32) ((u32) s2 << 4);
    s1 = (s32) ((u32) a2 + (u32) v0);
    s0 = (s32) ((u32) a1 + (u32) v0);
    s4 = (*(volatile s32 *) (u32) s1);
    s3 = (*(volatile s32 *) (u32) s0);
    { s32 c_ = a0 == v1; a3 = 0; if (c_) goto L_00951E5C; }
    v1 = 64;
    if (a0 == v1) goto L_00951DB4;
    v1 = 32;
    if (a0 == v1) { v1 = (s32) ((u32) s4 << 2); goto L_00951D14; }
    v1 = 16;
    if (a0 == v1) { v1 = (s32) ((u32) s4 << 2); goto L_00951C78; }
    goto L_00951F00;
L_00951C78:;
    a0 = (s32) 0x960000U;
    a1 = (s32) ((u32) v1 + (u32) s4);
    a0 = (s32) ((u32) a0 + 0x7f20U);
    a1 = (s32) ((u32) a1 << 4);
    v1 = (s32) ((u32) s3 << 3);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a1 = (s32) ((u32) v1 + (u32) a0);
    v1 = 0xffff;
    s3 = (s32) ((u32) s3 + 0xffffffffU);
L_00951C9C:;
    { s32 c_ = s3 >= 0; a1 = (s32) ((u32) a1 + 0xfffffff8U); if (c_) goto L_00951CE4; }
    { s32 c_ = s4 != 0; s3 = 9; if (c_) goto L_00951CC4; }
    v1 = (s32) 0x970000U;
    a0 = 5;
    v1 = (s32) ((u32) v1 + 0xffff80d0U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) v0) = (u32) a0; goto L_00951CD8;
L_00951CC4:;
    v1 = (s32) 0x970000U;
    a0 = 3;
    v1 = (s32) ((u32) v1 + 0xffff80d0U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) v0) = (u32) a0;
L_00951CD8:;
    v0 = -1;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00951CF0;
L_00951CE4:;
    a0 = (*(volatile u16 *) (u32) (a1 + 5708));
    if (a0 == v1) { s3 = (s32) ((u32) s3 + 0xffffffffU); goto L_00951C9C; }
L_00951CF0:;
    v0 = (*(volatile s32 *) (u32) s0);
    if (s3 == v0) { a3 = 1; goto L_00951F00; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    a3 = 1;
    goto L_00951F00;
L_00951D14:;
    a0 = (s32) 0x960000U;
    a1 = (s32) ((u32) v1 + (u32) s4);
    a0 = (s32) ((u32) a0 + 0x7f20U);
    a1 = (s32) ((u32) a1 << 4);
    v1 = (s32) ((u32) s3 << 3);
    a0 = (s32) ((u32) a0 + (u32) a1);
    a1 = (s32) ((u32) v1 + (u32) a0);
    v1 = 0xffff;
    s3 = (s32) ((u32) s3 + 0x1U);
L_00951D38:;
    a0 = s3 < 10;
    { s32 c_ = a0 != 0; a1 = (s32) ((u32) a1 + 0x8U); if (c_) goto L_00951D84; }
    { s32 c_ = s4 != 0; s3 = 0; if (c_) goto L_00951D64; }
    v1 = (s32) 0x970000U;
    a0 = 4;
    v1 = (s32) ((u32) v1 + 0xffff80d0U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) v0) = (u32) a0; goto L_00951D78;
L_00951D64:;
    v1 = (s32) 0x970000U;
    a0 = 2;
    v1 = (s32) ((u32) v1 + 0xffff80d0U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u32 *) (u32) v0) = (u32) a0;
L_00951D78:;
    v0 = -1;
    (*(volatile u32 *) (u32) s0) = (u32) v0; goto L_00951D90;
L_00951D84:;
    a0 = (*(volatile u16 *) (u32) (a1 + 5708));
    if (a0 == v1) { s3 = (s32) ((u32) s3 + 0x1U); goto L_00951D38; }
L_00951D90:;
    v0 = (*(volatile s32 *) (u32) s0);
    if (s3 == v0) { a3 = 1; goto L_00951F00; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    a3 = 1;
    goto L_00951F00;
L_00951DB4:;
    v0 = (s32) 0x960000U;
    v1 = (s32) ((u32) s3 << 3);
    v0 = (s32) ((u32) v0 + 0x7f20U);
    s5 = (s32) ((u32) v0 + (u32) v1);
    s4 = (s32) ((u32) s4 + 0xffffffffU);
L_00951DC8:;
    v0 = -1;
    if (s4 != v0) goto L_00951E28;
    v0 = (s32) 0x960000U;
    v1 = (*(volatile s8 *) (u32) (v0 + 32544));
    v0 = 2;
    { s32 c_ = v1 == v0; s4 = 1; if (c_) goto L_00951E20; }
    if (v1 == 0) goto L_00951E10;
    if (v1 == s4) goto L_00951E00;
    goto L_00951E28;
L_00951E00:;
    func_00945940();
    goto L_00951E28;
L_00951E10:;
    func_00945D40();
    goto L_00951E28;
L_00951E20:;
    func_00946530();
L_00951E28:;
    v0 = (s32) ((u32) s4 << 2);
    v1 = (s32) ((u32) v0 + (u32) s4);
    v1 = (s32) ((u32) v1 << 4);
    v0 = 0xffff;
    v1 = (s32) ((u32) s5 + (u32) v1);
    v1 = (*(volatile u16 *) (u32) (v1 + 5708));
    if (v1 == v0) { s4 = (s32) ((u32) s4 + 0xffffffffU); goto L_00951DC8; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    a3 = 1; goto L_00951F00;
L_00951E5C:;
    v0 = (s32) 0x960000U;
    v1 = (s32) ((u32) s3 << 3);
    v0 = (s32) ((u32) v0 + 0x7f20U);
    s5 = (s32) ((u32) v0 + (u32) v1);
    s4 = (s32) ((u32) s4 + 0x1U);
L_00951E70:;
    a0 = 2;
    if (s4 != a0) goto L_00951ED0;
    v0 = (s32) 0x960000U;
    v1 = (*(volatile s8 *) (u32) (v0 + 32544));
    { s32 c_ = v1 == a0; s4 = 0; if (c_) goto L_00951EC8; }
    if (v1 == 0) goto L_00951EB8;
    v0 = 1;
    if (v1 == v0) goto L_00951EA8;
    goto L_00951ED0;
L_00951EA8:;
    func_00945940();
    goto L_00951ED0;
L_00951EB8:;
    func_00945D40();
    goto L_00951ED0;
L_00951EC8:;
    func_00946530();
L_00951ED0:;
    v0 = (s32) ((u32) s4 << 2);
    v1 = (s32) ((u32) v0 + (u32) s4);
    v1 = (s32) ((u32) v1 << 4);
    v0 = 0xffff;
    v1 = (s32) ((u32) s5 + (u32) v1);
    v1 = (*(volatile u16 *) (u32) (v1 + 5708));
    if (v1 == v0) { s4 = (s32) ((u32) s4 + 0x1U); goto L_00951E70; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    a3 = 1;
L_00951F00:;
    v0 = (s32) 0x970000U;
    v1 = (s64) ((u64) a3 << 56);
    (*(volatile u8 *) (u32) (v0 + -32540)) = (u8) s2;
    v1 = v1 >> 56;
    (*(volatile u32 *) (u32) s1) = (u32) s4;
    a1 = 1;
    { s32 c_ = v1 != a1; (*(volatile u32 *) (u32) s0) = (u32) s3; if (c_) goto L_00951F28; }
    a0 = (s32) ((u32) s6 + 0x10U); func_0023EC10(a0, a1);
L_00951F28:;
    v0 = 0;
    return;
}
