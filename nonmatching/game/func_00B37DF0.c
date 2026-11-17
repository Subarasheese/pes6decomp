/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0027C990(s32, s32);
void func_002BB810(s32);
void func_002BB820(s32, s32);
void func_002BB870(s32, s32);
void func_002BBF20(s32, s32, s32);
s32 func_002DCA30(void);
s32 func_00B364C0(void);
void func_00BBB960(s32);
s32 func_00BF6270(void);

void func_00B37DF0(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    v0 = func_00B364C0();
    s1 = v0;
    s0 = 0; v0 = func_002DCA30();
    if (v0 != 0) goto L_00B37EF8;
L_00B37E18:;
    v0 = (s32) 0xcc0000U;
    v0 = (*(volatile s8 *) (u32) (v0 + -13526));
    if (v0 == 0) goto L_00B37E8C;
    v0 = 2;
    if (s1 == v0) goto L_00B37E8C;
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -13525));
    v0 = (*(volatile s8 *) (u32) (v0 + -13524));
    at = v1 < v0;
    if (at == 0) goto L_00B37E94;
    v0 = (s32) 0xcc0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + -13527));
    if (a0 == 0) goto L_00B37E94;
    s0 = a0 & 0xff;
    a1 = 60; func_002BB870(a0, a1);
    v1 = (s32) 0xcc0000U;
    v0 = (s32) 0xcc0000U;
    v1 = (*(volatile s8 *) (u32) (v1 + -13525));
    (*(volatile u8 *) (u32) (v0 + -13527)) = (u8) 0;
    v0 = (s32) 0xcc0000U;
    v1 = (s32) ((u32) v1 + 0x1U);
    (*(volatile u8 *) (u32) (v0 + -13525)) = (u8) v1; goto L_00B37E94;
L_00B37E8C:;
    v0 = (s32) 0xcc0000U;
    s0 = (*(volatile u8 *) (u32) (v0 + -13528));
L_00B37E94:;
    if (s0 != 0) goto L_00B37EA4;
    v0 = (s32) 0xcc0000U;
    s0 = (*(volatile u8 *) (u32) (v0 + -13528));
L_00B37EA4:;
    s1 = s0 & 0xff; v0 = func_00BF6270();
    if (s1 != v0) goto L_00B37F0C;
    a0 = 5; v0 = func_0027C990(a0, a1);
    if (v0 == 0) goto L_00B37ECC;
    a0 = 1; func_002BB810(a0);
L_00B37ECC:;
    a0 = s0;
    a1 = 29; func_002BB820(a0, a1);
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0xffff91b0U); func_002BBF20(a0, a1, a2);
L_00B37EE4:;
    a0 = (s32) 0xcc0000U;
    v1 = (s32) 0xcc0000U;
    (*(volatile u8 *) (u32) (a0 + -13526)) = (u8) s0;
    (*(volatile u8 *) (u32) (v1 + -13523)) = (u8) 0; goto L_00B37F34;
L_00B37EF8:;
    v0 = (s32) 0x8b0000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 5212)); func_00BBB960(a0);
    goto L_00B37E18;
L_00B37F0C:;
    v0 = func_00BF6270();
    a1 = v0 & 0xff;
    a0 = s0; func_002BB820(a0, a1);
    a0 = (s32) 0x3c0000U;
    a0 = (s32) ((u32) a0 + 0xffff9220U); func_002BBF20(a0, a1, a2);
    goto L_00B37EE4;
L_00B37F34:;
    return;
}
