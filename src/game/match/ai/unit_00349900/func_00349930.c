/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
extern s32 func_003139C0(struct Pes6BitSet *, s32);
s32 func_00349930(MatchJob *job) {
    struct Pes6BitSet set;
    u32 words[1];
    Pes6BitSet_Initialize(&set, 5, words);
    func_003139C0(&set, job->arg[0].byte);
    Pes6BitSet_Write(&set, 0, job->arg[1].word);
    Pes6Job_SendMessage(0x1d, &set, 1);
    Pes6Job_SetDone(job);
    return 1;
}
