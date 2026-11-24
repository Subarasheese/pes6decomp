/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_score_situation.h"

s32 func_00369CF0(struct Pes6BitSet *bits, const MatchSituationJob *job) {
    const MatchSituation *s = &job->situation;
    Pes6BitSet_Write(bits, 0xb3, job->situation.state14 == 3);
    Pes6BitSet_Write(bits, 0xb4, s->flags2c & 1);
    Pes6BitSet_Write(bits, 0xb6, s->state24 == 6);
    Pes6BitSet_Write(bits, 0xb8, s->flags34 & 0x00800000);
    Pes6BitSet_Write(bits, 0xb9, s->flags34 & 0x01000000);
    Pes6BitSet_Write(bits, 0xb7, Pes6BitSet_Lookup(bits, 0xb8) | Pes6BitSet_Lookup(bits, 0xb8));
    Pes6BitSet_Write(bits, 0xb5, Pes6BitSet_Lookup(bits, 0xb6) | Pes6BitSet_Lookup(bits, 0xb7));
    Pes6BitSet_Write(bits, 0xba, !(s->flags2c & 1));
    Pes6BitSet_Write(bits, 0xbb, s->type30 == 1);
    Pes6BitSet_Write(bits, 0xbd, s->flags34 & 0x02000000);
    Pes6BitSet_Write(bits, 0xbe, s->flags34 & 0x04000000);
    Pes6BitSet_Write(bits, 0xbc, Pes6BitSet_Lookup(bits, 0xbd) || Pes6BitSet_Lookup(bits, 0xbe));
    Pes6BitSet_Write(bits, 0xbf, s->flags34 & 0x04000000);
    Pes6BitSet_Write(bits, 0xc0, s->flags34 & 0x00200000);
    Pes6BitSet_Write(bits, 0xc2, s->type30 == 2);
    Pes6BitSet_Write(bits, 0xc4, s->state24 != 6);
    return 1;
}
