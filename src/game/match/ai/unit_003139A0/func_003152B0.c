/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 reserved00[0x44];
    void *state;
} StateJob;
extern s32 Pes6Job_GetArg(s32 job, s32 index);
extern s32 func_00326040(void *state, s32 index);
extern s32 Pes6Job_SetField4(void *job, s32 (*callback)(void *), const void *descriptor);
extern s32 func_00319240(void *);
extern const u8 D_003E1508[];
s32 func_003152B0(StateJob *job) {
    u32 storage;
    struct Pes6BitSet flags;
    void *state;
    s32 index;
    Pes6BitSet_Initialize(&flags, 6, &storage);
    state = job->state;
    index = Pes6Job_GetArg((s32)job, 0);
    Pes6BitSet_Write(&flags, 2, func_00326040(state, index));
    Pes6Job_SendMessage(0x50, &flags, 1);
    Pes6Job_SetField4(job, func_00319240, D_003E1508);
    return 0;
}
