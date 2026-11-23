/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(s32, s32, s32);
s32 Pes6BitSet_Lookup(s32, s32);
void Pes6BitSet_Write(s32, s32, s32);
s32 Pes6Job_GetManager(void);
s32 Pes6Job_SendMessage(s32, s32, s32, s32);
s32 func_00310CF0(s32);
s32 func_00310D20(s32);
void func_003111D0(s32, s32);
void func_00311210(s32, s32);
s32 func_003414D0(s32, s32, s32, s32);

s32 func_0034F380(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    a1 = 34;
    a2 = (s32) ((u32) sp + 0x80U);
    s0 = (s32) ((u32) sp + 0x50U);
    a0 = s0; Pes6BitSet_Initialize(a0, a1, a2);
    a0 = 0; v0 = func_00310CF0(a0);
    s3 = v0;
    a0 = 1; v0 = func_00310CF0(a0);
    s2 = v0;
    a0 = 0; v0 = func_00310D20(a0);
    s1 = v0;
    a0 = 1; v0 = func_00310D20(a0);
    v1 = (s32) ((u32) s3 - (u32) s1);
    v0 = (s32) ((u32) s2 - (u32) v0);
    (*(volatile u32 *) (u32) (sp + 120)) = (u32) v1;
    a0 = (s32) ((u32) sp + 0x8fU);
    (*(volatile u32 *) (u32) (sp + 124)) = (u32) v0;
    a1 = 2;
    a2 = 255; v0 = func_003414D0(a0, a1, a2, a3);
    s1 = (*(volatile u8 *) (u32) (sp + 143)); v0 = Pes6Job_GetManager();
    (*(volatile u32 *) (u32) (v0 + 4104)) = (u32) s1;
    v0 = (*(volatile u8 *) (u32) (sp + 143));
    v1 = (s32) ((u32) v0 << 2);
    v0 = v0 ^ 0x1;
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (*(volatile s32 *) (u32) (v1 + 120));
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 120));
    v0 = (s32) ((u32) v0 << 1);
    v0 = v1 < v0;
    { s32 c_ = v0 != 0; a2 = 0; if (c_) goto L_0034F444; }
    v0 = v1 < 8;
    if (v0 != 0) { a0 = s0; goto L_0034F448; }
    a2 = 1;
L_0034F444:;
    a0 = s0;
L_0034F448:;
    a1 = 2; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 143));
    a0 = s0;
    a1 = 8;
    v1 = (s32) ((u32) v0 << 2);
    v0 = v0 ^ 0x1;
    v1 = (s32) ((u32) v1 + (u32) sp);
    v0 = (s32) ((u32) v0 << 2);
    v1 = (*(volatile s32 *) (u32) (v1 + 120));
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 120));
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 < 12;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    a0 = (s32) ((u32) sp + 0x70U);
    a1 = 0; func_00311210(a0, a1);
    a0 = (s32) ((u32) sp + 0x74U);
    a1 = 1; func_00311210(a0, a1);
    a0 = (s32) ((u32) sp + 0x68U);
    a1 = 0; func_003111D0(a0, a1);
    a0 = (s32) ((u32) sp + 0x6cU);
    a1 = 1; func_003111D0(a0, a1);
    v0 = (*(volatile u8 *) (u32) (sp + 143));
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v1 + 104));
    v0 = v0 < 4;
    { s32 c_ = v0 != 0; a2 = 0; if (c_) goto L_0034F4E4; }
    v0 = (*(volatile s32 *) (u32) (v1 + 112));
    if (v0 != 0) { a0 = s0; goto L_0034F4E8; }
    a2 = 1;
L_0034F4E4:;
    a0 = s0;
L_0034F4E8:;
    a1 = 15; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (sp + 104));
    a2 = 0;
    a3 = 0;
    a1 = 0;
    v0 = v1 < 3;
    { s32 c_ = v0 != 0; a0 = 0; if (c_) goto L_0034F520; }
    v0 = (*(volatile s32 *) (u32) (sp + 108));
    v0 = v0 < 3;
    if (v0 != 0) goto L_0034F520;
    a0 = 1;
L_0034F520:;
    if (a0 == 0) goto L_0034F540;
    v0 = (*(volatile s32 *) (u32) (sp + 108));
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 < 8;
    if (v0 != 0) goto L_0034F540;
    a1 = 1;
L_0034F540:;
    if (a1 == 0) goto L_0034F558;
    v0 = (*(volatile s32 *) (u32) (sp + 112));
    if (v0 == 0) goto L_0034F558;
    a3 = 1;
L_0034F558:;
    if (a3 == 0) { a0 = s0; goto L_0034F574; }
    v0 = (*(volatile s32 *) (u32) (sp + 116));
    if (v0 == 0) goto L_0034F570;
    a2 = 1;
L_0034F570:;
    a0 = s0;
L_0034F574:;
    a1 = 19; Pes6BitSet_Write(a0, a1, a2);
    v0 = (*(volatile u8 *) (u32) (sp + 143));
    a0 = s0;
    a1 = 27;
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    v0 = (*(volatile s32 *) (u32) (v0 + 112));
    v0 = v0 < 2;
    a2 = v0 ^ 0x1; Pes6BitSet_Write(a0, a1, a2);
    v1 = (*(volatile s32 *) (u32) (sp + 112));
    a2 = 0;
    { s32 c_ = v1 == 0; a0 = 0; if (c_) goto L_0034F5C0; }
    v0 = (*(volatile s32 *) (u32) (sp + 116));
    if (v0 == 0) goto L_0034F5C0;
    a0 = 1;
L_0034F5C0:;
    if (a0 == 0) { a0 = s0; goto L_0034F5E4; }
    v0 = (*(volatile s32 *) (u32) (sp + 116));
    v0 = (s32) ((u32) v1 + (u32) v0);
    v0 = v0 < 3;
    if (v0 != 0) goto L_0034F5E0;
    a2 = 1;
L_0034F5E0:;
    a0 = s0;
L_0034F5E4:;
    a1 = 30; Pes6BitSet_Write(a0, a1, a2);
    a0 = s0;
    a1 = 2; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0;
    a0 = s0;
    a1 = 8; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = s1 | v0;
    a0 = s0;
    a1 = 15; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0 | s1;
    a0 = s0;
    a1 = 19; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0 | s1;
    a0 = s0;
    a1 = 27; v0 = Pes6BitSet_Lookup(a0, a1);
    s1 = v0 | s1;
    a0 = s0;
    a1 = 30; v0 = Pes6BitSet_Lookup(a0, a1);
    a2 = v0 | s1;
    a0 = s0;
    a1 = 0; Pes6BitSet_Write(a0, a1, a2);
    a1 = s0;
    a0 = 103;
    a2 = 1; v0 = Pes6Job_SendMessage(a0, a1, a2, a3);
    return v0;
}
