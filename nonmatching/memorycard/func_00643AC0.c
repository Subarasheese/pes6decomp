/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);
s64 func_00623430(void);
void func_006291B0(s64, s64);
void func_00629270(s64, s64);
void func_006292E0(s64, s64, s64, s64);

s64 func_00643AC0(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 gp = 0x3ef370;
    s64 hi = 0, lo = 0;

    s5 = 0;
    s4 = (s32) 0x660000U;
    s4 = (s32) ((u32) s4 + 0xffffd8b0U);
    s1 = a0;
    s6 = (*(volatile u8 *) (u32) (a1 + 77));
    s0 = a1; v0 = func_00623430();
    s3 = v0;
    v0 = (s32) 0x660000U;
    v1 = 2;
    a0 = (*(volatile s32 *) (u32) (v0 + -10064));
    { s32 c_ = a0 == v1; s2 = (*(volatile s8 *) (u32) (s0 + 77)); if (c_) goto L_00643EBC; }
    v0 = 1;
    if (a0 == v0) goto L_00643B80;
    v0 = (*(volatile s16 *) (u32) (gp + -21812));
    a0 = 0;
    v1 = (*(volatile s16 *) (u32) (gp + -21810));
    a1 = 1;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) v0;
    (*(volatile u8 *) (u32) (s0 + 78)) = (u8) v0; func_006291B0(a0, a1);
    a0 = (*(volatile u8 *) (u32) (s0 + 9));
    a1 = (*(volatile u8 *) (u32) (s0 + 83));
    a2 = (*(volatile u8 *) (u32) (s0 + 84));
    a3 = 1; func_006292E0(a0, a1, a2, a3);
    a0 = (*(volatile u8 *) (u32) (s0 + 78));
    a1 = (*(volatile u8 *) (u32) (s0 + 77)); func_00629270(a0, a1);
    v1 = 8;
    v0 = 1;
    (*(volatile u32 *) (u32) (s4 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (s4 + 8)) = (u32) v1;
    (*(volatile u32 *) (u32) (s4 + 12)) = (u32) v1;
    (*(volatile u32 *) (u32) s4) = (u32) v0;
L_00643B80:;
    v0 = func_00623430();
    (*(volatile u32 *) (u32) (s4 + 12)) = (u32) v0;
    v0 = 2;
    if (s1 == v0) { v0 = s3 & 0x1; goto L_00643CD4; }
    v0 = 32;
    if (s1 == v0) goto L_00643CD0;
    v0 = 1;
    if (s1 == v0) { v0 = s3 & 0x1; goto L_00643C14; }
    v0 = 16;
    if (s1 == v0) goto L_00643C10;
    v0 = 512;
    if (s1 == v0) { v0 = (s32) 0x84000000U; goto L_00643BF8; }
    v0 = 256;
    if (s1 == v0) { v0 = (s32) 0x84020000U; goto L_00643BDC; }
    v1 = (*(volatile s8 *) (u32) (s0 + 77)); goto L_00643D90;
L_00643BDC:;
    a0 = v0 | 0x8400; SD_call(a0);
    v1 = 1;
    v0 = 2;
    (*(volatile u32 *) (u32) (s4 + 4)) = (u32) v1;
    (*(volatile u32 *) (u32) s4) = (u32) v0; goto L_00643D8C;
L_00643BF8:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 2;
    (*(volatile u32 *) (u32) (s4 + 4)) = (u32) v0;
    (*(volatile u32 *) (u32) s4) = (u32) v0; goto L_00643D8C;
L_00643C10:;
    v0 = s3 & 0x1;
L_00643C14:;
    if (v0 != 0) { v0 = (s32) 0x84000000U; goto L_00643C2C; }
    v0 = s3 & 0x2;
    if (v0 == 0) { v0 = (*(volatile s8 *) (u32) (s0 + 77)); goto L_00643CB0; }
    v0 = (s32) 0x84000000U;
L_00643C2C:;
    a0 = v0 | 0xf802; SD_call(a0);
    v1 = (*(volatile s8 *) (u32) (s0 + 77));
    v0 = 13;
    v1 = (s32) ((u32) v1 + 0xcU);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) v0;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    { s32 c_ = v0 >= 0; a0 = (s32) v0 >> 2; if (c_) goto L_00643C64; }
    v0 = (s32) ((u32) v0 + 0x3U);
    a0 = (s32) v0 >> 2;
L_00643C64:;
    v0 = (*(volatile s32 *) (u32) (s4 + 12));
    v1 = 1;
    v1 = (s32) ((u32) v1 << (a0 & 31));
    v0 = v0 & v1;
    if (v0 == 0) { v0 = 3; goto L_00643C80; }
    v0 = 0;
L_00643C80:;
    v1 = (*(volatile s8 *) (u32) (s0 + 77));
    a0 = (s64) ((u64) v0 << 56);
    a0 = a0 >> 56;
    v0 = 13;
    v1 = (s32) ((u32) v1 - (u32) a0);
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) v1;
    v1 = (s64) ((u64) v1 << 56);
    v1 = v1 >> 56;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) v0; goto L_00643D8C;
L_00643CB0:;
    if (v0 == 0) goto L_00643D8C;
    v0 = (s32) 0x84000000U;
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) 0;
    a0 = v0 | 0xf802; SD_call(a0);
    goto L_00643D8C;
L_00643CD0:;
    v0 = s3 & 0x1;
L_00643CD4:;
    if (v0 != 0) { v0 = (s32) 0x84000000U; goto L_00643CEC; }
    v0 = s3 & 0x2;
    if (v0 == 0) { v0 = (*(volatile s8 *) (u32) (s0 + 77)); goto L_00643D70; }
    v0 = (s32) 0x84000000U;
L_00643CEC:;
    a0 = v0 | 0xf802; SD_call(a0);
    v1 = (*(volatile s8 *) (u32) (s0 + 77));
    v0 = 13;
    v1 = (s32) ((u32) v1 + 0x1U);
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) v0;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    { s32 c_ = v0 >= 0; a0 = (s32) v0 >> 2; if (c_) goto L_00643D24; }
    v0 = (s32) ((u32) v0 + 0x3U);
    a0 = (s32) v0 >> 2;
L_00643D24:;
    v0 = (*(volatile s32 *) (u32) (s4 + 12));
    v1 = 1;
    v1 = (s32) ((u32) v1 << (a0 & 31));
    v0 = v0 & v1;
    if (v0 == 0) { v0 = 3; goto L_00643D40; }
    v0 = 0;
L_00643D40:;
    v1 = (*(volatile s8 *) (u32) (s0 + 77));
    a0 = (s64) ((u64) v0 << 56);
    a0 = a0 >> 56;
    v0 = 13;
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) v1;
    v1 = (s64) ((u64) v1 << 56);
    v1 = v1 >> 56;
    if ((s32) v0 != 0) { s64 q_ = (s32) ((s32) v1 / (s32) v0); hi = (s32) ((s32) v1 % (s32) v0); lo = q_; }
    v0 = hi;
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) v0; goto L_00643D8C;
L_00643D70:;
    if (v0 != 0) goto L_00643D8C;
    v1 = 4;
    v0 = (s32) 0x84000000U;
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) v1;
    a0 = v0 | 0xf802; SD_call(a0);
L_00643D8C:;
    v1 = (*(volatile s8 *) (u32) (s0 + 77));
L_00643D90:;
    v0 = v1 < 8;
    if (v0 != 0) { v0 = (*(volatile s8 *) (u32) (s0 + 77)); goto L_00643E24; }
    at = v1 < 14;
    if (at == 0) goto L_00643E20;
    v0 = (*(volatile s32 *) (u32) (s4 + 12));
    v0 = v0 & 0x4;
    if (v0 == 0) { at = s2 < 4; goto L_00643DEC; }
    at = s2 < 4;
    if (at == 0) { v0 = 8; goto L_00643DD0; }
    v0 = 8;
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) v0; goto L_00643E20;
L_00643DD0:;
    if (s2 != v0) goto L_00643E20;
    v0 = 9;
    if (v1 != v0) goto L_00643E20;
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) 0; goto L_00643E20;
L_00643DEC:;
    if (at == 0) { at = s2 < 9; goto L_00643E00; }
    v0 = 7;
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) v0; goto L_00643E0C;
L_00643E00:;
    if (at != 0) { v0 = (*(volatile s8 *) (u32) (s0 + 77)); goto L_00643E10; }
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) 0;
L_00643E0C:;
    v0 = (*(volatile s8 *) (u32) (s0 + 77));
L_00643E10:;
    v0 = v0 < 8;
    if (v0 != 0) goto L_00643E20;
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) 0;
L_00643E20:;
    v0 = (*(volatile s8 *) (u32) (s0 + 77));
L_00643E24:;
    if (v0 < 0) { v1 = (*(volatile s8 *) (u32) (s0 + 77)); goto L_00643E50; }
    at = v0 < 4;
    if (at == 0) goto L_00643E4C;
    v0 = (*(volatile s32 *) (u32) (s4 + 12));
    v0 = v0 & 0x1;
    if (v0 != 0) goto L_00643E4C;
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) 0;
L_00643E4C:;
    v1 = (*(volatile s8 *) (u32) (s0 + 77));
L_00643E50:;
    v0 = v1 < 4;
    if (v0 != 0) { v0 = (*(volatile s8 *) (u32) (s0 + 77)); goto L_00643E84; }
    at = v1 < 8;
    if (at == 0) goto L_00643E80;
    v0 = (*(volatile s32 *) (u32) (s4 + 12));
    v0 = v0 & 0x2;
    if (v0 != 0) goto L_00643E80;
    v0 = 4;
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) v0;
L_00643E80:;
    v0 = (*(volatile s8 *) (u32) (s0 + 77));
L_00643E84:;
    v1 = s6 & 0xff;
    if (v1 != v0) { v0 = (*(volatile s32 *) (u32) (s4 + 12)); goto L_00643EA4; }
    v1 = (*(volatile s32 *) (u32) (s4 + 8));
    v0 = (*(volatile s32 *) (u32) (s4 + 12));
    if (v1 == v0) { v0 = s5; goto L_00643EE0; }
    v0 = (*(volatile s32 *) (u32) (s4 + 12));
L_00643EA4:;
    (*(volatile u32 *) (u32) (s4 + 8)) = (u32) v0;
    a0 = (*(volatile u8 *) (u32) (s0 + 78));
    a1 = (*(volatile u8 *) (u32) (s0 + 77)); func_00629270(a0, a1);
    goto L_00643EDC;
L_00643EBC:;
    (*(volatile u8 *) (u32) (s0 + 78)) = (u8) s2;
    v0 = 12;
    (*(volatile u8 *) (u32) (s0 + 77)) = (u8) v0;
    a0 = (*(volatile u8 *) (u32) (s0 + 78));
    a1 = (*(volatile u8 *) (u32) (s0 + 77)); func_00629270(a0, a1);
    s5 = (*(volatile s32 *) (u32) (s4 + 4));
    (*(volatile u32 *) (u32) s4) = (u32) 0;
L_00643EDC:;
    v0 = s5;
L_00643EE0:;
    return v0;
}
