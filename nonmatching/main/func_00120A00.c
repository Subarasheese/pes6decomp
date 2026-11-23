/* compiler: mwcc-3.0.1b210 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0010DCF0(void);
s32 func_0010EA40(s32, s32, s32, s32);
void func_00121370(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0012B0E0(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_001CDAA0(void);
void sceFsReset(void);
void sceSifInitIopHeap(void);
void sceSifInitRpc(void);
s32 sceSifRebootIop(s32, s32, s32, s32, s32, s32, s32, s32);
void sprintf(s32, s32, s32, s32, s32, s32, s32, s32);

void func_00120A00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0;
    s32 gp = 0x3ef370;
    s64 frame[36];
    s32 sp = (s32) (u32) frame;

    v0 = func_001CDAA0();
    v1 = 1;
    if (v0 != v1) { v0 = 0; goto L_00120A20; }
    v0 = 512;
L_00120A20:;
    a2 = (*(volatile s32 *) (u32) (gp + -32624));
    a1 = (s32) 0x3c0000U;
    a3 = (s32) 0x3c0000U;
    s0 = v0 | 0x100;
    a0 = (s32) ((u32) sp + 0x20U);
    a1 = (s32) ((u32) a1 + 0x5630U);
    a3 = (s32) ((u32) a3 + 0x5638U); sprintf(a0, a1, a2, a3, a4, a5, a6, a7);
L_00120A40:;
    a0 = (s32) ((u32) sp + 0x20U); v0 = sceSifRebootIop(a0, a1, a2, a3, a4, a5, a6, a7);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) goto L_00120A40;
L_00120A60:;
    v0 = func_0010EA40(a0, a1, a2, a3);
    v0 = (u64) 0 < (u64) v0;
    v0 = v0 ^ 0x1;
    if (v0 != 0) goto L_00120A60;
    a0 = s0; func_0012B0E0(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = 0; sceSifInitRpc();
    sceSifInitIopHeap();
    func_0010DCF0();
    v0 = (s32) 0x3f0000U;
    a1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + 30624));
    if (v0 != a1) goto L_00120AB8;
    a1 = 2;
L_00120AB8:;
    a0 = 0; func_00121370(a0, a1, a2, a3, a4, a5, a6, a7);
    sceFsReset();
    return;
}
