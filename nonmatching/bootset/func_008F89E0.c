/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_001CDA50(s32);
s32 func_001CDAA0(void);
void func_008F9200(s32);
void func_008F9240(s32, s32);
void func_008F93B0(void);
void func_008F9410(void);
void func_008F9420(void);
void func_008F9530(s32, s32);
void func_008F95B0(s32, s32);

void func_008F89E0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    s64 frame[6];
    s32 sp = (s32) (u32) frame;

    v0 = (*(volatile u8 *) (u32) (gp + -31206));
    a0 = (*(volatile u8 *) (u32) (gp + -31208));
    v1 = (*(volatile u8 *) (u32) (gp + -31207));
    (*(volatile u8 *) (u32) (sp + 46)) = (u8) v0;
    v0 = (*(volatile u8 *) (u32) (gp + -31205));
    (*(volatile u8 *) (u32) (sp + 44)) = (u8) a0;
    (*(volatile u8 *) (u32) (sp + 45)) = (u8) v1;
    (*(volatile u8 *) (u32) (sp + 47)) = (u8) v0; func_008F9420();
    v0 = func_001CDAA0();
    s0 = v0 ^ 0;
    a0 = 1;
    s0 = (u64) s0 < (u64) (s64) 1; v0 = func_001CDA50(a0);
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) s0 << 2);
    a0 = (s32) ((u32) a0 + (u32) v0);
    v0 = (s32) 0x900000U;
    a0 = (s32) ((u32) a0 << 3);
    v0 = (s32) ((u32) v0 + 0xffff9bc0U);
    v0 = (s32) ((u32) v0 + (u32) a0);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_008F95B0(a0, a1);
    a0 = 1; v0 = func_001CDA50(a0);
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) 0x900000U;
    v0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0xffff9bc8U);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 0; func_008F9530(a0, a1);
    a0 = 1; v0 = func_001CDA50(a0);
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) 0x900000U;
    v0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0xffff9bccU);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 1; func_008F9530(a0, a1);
    a0 = 1; v0 = func_001CDA50(a0);
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) 0x900000U;
    v0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0xffff9bd0U);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 2; func_008F9530(a0, a1);
    a0 = 1; v0 = func_001CDA50(a0);
    a0 = (s32) ((u32) v0 << 2);
    v1 = (s32) 0x900000U;
    v0 = (s32) ((u32) a0 + (u32) v0);
    v1 = (s32) ((u32) v1 + 0xffff9bd4U);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0);
    a1 = 3; func_008F9530(a0, a1);
    v0 = func_001CDAA0();
    if (v0 != 0) { a0 = 1; goto L_008F8B3C; }
    a0 = 1;
    a1 = (s32) ((u32) sp + 0x2cU); func_008F9240(a0, a1);
    a0 = 2;
    a1 = (s32) ((u32) sp + 0x2cU); func_008F9240(a0, a1);
    a0 = 3; func_008F9200(a0);
    goto L_008F8B58;
L_008F8B3C:;
    func_008F9200(a0);
    a0 = 2; func_008F9200(a0);
    a0 = 3;
    a1 = (s32) ((u32) sp + 0x2cU); func_008F9240(a0, a1);
L_008F8B58:;
    func_008F9410();
    func_008F93B0();
    return;
}
