/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0017BD70(s32, s32, s32);
void func_0017BFF0(s32, s32, s32);
void func_0017C080(s32, s32, s32, s32);
s32 func_001AA0C0(s32);
s32 func_001B42D0(s32, s32);

void func_002D0E20(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s2 = 0;
    s1 = a0;
    s0 = (*(volatile s32 *) (u32) (a0 + 16));
    a0 = s0;
L_002D0E4C:;
    a1 = s2;
    a2 = (s32) 0x20000000U; func_0017BD70(a0, a1, a2);
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 54;
    if (v0 != 0) { a0 = s0; goto L_002D0E4C; }
    v0 = (s32) 0x20010000U;
    a0 = s0;
    a1 = 0;
    a2 = v0 | 0x1111; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 12));
    if (v1 == 0) { v0 = (*(volatile u8 *) (u32) (s1 + 511)); goto L_002D0FEC; }
    v0 = 1;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s1 + 511)); goto L_002D0E9C; }
    v1 = (*(volatile u8 *) (u32) (s1 + 516)); goto L_002D1154;
L_002D0E9C:;
    if (v0 != 0) { v0 = (s32) 0x20000000U; goto L_002D0F88; }
    v0 = (s32) 0x20010000U;
    a0 = s0;
    a1 = 3;
    a2 = v0 | 0x1111; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 519));
    if (v0 != 0) { v0 = (s32) 0x20000000U; goto L_002D0EE4; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    s2 = v0 | 0x11;
    a1 = 31;
    a2 = s2; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 510)); goto L_002D0EFC;
L_002D0EE4:;
    a0 = s0;
    s2 = v0 | 0x11;
    a1 = 30;
    a2 = s2; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 510));
L_002D0EFC:;
    if (v0 != 0) { a2 = s2; goto L_002D0F74; }
    v0 = (*(volatile u8 *) (u32) (s1 + 520));
    v0 = v0 & 0x1;
    if (v0 == 0) { a0 = s0; goto L_002D0F2C; }
    a0 = s0;
    a1 = 36;
    a2 = s2; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 520)); goto L_002D0F3C;
L_002D0F2C:;
    a1 = 34;
    a2 = s2; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 520));
L_002D0F3C:;
    v0 = v0 & 0x2;
    if (v0 == 0) { a2 = s2; goto L_002D0F60; }
    a2 = s2;
    a0 = s0;
    a1 = 37; func_0017BD70(a0, a1, a2);
    goto L_002D1150;
L_002D0F60:;
    a0 = s0;
    a1 = 35; func_0017BD70(a0, a1, a2);
    goto L_002D1150;
L_002D0F74:;
    a0 = s0;
    a1 = 38; func_0017BD70(a0, a1, a2);
    goto L_002D1150;
L_002D0F88:;
    a0 = s0;
    a1 = 23;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    v0 = (s32) 0x20010000U;
    a0 = s0;
    a1 = 4;
    a2 = v0 | 0x1111; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 519));
    if (v0 != 0) { v0 = (s32) 0x20000000U; goto L_002D0FD4; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 33;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    goto L_002D1150;
L_002D0FD4:;
    a0 = s0;
    a1 = 32;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    goto L_002D1150;
L_002D0FEC:;
    if (v0 != 0) { v0 = (s32) 0x20000000U; goto L_002D1094; }
    v0 = (s32) 0x20010000U;
    a0 = s0;
    a1 = 3;
    a2 = v0 | 0x1111; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 519));
    if (v0 != 0) { v0 = (s32) 0x20000000U; goto L_002D1030; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 31;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 510)); goto L_002D1044;
L_002D1030:;
    a0 = s0;
    a1 = 30;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 510));
L_002D1044:;
    if (v0 == 0) { v0 = (s32) 0x20000000U; goto L_002D1068; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 53;
    a2 = v0 | 0x1; func_0017BD70(a0, a1, a2);
    goto L_002D1150;
L_002D1068:;
    a0 = s0;
    a1 = 34;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 35;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    goto L_002D1150;
L_002D1094:;
    a0 = s0;
    a1 = 23;
    a2 = v0 | 0x10; func_0017BD70(a0, a1, a2);
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 39;
    a2 = v0 | 0x1; func_0017BD70(a0, a1, a2);
    v0 = (s32) 0x20010000U;
    a0 = s0;
    a1 = 4;
    a2 = v0 | 0x1111; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 519));
    if (v0 != 0) { v0 = (s32) 0x20000000U; goto L_002D10F4; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 33;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 510)); goto L_002D1108;
L_002D10F4:;
    a0 = s0;
    a1 = 32;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 510));
L_002D1108:;
    if (v0 == 0) { v0 = (s32) 0x20000000U; goto L_002D112C; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 53;
    a2 = v0 | 0x1; func_0017BD70(a0, a1, a2);
    goto L_002D1150;
L_002D112C:;
    a0 = s0;
    a1 = 34;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 35;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
L_002D1150:;
    v1 = (*(volatile u8 *) (u32) (s1 + 516));
L_002D1154:;
    v0 = 1;
    if (v1 != v0) { v1 = (*(volatile u8 *) (u32) (s1 + 516)); goto L_002D1178; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 45;
    a2 = v0 | 0x1; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s1 + 516));
L_002D1178:;
    v0 = 2;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (s1 + 12)); goto L_002D119C; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 46;
    a2 = v0 | 0x1; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 12));
L_002D119C:;
    if (v0 != 0) { v0 = (s32) 0x20010000U; goto L_002D11D0; }
    v0 = (*(volatile u8 *) (u32) (s1 + 510));
    if (v0 == 0) goto L_002D11CC;
    v0 = (s32) 0x20010000U;
    a0 = s0;
    a1 = 1;
    a2 = v0 | 0x1110; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 20)); goto L_002D11F4;
L_002D11CC:;
    v0 = (s32) 0x20010000U;
L_002D11D0:;
    a0 = s0;
    a1 = 2;
    a2 = v0 | 0x1110; func_0017BD70(a0, a1, a2);
    a0 = s0;
    a1 = 42;
    a2 = (s32) 0x20000000U; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 20));
L_002D11F4:;
    v0 = (*(volatile u8 *) (u32) (v0 + 10));
    if (v0 != 0) { v0 = (s32) 0x20000000U; goto L_002D1220; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    s4 = v0 | 0x1;
    a1 = 40;
    a2 = s4; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s1 + 514)); goto L_002D1238;
L_002D1220:;
    a0 = s0;
    s4 = v0 | 0x1;
    a1 = 41;
    a2 = s4; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s1 + 514));
L_002D1238:;
    v0 = 1;
    if (v1 != v0) { v1 = (*(volatile u8 *) (u32) (s1 + 515)); goto L_002D125C; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 16;
    a2 = v0 | 0x1111; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s1 + 515));
L_002D125C:;
    v0 = 1;
    if (v1 != v0) { v1 = (*(volatile u8 *) (u32) (s1 + 515)); goto L_002D127C; }
    a0 = s0;
    a1 = 47;
    a2 = s4; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s1 + 515));
L_002D127C:;
    v0 = 2;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (s1 + 20)); goto L_002D129C; }
    a0 = s0;
    a1 = 48;
    a2 = s4; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 20));
L_002D129C:;
    v0 = (*(volatile u8 *) (u32) (v0 + 2));
    v0 = v0 & 0x1;
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s1 + 20)); goto L_002D12C4; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 27;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 20));
L_002D12C4:;
    v0 = (*(volatile u8 *) (u32) (v0 + 2));
    v0 = v0 & 0x2;
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s1 + 513)); goto L_002D12EC; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    a1 = 28;
    a2 = v0 | 0x11; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 513));
L_002D12EC:;
    if (v0 != 0) { v0 = (s32) 0x20000000U; goto L_002D1314; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    s3 = v0 | 0x1111;
    a1 = 19;
    a2 = s3; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 518)); goto L_002D132C;
L_002D1314:;
    a0 = s0;
    s3 = v0 | 0x1111;
    a1 = 20;
    a2 = s3; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 518));
L_002D132C:;
    if (v0 != 0) { a0 = s0; goto L_002D134C; }
    a0 = s0;
    a1 = 12;
    a2 = s3; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 521)); goto L_002D135C;
L_002D134C:;
    a1 = 13;
    a2 = s3; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 521));
L_002D135C:;
    v0 = v0 & 0x1;
    if (v0 == 0) { v0 = (*(volatile u8 *) (u32) (s1 + 521)); goto L_002D137C; }
    a0 = s0;
    a1 = 8;
    a2 = s3; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (s1 + 521));
L_002D137C:;
    v0 = v0 & 0x2;
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) (s1 + 48)); goto L_002D139C; }
    a0 = s0;
    a1 = 9;
    a2 = s3; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s1 + 48));
L_002D139C:;
    v0 = 192;
    if (v1 == v0) { v1 = (*(volatile s32 *) (u32) (s1 + 12)); goto L_002D140C; }
    v0 = (*(volatile u8 *) (u32) (s1 + 509));
    if (v0 != 0) { v1 = (*(volatile u8 *) (u32) (s1 + 509)); goto L_002D13C8; }
    a0 = s0;
    a1 = 5;
    a2 = s3; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s1 + 509));
L_002D13C8:;
    v0 = 1;
    if (v1 != v0) { v1 = (*(volatile u8 *) (u32) (s1 + 509)); goto L_002D13E8; }
    a0 = s0;
    a1 = 6;
    a2 = s3; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile u8 *) (u32) (s1 + 509));
L_002D13E8:;
    v0 = 2;
    if (v1 != v0) { v0 = (*(volatile u8 *) (u32) (s1 + 522)); goto L_002D1440; }
    a0 = s0;
    a1 = 7;
    a2 = s3; func_0017BD70(a0, a1, a2);
    goto L_002D143C;
L_002D140C:;
    v0 = 1;
    if (v1 != v0) { a0 = s0; goto L_002D1430; }
    a0 = s0;
    a1 = 5;
    a2 = s3; func_0017BD70(a0, a1, a2);
    goto L_002D143C;
L_002D1430:;
    a1 = 6;
    a2 = s3; func_0017BD70(a0, a1, a2);
L_002D143C:;
    v0 = (*(volatile u8 *) (u32) (s1 + 522));
L_002D1440:;
    v0 = v0 & 0x1;
    if (v0 == 0) { v0 = (s32) 0x20000000U; goto L_002D146C; }
    v0 = (s32) 0x20000000U;
    a0 = s0;
    s2 = v0 | 0x11;
    a1 = 22;
    a2 = s2; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 20)); goto L_002D1484;
L_002D146C:;
    a0 = s0;
    s2 = v0 | 0x11;
    a1 = 21;
    a2 = s2; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 20));
L_002D1484:;
    v0 = 1;
    v1 = (*(volatile u8 *) (u32) (v1 + 8));
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (s1 + 20)); goto L_002D14A8; }
    a0 = s0;
    a1 = 14;
    a2 = s2; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 20));
L_002D14A8:;
    v0 = 2;
    v1 = (*(volatile u8 *) (u32) (v1 + 8));
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (s1 + 20)); goto L_002D14EC; }
    v0 = (*(volatile u8 *) (u32) (s1 + 513));
    if (v0 != 0) { a0 = s0; goto L_002D14DC; }
    a0 = s0;
    a1 = 15;
    a2 = s2; func_0017BD70(a0, a1, a2);
    goto L_002D14E8;
L_002D14DC:;
    a1 = 29;
    a2 = s2; func_0017BD70(a0, a1, a2);
L_002D14E8:;
    v0 = (*(volatile s32 *) (u32) (s1 + 20));
L_002D14EC:;
    v0 = (*(volatile u8 *) (u32) (v0 + 11));
    if (v0 != 0) { a0 = s0; goto L_002D1510; }
    a0 = s0;
    a1 = 17;
    a2 = s3; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 20)); goto L_002D1520;
L_002D1510:;
    a1 = 18;
    a2 = s3; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 20));
L_002D1520:;
    v0 = 1;
    v1 = (*(volatile u8 *) (u32) (v1 + 4));
    if (v1 != v0) { v0 = 2; goto L_002D1548; }
    a0 = s0;
    a1 = 24;
    a2 = s2; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 20)); goto L_002D1564;
L_002D1548:;
    if (v1 != v0) goto L_002D1560;
    a0 = s0;
    a1 = 25;
    a2 = s3; func_0017BD70(a0, a1, a2);
L_002D1560:;
    v1 = (*(volatile s32 *) (u32) (s1 + 20));
L_002D1564:;
    v0 = 1;
    v1 = (*(volatile u8 *) (u32) (v1 + 12));
    if (v1 != v0) { v1 = (*(volatile s32 *) (u32) (s1 + 20)); goto L_002D1588; }
    a0 = s0;
    a1 = 10;
    a2 = s3; func_0017BD70(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (s1 + 20));
L_002D1588:;
    v0 = 2;
    v1 = (*(volatile u8 *) (u32) (v1 + 12));
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (s1 + 20)); goto L_002D15E0; }
    v0 = (*(volatile u8 *) (u32) (s1 + 513));
    if (v0 != 0) { v0 = (s32) 0x20000000U; goto L_002D15BC; }
    a2 = s3;
    a0 = s0;
    a1 = 11; func_0017BD70(a0, a1, a2);
    goto L_002D15DC;
L_002D15BC:;
    a0 = s0;
    a1 = 11;
    a2 = v0 | 0x1100; func_0017BD70(a0, a1, a2);
    a2 = s2;
    a0 = s0;
    a1 = 26; func_0017BD70(a0, a1, a2);
L_002D15DC:;
    v0 = (*(volatile s32 *) (u32) (s1 + 20));
L_002D15E0:;
    v0 = (*(volatile u8 *) (u32) (v0 + 13));
    v0 = v0 & 0x1;
    if (v0 == 0) { v0 = (*(volatile s32 *) (u32) (s1 + 20)); goto L_002D1604; }
    a0 = s0;
    a1 = 43;
    a2 = s4; func_0017BD70(a0, a1, a2);
    v0 = (*(volatile s32 *) (u32) (s1 + 20));
L_002D1604:;
    v0 = (*(volatile u8 *) (u32) (v0 + 13));
    v0 = v0 & 0x2;
    if (v0 == 0) { a0 = (*(volatile u8 *) (u32) (s1 + 62)); goto L_002D1628; }
    a0 = s0;
    a1 = 44;
    a2 = s4; func_0017BD70(a0, a1, a2);
    a0 = (*(volatile u8 *) (u32) (s1 + 62));
L_002D1628:;
    a1 = 0; v0 = func_001B42D0(a0, a1);
    v1 = (s32) 0x3b0000U;
    a2 = s4;
    v1 = (s32) ((u32) v1 + 0x1170U);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a1 = (*(volatile u8 *) (u32) v0);
    a0 = s0; func_0017BD70(a0, a1, a2);
    s2 = (*(volatile s8 *) (u32) (s1 + 529));
    if (s2 == 0) { v0 = 7; goto L_002D1674; }
    a0 = s1; v0 = func_001AA0C0(a0);
    a0 = (s32) ((u32) v0 + 0x7U);
    v1 = (s32) ((u32) s2 + 0xffffffffU);
    v0 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) a0);
L_002D1674:;
    v1 = (s32) ((u32) v0 << 2);
    a0 = s0;
    v0 = (s32) 0x520000U;
    v0 = (s32) ((u32) v0 + 0x1d00U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a2 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_0017C080(a0, a1, a2, a3);
    a0 = s0;
    a1 = 1;
    a2 = 16; func_0017BFF0(a0, a1, a2);
    if (s2 == 0) { v1 = (*(volatile s32 *) (u32) (s0 + 28)); goto L_002D16BC; }
    v1 = (*(volatile s32 *) (u32) (s0 + 28));
    a0 = 1;
    (*(volatile u32 *) (u32) (v1 + 20)) = (u32) a0; goto L_002D16C0;
L_002D16BC:;
    (*(volatile u32 *) (u32) (v1 + 20)) = (u32) 0;
L_002D16C0:;
    return;
}
