/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_002673B0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002676F0(s32, s32, s32, s32, s32);
void func_00267A50(s32, s32, s32, s32, s32, s32, s32);
void func_00267CC0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00268060(s32, s32, s32, s32);

void func_002674F0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0;

    s7 = a1;
    s5 = a0;
    s4 = a2;
    s3 = a3;
    a0 = s4;
    func_002673B0(a0, a1, a2, a3, a4, a5, a6, a7);
    s2 = 0;
    s1 = s5;
    s0 = s4;
L_0026753C:;
    if (s3 != 0) goto L_00267578;
    v1 = (*(volatile s32 *) (u32) s1);
    if (v1 == 0) goto L_00267578;
    v1 = (*(volatile u8 *) (u32) (v1 + 2));
    if (v1 != 0) goto L_00267578;
    if (v1 != 0) goto L_00267588;
    (*(volatile u32 *) (u32) (s0 + 48)) = (u32) 0;
    (*(volatile u32 *) (u32) s0) = (u32) 0;
    (*(volatile u32 *) (u32) (s0 + 212)) = (u32) 0; goto L_00267588;
L_00267578:;
    a0 = s2;
    a1 = s4;
    a2 = s5; func_00267CC0(a0, a1, a2, a3, a4, a5, a6, a7);
L_00267588:;
    s2 = (s32) ((u32) s2 + 0x1U);
    v1 = s2 < 2;
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v1 != 0; s0 = (s32) ((u32) s0 + 0x4U); if (c_) goto L_0026753C; }
    s0 = 0;
    s2 = s5;
    s1 = s5;
    s6 = s4;
L_002675AC:;
    if (s3 != 0) goto L_00267608;
    v1 = (*(volatile s32 *) (u32) (s2 + 8));
    if (v1 == 0) goto L_00267608;
    v1 = (*(volatile u8 *) (u32) (v1 + 2));
    if (v1 != 0) goto L_00267608;
    v1 = (*(volatile s32 *) (u32) (s1 + 8));
    a0 = 2;
    v1 = (*(volatile u8 *) (u32) (v1 + 2));
    { s32 c_ = v1 != 0; a2 = 0; if (c_) goto L_00267620; }
    a1 = (s32) ((u32) a0 + (u32) s0);
    v1 = (s32) ((u32) a2 + (u32) s0);
    a0 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) s4 + (u32) a0);
    v1 = (s32) ((u32) a1 << 2);
    (*(volatile u32 *) (u32) (a0 + 48)) = (u32) 0;
    v1 = (s32) ((u32) s4 + (u32) v1);
    (*(volatile u32 *) (u32) (s6 + 8)) = (u32) 0;
    (*(volatile u32 *) (u32) (v1 + 212)) = (u32) 0; goto L_00267620;
L_00267608:;
    a0 = s0;
    a1 = s4;
    a2 = s5;
    a3 = s7; func_00267A50(a0, a1, a2, a3, a4, a5, a6);
L_00267620:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 4;
    s2 = (s32) ((u32) s2 + 0x4U);
    s1 = (s32) ((u32) s1 + 0x4U);
    { s32 c_ = v1 != 0; s6 = (s32) ((u32) s6 + 0x4U); if (c_) goto L_002675AC; }
    s0 = 0;
    s2 = s5;
    s1 = s4;
L_00267644:;
    if (s3 != 0) goto L_00267680;
    v1 = (*(volatile s32 *) (u32) (s2 + 24));
    if (v1 == 0) goto L_00267680;
    v1 = (*(volatile u8 *) (u32) (v1 + 2));
    if (v1 != 0) goto L_00267680;
    if (v1 != 0) goto L_00267698;
    (*(volatile u32 *) (u32) (s1 + 80)) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 24)) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 236)) = (u32) 0; goto L_00267698;
L_00267680:;
    a0 = s0;
    a1 = s4;
    a2 = s5;
    a3 = s7; func_002676F0(a0, a1, a2, a3, a4);
L_00267698:;
    s0 = (s32) ((u32) s0 + 0x1U);
    v1 = s0 < 4;
    s2 = (s32) ((u32) s2 + 0x4U);
    { s32 c_ = v1 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_00267644; }
    (*(volatile u32 *) (u32) (s4 + 452)) = (u32) s7;
    v1 = 1;
    { s32 c_ = s5 == 0; (*(volatile u32 *) (u32) (s4 + 456)) = (u32) v1; if (c_) goto L_002676C4; }
    a0 = (*(volatile u16 *) (u32) (s5 + 76)); func_00268060(a0, a1, a2, a3);
L_002676C4:;
    return;
}
