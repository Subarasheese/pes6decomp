/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s32 func_001F8070(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v1 = a0 & 0xffff;
    v0 = v1 & 0xff00;
    if (v0 != 0) { at = v1 < 913; goto L_001F80BC; }
    v0 = v1 < 128;
    if (v0 != 0) { v0 = a0; goto L_001F826C; }
    at = v1 < 256;
    if (at == 0) goto L_001F80B0;
    v0 = (s32) 0x3a0000U;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + 0xffff9420U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0); goto L_001F826C;
L_001F80B0:;
    v0 = a0;
    goto L_001F826C;
L_001F80BC:;
    if (at != 0) { v0 = v1 < 8208; goto L_001F80EC; }
    at = v1 < 1106;
    if (at == 0) goto L_001F80E8;
    v0 = (s32) 0x3a0000U;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + 0xffff8f00U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0); goto L_001F826C;
L_001F80E8:;
    v0 = v1 < 8208;
L_001F80EC:;
    if (v0 != 0) { v0 = v1 < 9472; goto L_001F811C; }
    at = v1 < 8979;
    if (at == 0) goto L_001F8118;
    v0 = (s32) 0x390000U;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + 0x5790U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0); goto L_001F826C;
L_001F8118:;
    v0 = v1 < 9472;
L_001F811C:;
    if (v0 != 0) { v0 = v1 < 12288; goto L_001F814C; }
    at = v1 < 9840;
    if (at == 0) goto L_001F8148;
    v0 = (s32) 0x390000U;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + 0x53c0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0); goto L_001F826C;
L_001F8148:;
    v0 = v1 < 12288;
L_001F814C:;
    if (v0 != 0) { v0 = v1 < 19968; goto L_001F817C; }
    at = v1 < 12543;
    if (at == 0) goto L_001F8178;
    v0 = (s32) 0x390000U;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + 0x40a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0); goto L_001F826C;
L_001F8178:;
    v0 = v1 < 19968;
L_001F817C:;
    if (v0 != 0) { v0 = 0xe000; goto L_001F81B0; }
    at = 0x9fa1;
    at = v1 < at;
    if (at == 0) goto L_001F81AC;
    v0 = (s32) 0x390000U;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + 0x6a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0); goto L_001F826C;
L_001F81AC:;
    v0 = 0xe000;
L_001F81B0:;
    v0 = v1 < v0;
    if (v0 != 0) { v0 = 0xf900; goto L_001F81FC; }
    at = 0xf900;
    at = v1 < at;
    if (at == 0) goto L_001F81F8;
    v0 = (s32) ((u32) a0 + 0x1040U);
    at = 0xf9fd;
    a0 = v0 & 0xffff;
    at = a0 < at;
    if (at != 0) { v0 = a0; goto L_001F826C; }
    v0 = 0xf9fc;
    a0 = v0 & 0xffff;
    v0 = a0;
    goto L_001F826C;
L_001F81F8:;
    v0 = 0xf900;
L_001F81FC:;
    v0 = v1 < v0;
    if (v0 != 0) { v0 = 0xff00; goto L_001F8234; }
    at = 0xfb00;
    at = v1 < at;
    if (at == 0) goto L_001F8230;
    v0 = 0xfa11;
    if (v1 != v0) goto L_001F8228;
    a0 = 0xed95;
L_001F8228:;
    v0 = a0; goto L_001F826C;
L_001F8230:;
    v0 = 0xff00;
L_001F8234:;
    v0 = v1 < v0;
    if (v0 != 0) { v0 = a0; goto L_001F826C; }
    at = 0xffe6;
    at = v1 < at;
    if (at == 0) goto L_001F8268;
    v0 = (s32) 0x380000U;
    v1 = (s32) ((u32) v1 << 1);
    v0 = (s32) ((u32) v0 + 0x47f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u16 *) (u32) v0); goto L_001F826C;
L_001F8268:;
    v0 = a0;
L_001F826C:;
    return v0;
}
