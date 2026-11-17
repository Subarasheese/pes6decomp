/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6Team_ResolveSpecialId(s64);
s64 func_00223960(s64);
s64 func_00223AE0(void);
s64 D_0021EB50(s64 a0, s64 a1, s64 a2, s64 a3);

s64 func_0021EB50(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0 & 0xffff;
    if (s0 < 0) { v0 = s0 < 57; goto L_0021EB78; }
    at = s0 < 57;
    if (at != 0) goto L_0021EBD4;
    v0 = s0 < 57;
L_0021EB78:;
    if (v0 != 0) { v0 = s0 < 204; goto L_0021EB90; }
    at = s0 < 64;
    if (at != 0) goto L_0021EBD4;
    v0 = s0 < 204;
L_0021EB90:;
    if (v0 != 0) { v0 = s0 < 254; goto L_0021EBA8; }
    at = s0 < 221;
    if (at != 0) goto L_0021EBD4;
    v0 = s0 < 254;
L_0021EBA8:;
    if (v0 != 0) { v0 = s0 < 272; goto L_0021EBC0; }
    at = s0 < 270;
    if (at != 0) goto L_0021EBD4;
    v0 = s0 < 272;
L_0021EBC0:;
    if (v0 != 0) { v0 = s0 < 64; goto L_0021EBF0; }
    at = s0 < 274;
    if (at == 0) goto L_0021EBEC;
L_0021EBD4:;
    v0 = (s32) 0x540000U;
    v1 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xffff8460U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0); goto L_0021ED38;
L_0021EBEC:;
    v0 = s0 < 64;
L_0021EBF0:;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + 0xfffffedaU); goto L_0021EC88; }
    at = s0 < 204;
    if (at == 0) goto L_0021EC84;
    if (a1 != 0) goto L_0021EC6C;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + 0xfffffedaU); goto L_0021EC4C; }
    at = s0 < 204;
    if (at == 0) goto L_0021EC48;
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s0 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0021EC64;
L_0021EC48:;
    v0 = (s32) ((u32) s0 + 0xfffffedaU);
L_0021EC4C:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = 0; goto L_0021EC64; }
    v0 = func_00223960(a0);
    v0 = (*(volatile s32 *) (u32) v0);
L_0021EC64:;
    v0 = (*(volatile u8 *) (u32) (v0 + 80)); goto L_0021ED38;
L_0021EC6C:;
    v0 = (s32) 0x540000U;
    v1 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xffff8460U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0); goto L_0021ED38;
L_0021EC84:;
    v0 = (s32) ((u32) s0 + 0xfffffedaU);
L_0021EC88:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { at = s0 < 296; goto L_0021ED1C; }
    if (a1 != 0) goto L_0021ED00;
    v0 = s0 < 64;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + 0xfffffedaU); goto L_0021ECE0; }
    at = s0 < 204;
    if (at == 0) goto L_0021ECDC;
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s0 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0021ECF8;
L_0021ECDC:;
    v0 = (s32) ((u32) s0 + 0xfffffedaU);
L_0021ECE0:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = 0; goto L_0021ECF8; }
    v0 = func_00223960(a0);
    v0 = (*(volatile s32 *) (u32) v0);
L_0021ECF8:;
    v0 = (*(volatile u8 *) (u32) (v0 + 80)); goto L_0021ED38;
L_0021ED00:;
    v0 = Pes6Team_ResolveSpecialId(a0);
    a0 = v0 & 0xffff;
    a1 = 1; v0 = D_0021EB50(a0, a1, a2, a3);
    v0 = v0 & 0xff; goto L_0021ED38;
L_0021ED1C:;
    if (at == 0) { v0 = (s64) ((u64) 0 + (u64) (s64) 255); goto L_0021ED38; }
    v0 = (s32) 0x540000U;
    v1 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xffff8460U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile u8 *) (u32) v0);
L_0021ED38:;
    return v0;
}
