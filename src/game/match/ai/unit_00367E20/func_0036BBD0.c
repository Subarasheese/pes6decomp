/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 type, reserved01[0x27];
    s16 home, away;
    u32 flags;
} ScoreDetail;
typedef struct {
    u8 choice, previous, kind, reserved03[0x11];
    s16 previousHome, previousAway;
    ScoreDetail match;
} ScorePhaseJob;
extern s32 func_0030F2B0(s32 *phase);
extern u32 func_00BC8D30(void);
extern u8 func_00BC8BC0(void);
s32 func_0036BBD0(struct Pes6BitSet *bits, s32 message, const ScorePhaseJob *event) {
    const ScoreDetail *detail = &event->match;
    s32 choice = event->choice, previous;
    s32 kind;
    s32 phase, special, ordinary, group;
    s32 eligible;
    func_0030F2B0(&phase);
    previous = event->previous;
    kind = detail->type;
    special = phase == 3;
    if (!func_00BC8D30())
        group = 4;
    else if (kind >= (u8)func_00BC8BC0())
        group = 1;
    else if ((u8)previous == kind)
        group = 3;
    else if ((u8)previous < kind)
        group = 2;
    else
        group = 4;
    Pes6BitSet_Write(bits, 0x3, event->kind == 0);
    ordinary = !special;
    Pes6BitSet_Write(bits, 0x4, ordinary);
    Pes6BitSet_Write(bits, 0x6, choice == 0);
    Pes6BitSet_Write(bits, 0x7, choice == 1);
    Pes6BitSet_Write(bits, 0x8, choice == 2);
    Pes6BitSet_Write(bits, 0xa, choice == 0);
    Pes6BitSet_Write(bits, 0xb, special);
    Pes6BitSet_Write(bits, 0xc, event->kind == 1);
    eligible = 0;
    do {
        if (group != 4)
            break;
        if (!func_00BC8D30())
            break;
        eligible = 1;
    } while (0);
    Pes6BitSet_Write(bits, 0xd, eligible);
    Pes6BitSet_Write(bits, 0xe,
                     event->previousHome == detail->home && event->previousAway == detail->away &&
                         (detail->flags & 1));
    Pes6BitSet_Write(bits, 0xf, ordinary);
    Pes6BitSet_Write(bits, 0x10, special);
    return 1;
}
