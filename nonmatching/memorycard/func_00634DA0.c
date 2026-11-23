/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001D67E0(s32, s32, s32, s32);
void func_001D7D60(s32, s32);
void func_001D7D80(s32, s32, s32, s32);
void func_001DF4F0(s32, s32);
void func_001EDA30(s32, s32);
void func_001EF900(s32, s32);
s32 func_001F08B0(s32);
void func_001F85A0(s32, s32);
s32 func_0021E4B0(s32, s32, s32);
s32 func_0021E720(s32, s32);
s32 func_00635470(s32, s32);
void func_0063A1C0(s32, s32, s32, s32);
void func_0063A240(s32, s32, s32);
void func_0063A2D0(s32, s32, s32);
s32 func_0063A3B0(s32, s32, s32, s32);
void func_0063A580(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_0063A7B0(s32);
s32 func_0063A7C0(void);
void func_0063AC20(s32);
void func_0063AD20(s32, s32, s32, s32);
void func_0063AE10(s32, s32, s32, s32);
void func_0063AE90(s32, s32, s32, s32);
s32 func_0063CA40(s32);
void func_006509C0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00650F50(s32, s32, s32, s32);
s32 func_00651E00(s32);
s32 func_00651FA0(void);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);
s32 strcmp(s32, s32);

void func_00634DA0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;
    s64 frame[26];
    s32 sp = (s32) (u32) frame;

    fp = (s32) ((u32) a1 + 0x244U);
    s7 = (s32) ((u32) a1 + 0x248U);
    s4 = a0;
    s3 = (s32) ((u32) a1 + 0x27cU);
    s6 = (*(volatile s32 *) (u32) (a1 + 4));
    (*(volatile u32 *) (u32) (sp + 172)) = (u32) a2; v0 = func_00651E00(a0);
    s5 = v0;
    v0 = (*(volatile s32 *) (u32) (sp + 172));
    v1 = (*(volatile u8 *) (u32) (v0 + 20));
    v0 = 1;
    if (v1 != v0) goto L_00634E04;
    s5 = 18;
L_00634E04:;
    s0 = (s32) 0x650000U;
    s2 = 0;
    s1 = s3;
    s0 = (s32) ((u32) s0 + 0x7cb0U);
L_00634E14:;
    v0 = (*(volatile s32 *) (u32) s1);
    if (v0 != 0) goto L_00634E38;
    v0 = (s32) 0x660000U;
    a0 = (*(volatile s32 *) (u32) (s6 + 92));
    a3 = (*(volatile s32 *) (u32) s0);
    a2 = (*(volatile s32 *) (u32) (v0 + -9852));
    a1 = s1; func_0063AE10(a0, a1, a2, a3);
L_00634E38:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v0 = s2 < 9;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_00634E14; }
    if (s4 == 0) { a1 = 0; goto L_00634E58; }
    a1 = (*(volatile u8 *) (u32) (s4 + 52));
L_00634E58:;
    a0 = s5; v0 = func_00635470(a0, a1);
    a0 = (*(volatile s32 *) (u32) s3);
    a1 = v0; func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s3); func_0063AC20(a0);
    a0 = (*(volatile s32 *) (u32) (s6 + 88));
    a1 = 1; func_001D7D60(a0, a1);
    v0 = 18;
    if (s5 == v0) { v1 = 14; goto L_00634E98; }
    if (s4 != 0) { v1 = (*(volatile u8 *) (u32) (s4 + 12)); goto L_00634E98; }
    v1 = 14;
L_00634E98:;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffff8060U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s8 *) (u32) v0);
    a0 = (*(volatile s32 *) (u32) (s6 + 88)); func_001D7D80(a0, a1, a2, a3);
    v0 = (s32) 0x350000U;
    a0 = v0 | 0x22; v0 = func_001F08B0(a0);
    a1 = v0;
    a0 = (s32) 0x660000U;
    v0 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffff8080U);
    v0 = (*(volatile u8 *) (u32) (v0 + -15630));
    a2 = (s32) ((u32) v0 + 0x1U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x660000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -15630));
    at = v0 < 36;
    if (at == 0) { a1 = (s32) ((u32) gp + 0xffff83acU); goto L_00634EF4; }
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff8080U);
L_00634EF4:;
    a0 = (*(volatile s32 *) (u32) (s3 + 4)); func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) fp);
    if (v0 != 0) { v0 = 9; goto L_00634F38; }
    a0 = (*(volatile s32 *) (u32) (s6 + 92));
    a1 = fp;
    a2 = 40; func_0063AE90(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) fp); v0 = func_001D67E0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) s7) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) fp);
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = 1; func_001EDA30(a0, a1);
    v0 = 9;
L_00634F38:;
    if (s5 == v0) { a0 = 29510; goto L_00634F78; }
    v0 = 10;
    if (s5 == v0) goto L_00634F74;
    v0 = 11;
    if (s5 == v0) goto L_00634F74;
    v0 = 14;
    if (s5 == v0) goto L_00634F74;
    v0 = (s32) ((u32) s5 + 0xffffffefU);
    at = (u64) v0 < (u64) (s64) 3;
    if (at == 0) { v0 = 13; goto L_00634FCC; }
L_00634F74:;
    a0 = 29510;
L_00634F78:;
    s0 = (s32) ((u32) gp + 0xffff83acU); func_0063A580(a0, a1, a2, a3, a4, a5, a6, a7);
    a2 = 1;
    a0 = 29510;
    a1 = 281;
    a3 = a2; v0 = func_0063A3B0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0xccU);
    a1 = (s32) ((u32) sp + 0xb0U);
    a2 = 1; func_0063A240(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s7);
    a1 = 29510;
    a2 = (*(volatile s32 *) (u32) (sp + 204));
    a3 = (s32) ((u32) sp + 0xb0U); func_0063A1C0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s7);
    a1 = 0; func_001EF900(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s3 + 8)); goto L_006351B0;
L_00634FCC:;
    if (s5 != v0) { v0 = 7; goto L_006350C4; }
    a0 = (*(volatile u8 *) (u32) (s4 + 371)); v0 = func_0063A7B0(a0);
    if (v0 != 0) { a0 = (*(volatile u16 *) (u32) (s4 + 224)); goto L_00634FEC; }
    s0 = (s32) ((u32) gp + 0xffff83acU); goto L_0063505C;
L_00634FEC:;
    v0 = a0 < 64;
    if (v0 != 0) { v0 = (s32) ((u32) a0 + 0xfffffedaU); goto L_00635008; }
    at = a0 < 204;
    if (at != 0) { v0 = (*(volatile u16 *) (u32) (s4 + 232)); goto L_00635018; }
    v0 = (s32) ((u32) a0 + 0xfffffedaU);
L_00635008:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { a1 = 0; goto L_0063504C; }
    v0 = (*(volatile u16 *) (u32) (s4 + 232));
L_00635018:;
    a1 = 0;
    v1 = a0 ^ v0;
    v1 = (u64) 0 < (u64) v1;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 1);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) s4 + (u32) v0);
    a0 = (s32) ((u32) v0 + 0x2cU); v0 = func_0021E720(a0, a1);
    s0 = v0; goto L_0063505C;
L_0063504C:;
    a2 = 0;
    a3 = 0xffff; v0 = func_0021E4B0(a0, a1, a2);
    s0 = v0;
L_0063505C:;
    a0 = 29510; func_0063A580(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (*(volatile u8 *) (u32) (s4 + 226));
    if (v0 != 0) { a2 = 2; goto L_00635074; }
    a2 = 0;
L_00635074:;
    a0 = s4;
    a1 = 29510; func_0063A2D0(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xccU);
    a1 = (s32) ((u32) sp + 0xb0U);
    a2 = 1; func_0063A240(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s7);
    a1 = 29510;
    a2 = (*(volatile s32 *) (u32) (sp + 204));
    a3 = (s32) ((u32) sp + 0xb0U); func_0063A1C0(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (s4 + 371)); v0 = func_0063A7B0(a0);
    a0 = (*(volatile s32 *) (u32) s7);
    v0 = v0 ^ 0x1;
    a1 = (u64) v0 < (u64) (s64) 1; func_001EF900(a0, a1);
    goto L_006351AC;
L_006350C4:;
    if (s5 == v0) { v0 = 7; goto L_006350DC; }
    v0 = 12;
    if (s5 != v0) goto L_00635140;
    v0 = 7;
L_006350DC:;
    { s32 c_ = s5 != v0; s0 = (s32) ((u32) s4 + 0x68U); if (c_) goto L_006350EC; }
    s1 = 4; goto L_006350F0;
L_006350EC:;
    s1 = 6;
L_006350F0:;
    a0 = 29510; func_0063A580(a0, a1, a2, a3, a4, a5, a6, a7);
    a2 = s1;
    a0 = s4;
    a1 = 29510; func_0063A2D0(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0xccU);
    a1 = (s32) ((u32) sp + 0xb0U);
    a2 = 1; func_0063A240(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s7);
    a1 = 29510;
    a2 = (*(volatile s32 *) (u32) (sp + 204));
    a3 = (s32) ((u32) sp + 0xb0U); func_0063A1C0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s7);
    a1 = 1; func_001EF900(a0, a1);
    goto L_006351AC;
L_00635140:;
    v0 = func_00651FA0();
    a0 = (*(volatile u16 *) (u32) (s4 + 96));
    a3 = v0 & 0xff;
    a1 = 0;
    a2 = 0; v0 = func_0021E4B0(a0, a1, a2);
    s0 = v0;
    a0 = 29510; func_0063A580(a0, a1, a2, a3, a4, a5, a6, a7);
    a1 = (*(volatile u16 *) (u32) (s4 + 96));
    a2 = 1;
    a0 = 29510;
    a3 = a2; v0 = func_0063A3B0(a0, a1, a2, a3);
    a0 = (s32) ((u32) sp + 0xccU);
    a1 = (s32) ((u32) sp + 0xb0U);
    a2 = 1; func_0063A240(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s7);
    a1 = 29510;
    a2 = (*(volatile s32 *) (u32) (sp + 204));
    a3 = (s32) ((u32) sp + 0xb0U); func_0063A1C0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) s7);
    a1 = 1; func_001EF900(a0, a1);
L_006351AC:;
    a0 = (*(volatile s32 *) (u32) (s3 + 8));
L_006351B0:;
    a1 = s0; func_0063AD20(a0, a1, a2, a3);
    v0 = 18;
    if (s5 == v0) { a0 = (*(volatile s32 *) (u32) (s3 + 12)); goto L_006351E8; }
    v0 = 19;
    if (s5 == v0) goto L_006351E4;
    v0 = (*(volatile s32 *) (u32) (sp + 172));
    v1 = (*(volatile u8 *) (u32) (v0 + 38));
    v0 = 1;
    if (v1 != v0) { v0 = 17; goto L_00635270; }
L_006351E4:;
    a0 = (*(volatile s32 *) (u32) (s3 + 12));
L_006351E8:;
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff8070U); func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 16));
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff80a0U); func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 20));
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff80c0U); func_0063AD20(a0, a1, a2, a3);
    v0 = (*(volatile s32 *) (u32) (sp + 172));
    v1 = (*(volatile u8 *) (u32) (v0 + 38));
    v0 = 1;
    if (v1 != v0) goto L_0063536C;
    if (s4 == 0) goto L_0063536C;
    a0 = (*(volatile u8 *) (u32) (s4 + 12)); v0 = func_0063CA40(a0);
    v1 = 10000;
    a0 = (s32) 0x660000U;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a1 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffff80d0U);
    a2 = hi;
    a1 = (s32) ((u32) a1 + 0xffffb010U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s3 + 20));
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff80d0U); func_0063AD20(a0, a1, a2, a3);
    goto L_0063536C;
L_00635270:;
    if (s5 != v0) { a0 = (s32) ((u32) sp + 0xc0U); goto L_006352B4; }
    v1 = (s32) 0x660000U;
    v0 = (s32) 0x660000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -15630));
    v0 = (*(volatile s32 *) (u32) (v0 + -16016));
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s16 *) (u32) v0);
    a0 = (*(volatile s16 *) (u32) (v0 + 2));
    v1 = (*(volatile s16 *) (u32) (v0 + 4));
    v0 = (*(volatile s16 *) (u32) (v0 + 6));
    (*(volatile u16 *) (u32) (sp + 192)) = (u16) a1;
    (*(volatile u16 *) (u32) (sp + 194)) = (u16) a0;
    (*(volatile u16 *) (u32) (sp + 196)) = (u16) v1;
    (*(volatile u16 *) (u32) (sp + 198)) = (u16) v0; goto L_006352BC;
L_006352B4:;
    a1 = s4; func_00650F50(a0, a1, a2, a3);
L_006352BC:;
    a1 = (*(volatile u16 *) (u32) (sp + 192));
    a0 = (s32) 0x660000U;
    a2 = (*(volatile u8 *) (u32) (sp + 194));
    a3 = (*(volatile u8 *) (u32) (sp + 195));
    a0 = (s32) ((u32) a0 + 0xffff8090U); func_006509C0(a0, a1, a2, a3, a4, a5, a6, a7);
    a2 = (*(volatile u8 *) (u32) (sp + 196));
    a4 = 100;
    a0 = (s32) 0x660000U;
    a1 = (s32) 0x660000U;
    v1 = (*(volatile u8 *) (u32) (sp + 197));
    a0 = (s32) ((u32) a0 + 0xffff80b0U);
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) a2 / (s32) a4); hi = (s32) ((s32) a2 % (s32) a4); lo = q_; }
    v0 = (*(volatile u8 *) (u32) (sp + 198));
    a2 = hi;
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) a4); hi = (s32) ((s32) v1 % (s32) a4); lo = q_; }
    a3 = hi;
    if ((s32) a4 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) a4); hi = (s32) ((s32) v0 % (s32) a4); lo = q_; }
    a4 = hi;
    a1 = (s32) ((u32) a1 + 0xffffb018U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile u8 *) (u32) (s4 + 12)); v0 = func_0063CA40(a0);
    v1 = 10000;
    a0 = (s32) 0x660000U;
    if ((s32) v1 != 0) { s64 q_ = (s32) ((s32) v0 / (s32) v1); hi = (s32) ((s32) v0 % (s32) v1); lo = q_; }
    a1 = (s32) 0x660000U;
    a0 = (s32) ((u32) a0 + 0xffff80d0U);
    a2 = hi;
    a1 = (s32) ((u32) a1 + 0xffffb010U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = (*(volatile s32 *) (u32) (s3 + 12));
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff8090U); func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 16));
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff80b0U); func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 20));
    a1 = (s32) 0x660000U;
    a1 = (s32) ((u32) a1 + 0xffff80d0U); func_0063AD20(a0, a1, a2, a3);
L_0063536C:;
    if (s4 == 0) { s0 = (s32) ((u32) gp + 0xffff83acU); goto L_006353C8; }
    v0 = 17;
    if (s5 != v0) { v0 = (s32) ((u32) s5 + 0xffffffeeU); goto L_0063539C; }
    a1 = (s32) 0x660000U;
    a0 = (s32) ((u32) s4 + 0x198U);
    a1 = (s32) ((u32) a1 + 0xffffcd30U); func_001F85A0(a0, a1);
    s0 = (s32) 0x660000U;
    s0 = (s32) ((u32) s0 + 0xffffcd30U); goto L_006353AC;
L_0063539C:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { s0 = (s32) ((u32) s4 + 0x12b8U); goto L_006353AC; }
    s0 = (s32) ((u32) gp + 0xffff83acU);
L_006353AC:;
    a1 = (s32) 0x660000U;
    a0 = s0;
    a1 = (s32) ((u32) a1 + 0xffffb028U); v0 = strcmp(a0, a1);
    if (v0 != 0) { a0 = (*(volatile s32 *) (u32) (s3 + 24)); goto L_006353CC; }
    s0 = (s32) ((u32) gp + 0xffff83acU);
L_006353C8:;
    a0 = (*(volatile s32 *) (u32) (s3 + 24));
L_006353CC:;
    a1 = s0; func_0063AD20(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s3 + 28));
    a1 = s0; func_0063AD20(a0, a1, a2, a3);
    v0 = func_0063A7C0();
    if (v0 != 0) { s1 = 1; goto L_006353FC; }
    s1 = 0;
    s0 = 1; goto L_00635400;
L_006353FC:;
    s0 = 0;
L_00635400:;
    v0 = (*(volatile s32 *) (u32) (s3 + 32));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s1 & 0xff; func_001DF4F0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s3 + 24));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s1 & 0xff; func_001DF4F0(a0, a1);
    v0 = (*(volatile s32 *) (u32) (s3 + 28));
    a0 = (*(volatile s32 *) (u32) (v0 + 12));
    a1 = s0 & 0xff; func_001DF4F0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s6 + 92));
    a1 = 1; func_001D7D60(a0, a1);
    return;
}
