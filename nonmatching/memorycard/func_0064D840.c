/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_002E9330(void);
void func_002E9340(s32);
s32 func_002E9360(void);
void func_00639D40(s32);
void func_00639D60(s32);

void func_0064D840(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, s0 = 0, s1 = 0, s2 = 0;
    s64 frame[14];
    s32 sp = (s32) (u32) frame;

    v0 = (s32) 0x660000U;
    s0 = (*(volatile s32 *) (u32) (v0 + -4248)); v0 = func_002E9360();
    a0 = v0; func_002E9340(a0);
    v0 = func_002E9330();
    s2 = v0;
    a0 = (s32) ((u32) s0 + 0x253cU);
    v0 = (s32) ((u32) a0 - (u32) s0);
    v1 = (s32) ((u32) s0 + 0x37c4U);
    (*(volatile u32 *) (u32) (sp + 64)) = (u32) v0;
    at = 0x90f0;
    v0 = (s32) ((u32) v1 - (u32) a0);
    s1 = s2 & 0x1;
    a0 = (s32) ((u32) s0 + (u32) at);
    (*(volatile u32 *) (u32) (sp + 68)) = (u32) v0;
    at = (s32) 0xa0000U;
    v0 = (s32) ((u32) a0 - (u32) v1);
    at = at | 0xa18;
    (*(volatile u32 *) (u32) (sp + 72)) = (u32) v0;
    v1 = (s32) ((u32) s0 + (u32) at);
    at = (s32) 0xb0000U;
    v0 = (s32) ((u32) v1 - (u32) a0);
    at = at | 0x7764;
    (*(volatile u32 *) (u32) (sp + 76)) = (u32) v0;
    a0 = (s32) ((u32) s0 + (u32) at);
    at = (s32) 0xb0000U;
    v0 = (s32) ((u32) a0 - (u32) v1);
    at = at | 0xa790;
    (*(volatile u32 *) (u32) (sp + 80)) = (u32) v0;
    v1 = (s32) ((u32) s0 + (u32) at);
    v0 = (s32) ((u32) v1 - (u32) a0);
    at = (s32) 0xd0000U;
    (*(volatile u32 *) (u32) (sp + 84)) = (u32) v0;
    at = at | 0xe71c;
    v0 = (s32) ((u32) s0 + (u32) at);
    at = (s32) 0x110000U;
    a1 = (s32) ((u32) v0 - (u32) v1);
    at = at | 0xdc4c;
    (*(volatile u32 *) (u32) (sp + 88)) = (u32) a1;
    v1 = (s32) ((u32) s0 + (u32) at);
    v1 = (s32) ((u32) v1 - (u32) v0);
    { s32 c_ = s1 != 0; (*(volatile u32 *) (u32) (sp + 92)) = (u32) v1; if (c_) goto L_0064D9BC; }
    v1 = s2 & 0x2;
    if (v1 != 0) { a0 = s0; goto L_0064D9C0; }
    v1 = s2 & 0x10;
    if (v1 != 0) goto L_0064D9BC;
    v1 = s2 & 0x20;
    if (v1 != 0) goto L_0064D9BC;
    v1 = s2 & 0x4;
    if (v1 != 0) goto L_0064D9BC;
    v1 = s2 & 0x8;
    if (v1 != 0) goto L_0064D9BC;
    v1 = s2 & 0x40;
    if (v1 != 0) goto L_0064D9BC;
    v1 = s2 & 0x80;
    if (v1 != 0) goto L_0064D9BC;
    v1 = (s32) 0x4000000U;
    v1 = s2 & v1;
    if (v1 != 0) goto L_0064D9BC;
    v1 = (s32) 0x200000U;
    v1 = s2 & v1;
    if (v1 != 0) goto L_0064D9BC;
    v1 = (s32) 0x10000000U;
    v1 = s2 & v1;
    if (v1 != 0) goto L_0064D9BC;
    v1 = (s32) 0x40000000U;
    v1 = s2 & v1;
    if (v1 != 0) goto L_0064D9BC;
    v1 = (s32) 0x80000000U;
    v1 = s2 & v1;
    if (v1 != 0) goto L_0064D9BC;
    v1 = (s32) 0x2000000U;
    v1 = s2 & v1;
    if (v1 == 0) { v1 = s2 & 0x1000; goto L_0064D9D0; }
L_0064D9BC:;
    a0 = s0;
L_0064D9C0:;
    func_00639D60(a0);
    s0 = 0; goto L_0064DB30;
L_0064D9D0:;
    if (v1 != 0) { a0 = (s32) ((u32) s0 + 0x253cU); goto L_0064D9EC; }
    v1 = (s32) 0x1000000U;
    v1 = s2 & v1;
    if (v1 == 0) { v1 = (s32) 0x10000U; goto L_0064D9FC; }
    a0 = (s32) ((u32) s0 + 0x253cU);
L_0064D9EC:;
    func_00639D60(a0);
    s0 = 1; goto L_0064DB30;
L_0064D9FC:;
    v1 = s2 & v1;
    if (v1 != 0) { a0 = (s32) ((u32) s0 + 0x37c4U); goto L_0064DA1C; }
    v1 = (s32) 0x20000000U;
    v1 = s2 & v1;
    if (v1 == 0) { v1 = (s32) 0x400000U; goto L_0064DA2C; }
    a0 = (s32) ((u32) s0 + 0x37c4U);
L_0064DA1C:;
    func_00639D60(a0);
    s0 = 2; goto L_0064DB30;
L_0064DA2C:;
    v1 = s2 & v1;
    if (v1 != 0) { at = 0x90f0; goto L_0064DA6C; }
    v1 = s2 & 0x400;
    if (v1 != 0) goto L_0064DA68;
    v1 = s2 & 0x100;
    if (v1 != 0) goto L_0064DA68;
    v1 = s2 & 0x200;
    if (v1 != 0) goto L_0064DA68;
    v1 = s2 & 0x2000;
    if (v1 == 0) { v1 = s2 & 0x4000; goto L_0064DA7C; }
L_0064DA68:;
    at = 0x90f0;
L_0064DA6C:;
    a0 = (s32) ((u32) s0 + (u32) at); func_00639D60(a0);
    s0 = 3; goto L_0064DB30;
L_0064DA7C:;
    if (v1 != 0) { at = (s32) 0xa0000U; goto L_0064DAA4; }
    v1 = s2 & 0x8000;
    if (v1 != 0) goto L_0064DAA0;
    v1 = (s32) 0x100000U;
    v1 = s2 & v1;
    if (v1 == 0) { v1 = (s32) 0x40000U; goto L_0064DAB8; }
L_0064DAA0:;
    at = (s32) 0xa0000U;
L_0064DAA4:;
    at = at | 0xa18;
    a0 = (s32) ((u32) s0 + (u32) at); func_00639D60(a0);
    s0 = 4; goto L_0064DB30;
L_0064DAB8:;
    v1 = s2 & v1;
    if (v1 == 0) { v1 = (s32) 0x20000U; goto L_0064DAD4; }
    func_00639D60(a0);
    s0 = 5; goto L_0064DB30;
L_0064DAD4:;
    v1 = s2 & v1;
    if (v1 != 0) { at = (s32) 0xb0000U; goto L_0064DAF4; }
    v1 = (s32) 0x800000U;
    v1 = s2 & v1;
    if (v1 == 0) { v1 = (s32) 0x80000U; goto L_0064DB08; }
    at = (s32) 0xb0000U;
L_0064DAF4:;
    at = at | 0xa790;
    a0 = (s32) ((u32) s0 + (u32) at); func_00639D60(a0);
    s0 = 6; goto L_0064DB30;
L_0064DB08:;
    v1 = s2 & v1;
    if (v1 == 0) { a0 = s0; goto L_0064DB24; }
    a0 = v0; func_00639D60(a0);
    s0 = 7; goto L_0064DB30;
L_0064DB24:;
    func_00639D60(a0);
    s0 = 0;
L_0064DB30:;
    v0 = (s32) 0x80000U;
    v0 = s2 & v0;
    if (v0 == 0) { v0 = (s32) 0x20000U; goto L_0064DB48; }
    a0 = 7; goto L_0064DCE4;
L_0064DB48:;
    v0 = s2 & v0;
    if (v0 != 0) { a0 = 6; goto L_0064DCE4; }
    v0 = (s32) 0x800000U;
    v0 = s2 & v0;
    if (v0 == 0) { v0 = (s32) 0x40000U; goto L_0064DB70; }
    a0 = 6;
    goto L_0064DCE4;
L_0064DB70:;
    v0 = s2 & v0;
    if (v0 == 0) { v0 = s2 & 0x4000; goto L_0064DB84; }
    a0 = 5; goto L_0064DCE4;
L_0064DB84:;
    if (v0 != 0) { a0 = 4; goto L_0064DCE4; }
    v0 = s2 & 0x8000;
    if (v0 != 0) goto L_0064DBA8;
    v0 = (s32) 0x100000U;
    v0 = s2 & v0;
    if (v0 == 0) { v0 = (s32) 0x400000U; goto L_0064DBB4; }
L_0064DBA8:;
    a0 = 4;
    goto L_0064DCE4;
L_0064DBB4:;
    v0 = s2 & v0;
    if (v0 != 0) { a0 = 3; goto L_0064DCE4; }
    v0 = s2 & 0x400;
    if (v0 != 0) goto L_0064DBF0;
    v0 = s2 & 0x100;
    if (v0 != 0) goto L_0064DBF0;
    v0 = s2 & 0x200;
    if (v0 != 0) goto L_0064DBF0;
    v0 = s2 & 0x2000;
    if (v0 == 0) { v0 = (s32) 0x10000U; goto L_0064DBFC; }
L_0064DBF0:;
    a0 = 3;
    goto L_0064DCE4;
L_0064DBFC:;
    v0 = s2 & v0;
    if (v0 == 0) { v0 = s2 & 0x1000; goto L_0064DC10; }
    a0 = 2; goto L_0064DCE4;
L_0064DC10:;
    if (v0 != 0) { a0 = 1; goto L_0064DCE4; }
    v0 = (s32) 0x1000000U;
    v0 = s2 & v0;
    if (v0 == 0) goto L_0064DC34;
    a0 = 1;
    goto L_0064DCE4;
L_0064DC34:;
    if (s1 != 0) { a0 = 0; goto L_0064DCE4; }
    v0 = s2 & 0x2;
    if (v0 != 0) goto L_0064DCE0;
    v0 = s2 & 0x10;
    if (v0 != 0) goto L_0064DCE0;
    v0 = s2 & 0x20;
    if (v0 != 0) goto L_0064DCE0;
    v0 = s2 & 0x4;
    if (v0 != 0) goto L_0064DCE0;
    v0 = s2 & 0x8;
    if (v0 != 0) goto L_0064DCE0;
    v0 = s2 & 0x40;
    if (v0 != 0) goto L_0064DCE0;
    v0 = s2 & 0x80;
    if (v0 != 0) goto L_0064DCE0;
    v0 = (s32) 0x4000000U;
    v0 = s2 & v0;
    if (v0 != 0) goto L_0064DCE0;
    v0 = (s32) 0x200000U;
    v0 = s2 & v0;
    if (v0 != 0) goto L_0064DCE0;
    v0 = (s32) 0x80000000U;
    v0 = s2 & v0;
    if (v0 != 0) goto L_0064DCE0;
    v0 = (s32) 0x10000000U;
    v0 = s2 & v0;
    if (v0 != 0) goto L_0064DCE0;
    v0 = (s32) 0x2000000U;
    v0 = s2 & v0;
    if (v0 == 0) { a0 = 7; goto L_0064DCE4; }
L_0064DCE0:;
    a0 = 0;
L_0064DCE4:;
    at = a0 < s0;
    s1 = 0;
    { s32 c_ = at != 0; v1 = s0; if (c_) goto L_0064DE80; }
    a5 = (s32) ((u32) a0 - (u32) s0);
    a4 = (s32) ((u32) a5 + 0x1U);
    at = a4 < 9;
    { s32 c_ = at != 0; v0 = (s32) ((u32) a0 + 0xfffffff8U); if (c_) goto L_0064DE48; }
    at = a0 < s0;
    t4 = 0;
    a7 = 0;
    a3 = 0;
    a2 = 0;
    { s32 c_ = at != 0; a1 = 0; if (c_) goto L_0064DD3C; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = a0 < at;
    if (at == 0) goto L_0064DD3C;
    a1 = 1;
L_0064DD3C:;
    if (a1 == 0) goto L_0064DD5C;
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = s0 < at;
    if (at == 0) goto L_0064DD5C;
    a2 = 1;
L_0064DD5C:;
    if (a2 == 0) goto L_0064DD74;
    a1 = (s32) 0x80000000U;
    if (s0 == a1) goto L_0064DD74;
    a3 = 1;
L_0064DD74:;
    if (a3 == 0) goto L_0064DDB0;
    a3 = (s32) 0x80000000U;
    a1 = (s32) ((u32) 0 - (u32) s0);
    a2 = a0 & a3;
    a1 = a1 & a3;
    { s32 c_ = a2 != a1; a6 = 1; if (c_) goto L_0064DDA4; }
    a1 = a5 & a3;
    if (a2 == a1) goto L_0064DDA4;
    a6 = 0;
L_0064DDA4:;
    if (a6 == 0) goto L_0064DDB0;
    a7 = 1;
L_0064DDB0:;
    if (a7 == 0) goto L_0064DDE4;
    a2 = (s32) 0x80000000U;
    a1 = a5 & a2;
    { s32 c_ = a1 != 0; a3 = 1; if (c_) goto L_0064DDD8; }
    a1 = a4 & a2;
    if (a1 == 0) goto L_0064DDD8;
    a3 = 0;
L_0064DDD8:;
    if (a3 == 0) goto L_0064DDE4;
    t4 = 1;
L_0064DDE4:;
    if (t4 == 0) goto L_0064DE48;
    a1 = (s32) ((u32) s0 << 2);
    a1 = (s32) ((u32) a1 + (u32) sp);
    a5 = (s32) ((u32) a1 + 0x40U);
L_0064DDF8:;
    a2 = (*(volatile s32 *) (u32) a5);
    v1 = (s32) ((u32) v1 + 0x8U);
    a1 = (*(volatile s32 *) (u32) (a5 + 4));
    at = v0 < v1;
    a3 = (*(volatile s32 *) (u32) (a5 + 8));
    a4 = (s32) ((u32) s1 + (u32) a2);
    a4 = (s32) ((u32) a4 + (u32) a1);
    a2 = (*(volatile s32 *) (u32) (a5 + 12));
    a1 = (*(volatile s32 *) (u32) (a5 + 16));
    a4 = (s32) ((u32) a4 + (u32) a3);
    a3 = (*(volatile s32 *) (u32) (a5 + 20));
    a4 = (s32) ((u32) a4 + (u32) a2);
    a4 = (s32) ((u32) a4 + (u32) a1);
    a2 = (*(volatile s32 *) (u32) (a5 + 24));
    a1 = (*(volatile s32 *) (u32) (a5 + 28));
    a3 = (s32) ((u32) a4 + (u32) a3);
    a2 = (s32) ((u32) a3 + (u32) a2);
    s1 = (s32) ((u32) a2 + (u32) a1);
    { s32 c_ = at == 0; a5 = (s32) ((u32) a5 + 0x20U); if (c_) goto L_0064DDF8; }
L_0064DE48:;
    at = a0 < v1;
    if (at != 0) goto L_0064DE80;
    v0 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) sp);
    a1 = (s32) ((u32) v0 + 0x40U);
L_0064DE60:;
    v0 = (*(volatile s32 *) (u32) a1);
    v1 = (s32) ((u32) v1 + 0x1U);
    at = a0 < v1;
    s1 = (s32) ((u32) s1 + (u32) v0);
    a1 = (s32) ((u32) a1 + 0x4U);
    if (at == 0) goto L_0064DE60;
L_0064DE80:;
    a0 = s1; func_00639D40(a0);
    v1 = (s32) 0x660000U;
    v0 = 0;
    { s32 c_ = s0 <= 0; (*(volatile u32 *) (u32) (v1 + -24768)) = (u32) 0; if (c_) goto L_0064DF70; }
    at = s0 < 9;
    { s32 c_ = at != 0; a4 = (s32) ((u32) s0 + 0xfffffff8U); if (c_) goto L_0064DF30; }
    { s32 c_ = s0 < 0; v1 = 0; if (c_) goto L_0064DEC4; }
    at = (s32) 0x7fff0000U;
    at = at | 0xffff;
    at = s0 < at;
    if (at == 0) goto L_0064DEC4;
    v1 = 1;
L_0064DEC4:;
    if (v1 == 0) { at = v0 < s0; goto L_0064DF34; }
    v1 = (s32) 0x660000U;
    a5 = (s32) ((u32) sp + 0x40U);
    a3 = (*(volatile s32 *) (u32) (v1 + -24768));
L_0064DED8:;
    a1 = (*(volatile s32 *) (u32) a5);
    v0 = (s32) ((u32) v0 + 0x8U);
    a0 = (*(volatile s32 *) (u32) (a5 + 4));
    v1 = v0 < a4;
    a2 = (*(volatile s32 *) (u32) (a5 + 8));
    a3 = (s32) ((u32) a3 + (u32) a1);
    a3 = (s32) ((u32) a3 + (u32) a0);
    a1 = (*(volatile s32 *) (u32) (a5 + 12));
    a0 = (*(volatile s32 *) (u32) (a5 + 16));
    a3 = (s32) ((u32) a3 + (u32) a2);
    a2 = (*(volatile s32 *) (u32) (a5 + 20));
    a3 = (s32) ((u32) a3 + (u32) a1);
    a3 = (s32) ((u32) a3 + (u32) a0);
    a1 = (*(volatile s32 *) (u32) (a5 + 24));
    a0 = (*(volatile s32 *) (u32) (a5 + 28));
    a2 = (s32) ((u32) a3 + (u32) a2);
    a1 = (s32) ((u32) a2 + (u32) a1);
    a3 = (s32) ((u32) a1 + (u32) a0);
    { s32 c_ = v1 != 0; a5 = (s32) ((u32) a5 + 0x20U); if (c_) goto L_0064DED8; }
    v1 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v1 + -24768)) = (u32) a3;
L_0064DF30:;
    at = v0 < s0;
L_0064DF34:;
    if (at == 0) goto L_0064DF70;
    v1 = (s32) ((u32) v0 << 2);
    a0 = (s32) 0x660000U;
    v1 = (s32) ((u32) v1 + (u32) sp);
    a4 = (s32) ((u32) v1 + 0x40U);
    v1 = (s32) 0x660000U;
L_0064DF50:;
    a2 = (*(volatile s32 *) (u32) a4);
    v0 = (s32) ((u32) v0 + 0x1U);
    a3 = (*(volatile s32 *) (u32) (a0 + -24768));
    a1 = v0 < s0;
    a4 = (s32) ((u32) a4 + 0x4U);
    a2 = (s32) ((u32) a3 + (u32) a2);
    { s32 c_ = a1 != 0; (*(volatile u32 *) (u32) (v1 + -24768)) = (u32) a2; if (c_) goto L_0064DF50; }
L_0064DF70:;
    v0 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v0 + -24764)) = (u32) s1;
    v0 = (s32) 0x660000U;
    (*(volatile u32 *) (u32) (v0 + -24760)) = (u32) 0;
    v0 = 1;
    return;
}
