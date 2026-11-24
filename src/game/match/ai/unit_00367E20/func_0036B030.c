/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_score_event.h"
typedef struct {
    u8 reserved00[0x3c];
    MatchScoreEvent *event;
} ScoreEventJob;
extern s32 func_00369CF0(struct Pes6BitSet *, const MatchScoreEvent *);
extern s32 func_00369800(struct Pes6BitSet *, const MatchScoreEvent *);

s32 func_0036B030(ScoreEventJob *job) {
    struct Pes6BitSet flags;
    u32 storage[8];
    struct Pes6BitSet *bits = &flags;
    MatchScoreEvent *event;
    Pes6BitSet_Initialize(bits, 227, storage);
    event = job->event;
    Pes6BitSet_Write(bits, 0, 1);
    func_0036A9B0(bits, event);
    func_0036A5D0(bits, event);
    func_00369CF0(bits, event);
    func_0036A230(bits, event);
    func_00369EF0(bits, event);
    Pes6BitSet_Write(bits, 0x5d,
                     (Pes6BitSet_Lookup(bits, 0x5f) || Pes6BitSet_Lookup(bits, 0x80)) ||
                         Pes6BitSet_Lookup(bits, 0x8a));
    Pes6BitSet_Write(bits, 0x5b, (Pes6BitSet_Lookup(bits, 0xb3) | Pes6BitSet_Lookup(bits, 0x5d)));
    func_00369800(bits, event);
    Pes6Job_SendMessage(0x93, bits, 1);
    Pes6Job_SetDone((MatchJob *)job);
    return 1;
}
