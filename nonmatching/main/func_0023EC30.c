/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s64);

s64 func_0023EC30(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;

    a5 = (s32) 0x8e0000U;
    a5 = (s32) ((u32) a5 + 0xffffc270U);
    a6 = (*(volatile u8 *) (u32) (gp + -32364));
    v0 = 2;
    a6 = (s32) ((u32) a6 << 2);
    a5 = (s32) ((u32) a5 + (u32) a6);
    a5 = (*(volatile s32 *) (u32) a5);
    { s32 c_ = a5 == v0; v1 = (*(volatile s8 *) (u32) a0); if (c_) goto L_0023ED44; }
    v0 = 1;
    if (a5 == v0) { a2 = 0; goto L_0023EC70; }
    a5 = (s32) 0x8e0000U; goto L_0023EE24;
L_0023EC70:;
    if (a4 <= 0) goto L_0023ED30;
    at = a4 < 9;
    { s32 c_ = at != 0; a0 = (s32) ((u32) a4 + 0xfffffff8U); if (c_) goto L_0023ED00; }
    { s32 c_ = a4 < 0; v1 = 0; if (c_) goto L_0023ECA4; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a4 < at;
    if (at == 0) goto L_0023ECA4;
    v1 = v0;
L_0023ECA4:;
    if (v1 == 0) goto L_0023ED00;
    a1 = a3;
L_0023ECB0:;
    v1 = (*(volatile s16 *) (u32) (a1 + 2));
    a2 = (s32) ((u32) a2 + 0x8U);
    v0 = a2 < a0;
    (*(volatile u16 *) (u32) a1) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a1 + 18));
    (*(volatile u16 *) (u32) (a1 + 16)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a1 + 34));
    (*(volatile u16 *) (u32) (a1 + 32)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a1 + 50));
    (*(volatile u16 *) (u32) (a1 + 48)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a1 + 66));
    (*(volatile u16 *) (u32) (a1 + 64)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a1 + 82));
    (*(volatile u16 *) (u32) (a1 + 80)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a1 + 98));
    (*(volatile u16 *) (u32) (a1 + 96)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a1 + 114));
    (*(volatile u16 *) (u32) (a1 + 112)) = (u16) v1;
    { s32 c_ = v0 != 0; a1 = (s32) ((u32) a1 + 0x80U); if (c_) goto L_0023ECB0; }
L_0023ED00:;
    at = a2 < a4;
    if (at == 0) goto L_0023ED30;
    v0 = (s32) ((u32) a2 << 4);
    a0 = (s32) ((u32) a3 + (u32) v0);
L_0023ED14:;
    v1 = (*(volatile s16 *) (u32) (a0 + 2));
    a2 = (s32) ((u32) a2 + 0x1U);
    v0 = a2 < a4;
    (*(volatile u16 *) (u32) a0) = (u16) v1;
    a0 = (s32) ((u32) a0 + 0x10U);
    if (v0 != 0) goto L_0023ED14;
L_0023ED30:;
    v0 = (s32) 0x84020000U;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 2; goto L_0023EFA0;
L_0023ED44:;
    if (a0 != 0) goto L_0023EE10;
    { s32 c_ = a4 <= 0; a1 = 0; if (c_) goto L_0023EE10; }
    at = a4 < 9;
    { s32 c_ = at != 0; a0 = (s32) ((u32) a4 + 0xfffffff8U); if (c_) goto L_0023EDE0; }
    { s32 c_ = a4 < 0; v0 = 0; if (c_) goto L_0023ED80; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a4 < at;
    if (at == 0) goto L_0023ED80;
    v0 = 1;
L_0023ED80:;
    if (v0 == 0) goto L_0023EDE0;
    a2 = a3;
L_0023ED8C:;
    v1 = (*(volatile s16 *) (u32) a2);
    a1 = (s32) ((u32) a1 + 0x8U);
    v0 = a1 < a0;
    (*(volatile u16 *) (u32) (a2 + 2)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a2 + 16));
    (*(volatile u16 *) (u32) (a2 + 18)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a2 + 32));
    (*(volatile u16 *) (u32) (a2 + 34)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a2 + 48));
    (*(volatile u16 *) (u32) (a2 + 50)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a2 + 64));
    (*(volatile u16 *) (u32) (a2 + 66)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a2 + 80));
    (*(volatile u16 *) (u32) (a2 + 82)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a2 + 96));
    (*(volatile u16 *) (u32) (a2 + 98)) = (u16) v1;
    v1 = (*(volatile s16 *) (u32) (a2 + 112));
    (*(volatile u16 *) (u32) (a2 + 114)) = (u16) v1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x80U); if (c_) goto L_0023ED8C; }
L_0023EDE0:;
    at = a1 < a4;
    if (at == 0) goto L_0023EE10;
    v0 = (s32) ((u32) a1 << 4);
    a0 = (s32) ((u32) a3 + (u32) v0);
L_0023EDF4:;
    v1 = (*(volatile s16 *) (u32) a0);
    a1 = (s32) ((u32) a1 + 0x1U);
    v0 = a1 < a4;
    (*(volatile u16 *) (u32) (a0 + 2)) = (u16) v1;
    a0 = (s32) ((u32) a0 + 0x10U);
    if (v0 != 0) goto L_0023EDF4;
L_0023EE10:;
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 1; goto L_0023EFA0;
L_0023EE24:;
    a4 = 128;
    a5 = (s32) ((u32) a5 + 0xffffc230U);
    a5 = (s32) ((u32) a5 + (u32) a6);
    a5 = (*(volatile s32 *) (u32) a5);
    if (a5 == a4) { v1 = (s32) ((u32) v1 << 4); goto L_0023EF68; }
    a4 = 64;
    if (a5 == a4) { v1 = (s32) ((u32) v1 << 4); goto L_0023EF28; }
    v0 = 32;
    if (a5 == v0) { v0 = (*(volatile s8 *) (u32) a0); goto L_0023EECC; }
    v0 = 16;
    if (a5 == v0) { v0 = (*(volatile s8 *) (u32) a0); goto L_0023EE6C; }
    v0 = 0; goto L_0023EFA0;
L_0023EE68:;
    v0 = (*(volatile s8 *) (u32) a0);
L_0023EE6C:;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    at = v0 < a1;
    if (at == 0) goto L_0023EE90;
    (*(volatile u8 *) (u32) a0) = (u8) a2;
L_0023EE90:;
    a4 = (*(volatile s8 *) (u32) a0);
    v0 = (s32) ((u32) a4 << 4);
    v0 = (s32) ((u32) a3 + (u32) v0);
    v0 = (*(volatile s8 *) (u32) (v0 + 12));
    if (v0 != 0) goto L_0023EE68;
    if (v1 == a4) { v0 = 3; goto L_0023EFA0; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = 3;
    goto L_0023EFA0;
L_0023EEC8:;
    v0 = (*(volatile s8 *) (u32) a0);
L_0023EECC:;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u8 *) (u32) a0) = (u8) v0;
    v0 = (s64) ((u64) v0 << 56);
    v0 = v0 >> 56;
    at = a2 < v0;
    if (at == 0) goto L_0023EEF0;
    (*(volatile u8 *) (u32) a0) = (u8) a1;
L_0023EEF0:;
    a4 = (*(volatile s8 *) (u32) a0);
    v0 = (s32) ((u32) a4 << 4);
    v0 = (s32) ((u32) a3 + (u32) v0);
    v0 = (*(volatile s8 *) (u32) (v0 + 12));
    if (v0 != 0) goto L_0023EEC8;
    if (v1 == a4) { v0 = 4; goto L_0023EFA0; }
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = 4;
    goto L_0023EFA0;
L_0023EF28:;
    a2 = (s32) ((u32) v1 + (u32) a3);
    a0 = (*(volatile s16 *) (u32) (a2 + 2));
    v1 = (*(volatile s16 *) (u32) (a2 + 4));
    { s32 c_ = a0 == v1; a1 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_0023EF48; }
    v0 = (s32) ((u32) a0 + 0xffffffffU);
    (*(volatile u16 *) (u32) a1) = (u16) v0; goto L_0023EF5C;
L_0023EF48:;
    v1 = (*(volatile s8 *) (u32) (a2 + 13));
    if (v1 != v0) { v0 = 5; goto L_0023EFA0; }
    v0 = (*(volatile s16 *) (u32) (a2 + 8));
    (*(volatile u16 *) (u32) a1) = (u16) v0;
L_0023EF5C:;
    v0 = 5;
    goto L_0023EFA0;
L_0023EF68:;
    a2 = (s32) ((u32) v1 + (u32) a3);
    a0 = (*(volatile s16 *) (u32) (a2 + 2));
    v1 = (*(volatile s16 *) (u32) (a2 + 8));
    { s32 c_ = a0 == v1; a1 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_0023EF88; }
    v0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u16 *) (u32) a1) = (u16) v0; goto L_0023EF9C;
L_0023EF88:;
    v1 = (*(volatile s8 *) (u32) (a2 + 13));
    if (v1 != v0) { v0 = 6; goto L_0023EFA0; }
    v0 = (*(volatile s16 *) (u32) (a2 + 4));
    (*(volatile u16 *) (u32) a1) = (u16) v0;
L_0023EF9C:;
    v0 = 6;
L_0023EFA0:;
    return v0;
}
