/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002C8380(s32, s32);

void func_002C7F60(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    a3 = 0;
    v1 = (s32) ((u32) sp + 0x10U);
L_002C7F70:;
    (*(volatile u8 *) (u32) (v1 + 6)) = (u8) 0;
    a3 = (s32) ((u32) a3 + 0x7U);
    (*(volatile u8 *) (u32) (v1 + 7)) = (u8) 0;
    v0 = a3 < 14;
    (*(volatile u8 *) (u32) (v1 + 8)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 9)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 10)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 11)) = (u8) 0;
    (*(volatile u8 *) (u32) (v1 + 12)) = (u8) 0;
    { s32 c_ = v0 != 0; v1 = (s32) ((u32) v1 + 0x7U); if (c_) goto L_002C7F70; }
    v0 = 16;
    a6 = 3;
    (*(volatile u8 *) (u32) (sp + 17)) = (u8) v0;
    a3 = (s32) ((u32) sp + 0x13U);
    v0 = 23;
    v1 = (s32) ((u32) sp + 0x14U);
    (*(volatile u8 *) (u32) (sp + 18)) = (u8) v0;
    a4 = 30;
    v0 = 33;
    (*(volatile u8 *) (u32) v1) = (u8) a4;
    (*(volatile u8 *) (u32) a3) = (u8) v0;
    a4 = 38;
    v0 = (s32) ((u32) sp + 0x15U);
    (*(volatile u8 *) (u32) (sp + 16)) = (u8) a6;
    (*(volatile u8 *) (u32) v0) = (u8) a4;
    a4 = 1;
    (*(volatile u8 *) (u32) (sp + 22)) = (u8) a4;
    a5 = (*(volatile s8 *) (u32) a1);
    a4 = 4;
    if (a5 == a4) { a4 = 2; goto L_002C801C; }
    if (a5 == a6) goto L_002C8010;
    a4 = 5;
    if (a5 == a4) { a4 = 2; goto L_002C800C; }
    a5 = (*(volatile u8 *) (u32) (a2 + 1)); goto L_002C8028;
L_002C800C:;
    (*(volatile u8 *) (u32) (sp + 26)) = (u8) a4;
L_002C8010:;
    a4 = 3;
    (*(volatile u8 *) (u32) (sp + 25)) = (u8) a4; goto L_002C8024;
L_002C801C:;
    (*(volatile u8 *) (u32) (sp + 25)) = (u8) a4;
    (*(volatile u8 *) (u32) (sp + 26)) = (u8) a4;
L_002C8024:;
    a5 = (*(volatile u8 *) (u32) (a2 + 1));
L_002C8028:;
    a4 = 1;
    if (a5 == a4) { (*(volatile u8 *) (u32) (sp + 24)) = (u8) a4; goto L_002C81F0; }
L_002C8034:;
    a5 = (*(volatile s8 *) (u32) (a1 + 1));
    a4 = 4;
    (*(volatile u8 *) (u32) (sp + 27)) = (u8) a5;
    a6 = (*(volatile u8 *) (u32) (a2 + 2));
    if (a6 == a4) { a4 = 1; goto L_002C809C; }
    a4 = 3;
    if (a6 == a4) { a4 = 2; goto L_002C8094; }
    a5 = 2;
    if (a6 == a5) goto L_002C8088;
    a4 = 1;
    if (a6 == a4) { (*(volatile u8 *) (u32) (sp + 31)) = (u8) a4; goto L_002C8088; }
    if (a6 == 0) { (*(volatile u8 *) (u32) (sp + 31)) = (u8) a5; goto L_002C8080; }
    t4 = (s32) ((u32) sp + 0x1fU); goto L_002C80A4;
L_002C8080:;
    (*(volatile u8 *) (u32) (sp + 30)) = (u8) a5; goto L_002C80A0;
L_002C8088:;
    a4 = 2;
    (*(volatile u8 *) (u32) (sp + 30)) = (u8) a4; goto L_002C80A0;
L_002C8094:;
    (*(volatile u8 *) (u32) (sp + 31)) = (u8) a4; goto L_002C80A0;
L_002C809C:;
    (*(volatile u8 *) (u32) (sp + 31)) = (u8) a4;
L_002C80A0:;
    t4 = (s32) ((u32) sp + 0x1fU);
L_002C80A4:;
    a7 = (s32) ((u32) sp + 0x1eU);
    a6 = (*(volatile s8 *) (u32) a7);
    a5 = (*(volatile s8 *) (u32) t4);
    a4 = (*(volatile s8 *) (u32) (a1 + 2));
    a5 = (s32) ((u32) a6 + (u32) a5);
    at = a4 < a5;
    if (at != 0) { (*(volatile u8 *) (u32) (sp + 29)) = (u8) a4; goto L_002C8200; }
    a4 = (s32) ((u32) a4 - (u32) a5);
    (*(volatile u8 *) (u32) (sp + 29)) = (u8) a4;
L_002C80CC:;
    a4 = (*(volatile s8 *) (u32) a7);
    a6 = 2;
    if (a4 != a6) goto L_002C80F4;
    a5 = (*(volatile s8 *) (u32) a1);
    a4 = 3;
    if (a5 != a4) goto L_002C80F4;
    (*(volatile u8 *) (u32) a7) = (u8) 0;
    (*(volatile u8 *) (u32) (sp + 28)) = (u8) a6;
L_002C80F4:;
    a7 = (*(volatile s8 *) (u32) (a1 + 4));
    a4 = (s32) ((u32) sp + 0x22U);
    a5 = (s32) ((u32) sp + 0x20U);
    a6 = 2;
    (*(volatile u8 *) (u32) a4) = (u8) a7;
    a7 = (*(volatile s8 *) (u32) (a1 + 3));
    (*(volatile u8 *) (u32) a5) = (u8) a7;
    a7 = (*(volatile s8 *) (u32) (a1 + 4));
    a2 = (*(volatile u8 *) (u32) (a2 + 3));
    a1 = (*(volatile s8 *) (u32) (a1 + 3));
    { s32 c_ = a2 == a6; a1 = (s32) ((u32) a7 + (u32) a1); if (c_) goto L_002C8194; }
    v1 = 1;
    if (a2 == v1) goto L_002C8160;
    v1 = 3;
    if (a2 == v1) { at = a1 < 3; goto L_002C8144; }
    v1 = (*(volatile s8 *) (u32) a5); goto L_002C81D0;
L_002C8144:;
    if (at != 0) goto L_002C8160;
    v1 = (*(volatile s8 *) (u32) a5);
    (*(volatile u8 *) (u32) (sp + 33)) = (u8) a6;
    v1 = (s32) ((u32) v1 + 0xfffffffeU);
    (*(volatile u8 *) (u32) a5) = (u8) v1; goto L_002C81CC;
L_002C8160:;
    at = a1 < 2;
    if (at != 0) goto L_002C81CC;
    v1 = 1;
    a1 = (*(volatile s8 *) (u32) a5);
    (*(volatile u8 *) (u32) (sp + 33)) = (u8) v1;
    v1 = 31;
    (*(volatile u8 *) (u32) a3) = (u8) v1;
    v1 = 40;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
    v1 = (s32) ((u32) a1 + 0xffffffffU);
    (*(volatile u8 *) (u32) a5) = (u8) v1; goto L_002C81CC;
L_002C8194:;
    at = a1 < 2;
    if (at != 0) goto L_002C81CC;
    a1 = 1;
    a2 = (*(volatile s8 *) (u32) a5);
    (*(volatile u8 *) (u32) (sp + 33)) = (u8) a1;
    a1 = 35;
    (*(volatile u8 *) (u32) a3) = (u8) a1;
    a1 = 36;
    (*(volatile u8 *) (u32) v0) = (u8) a1;
    a1 = 29;
    (*(volatile u8 *) (u32) v1) = (u8) a1;
    v1 = (s32) ((u32) a2 + 0xffffffffU);
    (*(volatile u8 *) (u32) a5) = (u8) v1;
L_002C81CC:;
    v1 = (*(volatile s8 *) (u32) a5);
L_002C81D0:;
    if (v1 <= 0) { v0 = (*(volatile s8 *) (u32) a4); goto L_002C820C; }
    v1 = 38;
    (*(volatile u8 *) (u32) v0) = (u8) v1;
L_002C81E0:;
    a1 = (s32) ((u32) sp + 0x10U); func_002C8380(a0, a1);
    goto L_002C8218;
L_002C81F0:;
    a4 = (*(volatile s8 *) (u32) (sp + 25));
    a4 = (s32) ((u32) a4 + 0xffffffffU);
    (*(volatile u8 *) (u32) (sp + 25)) = (u8) a4; goto L_002C8034;
L_002C8200:;
    (*(volatile u8 *) (u32) t4) = (u8) 0;
    (*(volatile u8 *) (u32) a7) = (u8) 0; goto L_002C80CC;
L_002C820C:;
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u8 *) (u32) a4) = (u8) v0; goto L_002C81E0;
L_002C8218:;
    return;
}
