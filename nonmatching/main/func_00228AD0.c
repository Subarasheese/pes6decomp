/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 Pes6SaveData_IsUnavailable(void);
s64 func_00226240(void);
s64 func_00238630(s64, s64);

s64 func_00228AD0(s64 a0, s64 a1, s64 a2) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
    s64 gp = 0x3ef370;

    s6 = a2;
    s4 = a0;
    s3 = a1;
    s2 = 0;
    s1 = 0;
    s0 = (s64) ((u64) 0 + (u64) (s64) 255); v0 = Pes6SaveData_IsUnavailable();
    v1 = 1;
    if (v0 != v1) { v0 = (*(volatile s32 *) (u32) (gp + -31684)); goto L_00228B24; }
    s5 = 0; goto L_00228B30;
L_00228B24:;
    if (v0 == 0) { s5 = 0; goto L_00228B30; }
    s5 = (s32) ((u32) v0 + 0x7980U);
L_00228B30:;
    if (s5 != 0) { v0 = s4 & 0xff; goto L_00228B40; }
    v0 = 255; goto L_00228E54;
L_00228B40:;
    v1 = 57;
    if (v0 == v1) goto L_00228D44;
    v1 = 56;
    if (v0 == v1) goto L_00228D44;
    v1 = 55;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s5 + 17942)); goto L_00228D3C; }
    v1 = 54;
    if (v0 == v1) goto L_00228D38;
    v1 = 53;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s5 + 17942)); goto L_00228D30; }
    v1 = 52;
    if (v0 == v1) goto L_00228D2C;
    v1 = 51;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s5 + 17943)); goto L_00228D24; }
    v1 = 50;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s5 + 17942)); goto L_00228D1C; }
    v1 = 49;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s5 + 17942)); goto L_00228D14; }
    v1 = 48;
    if (v0 == v1) goto L_00228D10;
    v1 = 47;
    if (v0 == v1) goto L_00228D10;
    v1 = 45;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s5 + 17943)); goto L_00228D08; }
    v1 = 44;
    if (v0 == v1) goto L_00228D04;
    v1 = 43;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s5 + 17942)); goto L_00228CFC; }
    v1 = 42;
    if (v0 == v1) goto L_00228CF8;
    v1 = 41;
    if (v0 == v1) goto L_00228CF8;
    v1 = 39;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s5 + 17948)); goto L_00228CF0; }
    v1 = 38;
    if (v0 == v1) goto L_00228CEC;
    v1 = 37;
    if (v0 == v1) goto L_00228CEC;
    v1 = 36;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s5 + 17947)); goto L_00228CE4; }
    v1 = 35;
    if (v0 == v1) { s2 = 0; goto L_00228CDC; }
    v1 = 34;
    if (v0 == v1) goto L_00228CD8;
    v1 = 33;
    if (v0 == v1) goto L_00228CD8;
    v1 = 32;
    if (v0 == v1) goto L_00228CD8;
    v1 = 31;
    if (v0 == v1) goto L_00228CD8;
    v1 = 30;
    if (v0 == v1) goto L_00228CD8;
    v1 = 29;
    if (v0 == v1) goto L_00228CD8;
    v1 = 28;
    if (v0 == v1) goto L_00228CD8;
    v1 = 10;
    if (v0 == v1) { v0 = (*(volatile u8 *) (u32) (s5 + 17942)); goto L_00228CD0; }
    v1 = 9;
    if (v0 == v1) goto L_00228CCC;
    v1 = 8;
    if (v0 == v1) goto L_00228CCC;
    v1 = 7;
    if (v0 == v1) goto L_00228CCC;
    v1 = 1;
    if (v0 == v1) goto L_00228CCC;
L_00228CCC:;
    v0 = (*(volatile u8 *) (u32) (s5 + 17942));
L_00228CD0:;
    s2 = 0; goto L_00228DC0;
L_00228CD8:;
    s2 = 0;
L_00228CDC:;
    v0 = (s64) ((u64) 0 + (u64) (s64) 5); goto L_00228DC0;
L_00228CE4:;
    s2 = (s64) ((u64) 0 + (u64) (s64) 5); goto L_00228DC0;
L_00228CEC:;
    v0 = (*(volatile u8 *) (u32) (s5 + 17948));
L_00228CF0:;
    s2 = (s64) ((u64) 0 + (u64) (s64) 9); goto L_00228DC0;
L_00228CF8:;
    v0 = (*(volatile u8 *) (u32) (s5 + 17942));
L_00228CFC:;
    s2 = 0; goto L_00228DC0;
L_00228D04:;
    v0 = (*(volatile u8 *) (u32) (s5 + 17943));
L_00228D08:;
    s2 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00228DC0;
L_00228D10:;
    v0 = (*(volatile u8 *) (u32) (s5 + 17942));
L_00228D14:;
    s2 = 0; goto L_00228DC0;
L_00228D1C:;
    s2 = 0; goto L_00228DC0;
L_00228D24:;
    s2 = (s64) ((u64) 0 + (u64) (s64) 8); goto L_00228DC0;
L_00228D2C:;
    v0 = (*(volatile u8 *) (u32) (s5 + 17942));
L_00228D30:;
    s2 = 0; goto L_00228DC0;
L_00228D38:;
    v0 = (*(volatile u8 *) (u32) (s5 + 17942));
L_00228D3C:;
    s2 = 0; goto L_00228DC0;
L_00228D44:;
    v0 = func_00226240();
    a0 = v0 & 0xff;
    v0 = 4;
    if (a0 == v0) { s2 = (s64) ((u64) 0 + (u64) (s64) 2); goto L_00228DB0; }
    v0 = 3;
    if (a0 == v0) { s2 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00228DA8; }
    v1 = 2;
    if (a0 == v1) { s2 = (s64) ((u64) 0 + (u64) (s64) 1); goto L_00228DA0; }
    v0 = 1;
    if (a0 == v0) { s1 = v1 & 0xff; goto L_00228D98; }
    if (a0 == 0) { s2 = v1 & 0xff; goto L_00228D90; }
    v0 = s1 & 0xff; goto L_00228DB8;
L_00228D90:;
    s1 = v0 & 0xff; goto L_00228DB4;
L_00228D98:;
    s2 = (s64) ((u64) 0 + (u64) (s64) 10); goto L_00228DB4;
L_00228DA0:;
    s1 = s2; goto L_00228DB4;
L_00228DA8:;
    s1 = s2; goto L_00228DB4;
L_00228DB0:;
    s1 = (s64) ((u64) 0 + (u64) (s64) 1);
L_00228DB4:;
    v0 = s1 & 0xff;
L_00228DB8:;
    v0 = (s32) ((u32) v0 + (u32) s5);
    v0 = (*(volatile u8 *) (u32) (v0 + 17942));
L_00228DC0:;
    s2 = s2 & 0xff;
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) s2 + (u32) v0);
    s1 = v0 & 0xff;
    at = s2 < s1;
    { s32 c_ = at == 0; s4 = s2; if (c_) goto L_00228E50; }
    s5 = s6 & 0xff;
    a0 = s4;
L_00228DE4:;
    a1 = s3; v0 = func_00238630(a0, a1);
    s0 = v0 & 0xff;
    v0 = 255;
    if (s0 == v0) { v0 = (s32) ((u32) s4 + 0x1U); goto L_00228E40; }
    v0 = 2;
    if (s5 == v0) { v0 = s4; goto L_00228E54; }
    v0 = 1;
    if (s5 == v0) { v0 = s4 & 0xff; goto L_00228E30; }
    if (s5 == 0) goto L_00228E28;
    goto L_00228E3C;
L_00228E28:;
    v0 = s0; goto L_00228E54;
L_00228E30:;
    v0 = (s32) ((u32) v0 - (u32) s2);
    v0 = v0 & 0xff; goto L_00228E54;
L_00228E3C:;
    v0 = (s32) ((u32) s4 + 0x1U);
L_00228E40:;
    s4 = v0 & 0xff;
    v0 = s4 < s1;
    if (v0 != 0) { a0 = s4; goto L_00228DE4; }
L_00228E50:;
    v0 = s0;
L_00228E54:;
    return v0;
}
