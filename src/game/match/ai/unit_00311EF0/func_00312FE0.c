/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 pad00[8];
    s32 phase;
} JobPhase;
typedef struct {
    u8 pad00[0x3c];
    JobPhase *state;
} ActionJob;
extern void Pes6Job_SetField4(ActionJob *, s32 (*)(ActionJob *), const char *);
extern s32 func_00313880(ActionJob *);
extern const char D_003E1500[];
s32 func_00312FE0(ActionJob *job) {
    job->state->phase = 0;
    Pes6Job_SetField4(job, func_00313880, D_003E1500);
    return 1;
}
