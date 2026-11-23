/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
s64 func_001D7A20(s64, s64, s64);
void func_001DF820(s64, s64, s64, s64);
s64 func_001F08B0(s64);
s64 func_0021E4B0(s64, s64, s64);
void func_002DF0A0(s64, s64);
s64 func_008B94E0(s64, s64, s64, s64);
void func_008B9AB0(s64, s64, s64, s64);
void func_008C5750(s64, s64, s64, s64);
s64 func_008C6580(s64, s64);
s64 func_008D90A0(s64, s64, s64, s64);
s64 func_008D9300(s64, s64, s64, s64);

s64 func_008C5FC0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[10];
    s64 sp = (s32) (u32) frame;

    s2 = a0;
    { s32 c_ = s2 != 0; s0 = a1; if (c_) goto L_008C5FE8; }
    v0 = 0; goto L_008C6560;
L_008C5FE8:;
    a0 = (*(volatile u8 *) (u32) (s2 + 80));
    v1 = 4;
    if (a0 != v1) { a0 = (s32) ((u32) s2 + 0xb0U); goto L_008C6080; }
    v0 = 3;
    if (a0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 13); goto L_008C6030; }
    if (a0 == v1) { v0 = (*(volatile u8 *) (u32) (s2 + 81)); goto L_008C6030; }
    v0 = 2;
    if (a0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 12); goto L_008C6030; }
    v0 = 1;
    if (a0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_008C6030; }
    if (a0 == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_008C6030; }
    v0 = (s64) ((u64) 0 + (u64) (s64) 255);
L_008C6030:;
    v1 = v0 & 0xff;
    v1 = (s32) ((u32) v1 << 1);
    v0 = 0xffff;
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile u16 *) (u32) (v1 + 10));
    if (v1 == v0) goto L_008C607C;
    v1 = (*(volatile u8 *) (u32) (s2 + 9));
    v0 = 255;
    if (v1 != v0) goto L_008C607C;
    v0 = (s32) 0x3f0000U;
    a0 = v0 | 0x25; v0 = func_001F08B0(a0);
    a1 = v0;
    a0 = (s32) ((u32) s2 + 0xb0U); func_008C5750(a0, a1, a2, a3);
    a0 = s0; goto L_008C608C;
L_008C607C:;
    a0 = (s32) ((u32) s2 + 0xb0U);
L_008C6080:;
    a1 = 0; func_008C5750(a0, a1, a2, a3);
    a0 = s0;
L_008C608C:;
    v0 = func_008D90A0(a0, a1, a2, a3);
    v1 = v0 & 0x1060;
    v0 = 4096;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s2 + 9)); goto L_008C6378; }
    v0 = 32;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s2 + 9)); goto L_008C6114; }
    v0 = 64;
    if (v1 == v0) { v1 = (*(volatile u8 *) (u32) (s2 + 9)); goto L_008C60C4; }
    a0 = s0; goto L_008C6410;
L_008C60C4:;
    v0 = 255;
    if (v1 != v0) { a0 = (*(volatile s32 *) (u32) (s2 + 116)); goto L_008C60E4; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 1; goto L_008C6560;
L_008C60E4:;
    a1 = 0; func_008B9AB0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 112));
    a1 = 1; func_008B9AB0(a0, a1, a2, a3);
    v1 = 255;
    v0 = (s32) 0x84000000U;
    (*(volatile u8 *) (u32) (s2 + 9)) = (u8) v1;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 0; goto L_008C6560;
L_008C6114:;
    a1 = 255;
    if (v0 != a1) { v1 = (*(volatile u8 *) (u32) (s2 + 80)); goto L_008C62A8; }
    a0 = (*(volatile u8 *) (u32) (s2 + 80));
    v1 = 4;
    if (a0 == v1) { v0 = 3; goto L_008C6138; }
    v0 = (s32) 0x84020000U; goto L_008C61A0;
L_008C6138:;
    if (a0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 13); goto L_008C616C; }
    if (a0 == v1) { v0 = (*(volatile u8 *) (u32) (s2 + 81)); goto L_008C616C; }
    v0 = 2;
    if (a0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 12); goto L_008C616C; }
    v0 = 1;
    if (a0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_008C616C; }
    if (a0 == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_008C616C; }
    v0 = a1 & 0xff;
L_008C616C:;
    v1 = v0 & 0xff;
    v1 = (s32) ((u32) v1 << 1);
    v0 = 0xffff;
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile u16 *) (u32) (v1 + 10));
    if (v1 != v0) goto L_008C619C;
    v0 = (s32) 0x8c000000U;
    a0 = v0 | 0x8005; SD_call(a0);
    v0 = 5; goto L_008C6560;
L_008C619C:;
    v0 = (s32) 0x84020000U;
L_008C61A0:;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = (*(volatile s32 *) (u32) (s2 + 116));
    s1 = (*(volatile u8 *) (u32) (s2 + 81));
    s0 = (*(volatile u8 *) (u32) (s2 + 80));
    a1 = 0; func_008B9AB0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 112));
    a1 = 1; func_008B9AB0(a0, a1, a2, a3);
    a0 = 255;
    v0 = 3;
    (*(volatile u8 *) (u32) (s2 + 9)) = (u8) a0;
    v1 = (*(volatile u8 *) (u32) (s2 + 80));
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 13); goto L_008C6210; }
    v0 = 4;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s2 + 81)); goto L_008C6210; }
    v0 = 2;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 12); goto L_008C6210; }
    v0 = 1;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_008C6210; }
    if (v1 == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_008C6210; }
    v0 = a0 & 0xff;
L_008C6210:;
    (*(volatile u8 *) (u32) (s2 + 9)) = (u8) v0;
    v0 = (s32) ((u32) sp + 0x40U);
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s2 + 116)); goto L_008C628C; }
    v0 = s0 < 5;
    if (v0 != 0) { v0 = 3; goto L_008C6240; }
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) 0; goto L_008C6288;
L_008C6240:;
    if (s0 == v0) { v0 = 173; goto L_008C6270; }
    v0 = 2;
    if (s0 == v0) { v0 = 171; goto L_008C6270; }
    v0 = 1;
    if (s0 == v0) { v0 = 169; goto L_008C6270; }
    if (s0 == 0) { v0 = 168; goto L_008C6270; }
    v0 = s1 & 0xff;
    v0 = (s32) ((u32) v0 + 0xaeU);
L_008C6270:;
    if (v0 < 0) goto L_008C6288;
    a0 = (*(volatile s32 *) (u32) (s2 + 120));
    a2 = v0 & 0xffff;
    a1 = (s32) ((u32) sp + 0x40U); v0 = func_001D7A20(a0, a1, a2);
L_008C6288:;
    a0 = (*(volatile s32 *) (u32) (s2 + 116));
L_008C628C:;
    a1 = (s32) ((u32) sp + 0x40U); func_002DF0A0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s2 + 116));
    a1 = 1; func_008B9AB0(a0, a1, a2, a3);
    v0 = 0; goto L_008C6560;
L_008C62A8:;
    v0 = 3;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 13); goto L_008C62E4; }
    v0 = 4;
    if (v1 == v0) { v0 = (*(volatile u8 *) (u32) (s2 + 81)); goto L_008C62E4; }
    v0 = 2;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 12); goto L_008C62E4; }
    v0 = 1;
    if (v1 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_008C62E4; }
    if (v1 == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_008C62E4; }
    v0 = a1 & 0xff;
L_008C62E4:;
    s0 = v0 & 0xff;
    v0 = (s32) ((u32) s0 + 0xfffffff6U);
    at = (u64) v0 < (u64) (s64) 3;
    if (at == 0) { v0 = 13; goto L_008C6320; }
    a0 = (*(volatile u8 *) (u32) (s2 + 8)); v0 = func_008B94E0(a0, a1, a2, a3);
    if (v0 == 0) goto L_008C631C;
    v0 = (s32) 0x8c000000U;
    a0 = v0 | 0x8005; SD_call(a0);
    v0 = 5; goto L_008C6560;
L_008C631C:;
    v0 = 13;
L_008C6320:;
    if (s0 == v0) { v0 = (s32) 0x8c000000U; goto L_008C6338; }
    v0 = (*(volatile u8 *) (u32) (s2 + 9));
    if (s0 != v0) { a0 = (*(volatile s32 *) (u32) (s2 + 116)); goto L_008C6348; }
    v0 = (s32) 0x8c000000U;
L_008C6338:;
    a0 = v0 | 0x8005; SD_call(a0);
    v0 = 5; goto L_008C6560;
L_008C6348:;
    a1 = 0; func_008B9AB0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 112));
    a1 = 1; func_008B9AB0(a0, a1, a2, a3);
    v1 = 255;
    v0 = (s32) 0x84020000U;
    (*(volatile u8 *) (u32) (s2 + 9)) = (u8) v1;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 2; goto L_008C6560;
L_008C6378:;
    a1 = 255;
    if (v0 != a1) goto L_008C640C;
    a0 = (*(volatile u8 *) (u32) (s2 + 80));
    v1 = 4;
    if (a0 != v1) { v0 = (s32) 0x8c000000U; goto L_008C63EC; }
    v0 = 3;
    if (a0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 13); goto L_008C63CC; }
    if (a0 == v1) { v0 = (*(volatile u8 *) (u32) (s2 + 81)); goto L_008C63CC; }
    v0 = 2;
    if (a0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 12); goto L_008C63CC; }
    v0 = 1;
    if (a0 == v0) { v0 = (s64) ((u64) 0 + (u64) (s64) 11); goto L_008C63CC; }
    if (a0 == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_008C63CC; }
    v0 = a1 & 0xff;
L_008C63CC:;
    v1 = v0 & 0xff;
    v1 = (s32) ((u32) v1 << 1);
    v0 = 0xffff;
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile u16 *) (u32) (v1 + 10));
    if (v1 != v0) { v0 = (s32) 0x84020000U; goto L_008C63FC; }
    v0 = (s32) 0x8c000000U;
L_008C63EC:;
    a0 = v0 | 0x8005; SD_call(a0);
    v0 = 5; goto L_008C6560;
L_008C63FC:;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 6; goto L_008C6560;
L_008C640C:;
    a0 = s0;
L_008C6410:;
    v0 = func_008D9300(a0, a1, a2, a3);
    v1 = 4;
    if (v0 == v1) { a0 = s2; goto L_008C6498; }
    v1 = 8;
    if (v0 == v1) { a0 = s2; goto L_008C6480; }
    v1 = 2;
    if (v0 == v1) { a0 = s2; goto L_008C6468; }
    v1 = 1;
    if (v0 == v1) { a0 = s2; goto L_008C6450; }
    v0 = 0; goto L_008C64B0;
L_008C6450:;
    a1 = -5; v0 = func_008C6580(a0, a1);
    if (v0 != 0) { a0 = (*(volatile u8 *) (u32) (s2 + 80)); goto L_008C64BC; }
    v0 = 0; goto L_008C6560;
L_008C6468:;
    a1 = 5; v0 = func_008C6580(a0, a1);
    if (v0 != 0) goto L_008C64B8;
    v0 = 0; goto L_008C6560;
L_008C6480:;
    a1 = -1; v0 = func_008C6580(a0, a1);
    if (v0 != 0) goto L_008C64B8;
    v0 = 0; goto L_008C6560;
L_008C6498:;
    a1 = 1; v0 = func_008C6580(a0, a1);
    if (v0 != 0) goto L_008C64B8;
    v0 = 0; goto L_008C6560;
L_008C64B0:;
    goto L_008C6564;
L_008C64B8:;
    a0 = (*(volatile u8 *) (u32) (s2 + 80));
L_008C64BC:;
    v0 = (s32) 0x8f0000U;
    v1 = 4;
    { s32 c_ = a0 == v1; v0 = (s32) ((u32) v0 + 0xffffce98U); if (c_) goto L_008C6528; }
    v1 = 2;
    if (a0 == v1) { a0 = (*(volatile u16 *) (u32) (s2 + 74)); goto L_008C6504; }
    v1 = 1;
    if (a0 == v1) goto L_008C6500;
    v1 = 3;
    if (a0 == v1) goto L_008C6500;
    if (a0 == 0) goto L_008C6500;
    v1 = (*(volatile s32 *) (u32) (s2 + 132)); goto L_008C653C;
L_008C6500:;
    a0 = (*(volatile u16 *) (u32) (s2 + 74));
L_008C6504:;
    v1 = 0xffff;
    if (a0 == v1) goto L_008C6538;
    a3 = (*(volatile u16 *) (u32) (s2 + 72));
    a1 = 0;
    a2 = 0; v0 = func_0021E4B0(a0, a1, a2);
    goto L_008C6538;
L_008C6528:;
    v0 = (*(volatile u8 *) (u32) (s2 + 81));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    v0 = (*(volatile s32 *) (u32) (v0 + 32));
L_008C6538:;
    v1 = (*(volatile s32 *) (u32) (s2 + 132));
L_008C653C:;
    if (v1 == 0) { v0 = (s32) 0x84000000U; goto L_008C6554; }
    a0 = (*(volatile s32 *) (u32) (v1 + 12));
    a1 = v0; func_001DF820(a0, a1, a2, a3);
    v0 = (s32) 0x84000000U;
L_008C6554:;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = 3;
L_008C6560:;
L_008C6564:;
    return v0;
}
