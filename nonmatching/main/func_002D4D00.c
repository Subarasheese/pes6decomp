/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
s32 Pes6Module_Load(s32);
void Pes6Scene_Set(s32, s32);
void func_001FC780(s32);
void func_002CA9F0(s32, s32, s32, s32);
void func_002CAA20(s32, s32, s32, s32);
void func_002CAD40(s32, s32, s32, s32);
void func_002CADA0(s32, s32, s32, s32);
s32 func_00BE8050(s32, s32, s32, s32);

void func_002D4D00(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    a0 = (*(volatile s32 *) (u32) (gp + -21984));
    a1 = 4;
    if (a0 == a1) goto L_002D4DF8;
    v1 = 3;
    if (a0 == v1) { a0 = 9; goto L_002D4DCC; }
    v1 = 2;
    if (a0 == v1) goto L_002D4DB0;
    v1 = 1;
    if (a0 == v1) goto L_002D4D94;
    if (a0 == 0) { a0 = 8; goto L_002D4D48; }
    goto L_002D4E08;
L_002D4D48:;
    func_001FC780(a0);
    a0 = 9; func_001FC780(a0);
    a0 = 10; func_001FC780(a0);
    a0 = 11; func_001FC780(a0);
    func_002CADA0(a0, a1, a2, a3);
    func_002CAA20(a0, a1, a2, a3);
    a0 = 25; v0 = Pes6Module_Load(a0);
    a0 = 35; v0 = Pes6Module_Load(a0);
    v1 = 1;
    (*(volatile u32 *) (u32) (gp + -21984)) = (u32) v1; goto L_002D4E04;
L_002D4D94:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) goto L_002D4E04;
    v1 = 2;
    (*(volatile u32 *) (u32) (gp + -21984)) = (u32) v1; goto L_002D4E04;
L_002D4DB0:;
    v0 = func_00BE8050(a0, a1, a2, a3);
    if (v0 == 0) goto L_002D4E04;
    v1 = 3;
    (*(volatile u32 *) (u32) (gp + -21984)) = (u32) v1; goto L_002D4E04;
L_002D4DCC:;
    func_001FC780(a0);
    a0 = 11; func_001FC780(a0);
    func_002CA9F0(a0, a1, a2, a3);
    func_002CAD40(a0, a1, a2, a3);
    v1 = 4;
    (*(volatile u32 *) (u32) (gp + -21984)) = (u32) v1; goto L_002D4E04;
L_002D4DF8:;
    a0 = 0; Pes6Scene_Set(a0, a1);
    (*(volatile u32 *) (u32) (gp + -21984)) = (u32) 0;
L_002D4E04:;
L_002D4E08:;
    return;
}
