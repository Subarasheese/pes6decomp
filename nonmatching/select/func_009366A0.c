/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
void SD_call(s32);
s32 func_001C80F0(s32);
void func_001F85A0(s32, s32);
void func_002F2ED0(s32, s32, s32, s32, f32);
void func_002F3A00(s32);
void func_002F4980(s32, s32, s32, s32);
void func_002F4CE0(s32, s32);
void func_002F4E10(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_002F4E90(s32, s32, s32, s32);
s32 func_008B2E80(s32, s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);
s32 D_009366A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12);

s32 func_009366A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s32 gp = 0x3ef370;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    s64 frame[52];
    s32 sp = (s32) (u32) frame;

    v0 = 240;
    v1 = (s32) ((u32) sp + 0xb0U);
    if (v1 == 0) goto L_009366EC;
L_009366D0:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_009366D0;
L_009366EC:;
    v1 = (s32) 0x960000U;
    v0 = (s32) 0x960000U;
    s3 = (*(volatile s32 *) (u32) (v1 + -9056));
    s2 = (*(volatile s32 *) (u32) (v0 + -9052));
    v1 = (s32) 0x960000U;
    s1 = (*(volatile s32 *) (u32) (v1 + -9048));
    v0 = (s32) 0x960000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -9040));
    v1 = (s32) 0x960000U;
    s5 = (*(volatile s32 *) (u32) (v1 + -9036));
    v0 = (s32) 0x960000U;
    v1 = 4;
    { s32 c_ = a0 == v1; s6 = (*(volatile s32 *) (u32) (v0 + -9032)); if (c_) goto L_009368A4; }
    v0 = 3;
    if (a0 == v0) { a0 = (*(volatile s32 *) (u32) (gp + -18632)); goto L_009367C8; }
    v0 = 2;
    if (a0 == v0) { (*(volatile u32 *) (u32) (sp + 188)) = (u32) v0; goto L_0093678C; }
    v0 = 1;
    if (a0 == v0) { a0 = (*(volatile s32 *) (u32) (gp + -18604)); goto L_00936778; }
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (gp + -18604)); goto L_00936758; }
    v0 = -1; goto L_00936968;
L_00936758:;
    if (a0 == 0) goto L_00936964;
    a1 = (*(volatile s32 *) (u32) (gp + -18612)); func_002F4CE0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (gp + -18604)); func_002F2ED0(a0, a1, a2, a3, f12.f);
    goto L_00936964;
L_00936778:;
    func_002F4E10(a0, a1, a2, a3, a4, a5, a6, a7);
    (*(volatile u32 *) (u32) (gp + -18604)) = (u32) 0;
    (*(volatile u32 *) (u32) (gp + -18628)) = (u32) 0; goto L_00936964;
L_0093678C:;
    a0 = 23;
    v0 = (s32) 0xc80000U;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) 0;
    v0 = v0 | 0x35;
    (*(volatile u32 *) (u32) (sp + 196)) = (u32) v0; v0 = func_002F4E90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (gp + -18604)) = (u32) v0;
    a0 = v0;
    a1 = (s32) ((u32) sp + 0xb0U); func_002F4980(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18604)); func_002F3A00(a0);
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -18628)) = (u32) v0; goto L_00936964;
L_009367C8:;
    v0 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 + 0x6dc0U);
    a1 = (s32) ((u32) sp + 0x80U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v1 = (s32) ((u32) v1 - (u32) a0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) ((u32) v0 + 0x10U); func_001F85A0(a0, a1);
    v0 = (s32) 0xc80000U;
    a0 = v0 | 0x36; v0 = func_008B2E80(a0, a1, a2, a3);
    a0 = v0; v0 = func_001C80F0(a0);
    a0 = 2;
    a1 = v0; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    s4 = v0;
    v0 = (s32) 0xc80000U;
    a0 = v0 | 0x36; v0 = func_008B2E80(a0, a1, a2, a3);
    a2 = (s32) 0x960000U;
    a1 = v0;
    a0 = s4;
    a2 = (s32) ((u32) a2 + 0x6da0U);
    a3 = (s32) ((u32) sp + 0x80U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = 1;
    a0 = 23;
    (*(volatile u32 *) (u32) (gp + -18612)) = (u32) v0; v0 = func_002F4E90(a0, a1, a2, a3);
    v1 = 1;
    a0 = v0;
    (*(volatile u32 *) (u32) (sp + 188)) = (u32) v1;
    a1 = (s32) ((u32) sp + 0xb0U);
    (*(volatile u32 *) (u32) (gp + -18604)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 192)) = (u32) s4;
    (*(volatile u32 *) (u32) (sp + 284)) = (u32) s3;
    (*(volatile u32 *) (u32) (sp + 288)) = (u32) s2;
    (*(volatile u32 *) (u32) (sp + 292)) = (u32) s1;
    (*(volatile u32 *) (u32) (sp + 296)) = (u32) s0;
    (*(volatile u32 *) (u32) (sp + 300)) = (u32) s5;
    (*(volatile u32 *) (u32) (sp + 304)) = (u32) s6;
    (*(volatile u32 *) (u32) (sp + 196)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 404)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 408)) = (u32) 0;
    (*(volatile u32 *) (u32) (sp + 412)) = (u32) 0; func_002F4980(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (gp + -18604)); func_002F3A00(a0);
    v0 = 1;
    (*(volatile u32 *) (u32) (gp + -18628)) = (u32) v0; goto L_00936964;
L_009368A4:;
    a0 = (*(volatile s32 *) (u32) (gp + -18608));
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc230U);
    v0 = 32;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) { a0 = 0; goto L_009368E0; }
    v0 = 16;
    if (v1 == v0) goto L_009368DC;
    a0 = (*(volatile s32 *) (u32) (gp + -18608)); goto L_009368F8;
L_009368DC:;
    a0 = 0;
L_009368E0:;
    SD_call(a0);
    v0 = (*(volatile s32 *) (u32) (gp + -18612));
    v0 = v0 ^ 0x1;
    (*(volatile u32 *) (u32) (gp + -18612)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) (gp + -18608));
L_009368F8:;
    v1 = (s32) 0x8e0000U;
    v1 = (s32) ((u32) v1 + 0xffffc270U);
    v0 = 2;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    if (v1 == v0) { v0 = (s32) 0x84000000U; goto L_0093694C; }
    v0 = 1;
    if (v1 == v0) { v0 = (s32) 0x84020000U; goto L_0093692C; }
    goto L_00936964;
L_0093692C:;
    a0 = v0 | 0x8400; SD_call(a0);
    a0 = 1; v0 = D_009366A0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    v0 = (*(volatile s32 *) (u32) (gp + -18612));
    v0 = v0 ^ 0;
    v0 = (u64) v0 < (u64) (s64) 1; goto L_00936968;
L_0093694C:;
    a0 = v0 | 0x8401; SD_call(a0);
    a0 = 1; v0 = D_009366A0(a0, a1, a2, a3, a4, a5, a6, a7, f12.f);
    v0 = 0; goto L_00936968;
L_00936964:;
    v0 = -1;
L_00936968:;
    return v0;
}
