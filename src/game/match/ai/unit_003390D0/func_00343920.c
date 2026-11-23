/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_job_message.h"
extern s32 func_00333600(s32), func_003109B0(void);
extern void func_003139C0(struct Pes6BitSet *, s32);
s32 func_00343920(MatchJob *job) {
    struct Pes6BitSet bits;
    u32 word;
    s32 second, first, mask;
    first = func_00333600(4);
    second = func_00333600(6);
    mask = job->arg[0].word;
    Pes6BitSet_Initialize(&bits, 9, &word);
    func_003139C0(&bits, func_003109B0());
    Pes6BitSet_Write(&bits, 1, first | second);
    Pes6BitSet_Write(&bits, 4, second);
    Pes6BitSet_Write(&bits, 5, first);
    Pes6BitSet_Write(&bits, 7, mask & 2);
    Pes6BitSet_Write(&bits, 8, mask & 4);
    Pes6Job_SendMessage(0x1e, &bits, 1);
    Pes6Job_SetDone(job);
    return 1;
}
