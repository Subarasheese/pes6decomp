/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void SyncDCache(s32, s32);
s32 func_00258170(void);
s32 func_00259A30(s32);
s32 func_00259AB0(void);
void func_00259CB0(s32);
void func_0025EC20(s32);

void func_0025CAE0(s32 a0, s32 a1) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 gp = 0x3ef370;
    s32 hi = 0, lo = 0;
    s64 frame[22];
    s32 sp = (s32) (u32) frame;

    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + -12323));
    if (v1 == 0) goto L_0025CC48;
    v0 = func_00259AB0();
    if (v0 == 0) goto L_0025CC48;
    a0 = (s32) ((u32) sp + 0xacU); func_00259CB0(a0);
    v0 = func_00258170();
    v1 = (s32) 0x590000U;
    s6 = (s32) 0x3b0000U;
    (*(volatile u8 *) (u32) (v1 + -12322)) = (u8) v0;
    s4 = 0;
    v0 = (s32) 0x590000U;
    fp = (*(volatile s16 *) (u32) (sp + 174));
    v1 = (*(volatile u8 *) (u32) (v0 + -12324));
    s6 = (s32) ((u32) s6 + 0xffffafb0U);
    s3 = (*(volatile s16 *) (u32) (sp + 172));
    s2 = (s32) ((u32) sp + 0xaaU);
    v0 = (s32) ((u32) gp + 0xffff81acU);
    s7 = (s32) ((u32) v0 + (u32) v1);
L_0025CB6C:;
    v0 = (s32) ((u32) fp + (u32) s4);
    s5 = 0;
    s1 = (s32) ((u32) v0 + 0xfffffffeU);
L_0025CB78:;
    v0 = (s32) ((u32) s6 + (u32) s5);
    v1 = (*(volatile u8 *) (u32) s7);
    v0 = (*(volatile u8 *) (u32) v0);
    v0 = v1 & v0;
    if (v0 != 0) { v0 = (s32) ((u32) s3 + (u32) s5); goto L_0025CBD8; }
L_0025CB90:;
    s5 = (s32) ((u32) s5 + 0x1U);
    v0 = s5 < 5;
    if (v0 != 0) goto L_0025CB78;
    s4 = (s32) ((u32) s4 + 0x1U);
    v0 = s4 < 5;
    { s32 c_ = v0 != 0; s6 = (s32) ((u32) s6 + 0x5U); if (c_) goto L_0025CB6C; }
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (v1 + -12336));
    v0 = (*(volatile s32 *) (u32) (v0 + -12332));
    a1 = (s32) ((u32) a0 + (u32) v0); SyncDCache(a0, a1);
    a0 = 1; func_0025EC20(a0);
    goto L_0025CC48;
L_0025CBD8:;
    v1 = (s32) ((u32) sp + 0xa8U);
    s0 = (s32) ((u32) v0 + 0xfffffffeU);
    { s32 c_ = v1 == 0; v0 = 4; if (c_) goto L_0025CC04; }
L_0025CBE8:;
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v0 = (s32) ((u32) v0 + 0xffffffffU);
    v1 = (s32) ((u32) v1 + 0x1U);
    if (v0 != 0) goto L_0025CBE8;
L_0025CC04:;
    a0 = (s32) ((u32) sp + 0xa8U);
    (*(volatile u16 *) (u32) (sp + 168)) = (u16) s0;
    (*(volatile u16 *) (u32) s2) = (u16) s1; v0 = func_00259A30(a0);
    if (v0 == 0) goto L_0025CB90;
    v1 = (s32) 0x590000U;
    v0 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + -12322));
    v0 = (*(volatile s16 *) (u32) (v0 + -12328));
    { s64 m_ = (s64) (s32) v0 * (s64) (s32) s1; lo = (s32) m_; hi = (s32) (m_ >> 32); v1 = lo; }
    v0 = (s32) 0x590000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -12336));
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (s32) ((u32) v0 + (u32) s0);
    (*(volatile u8 *) (u32) v0) = (u8) a0; goto L_0025CB90;
L_0025CC48:;
    return;
}
