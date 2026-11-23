/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 pad00[0x8d2];
    u8 enabled;
} EntryFlagWork;
typedef struct {
    u8 pad00[0x3c];
    EntryFlagWork *work;
} EntryFlagJob;
extern s32 func_00311530(void);
s32 func_008F7770(EntryFlagJob *job) {
    u32 word;
    struct Pes6BitSet flags;
    s32 mode;
    EntryFlagWork *work = job->work;
    Pes6BitSet_Initialize(&flags, 13, &word);
    mode = func_00311530();
    Pes6BitSet_Write(&flags, 0, work->enabled == 1);
    Pes6BitSet_Write(&flags, 1, mode == 3);
    Pes6BitSet_Write(&flags, 5, mode == 2);
    Pes6BitSet_Write(&flags, 9, mode == 1);
    Pes6Job_SendMessage(0x58, &flags, 1);
    Pes6Job_SetDone((MatchJob *)job);
    return 1;
}
