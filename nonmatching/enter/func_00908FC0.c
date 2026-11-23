/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00908FC0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0;

    a3 = 0;
    a2 = (s32) 0x930000U;
    a2 = (s32) ((u32) a2 + 0xfffff0a0U);
L_00908FCC:;
    a0 = a3 & 0xff;
    v1 = (s32) ((u32) a3 + 0x7U);
    a3 = v1 & 0xff;
    a1 = (s32) ((u32) a2 + (u32) a0);
    v1 = (s32) ((u32) a0 << 1);
    (*(volatile u8 *) (u32) (a1 + 296)) = (u8) 0;
    a0 = (s32) ((u32) a2 + (u32) v1);
    (*(volatile u8 *) (u32) (a1 + 318)) = (u8) 0;
    (*(volatile u16 *) (u32) (a0 + 340)) = (u16) 0;
    v1 = a3 < 15;
    (*(volatile u16 *) (u32) (a0 + 384)) = (u16) 0;
    (*(volatile u8 *) (u32) (a1 + 297)) = (u8) 0;
    (*(volatile u8 *) (u32) (a1 + 319)) = (u8) 0;
    (*(volatile u16 *) (u32) (a0 + 342)) = (u16) 0;
    (*(volatile u16 *) (u32) (a0 + 386)) = (u16) 0;
    (*(volatile u8 *) (u32) (a1 + 298)) = (u8) 0;
    (*(volatile u8 *) (u32) (a1 + 320)) = (u8) 0;
    (*(volatile u16 *) (u32) (a0 + 344)) = (u16) 0;
    (*(volatile u16 *) (u32) (a0 + 388)) = (u16) 0;
    (*(volatile u8 *) (u32) (a1 + 299)) = (u8) 0;
    (*(volatile u8 *) (u32) (a1 + 321)) = (u8) 0;
    (*(volatile u16 *) (u32) (a0 + 346)) = (u16) 0;
    (*(volatile u16 *) (u32) (a0 + 390)) = (u16) 0;
    (*(volatile u8 *) (u32) (a1 + 300)) = (u8) 0;
    (*(volatile u8 *) (u32) (a1 + 322)) = (u8) 0;
    (*(volatile u16 *) (u32) (a0 + 348)) = (u16) 0;
    (*(volatile u16 *) (u32) (a0 + 392)) = (u16) 0;
    (*(volatile u8 *) (u32) (a1 + 301)) = (u8) 0;
    (*(volatile u8 *) (u32) (a1 + 323)) = (u8) 0;
    (*(volatile u16 *) (u32) (a0 + 350)) = (u16) 0;
    (*(volatile u16 *) (u32) (a0 + 394)) = (u16) 0;
    (*(volatile u8 *) (u32) (a1 + 302)) = (u8) 0;
    (*(volatile u8 *) (u32) (a1 + 324)) = (u8) 0;
    (*(volatile u16 *) (u32) (a0 + 352)) = (u16) 0;
    { s32 c_ = v1 != 0; (*(volatile u16 *) (u32) (a0 + 396)) = (u16) 0; if (c_) goto L_00908FCC; }
    a0 = (s32) 0x930000U;
    v1 = (s32) 0x930000U;
    a0 = (s32) ((u32) a0 + 0xfffff1c8U);
    v1 = (s32) ((u32) v1 + 0xfffff1deU);
    a0 = (s32) ((u32) a0 + (u32) a3);
    v1 = (s32) ((u32) v1 + (u32) a3);
    (*(volatile u8 *) (u32) a0) = (u8) 0;
    a1 = (s32) ((u32) a3 << 1);
    (*(volatile u8 *) (u32) v1) = (u8) 0;
    v1 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 + 0xfffff1f4U);
    a0 = (s32) ((u32) v1 + (u32) a1);
    v1 = (s32) 0x930000U;
    (*(volatile u16 *) (u32) a0) = (u16) 0;
    v1 = (s32) ((u32) v1 + 0xfffff220U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    (*(volatile u16 *) (u32) v1) = (u16) 0; return;
}
