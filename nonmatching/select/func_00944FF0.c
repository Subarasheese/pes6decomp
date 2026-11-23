/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
void func_0023EC10(s32, s32);
s32 func_002DCA30(void);
s32 func_002E3370(s32, s32);
void func_002E36D0(s32, s32);
s32 func_002EBEF0(s32);
s32 func_002EBF80(s32);
void func_002EC000(s32, s32, s32);
void func_002EC060(s32, s32, s32, s32);
void func_002EC160(s32, s32);
void func_002ECB70(s32, s32);
s32 func_002ED370(s32);
void func_008B31A0(s32, s32, s32, s32);
void func_008CA390(s32, s32, s32, s32);
void func_00944BE0(s32);

void func_00944FF0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;
    s32 gp = 0x3ef370;

    v0 = (s32) 0x590000U;
    v0 = (s32) ((u32) v0 + 0x1bb0U);
    s4 = a0;
    v1 = (s32) ((u32) s4 << 1);
    s2 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) 0x960000U;
    s1 = (s32) ((u32) s4 << 2);
    v0 = (s32) ((u32) v0 + 0x7e40U);
    s0 = (s32) ((u32) v0 + (u32) s1);
    s3 = (s32) 0x540000U;
    a0 = (*(volatile s32 *) (u32) s0);
    s6 = (*(volatile u16 *) (u32) s2);
    s3 = (s32) ((u32) s3 + 0xffffc300U); v0 = func_002EBEF0(a0);
    a0 = (*(volatile s32 *) (u32) s0);
    s7 = v0; v0 = func_002ED370(a0);
    v1 = 3;
    if (v0 == v1) { v0 = (s32) 0x84000000U; goto L_00945174; }
    v1 = 2;
    if (v0 == v1) goto L_0094507C;
    goto L_00945234;
L_0094507C:;
    v0 = (s32) 0x960000U;
    a1 = (s32) ((u32) gp + 0xffff882cU);
    v0 = (s32) ((u32) v0 + 0x7e40U);
    s5 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) s5);
    a2 = (s32) ((u32) gp + 0xffff8830U); func_002EC000(a0, a1, a2);
    v1 = s1;
    v0 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 + (u32) s4);
    a0 = (*(volatile s32 *) (u32) s5);
    v0 = (s32) ((u32) v0 + 0xffffc374U);
    v1 = (s32) ((u32) v1 << 2);
    a2 = 1;
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = 0;
    (*(volatile u32 *) (u32) v0) = (u32) a2; func_002EC060(a0, a1, a2, a3);
    v0 = (s32) 0x540000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -15500));
    if (v0 != v1) { v0 = (*(volatile s16 *) (u32) (s3 + 6)); goto L_009450F4; }
    v0 = (s32) 0x540000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -15480));
    if (v0 != v1) goto L_009450F0;
    v0 = 2; goto L_00945378;
L_009450F0:;
    v0 = (*(volatile s16 *) (u32) (s3 + 6));
L_009450F4:;
    if (v0 != 0) goto L_00945234;
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32324)); v0 = func_002EBEF0(a0);
    a1 = 1;
    if (v0 != a1) { v0 = (*(volatile s32 *) (u32) (gp + -18296)); goto L_0094513C; }
    a0 = (*(volatile s32 *) (u32) (gp + -18288)); v0 = func_002E3370(a0, a1);
    a0 = v0;
    a1 = 1; func_002E36D0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -20172));
    a1 = 1;
    a2 = a1; func_008CA390(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18296));
L_0094513C:;
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 1; func_008B31A0(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32324));
    a1 = 1; func_002EC160(a0, a1);
    a0 = (s32) 0x540000U;
    a1 = 8;
    a0 = (s32) ((u32) a0 + 0xffffc310U); func_0023EC10(a0, a1);
    v0 = 1;
    (*(volatile u16 *) (u32) (s3 + 6)) = (u16) v0; goto L_00945234;
L_00945174:;
    a0 = v0 | 0x8401; SD_call(a0);
    v1 = (*(volatile s16 *) (u32) (s3 + 6));
    if (v1 != 0) { v0 = 1; goto L_00945190; }
    v0 = 1; goto L_00945378;
L_00945190:;
    if (v1 != v0) goto L_00945234;
    v0 = (s32) 0x960000U;
    a1 = (s32) ((u32) gp + 0xffff8830U);
    a0 = (*(volatile s32 *) (u32) (v0 + 32320));
    a2 = (s32) ((u32) gp + 0xffff882cU); func_002EC000(a0, a1, a2);
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32320));
    a1 = 1; func_002EC060(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32324)); v0 = func_002EBEF0(a0);
    a1 = 1;
    if (v0 != a1) { v0 = (*(volatile s32 *) (u32) (gp + -18296)); goto L_009451FC; }
    a0 = (*(volatile s32 *) (u32) (gp + -18288)); v0 = func_002E3370(a0, a1);
    a0 = v0;
    a1 = 0; func_002E36D0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -20172));
    a1 = 1;
    a2 = 0; func_008CA390(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (gp + -18296));
L_009451FC:;
    a0 = (*(volatile s32 *) (u32) (v0 + 8));
    a1 = 0; func_008B31A0(a0, a1, a2, a3);
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32324));
    a1 = 0; func_002EC160(a0, a1);
    v0 = (s32) 0x540000U;
    a1 = 0;
    (*(volatile u32 *) (u32) (v0 + -15500)) = (u32) 0;
    v0 = (s32) 0x960000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 32320));
    (*(volatile u16 *) (u32) (s3 + 6)) = (u16) 0; func_002ECB70(a0, a1);
L_00945234:;
    v0 = func_002DCA30();
    if (v0 != 0) goto L_009452D8;
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0x7e70U);
    s1 = (s32) ((u32) v0 + (u32) s1);
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 <= 0) { v0 = (*(volatile s32 *) (u32) s1); goto L_00945268; }
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u32 *) (u32) s1) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) s1);
L_00945268:;
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) s0); goto L_009452C8; }
    v0 = (s32) ((u32) gp + 0xffff8194U);
    v1 = (s32) 0x8e0000U;
    a0 = (s32) ((u32) v0 + (u32) s4);
    v1 = (s32) ((u32) v1 + 0xffffc270U);
    a0 = (*(volatile u8 *) (u32) a0);
    v0 = (s32) 0x200000U;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) { a0 = s4 & 0xff; goto L_009452B4; }
    v0 = 4;
    if (v1 == v0) goto L_009452B0;
    goto L_009452C4;
L_009452B0:;
    a0 = s4 & 0xff;
L_009452B4:;
    func_00944BE0(a0);
    v0 = 4;
    (*(volatile u32 *) (u32) s1) = (u32) v0;
L_009452C4:;
    a0 = (*(volatile s32 *) (u32) s0);
L_009452C8:;
    v0 = func_002EBF80(a0);
    (*(volatile u16 *) (u32) s2) = (u16) v0; goto L_00945334;
L_009452D8:;
    v0 = func_002DCA30();
    if (v0 == 0) { v0 = (*(volatile u16 *) (u32) s2); goto L_00945338; }
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) s4 << 2);
    v1 = (s32) ((u32) v1 + 0x7e40U);
    v0 = (s32) ((u32) v0 + (u32) s4);
    s5 = (s32) ((u32) v1 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) s5);
    s1 = (s32) ((u32) v0 << 2); v0 = func_002EBF80(a0);
    v1 = v0 & 0xffff;
    a0 = (*(volatile s32 *) (u32) s5);
    v0 = (s32) 0x540000U;
    v0 = (s32) ((u32) v0 + 0xffffc370U);
    v0 = (s32) ((u32) v0 + (u32) s1);
    (*(volatile u32 *) (u32) v0) = (u32) v1; v0 = func_002EBEF0(a0);
    v1 = (s32) 0x540000U;
    v1 = (s32) ((u32) v1 + 0xffffc378U);
    v1 = (s32) ((u32) v1 + (u32) s1);
    (*(volatile u16 *) (u32) v1) = (u16) v0;
L_00945334:;
    v0 = (*(volatile u16 *) (u32) s2);
L_00945338:;
    if (s6 != v0) goto L_00945350;
    a0 = (*(volatile s32 *) (u32) s0); v0 = func_002EBEF0(a0);
    if (s7 == v0) { v0 = 0; goto L_00945378; }
L_00945350:;
    if (s4 != 0) { a0 = (s32) ((u32) s3 + 0x10U); goto L_0094536C; }
    a0 = (s32) ((u32) s3 + 0x10U);
    a1 = 4; func_0023EC10(a0, a1);
    goto L_00945374;
L_0094536C:;
    a1 = 8; func_0023EC10(a0, a1);
L_00945374:;
    v0 = 0;
L_00945378:;
    return;
}
