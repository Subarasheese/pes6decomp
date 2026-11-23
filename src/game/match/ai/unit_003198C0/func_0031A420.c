/* compiler: mwcc-3.0.1b151 */
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
extern s32 func_00332FA0(void);
extern s32 func_0031A660(ActionJob *);
extern const char D_003E1510[];
s32 func_0031A420(ActionJob *job) {
    if (func_00332FA0())
        return 0;
    Pes6Job_SetField4(job, func_0031A660, D_003E1510);
    return 1;
}
