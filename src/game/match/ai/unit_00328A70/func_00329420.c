/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 reserved00[0x34];
    s32 enabled, mode;
} ModeJob;
extern s32 func_00338940(s32 id);
s32 func_00329420(ModeJob *job) {
    u32 storage;
    struct Pes6BitSet flags;
    s32 modeFlags;
    Pes6BitSet_Initialize(&flags, 8, &storage);
    Pes6BitSet_Write(&flags, 2, job->mode == 2);
    Pes6BitSet_Write(&flags, 3, job->mode == 1);
    modeFlags = Pes6BitSet_Lookup(&flags, 2);
    modeFlags |= Pes6BitSet_Lookup(&flags, 3);
    Pes6BitSet_Write(&flags, 1, !job->enabled & modeFlags);
    Pes6BitSet_Write(&flags, 5, job->mode == 2);
    Pes6BitSet_Write(&flags, 6, job->mode == 1);
    modeFlags = Pes6BitSet_Lookup(&flags, 5);
    modeFlags |= Pes6BitSet_Lookup(&flags, 6);
    Pes6BitSet_Write(&flags, 4, job->enabled & modeFlags);
    if (Pes6Job_SendMessage(10, &flags, 1))
        func_00338940(0x80000062);
    Pes6Job_SetDone((MatchJob *)job);
    return 1;
}
