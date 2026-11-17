/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32, s32);
s32 func_001DBDD0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001DC510(s32, s32, s32, s32);
void func_001DC950(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001DD3C0(s32);
s32 func_001DD520(s32);
void memset(s32, s32, s32);

s32 func_001DBB80(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    s4 = a0;
    s3 = a1;
    s2 = a2;
    s1 = a3;
    { s32 c_ = s1 == 0; s0 = a4; if (c_) goto L_001DBBCC; }
    v0 = func_001DD3C0(a0);
    if (v0 != 0) goto L_001DBBD4;
    v0 = 0; goto L_001DBD48;
L_001DBBCC:;
    v0 = 0; goto L_001DBD48;
L_001DBBD4:;
    a0 = (s32) 0x530000U;
    a1 = 0;
    a0 = (s32) ((u32) a0 + 0xffffabc0U);
    a2 = 48; memset(a0, a1, a2);
    a0 = s4; v0 = func_001DD520(a0);
    v1 = (s32) 0x530000U;
    { s32 c_ = v0 == 0; (*(volatile u32 *) (u32) (v1 + -21548)) = (u32) v0; if (c_) goto L_001DBD00; }
    v1 = (s32) 0x530000U;
    a0 = s3 & 0xffff;
    (*(volatile u32 *) (u32) (v1 + -21568)) = (u32) s4;
    v1 = (*(volatile s32 *) (u32) v0);
    v1 = (*(volatile u8 *) (u32) (v1 + 2));
    at = v1 < a0;
    if (at == 0) { a0 = 0xffff; goto L_001DBD08; }
    v1 = (s32) 0x530000U;
    (*(volatile u16 *) (u32) (v1 + -21564)) = (u16) s3;
L_001DBC24:;
    v0 = (*(volatile s32 *) (u32) v0);
    v1 = s2 & 0xffff;
    v0 = (*(volatile u8 *) (u32) (v0 + 3));
    at = v0 < v1;
    if (at == 0) { v1 = 0xffff; goto L_001DBD14; }
    v0 = (s32) 0x530000U;
    (*(volatile u16 *) (u32) (v0 + -21562)) = (u16) s2;
L_001DBC44:;
    v0 = (s32) 0x530000U;
    a0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v0 + -21556)) = (u32) s0;
    v1 = (s32) 0x530000U;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (a0 + -21560)) = (u32) s1;
    (*(volatile u32 *) (u32) (v1 + -21544)) = (u32) s1;
    (*(volatile u8 *) (u32) (v0 + -21532)) = (u8) 0;
L_001DBC64:;
    func_001DC510(a0, a1, a2, a3);
    v0 = (s32) 0x530000U;
    v1 = (s32) 0x530000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -21532));
    v0 = (s32) 0x530000U;
    a0 = (s32) ((u32) a0 + 0x1U);
    v0 = (*(volatile s32 *) (u32) (v0 + -21004));
    { s32 c_ = v0 != 0; (*(volatile u8 *) (u32) (v1 + -21532)) = (u8) a0; if (c_) goto L_001DBC64; }
    v0 = (s32) 0x530000U;
    v1 = 16;
    v0 = (*(volatile s32 *) (u32) (v0 + -21548));
    v0 = (*(volatile s32 *) (u32) v0);
    v0 = (*(volatile u16 *) (u32) (v0 + 12));
    if (v0 == v1) goto L_001DBD20;
L_001DBCA8:;
    v0 = func_001DBDD0(a0, a1, a2, a3, a4, a5, a6, a7);
    s1 = v0;
    a0 = s1; func_001DC950(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (s32) 0x530000U;
    a0 = (*(volatile s32 *) (u32) (v0 + -21528));
    if (a0 == 0) goto L_001DBCF8;
L_001DBCCC:;
    s0 = (*(volatile s32 *) (u32) (a0 + 12)); Pes6Heap_Free(a0, a1);
    a0 = s0;
    if (s0 != 0) goto L_001DBCCC;
    v1 = (s32) 0x530000U;
    v0 = (s32) 0x530000U;
    (*(volatile u32 *) (u32) (v1 + -21528)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + -21524)) = (u32) 0;
L_001DBCF8:;
    v0 = s1; goto L_001DBD48;
L_001DBD00:;
    v0 = 0; goto L_001DBD48;
L_001DBD08:;
    v1 = (s32) 0x530000U;
    (*(volatile u16 *) (u32) (v1 + -21564)) = (u16) a0; goto L_001DBC24;
L_001DBD14:;
    v0 = (s32) 0x530000U;
    (*(volatile u16 *) (u32) (v0 + -21562)) = (u16) v1; goto L_001DBC44;
L_001DBD20:;
    v0 = (s32) 0x530000U;
    v0 = (*(volatile u16 *) (u32) (v0 + -21536));
    v0 = (s32) ((u32) v0 + 0x1U);
    { s32 c_ = v0 >= 0; v1 = (s32) v0 >> 1; if (c_) goto L_001DBD3C; }
    v0 = (s32) ((u32) v0 + 0x1U);
    v1 = (s32) v0 >> 1;
L_001DBD3C:;
    v0 = (s32) 0x530000U;
    (*(volatile u16 *) (u32) (v0 + -21536)) = (u16) v1; goto L_001DBCA8;
L_001DBD48:;
    return v0;
}
