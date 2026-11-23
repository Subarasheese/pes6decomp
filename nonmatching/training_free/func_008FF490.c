/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6File_AllChannelsIdle(void);
void func_001FCF60(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00268EA0(s32);
s32 func_009B45F0(s32, s32, s32, s32);

s32 func_008FF490(s32 a0, s32 a1, s32 a2, s32 a3, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 v0 = 0, v1 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    a1 = (s32) ((u32) v1 + 0x24U);
    v0 = 4;
    v1 = (*(volatile s32 *) (u32) (v1 + 36));
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) a1); goto L_008FF55C; }
    v0 = 3;
    if (v1 == v0) goto L_008FF558;
    v0 = 2;
    if (v1 == v0) { v0 = (s32) ((u32) v1 + 0x1U); goto L_008FF550; }
    a0 = 1;
    if (v1 == a0) goto L_008FF508;
    if (v1 == 0) goto L_008FF4E8;
    v0 = a0; goto L_008FF574;
L_008FF4E8:;
    func_00268EA0(a0);
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) (v1 + 36));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 36)) = (u32) v0; goto L_008FF57C;
L_008FF508:;
    v0 = Pes6File_AllChannelsIdle();
    if (v0 == 0) { v0 = 0; goto L_008FF580; }
    v0 = func_009B45F0(a0, a1, a2, a3);
    if (v0 != 0) goto L_008FF57C;
    v1 = 1;
    v0 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (v0 + 7605)) = (u8) v1; func_001FCF60(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    v0 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    v0 = (*(volatile s32 *) (u32) (v1 + 36));
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 36)) = (u32) v0; goto L_008FF57C;
L_008FF550:;
    (*(volatile u32 *) (u32) a1) = (u32) v0; goto L_008FF57C;
L_008FF558:;
    v0 = (*(volatile s32 *) (u32) a1);
L_008FF55C:;
    a0 = 0;
    v0 = (s32) ((u32) v0 + 0x1U);
    (*(volatile u32 *) (u32) a1) = (u32) v0; func_00268EA0(a0);
    goto L_008FF57C;
L_008FF574:;
    goto L_008FF584;
L_008FF57C:;
    v0 = 0;
L_008FF580:;
L_008FF584:;
    return v0;
}
