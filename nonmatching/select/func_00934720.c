/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
s32 Pes6Module_Load(s32);
void func_001D5D80(s32, s32);
void func_001D5E20(s32);
void func_001D5EE0(s32, s32);
void func_001D5F80(s32);
void func_001DD680(s32, s32);
void func_001E72C0(s32, s32);
void func_001E7370(s32, s32);
void func_001E75A0(s32, s32);
void func_001E7610(s32);
void func_001F04F0(s32, s32);
void func_001F0590(s32);
void func_002405A0(s32, s32, s32, s32);

void func_00934720(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v1 = 1;
    a1 = (*(volatile s32 *) (u32) (gp + -18724));
    a0 = (*(volatile s32 *) (u32) (gp + -18716));
    { s32 c_ = a0 == v1; (*(volatile u32 *) (u32) (sp + 44)) = (u32) a1; if (c_) goto L_00934928; }
    if (a1 == 0) { ; goto L_0093492C; }
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_00934928;
    a0 = (*(volatile s32 *) (u32) (sp + 44));
    v1 = (*(volatile s32 *) (u32) (a0 + 12));
    (*(volatile u32 *) (u32) (sp + 32)) = (u32) v1;
    v0 = (*(volatile s32 *) (u32) (a0 + 16));
    (*(volatile u32 *) (u32) (sp + 16)) = (u32) v1;
    (*(volatile u32 *) (u32) (sp + 36)) = (u32) v0;
    (*(volatile u32 *) (u32) (sp + 20)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) (a0 + 20));
    (*(volatile u32 *) (u32) (sp + 24)) = (u32) v0;
    v0 = (*(volatile s32 *) (u32) a0);
    at = (u64) v0 < (u64) (s64) 8;
    if (at == 0) { v0 = (*(volatile s32 *) (u32) (sp + 44)); goto L_00934918; }
    v1 = (s32) 0x960000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x64a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x9347a4U) goto L_009347A4; if (t_ == 0x9347c8U) goto L_009347C8; if (t_ == 0x934824U) goto L_00934824; if (t_ == 0x934864U) goto L_00934864; if (t_ == 0x9348a4U) goto L_009348A4; if (t_ == 0x9348ccU) goto L_009348CC; if (t_ == 0x93490cU) goto L_0093490C; if (t_ == 0x934914U) goto L_00934914; }
L_009347A4:;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    v0 = 1;
    if (v1 != v0) goto L_00934914;
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    a1 = (s32) ((u32) sp + 0x20U); func_001E72C0(a0, a1);
    goto L_00934914;
L_009347C8:;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    v0 = 2;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_00934814; }
    v0 = 1;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_00934804; }
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_009347F4; }
    goto L_00934914;
L_009347F4:;
    func_001E7610(a0);
    goto L_00934914;
L_00934804:;
    a1 = (s32) ((u32) sp + 0x10U); func_001E75A0(a0, a1);
    goto L_00934914;
L_00934814:;
    a1 = (s32) ((u32) sp + 0x10U); func_001E7370(a0, a1);
    goto L_00934914;
L_00934824:;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    v0 = 1;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_00934854; }
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_00934844; }
    goto L_00934914;
L_00934844:;
    func_001D5E20(a0);
    goto L_00934914;
L_00934854:;
    a1 = (s32) ((u32) sp + 0x20U); func_001D5D80(a0, a1);
    goto L_00934914;
L_00934864:;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    v0 = 1;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_00934894; }
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_00934884; }
    goto L_00934914;
L_00934884:;
    func_001D5F80(a0);
    goto L_00934914;
L_00934894:;
    a1 = (s32) ((u32) sp + 0x20U); func_001D5EE0(a0, a1);
    goto L_00934914;
L_009348A4:;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    v0 = 1;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_009348BC; }
    goto L_00934914;
L_009348BC:;
    a1 = (s32) ((u32) sp + 0x20U); func_001DD680(a0, a1);
    goto L_00934914;
L_009348CC:;
    v1 = (*(volatile s32 *) (u32) (a0 + 8));
    if (v1 == 0) { a0 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_009348FC; }
    v0 = 1;
    if (v1 == v0) { a0 = (*(volatile s32 *) (u32) (a0 + 4)); goto L_009348EC; }
    goto L_00934914;
L_009348EC:;
    a1 = (s32) ((u32) sp + 0x20U); func_001F04F0(a0, a1);
    goto L_00934914;
L_009348FC:;
    func_001F0590(a0);
    goto L_00934914;
L_0093490C:;
    a0 = (*(volatile s32 *) (u32) (a0 + 4)); v0 = Pes6Module_Load(a0);
L_00934914:;
    v0 = (*(volatile s32 *) (u32) (sp + 44));
L_00934918:;
    a0 = (s32) ((u32) sp + 0x2cU);
    v0 = (*(volatile s32 *) (u32) (v0 + 28));
    (*(volatile u32 *) (u32) (gp + -18724)) = (u32) v0; func_002405A0(a0, a1, a2, a3);
L_00934928:;
L_0093492C:;
    return;
}
