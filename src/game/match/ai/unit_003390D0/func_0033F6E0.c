/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_job_message.h"
extern u32 func_0030F130(void);
extern s32 func_0030F2B0(s32 *period);
s32 func_0033F6E0(MatchJob *job) {
    u32 storage;
    s32 period;
    struct Pes6BitSet flags;
    Pes6BitSet_Initialize(&flags, 3, &storage);
    func_0030F2B0(&period);
    Pes6BitSet_Write(&flags, 1, func_0030F130());
    Pes6BitSet_Write(&flags, 2, period == 2);
    Pes6Job_SendMessage(0x34, &flags, 1);
    Pes6Job_SetDone(job);
    return 1;
}
