/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE630(s32, s32);
void func_001EF900(s32, s32);
void func_001F3D10(s32, s32);
void func_00B24840(void);
s32 func_00B24870(void);
void func_00B248E0(void);
s32 func_00B24930(void);
s32 func_00B24950(void);
void func_00B249E0(void);
s32 func_00B24A60(void);
s32 func_00B24AD0(void);
void func_00B24AF0(void);
s32 func_00B24B20(void);

void func_00C8BD70(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s32 hi = 0, lo = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    v0 = func_00B24B20();
    if (v0 == 0) { ; goto L_00C8C088; }
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11004));
    if (a0 != 0) goto L_00C8BDB4;
    func_00B24AF0();
    goto L_00C8BE30;
L_00C8BDB4:;
    v0 = (s32) 0xcd0000U;
    v1 = (*(volatile u8 *) (u32) (v0 + -11006));
    if (v1 != 0) { v0 = 20; goto L_00C8BDE0; }
    a1 = 1; func_001EF900(a0, a1);
    v0 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v0 + -11004)) = (u32) 0; func_00B24AF0();
    goto L_00C8BE30;
L_00C8BDE0:;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    if (v0 != 0) goto L_00C8BE1C;
    v0 = 40;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    if (v0 == 0) { a1 = 1; goto L_00C8BE14; }
    a1 = 0; func_001EF900(a0, a1);
    goto L_00C8BE1C;
L_00C8BE14:;
    func_001EF900(a0, a1);
L_00C8BE1C:;
    v1 = (s32) 0xcd0000U;
    v0 = (s32) 0xcd0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -11006));
    v1 = (s32) ((u32) v1 + 0xffffffffU);
    (*(volatile u8 *) (u32) (v0 + -11006)) = (u8) v1;
L_00C8BE30:;
    v0 = func_00B24870();
    if (v0 == 0) goto L_00C8BE64;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11004));
    a1 = 1; func_001EF900(a0, a1);
    v0 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v0 + -11004)) = (u32) 0; func_00B24AF0();
    func_00B24840();
L_00C8BE64:;
    v0 = func_00B24AD0();
    v1 = (s32) 0xcd0000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -11007));
    if (v0 == v1) goto L_00C8BE94;
    v1 = (s32) 0xcd0000U;
    a1 = v0 & 0xff;
    (*(volatile u8 *) (u32) (v1 + -11007)) = (u8) v0;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -10992)); func_001F3D10(a0, a1);
L_00C8BE94:;
    v0 = func_00B24A60();
    if (v0 == 0) goto L_00C8BF14;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11004));
    a1 = 1; func_001EF900(a0, a1);
    v0 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v0 + -11004)) = (u32) 0; func_00B24AF0();
    v0 = (s32) 0xcd0000U;
    s2 = (s32) 0xcd0000U;
    s0 = 0;
    (*(volatile u8 *) (u32) (v0 + -11008)) = (u8) 0;
    s2 = (s32) ((u32) s2 + 0xffffd510U);
L_00C8BED4:;
    s3 = 0;
    s1 = s2;
L_00C8BEE0:;
    a0 = (*(volatile s32 *) (u32) (s1 + 20));
    a1 = 0; func_001EF900(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 5;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C8BEE0; }
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x14U); if (c_) goto L_00C8BED4; }
    func_00B249E0();
L_00C8BF14:;
    v0 = func_00B24950();
    if (v0 == 0) goto L_00C8C084;
    v0 = (s32) 0xcd0000U;
    v1 = 10;
    v0 = (*(volatile u8 *) (u32) (v0 + -11008));
    if (v0 != v1) goto L_00C8BFA0;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11004));
    a1 = 1; func_001EF900(a0, a1);
    v0 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v0 + -11004)) = (u32) 0; func_00B24AF0();
    v0 = (s32) 0xcd0000U;
    s2 = (s32) 0xcd0000U;
    s0 = 0;
    (*(volatile u8 *) (u32) (v0 + -11008)) = (u8) 0;
    s2 = (s32) ((u32) s2 + 0xffffd510U);
L_00C8BF68:;
    s3 = 0;
    s1 = s2;
L_00C8BF70:;
    a0 = (*(volatile s32 *) (u32) (s1 + 20));
    a1 = 0; func_001EF900(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v0 = s3 < 5;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00C8BF70; }
    s0 = (s32) ((u32) s0 + 0x1U);
    v0 = s0 < 2;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x14U); if (c_) goto L_00C8BF68; }
L_00C8BFA0:;
    v0 = func_00B24930();
    s0 = v0;
    v0 = (s32) 0xcd0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -11004));
    a1 = 1; func_001EF900(a0, a1);
    v0 = (s32) 0xcd0000U;
    (*(volatile u32 *) (u32) (v0 + -11004)) = (u32) 0; func_00B24AF0();
    v0 = (s32) 0xcb0000U;
    v1 = (s32) ((u32) s0 << 3);
    v0 = (s32) ((u32) v0 + 0x4fc0U);
    a3 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile s16 *) (u32) a3);
    v0 = (s32) 0xcd0000U;
    a1 = (*(volatile s16 *) (u32) (a3 + 2));
    v1 = (*(volatile s16 *) (u32) (a3 + 4));
    (*(volatile u16 *) (u32) (sp + 88)) = (u16) a2;
    (*(volatile u16 *) (u32) (sp + 90)) = (u16) a1;
    (*(volatile u16 *) (u32) (sp + 92)) = (u16) v1;
    v0 = (*(volatile u8 *) (u32) (v0 + -11008));
    v1 = (*(volatile s16 *) (u32) (a3 + 6));
    a0 = v0 & 0x1;
    { s32 c_ = v0 >= 0; (*(volatile u16 *) (u32) (sp + 94)) = (u16) v1; if (c_) goto L_00C8C014; }
    if (a0 == 0) { v1 = (s32) ((u32) a0 << 2); goto L_00C8C018; }
    a0 = (s32) ((u32) a0 + 0xfffffffeU);
L_00C8C014:;
    v1 = (s32) ((u32) a0 << 2);
L_00C8C018:;
    v0 = v0 & 0xff;
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 >> 1);
    a0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) sp + 0x58U);
    v1 = (s32) ((u32) v1 + 0xffffd524U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s0 = (*(volatile s32 *) (u32) v0);
    a0 = s0; func_001EE630(a0, a1);
    v0 = (s32) 0x590000U;
    v1 = (s32) 0xcd0000U;
    a2 = (*(volatile u8 *) (u32) (v0 + 7140));
    v0 = (s32) 0xcd0000U;
    a1 = (s32) ((u32) a2 << 1);
    (*(volatile u32 *) (u32) (v0 + -11004)) = (u32) s0;
    a1 = (s32) ((u32) a1 + (u32) a2);
    v0 = (s32) 0xcd0000U;
    (*(volatile u8 *) (u32) (v1 + -11006)) = (u8) a1;
    a0 = (*(volatile u8 *) (u32) (v0 + -11008));
    v0 = (s32) 0xcd0000U;
    v1 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -11008)) = (u8) v1; func_00B248E0();
L_00C8C084:;
L_00C8C088:;
    return;
}
