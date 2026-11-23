/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_002571B0(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0;

    if (a0 != 0) { at = (u64) a1 < (u64) (s64) 29; goto L_002571C0; }
    v0 = 0; goto L_0025734C;
L_002571C0:;
    if (at == 0) { v0 = 0; goto L_0025734C; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0xffff9100U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x2571e4U) goto L_002571E4; if (t_ == 0x2571f0U) goto L_002571F0; if (t_ == 0x2571fcU) goto L_002571FC; if (t_ == 0x257208U) goto L_00257208; if (t_ == 0x257214U) goto L_00257214; if (t_ == 0x257220U) goto L_00257220; if (t_ == 0x25722cU) goto L_0025722C; if (t_ == 0x257238U) goto L_00257238; if (t_ == 0x257244U) goto L_00257244; if (t_ == 0x257250U) goto L_00257250; if (t_ == 0x25725cU) goto L_0025725C; if (t_ == 0x257268U) goto L_00257268; if (t_ == 0x257274U) goto L_00257274; if (t_ == 0x257280U) goto L_00257280; if (t_ == 0x25728cU) goto L_0025728C; if (t_ == 0x257298U) goto L_00257298; if (t_ == 0x2572a4U) goto L_002572A4; if (t_ == 0x2572b0U) goto L_002572B0; if (t_ == 0x2572bcU) goto L_002572BC; if (t_ == 0x2572c8U) goto L_002572C8; if (t_ == 0x2572d4U) goto L_002572D4; if (t_ == 0x2572e0U) goto L_002572E0; if (t_ == 0x2572ecU) goto L_002572EC; if (t_ == 0x2572f8U) goto L_002572F8; if (t_ == 0x257304U) goto L_00257304; if (t_ == 0x257310U) goto L_00257310; if (t_ == 0x25731cU) goto L_0025731C; if (t_ == 0x257328U) goto L_00257328; if (t_ == 0x257338U) goto L_00257338; }
L_002571E4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 2));
    v0 = v0 & 0x7f; goto L_0025734C;
L_002571F0:;
    v0 = (*(volatile u8 *) (u32) (a0 + 3));
    v0 = v0 & 0x7f; goto L_0025734C;
L_002571FC:;
    v0 = (*(volatile u8 *) (u32) (a0 + 4));
    v0 = v0 & 0x7f; goto L_0025734C;
L_00257208:;
    v0 = (*(volatile u8 *) (u32) (a0 + 5));
    v0 = v0 & 0x7f; goto L_0025734C;
L_00257214:;
    v0 = (*(volatile u8 *) (u32) (a0 + 6));
    v0 = v0 & 0x7f; goto L_0025734C;
L_00257220:;
    v0 = (*(volatile u8 *) (u32) (a0 + 7));
    v0 = v0 & 0x7f; goto L_0025734C;
L_0025722C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 8));
    v0 = v0 & 0x7f; goto L_0025734C;
L_00257238:;
    v0 = (*(volatile u8 *) (u32) (a0 + 9));
    v0 = v0 & 0x7f; goto L_0025734C;
L_00257244:;
    v0 = (*(volatile u8 *) (u32) (a0 + 10));
    v0 = v0 & 0x7f; goto L_0025734C;
L_00257250:;
    v0 = (*(volatile u8 *) (u32) (a0 + 11));
    v0 = v0 & 0x7f; goto L_0025734C;
L_0025725C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 12));
    v0 = v0 & 0x7f; goto L_0025734C;
L_00257268:;
    v0 = (*(volatile u8 *) (u32) (a0 + 13));
    v0 = v0 & 0x7f; goto L_0025734C;
L_00257274:;
    v0 = (*(volatile u8 *) (u32) (a0 + 14));
    v0 = v0 & 0x7f; goto L_0025734C;
L_00257280:;
    v0 = (*(volatile u8 *) (u32) (a0 + 15));
    v0 = v0 & 0x7f; goto L_0025734C;
L_0025728C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 16));
    v0 = v0 & 0x7f; goto L_0025734C;
L_00257298:;
    v0 = (*(volatile u8 *) (u32) (a0 + 17));
    v0 = v0 & 0x7f; goto L_0025734C;
L_002572A4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 18));
    v0 = v0 & 0x7f; goto L_0025734C;
L_002572B0:;
    v0 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = v0 & 0x7f; goto L_0025734C;
L_002572BC:;
    v0 = (*(volatile u8 *) (u32) (a0 + 20));
    v0 = v0 & 0x7f; goto L_0025734C;
L_002572C8:;
    v0 = (*(volatile u8 *) (u32) (a0 + 21));
    v0 = v0 & 0x7f; goto L_0025734C;
L_002572D4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 22));
    v0 = v0 & 0x7f; goto L_0025734C;
L_002572E0:;
    v0 = (*(volatile u8 *) (u32) (a0 + 24));
    v0 = v0 & 0x7f; goto L_0025734C;
L_002572EC:;
    v0 = (*(volatile u8 *) (u32) (a0 + 25));
    v0 = v0 & 0x7f; goto L_0025734C;
L_002572F8:;
    v0 = (*(volatile u8 *) (u32) (a0 + 26));
    v0 = v0 & 0x7f; goto L_0025734C;
L_00257304:;
    v0 = (*(volatile u8 *) (u32) (a0 + 27));
    v0 = v0 & 0x7f; goto L_0025734C;
L_00257310:;
    v0 = (*(volatile u8 *) (u32) (a0 + 23));
    v0 = v0 & 0x7f; goto L_0025734C;
L_0025731C:;
    v0 = (*(volatile u8 *) (u32) (a0 + 29));
    v0 = v0 & 0x7; goto L_0025734C;
L_00257328:;
    v0 = (*(volatile u8 *) (u32) (a0 + 29));
    v0 = (s64) ((u64) v0 << 58);
    v0 = (s64) ((u64) v0 >> 61); goto L_0025734C;
L_00257338:;
    v0 = (*(volatile u8 *) (u32) (a0 + 28));
    v0 = (s64) ((u64) v0 << 58);
    v0 = (s64) ((u64) v0 >> 61); goto L_0025734C;
    v0 = 0;
L_0025734C:;
    return v0;
}
