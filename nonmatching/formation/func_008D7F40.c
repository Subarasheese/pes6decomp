/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EEE60(s32, s32);
void func_001F18D0(s32, s32);
s32 func_00292F00(s32);
void func_008BAC60(s32);
void func_008BAE50(s32, s32, s32, s32);
s32 func_008BB190(s32, s32, s32);
void func_008BB3F0(s32, s32, s32, s32);

void func_008D7F40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0;
    s64 frame[12];
    s32 sp = (s32) (u32) frame;

    s2 = a0;
    s1 = a3;
    { s32 c_ = s2 == 0; s0 = a4; if (c_) goto L_008D80A4; }
    a3 = a2 & 0xff;
    a0 = (s32) ((u32) sp + 0x58U);
    a2 = 0; func_008BB3F0(a0, a1, a2, a3);
    v1 = (*(volatile s32 *) (u32) (s2 + 244));
    if (v1 == 0) { v1 = (*(volatile u8 *) (u32) (s2 + 35)); goto L_008D7FBC; }
    v0 = 255;
    a0 = (s32) ((u32) sp + 0x5cU);
    (*(volatile u8 *) (u32) (sp + 92)) = (u8) v0;
    a1 = a0;
    (*(volatile u8 *) (u32) (sp + 93)) = (u8) v0;
    a2 = (s32) ((u32) sp + 0x58U);
    (*(volatile u8 *) (u32) (sp + 94)) = (u8) v0;
    a3 = 60;
    (*(volatile u8 *) (u32) (sp + 95)) = (u8) v0; func_008BAE50(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 244));
    a1 = (s32) ((u32) sp + 0x5cU); func_001EEE60(a0, a1);
    v1 = (*(volatile u8 *) (u32) (s2 + 35));
L_008D7FBC:;
    if (v1 <= 0) { ; goto L_008D80A8; }
    at = v1 < 11;
    if (at == 0) goto L_008D80A4;
    v1 = (s32) ((u32) v1 << 2);
    v1 = (s32) ((u32) v1 + (u32) s2);
    v1 = (*(volatile s32 *) (u32) (v1 + 200));
    if (v1 == 0) goto L_008D80A4;
    a0 = (*(volatile u8 *) (u32) (sp + 88));
    a1 = 0;
    v1 = (*(volatile u8 *) (u32) (sp + 89));
    a2 = 60;
    v0 = (*(volatile u8 *) (u32) (sp + 90));
    (*(volatile u8 *) (u32) (sp + 92)) = (u8) a0;
    a0 = (*(volatile u8 *) (u32) (sp + 91));
    (*(volatile u8 *) (u32) (sp + 93)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 94)) = (u8) v0;
    (*(volatile u8 *) (u32) (sp + 95)) = (u8) a0; v0 = func_008BB190(a0, a1, a2);
    (*(volatile u8 *) (u32) (sp + 95)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (s2 + 35));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s2);
    a0 = (*(volatile s32 *) (u32) (v0 + 200));
    a1 = (s32) ((u32) sp + 0x5cU); func_001F18D0(a0, a1);
    v1 = (*(volatile s32 *) (u32) (s2 + 248));
    if (v1 == 0) { v1 = (*(volatile s32 *) (u32) (s2 + 252)); goto L_008D8088; }
    if (s1 == 0) goto L_008D8084;
    if (s0 == 0) goto L_008D8084;
    v0 = (*(volatile u8 *) (u32) (s2 + 35));
    v0 = (s32) ((u32) v0 + (u32) s2);
    s3 = (*(volatile u8 *) (u32) (v0 + 36));
    v0 = (s32) ((u32) s3 + (u32) s1);
    a0 = (*(volatile u8 *) (u32) (v0 + 20)); v0 = func_00292F00(a0);
    v1 = (s32) ((u32) s0 + (u32) s3);
    a1 = v0;
    a3 = (*(volatile u8 *) (u32) v1);
    a0 = (s32) ((u32) sp + 0x5cU);
    a2 = 0; func_008BB3F0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s2 + 248));
    a1 = (s32) ((u32) sp + 0x5cU); func_001EEE60(a0, a1);
L_008D8084:;
    v1 = (*(volatile s32 *) (u32) (s2 + 252));
L_008D8088:;
    if (v1 == 0) goto L_008D80A4;
    a0 = (s32) ((u32) sp + 0x5cU); func_008BAC60(a0);
    a0 = (*(volatile s32 *) (u32) (s2 + 252));
    a1 = (s32) ((u32) sp + 0x5cU); func_001EEE60(a0, a1);
L_008D80A4:;
L_008D80A8:;
    return;
}
