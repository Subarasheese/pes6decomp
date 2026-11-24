/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_job_message.h"
extern s8 func_008FFA40(void);
s32 func_003709C0(MatchJob *job) {
    u32 storage;
    struct Pes6BitSet flags;
    s32 status;
    Pes6BitSet_Initialize(&flags, 6, &storage);
    status = func_008FFA40();
    Pes6BitSet_Write(&flags, 1, !status);
    Pes6BitSet_Write(&flags, 2, status);
    Pes6Job_SendMessage(0x6a, &flags, 1);
    Pes6Job_SetDone(job);
    return 1;
}
