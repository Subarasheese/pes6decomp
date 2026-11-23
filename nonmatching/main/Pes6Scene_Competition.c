/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
void Pes6MemRegion_Release(s32);
s32 Pes6Module_Load(s32);
void Pes6Scene_Set(s32, s32);
s32 Pes6Settings_Get_B02_b2_w5(void);
s32 func_001BE5B0(s32);
void func_001FC780(s32);
void func_001FC830(s32, s32);
void func_0020B600(s32);
s32 func_0022F190(void);
void func_00937530(s32, s32, s32, s32);
void func_00937630(s32, s32, s32, s32);
void func_00949540(s32, s32, s32, s32);
void func_0096D830(s32, s32, s32, s32);

void Pes6Scene_Competition(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0;
    s32 gp = 0x3ef370;

    v1 = (*(volatile u8 *) (u32) (gp + -22900));
    at = (u64) v1 < (u64) (s64) 9;
    if (at == 0) goto L_00210EA0;
    a0 = (s32) 0x3d0000U;
    v1 = (s32) ((u32) v1 << 2);
    a0 = (s32) ((u32) a0 + 0x44a0U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x210ea4U) goto L_00210EA4; if (t_ == 0x210ed0U) goto L_00210ED0; if (t_ == 0x210fb4U) goto L_00210FB4; if (t_ == 0x210fd4U) goto L_00210FD4; if (t_ == 0x210fe8U) goto L_00210FE8; if (t_ == 0x211008U) goto L_00211008; if (t_ == 0x211038U) goto L_00211038; if (t_ == 0x211044U) goto L_00211044; if (t_ == 0x211084U) goto L_00211084; }
L_00210EA0:;
    (*(volatile u8 *) (u32) (gp + -22900)) = (u8) 0;
L_00210EA4:;
    v0 = (*(volatile s32 *) (u32) (gp + -31684));
    (*(volatile u32 *) (u32) v0) = (u32) 0; v0 = func_0022F190();
    if (v0 == 0) { v0 = 1; goto L_00210EC8; }
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) 0;
    v0 = 1;
L_00210EC8:;
    (*(volatile u8 *) (u32) (gp + -22908)) = (u8) 0;
    (*(volatile u8 *) (u32) (gp + -22900)) = (u8) v0;
L_00210ED0:;
    v0 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -10312));
    if (a1 == 0) { a0 = 18; goto L_00210EF4; }
    a0 = 18; func_001FC830(a0, a1);
    v0 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v0 + -10312)) = (u32) 0; goto L_00210EFC;
L_00210EF4:;
    v0 = Pes6Module_Load(a0);
L_00210EFC:;
    v0 = (s32) 0x590000U;
    v1 = 14;
    a0 = (*(volatile u8 *) (u32) (v0 + 7177));
    if (a0 == v1) goto L_00210F74;
    v0 = 2;
    if (a0 == v0) goto L_00210F74;
    v0 = 1;
    if (a0 == v0) goto L_00210F74;
    v0 = 4;
    if (a0 == v0) goto L_00210F3C;
    goto L_00210F74;
L_00210F3C:;
    v0 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -10308));
    if (a1 == 0) { a0 = 23; goto L_00210F60; }
    a0 = 23; func_001FC830(a0, a1);
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -10308)) = (u32) 0; goto L_00210F68;
L_00210F60:;
    v0 = Pes6Module_Load(a0);
L_00210F68:;
    v1 = 2;
    (*(volatile u32 *) (u32) (gp + -22904)) = (u32) v1; goto L_00210FA8;
L_00210F74:;
    v0 = (s32) 0x590000U;
    a1 = (*(volatile s32 *) (u32) (v0 + -10308));
    if (a1 == 0) { a0 = 22; goto L_00210F98; }
    a0 = 22; func_001FC830(a0, a1);
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + -10308)) = (u32) 0; goto L_00210FA0;
L_00210F98:;
    v0 = Pes6Module_Load(a0);
L_00210FA0:;
    v1 = 1;
    (*(volatile u32 *) (u32) (gp + -22904)) = (u32) v1;
L_00210FA8:;
    v1 = 2;
    (*(volatile u8 *) (u32) (gp + -22900)) = (u8) v1; goto L_0021114C;
L_00210FB4:;
    v0 = Pes6File_AllChannelsIdle();
    v1 = 1;
    if (v0 != v1) { ; goto L_00211150; }
    v1 = 3;
    (*(volatile u8 *) (u32) (gp + -22900)) = (u8) v1; goto L_0021114C;
L_00210FD4:;
    a0 = 3; v0 = Pes6Module_Load(a0);
    v1 = 4;
    (*(volatile u8 *) (u32) (gp + -22900)) = (u8) v1; goto L_0021114C;
L_00210FE8:;
    v0 = Pes6File_AllChannelsIdle();
    v1 = 1;
    if (v0 != v1) goto L_0021114C;
    v1 = 5;
    (*(volatile u8 *) (u32) (gp + -22900)) = (u8) v1; goto L_0021114C;
L_00211008:;
    v0 = (*(volatile u8 *) (u32) (gp + -22908));
    if (v0 <= 0) goto L_00211028;
    a0 = 0; v0 = func_001BE5B0(a0);
    v1 = 6;
    (*(volatile u8 *) (u32) (gp + -22900)) = (u8) v1; goto L_0021114C;
L_00211028:;
    func_00937630(a0, a1, a2, a3);
    goto L_0021114C;
L_00211038:;
    v1 = 7;
    (*(volatile u8 *) (u32) (gp + -22900)) = (u8) v1; goto L_0021114C;
L_00211044:;
    func_00937530(a0, a1, a2, a3);
    func_00949540(a0, a1, a2, a3);
    a0 = 4; Pes6MemRegion_Release(a0);
    a0 = 5; Pes6MemRegion_Release(a0);
    a0 = 6; Pes6MemRegion_Release(a0);
    a0 = 8; func_001FC780(a0);
    v1 = 8;
    (*(volatile u32 *) (u32) (gp + -22904)) = (u32) 0;
    (*(volatile u8 *) (u32) (gp + -22900)) = (u8) v1; goto L_0021114C;
L_00211084:;
    func_0096D830(a0, a1, a2, a3);
    v1 = (*(volatile u8 *) (u32) (gp + -22908));
    v0 = 4;
    if (v1 == v0) goto L_00211100;
    v0 = 3;
    if (v1 == v0) { v1 = 5; goto L_002110E4; }
    v0 = 2;
    if (v1 == v0) { a0 = 0; goto L_002110D4; }
    v0 = 1;
    if (v1 == v0) { a0 = 0; goto L_002110C4; }
    a0 = 0;
L_002110C4:;
    a1 = 4; Pes6Scene_Set(a0, a1);
    goto L_00211128;
L_002110D4:;
    a1 = 5; Pes6Scene_Set(a0, a1);
    goto L_00211128;
L_002110E4:;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7177)) = (u8) v1;
    a0 = 0;
    a1 = 14; Pes6Scene_Set(a0, a1);
    goto L_00211128;
L_00211100:;
    v0 = Pes6Settings_Get_B02_b2_w5();
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (a0 + 7114)) = (u8) v0;
    a0 = (*(volatile u8 *) (u32) (v1 + 7114)); func_0020B600(a0);
    a0 = 0;
    a1 = 13; Pes6Scene_Set(a0, a1);
L_00211128:;
    v0 = func_0022F190();
    if (v0 == 0) { (*(volatile u8 *) (u32) (gp + -22908)) = (u8) 0; goto L_00211148; }
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 4)) = (u32) 0;
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) 0;
    (*(volatile u8 *) (u32) (gp + -22908)) = (u8) 0;
L_00211148:;
    (*(volatile u8 *) (u32) (gp + -22900)) = (u8) 0;
L_0021114C:;
L_00211150:;
    return;
}
