/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
extern int func_00335390(void);
extern void func_00354380(struct Pes6BitSet *, MatchJob *),
    func_00354020(struct Pes6BitSet *, MatchJob *);
extern s8 D_003E9FA0;
s32 func_00354790(MatchJob *job) {
    struct Pes6BitSet set;
    u32 words[2];
    Pes6BitSet_Initialize(&set, 58, words);
    Pes6BitSet_Write(&set, 0, func_00335390());
    func_00354380(&set, job);
    func_00354020(&set, job);
    if (Pes6Job_SendMessage(0x8b, &set, 1))
        D_003E9FA0 = 1;
    Pes6Job_SetDone(job);
    return 1;
}
