/* compiler: mwcc-3.0.3 */
#include "pes6/match_job_message.h"
typedef struct {
    u8 reserved00[0x3c];
    void *event;
} EventJob;
extern void func_0036BBD0(struct Pes6BitSet *, EventJob *, void *),
    func_0036B990(struct Pes6BitSet *, EventJob *, void *);
s32 func_0036BDE0(EventJob *job) {
    u32 storage[8];
    struct Pes6BitSet bits;
    void *event;
    Pes6BitSet_Initialize(&bits, 0x8b, storage);
    event = job->event;
    func_0036BBD0(&bits, job, event);
    func_0036B990(&bits, job, event);
    Pes6Job_SendMessage(0x92, &bits, 1);
    Pes6Job_SetDone((MatchJob *)job);
    return 1;
}
