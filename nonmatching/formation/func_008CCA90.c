/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SD_call(s32);
s32 func_008B9430(void);
void func_008D88D0(s32, s32);
s32 func_008D90A0(s32, s32, s32, s32);
s32 func_008D9140(s32, s32, s32, s32);
s32 func_008D9220(s32, s32, s32, s32);
s32 func_008D9300(s32, s32, s32, s32);

s32 func_008CCA90(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;

    s3 = a0;
    s2 = a1;
    s0 = (*(volatile s32 *) (u32) (a0 + 1140));
    s1 = (*(volatile u8 *) (u32) (a0 + 25));
    a0 = s2; v0 = func_008D90A0(a0, a1, a2, a3);
    v1 = v0 & 0x60;
    v0 = 32;
    if (v1 == v0) { v0 = s1 & 0xff; goto L_008CCAF4; }
    v0 = 64;
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_008CCAE4; }
    goto L_008CCB34;
L_008CCAE4:;
    a0 = v0 | 0x8401; SD_call(a0);
    v0 = 1; goto L_008CCC54;
L_008CCAF4:;
    at = v0 < 8;
    if (at == 0) { v0 = (s32) 0x84020000U; goto L_008CCB14; }
    v0 = (s32) ((u32) v0 + (u32) s3);
    v0 = (*(volatile u8 *) (u32) (v0 + 28));
    if (v0 == 0) { v0 = (s32) 0x8c000000U; goto L_008CCB24; }
    v0 = (s32) 0x84020000U;
L_008CCB14:;
    a0 = v0 | 0x8400; SD_call(a0);
    v0 = 2; goto L_008CCC54;
L_008CCB24:;
    a0 = v0 | 0x8005; SD_call(a0);
    v0 = 5; goto L_008CCC54;
L_008CCB34:;
    v0 = func_008B9430();
    if (v0 == 0) { v1 = (*(volatile u8 *) (u32) s0); goto L_008CCB54; }
    a0 = s2; v0 = func_008D9140(a0, a1, a2, a3);
    v1 = v0 & 0x8; goto L_008CCB7C;
L_008CCB54:;
    v0 = 1;
    if (v1 != v0) { a0 = s2; goto L_008CCB70; }
    a0 = s2; v0 = func_008D9220(a0, a1, a2, a3);
    goto L_008CCB78;
L_008CCB70:;
    v0 = func_008D9300(a0, a1, a2, a3);
L_008CCB78:;
    v1 = v0 & 0x8;
L_008CCB7C:;
    if (v1 == 0) { v1 = v0 & 0x4; goto L_008CCBA0; }
    a0 = s1 & 0xff;
    v1 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 + 0xffffd9a0U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    s1 = (*(volatile u8 *) (u32) v1);
    v1 = v0 & 0x4;
L_008CCBA0:;
    if (v1 == 0) { v1 = (*(volatile u8 *) (u32) (s3 + 24)); goto L_008CCBC4; }
    a0 = s1 & 0xff;
    v1 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 + 0xffffd9a1U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    s1 = (*(volatile u8 *) (u32) v1);
    v1 = (*(volatile u8 *) (u32) (s3 + 24));
L_008CCBC4:;
    if (v1 != 0) { v0 = (*(volatile u8 *) (u32) (s3 + 25)); goto L_008CCC18; }
    v1 = v0 & 0x1;
    if (v1 == 0) { v0 = v0 & 0x2; goto L_008CCBF4; }
    a0 = s1 & 0xff;
    v1 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 + 0xffffd9a2U);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    s1 = (*(volatile u8 *) (u32) v1);
    v0 = v0 & 0x2;
L_008CCBF4:;
    if (v0 == 0) goto L_008CCC14;
    v1 = s1 & 0xff;
    v0 = (s32) 0x8f0000U;
    v0 = (s32) ((u32) v0 + 0xffffd9a3U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    s1 = (*(volatile u8 *) (u32) v0);
L_008CCC14:;
    v0 = (*(volatile u8 *) (u32) (s3 + 25));
L_008CCC18:;
    v1 = s1 & 0xff;
    if (v1 == v0) { v0 = 0; goto L_008CCC54; }
    v0 = (s32) 0x8f0000U;
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + 0xffffd970U);
    a0 = (s32) ((u32) s3 + 0x6b4U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a1 = (*(volatile s32 *) (u32) v0);
    (*(volatile u8 *) (u32) (s3 + 25)) = (u8) s1; func_008D88D0(a0, a1);
    v0 = (s32) 0x84000000U;
    a0 = v0 | 0xf802; SD_call(a0);
    v0 = 3;
L_008CCC54:;
    return v0;
}
