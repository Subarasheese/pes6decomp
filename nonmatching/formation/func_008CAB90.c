/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_008C98A0(s32, s32, s32);
s32 func_008D1ED0(s32);
s32 func_008D1F00(s32);
void func_008D20A0(s32, s32, s32);
void func_008D2100(s32, s32, s32);
void func_008D2460(s32, s32, s32, s32);

void func_008CAB90(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    a0 = (s32) ((u32) s2 + 0x480U);
    func_008D2460(a0, a1, a2, a3);
    a0 = (s32) ((u32) s2 + 0x480U); v0 = func_008D1F00(a0);
    s0 = v0;
    a0 = (s32) ((u32) s2 + 0x480U);
    s1 = -1; v0 = func_008D1ED0(a0);
    v1 = v0 & 0xff;
    v1 = (s32) ((u32) v1 + 0x1U);
    at = v1 < 0;
    if (at != 0) goto L_008CACA8;
    s3 = (s32) ((u32) s1 + (u32) s0);
L_008CABE4:;
    a0 = s2;
    a1 = s3;
    a2 = (s32) ((u32) sp + 0x5cU); func_008C98A0(a0, a1, a2);
    a2 = (s32) ((u32) s1 + 0x1U);
    a0 = (s32) ((u32) s2 + 0x480U);
    a1 = (s32) ((u32) sp + 0x5cU); func_008D2100(a0, a1, a2);
    a2 = (*(volatile s32 *) (u32) (s2 + 1140));
    { s32 c_ = a2 == 0; a3 = 0; if (c_) goto L_008CAC78; }
    if (s3 < 0) goto L_008CAC78;
    v0 = (*(volatile u8 *) (u32) (a2 + 33));
    at = s3 < v0;
    if (at == 0) goto L_008CAC78;
    a1 = (*(volatile u8 *) (u32) (a2 + 842));
    { s32 c_ = a1 <= 0; a4 = 0; if (c_) goto L_008CAC78; }
    v0 = (s32) ((u32) a2 + (u32) s3);
    v1 = 1;
    a0 = (*(volatile u8 *) (u32) (v0 + 1));
L_008CAC40:;
    v0 = (*(volatile u8 *) (u32) (a2 + 828));
    if (v0 != a0) goto L_008CAC58;
    a3 = v1; goto L_008CAC68;
L_008CAC58:;
    v0 = (*(volatile u8 *) (u32) (a2 + 829));
    if (v0 != a0) goto L_008CAC68;
    a3 = v1;
L_008CAC68:;
    a4 = (s32) ((u32) a4 + 0x1U);
    v0 = a4 < a1;
    { s32 c_ = v0 != 0; a2 = (s32) ((u32) a2 + 0x2U); if (c_) goto L_008CAC40; }
L_008CAC78:;
    a2 = a3 & 0xff;
    a1 = (s32) ((u32) s1 + 0x1U);
    a0 = (s32) ((u32) s2 + 0x480U); func_008D20A0(a0, a1, a2);
    a0 = (s32) ((u32) s2 + 0x480U);
    s1 = (s32) ((u32) s1 + 0x1U); v0 = func_008D1ED0(a0);
    v1 = v0 & 0xff;
    v1 = (s32) ((u32) v1 + 0x1U);
    v1 = s1 < v1;
    if (v1 != 0) { s3 = (s32) ((u32) s1 + (u32) s0); goto L_008CABE4; }
L_008CACA8:;
    return;
}
