/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 reserved00[0x1008];
    s32 index;
    u8 reserved100c[0x14];
    s32 selected;
} MatchJobMgr;
extern MatchJobMgr *Pes6Job_GetManager(void);
extern s32 func_0030DA50(void), func_00333190(s32), func_0030E5B0(void),
    Pes6Job_GetArg(MatchJob *, s32);
extern void func_00333320(s32), func_0033D2F0(struct Pes6BitSet *, MatchJob *);
extern u8 func_00313A20(struct Pes6BitSet *, s32, u8);
s32 func_0033E1C0(MatchJob *job) {
    struct Pes6BitSet set;
    u32 words[1];
    s32 player;
    if (func_0030DA50() == 0)
        func_00333320(func_00333190(48000));
    player = Pes6Job_GetArg(job, 0) & 255;
    Pes6BitSet_Initialize(&set, 32, words);
    func_00313A20(&set, player, func_0030E5B0() & 255);
    Pes6Job_GetManager()->index = player & 255;
    Pes6Job_GetManager()->selected = player & 255;
    func_0033D2F0(&set, job);
    Pes6Job_SendMessage(0x35, &set, 1);
    Pes6Job_SetDone(job);
    return 1;
}
