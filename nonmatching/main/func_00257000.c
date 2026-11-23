/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


s64 func_00257000(s64 a0, s64 a1) {
    s64 at = 0, v0 = 0, v1 = 0;

    if (a0 != 0) { at = (u64) a1 < (u64) (s64) 23; goto L_00257010; }
    v0 = 0; goto L_002571A4;
L_00257010:;
    if (at == 0) { v0 = 0; goto L_002571A4; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0xffff90a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x257034U) goto L_00257034; if (t_ == 0x257044U) goto L_00257044; if (t_ == 0x257054U) goto L_00257054; if (t_ == 0x257064U) goto L_00257064; if (t_ == 0x257074U) goto L_00257074; if (t_ == 0x257084U) goto L_00257084; if (t_ == 0x257094U) goto L_00257094; if (t_ == 0x2570a4U) goto L_002570A4; if (t_ == 0x2570b4U) goto L_002570B4; if (t_ == 0x2570c4U) goto L_002570C4; if (t_ == 0x2570d4U) goto L_002570D4; if (t_ == 0x2570e4U) goto L_002570E4; if (t_ == 0x2570f4U) goto L_002570F4; if (t_ == 0x257104U) goto L_00257104; if (t_ == 0x257114U) goto L_00257114; if (t_ == 0x257120U) goto L_00257120; if (t_ == 0x257130U) goto L_00257130; if (t_ == 0x257140U) goto L_00257140; if (t_ == 0x257150U) goto L_00257150; if (t_ == 0x257160U) goto L_00257160; if (t_ == 0x257170U) goto L_00257170; if (t_ == 0x257180U) goto L_00257180; if (t_ == 0x257190U) goto L_00257190; }
L_00257034:;
    v0 = (*(volatile u8 *) (u32) (a0 + 16));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257044:;
    v0 = (*(volatile u8 *) (u32) (a0 + 17));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257054:;
    v0 = (*(volatile u8 *) (u32) (a0 + 18));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257064:;
    v0 = (*(volatile u8 *) (u32) (a0 + 19));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257074:;
    v0 = (*(volatile u8 *) (u32) (a0 + 20));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257084:;
    v0 = (*(volatile u8 *) (u32) (a0 + 21));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257094:;
    v0 = (*(volatile u8 *) (u32) (a0 + 22));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_002570A4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 23));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_002570B4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 24));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_002570C4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 25));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_002570D4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 26));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_002570E4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 27));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_002570F4:;
    v0 = (*(volatile u8 *) (u32) (a0 + 15));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257104:;
    v0 = (*(volatile u8 *) (u32) (a0 + 14));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257114:;
    v0 = (*(volatile u8 *) (u32) (a0 + 30));
    v0 = v0 & 0x1; goto L_002571A4;
L_00257120:;
    v0 = (*(volatile u8 *) (u32) (a0 + 30));
    v0 = (s64) ((u64) v0 << 62);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257130:;
    v0 = (*(volatile u8 *) (u32) (a0 + 30));
    v0 = (s64) ((u64) v0 << 61);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257140:;
    v0 = (*(volatile u8 *) (u32) (a0 + 30));
    v0 = (s64) ((u64) v0 << 60);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257150:;
    v0 = (*(volatile u8 *) (u32) (a0 + 30));
    v0 = (s64) ((u64) v0 << 59);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257160:;
    v0 = (*(volatile u8 *) (u32) (a0 + 30));
    v0 = (s64) ((u64) v0 << 58);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257170:;
    v0 = (*(volatile u8 *) (u32) (a0 + 30));
    v0 = (s64) ((u64) v0 << 57);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257180:;
    v0 = (*(volatile u8 *) (u32) (a0 + 30));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
L_00257190:;
    v0 = (*(volatile u8 *) (u32) (a0 + 32));
    v0 = (s64) ((u64) v0 << 56);
    v0 = (s64) ((u64) v0 >> 63); goto L_002571A4;
    v0 = 0;
L_002571A4:;
    return v0;
}
