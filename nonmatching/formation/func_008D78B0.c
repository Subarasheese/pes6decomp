/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_001EE5D0(s32, s32);
void func_001EF860(s32, s32);
void func_001EF900(s32, s32);
void func_001F18B0(s32, s32);
void func_001F3CA0(s32, s32, s32, s32);
void func_001F3D10(s32, s32);
s32 func_008B9F20(s32, s32, s32, s32);
s32 func_008BB4D0(s32, s32, s32, s32);
void func_008D5A50(s32, s32, s32, s32);

void func_008D78B0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0;
    s64 frame[18];
    s32 sp = (s32) (u32) frame;

    v0 = 8;
    v1 = (s32) ((u32) sp + 0x88U);
    s1 = a0;
    { s32 c_ = v1 == 0; s0 = a1; if (c_) goto L_008D7900; }
L_008D78E4:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_008D78E4;
L_008D7900:;
    a0 = (*(volatile s32 *) (u32) (s1 + 84)); func_001F3CA0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s1 + 80)); func_001F3CA0(a0, a1, a2, a3);
    (*(volatile u8 *) (u32) (s1 + 35)) = (u8) s0;
    s3 = 0;
    (*(volatile u32 *) (u32) (s1 + 244)) = (u32) 0;
    s2 = s1;
    (*(volatile u32 *) (u32) (s1 + 248)) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 252)) = (u32) 0;
    (*(volatile u32 *) (u32) (s1 + 272)) = (u32) 0;
L_008D792C:;
    if (s3 <= 0) goto L_008D7958;
    v1 = (*(volatile s8 *) (u32) (s1 + 33));
    v0 = 3;
    if (v1 != v0) goto L_008D7958;
    a0 = (*(volatile s32 *) (u32) (s2 + 112));
    a1 = 0; func_001EF900(a0, a1);
    goto L_008D7968;
L_008D7958:;
    a0 = (*(volatile s32 *) (u32) (s2 + 112));
    a1 = 1; func_001EF900(a0, a1);
L_008D7968:;
    a0 = (*(volatile s32 *) (u32) (s2 + 200));
    a1 = 1; func_001F3D10(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s2 + 200));
    a1 = 255; func_001F18B0(a0, a1);
    s3 = (s32) ((u32) s3 + 0x1U);
    v1 = s3 < 11;
    { s32 c_ = v1 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_008D792C; }
    s2 = s0 & 0xff;
    at = s2 < 11;
    if (at == 0) { ; goto L_008D7AB4; }
    s3 = (s32) ((u32) s2 << 2);
    a1 = 0;
    v0 = (s32) ((u32) s3 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 112));
    s5 = (s32) ((u32) v0 + 0x70U); func_001EF900(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s1 + 84));
    a1 = 1;
    a2 = 0; v0 = func_008B9F20(a0, a1, a2, a3);
    s4 = v0;
    a1 = (s32) ((u32) sp + 0x88U);
    a0 = s4;
    a2 = 2; v0 = func_008BB4D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 244)) = (u32) v0;
    a0 = (*(volatile s32 *) (u32) s5);
    a1 = (s32) ((u32) sp + 0x70U); func_001EE5D0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s1 + 244));
    a1 = (s32) ((u32) sp + 0x70U); func_001EF860(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s1 + 244));
    a1 = 1; func_001EF900(a0, a1);
    a0 = (*(volatile s8 *) (u32) (s1 + 33));
    v1 = 3;
    if (a0 == v1) { v1 = (s32) ((u32) s2 + (u32) s1); goto L_008D7A1C; }
    goto L_008D7AB0;
L_008D7A1C:;
    v1 = (*(volatile u8 *) (u32) (v1 + 36));
    if (v1 <= 0) goto L_008D7A9C;
    at = v1 < 11;
    if (at == 0) goto L_008D7A9C;
    a0 = s4;
    a1 = (s32) ((u32) sp + 0x88U);
    a2 = 2; v0 = func_008BB4D0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s1 + 248)) = (u32) v0;
    v0 = (s32) ((u32) s2 + (u32) s1);
    s2 = (s32) ((u32) v0 + 0x24U);
    v0 = (*(volatile u8 *) (u32) (v0 + 36));
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v0 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 156));
    a1 = (s32) ((u32) sp + 0x70U); func_001EE5D0(a0, a1);
    a0 = (*(volatile s32 *) (u32) (s1 + 248));
    a1 = (s32) ((u32) sp + 0x70U); func_001EF860(a0, a1);
    v0 = (s32) ((u32) s3 + (u32) s1);
    a0 = (*(volatile s32 *) (u32) (v0 + 200));
    a1 = 0; func_001F3D10(a0, a1);
    a2 = (*(volatile u8 *) (u32) s2);
    a0 = s1;
    a1 = s0; func_008D5A50(a0, a1, a2, a3);
    goto L_008D7AB0;
L_008D7A9C:;
    if (s2 <= 0) goto L_008D7AB0;
    a0 = (*(volatile s32 *) (u32) (s1 + 244));
    a1 = 0; func_001EF900(a0, a1);
L_008D7AB0:;
L_008D7AB4:;
    return;
}
