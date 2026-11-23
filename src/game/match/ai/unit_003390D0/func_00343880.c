/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
extern s32 func_003139C0(struct Pes6BitSet *, s32);
extern int func_00333600(int), func_003109B0(void);
s32 func_00343880(MatchJob *job) {
    struct Pes6BitSet set;
    u32 words[1];
    s32 first = func_00333600(4);
    s32 second = func_00333600(6);
    Pes6BitSet_Initialize(&set, 3, words);
    func_003139C0(&set, func_003109B0());
    Pes6BitSet_Write(&set, 2, first | second);
    Pes6Job_SendMessage(0x1e, &set, 1);
    Pes6Job_SetDone(job);
    return 1;
}
