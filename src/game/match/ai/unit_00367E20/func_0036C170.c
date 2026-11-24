/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 slot;
    u8 reserved01[0x27];
    s16 x, z;
    u32 flags;
} MatchSequenceEnd;
typedef struct {
    u8 mode, index, flag02;
    u8 reserved03[0x11];
    s16 x, z;
    MatchSequenceEnd end;
} MatchSequence;
typedef struct {
    u8 reserved00[0x3c];
    MatchSequence *sequence;
} MatchSequenceJob;
extern u32 func_00BC8D30(void);
extern s32 func_00BC8BC0(void);
static inline s32 sequenceStatus(s32 current, s32 index) {
    if (!func_00BC8D30())
        return 4;
    if (current >= (u8)func_00BC8BC0())
        return 1;
    if ((u8)index == current)
        return 3;
    if ((u8)index < current)
        return 2;
    return 4;
}
s32 func_0036C170(MatchSequenceJob *job) {
    struct Pes6BitSet flags;
    u32 storage;
    struct Pes6BitSet *bits = &flags;
    MatchSequence *sequence;
    s32 status;
    Pes6BitSet_Initialize(bits, 1, &storage);
    sequence = job->sequence;
    status = sequenceStatus(sequence->end.slot, sequence->index);
    Pes6BitSet_Write(bits, 0, status == 3 && sequence->flag02 == 1);
    Pes6Job_SendMessage(0xb8, bits, 1);
    Pes6Job_SetDone((MatchJob *)job);
    return 1;
}
