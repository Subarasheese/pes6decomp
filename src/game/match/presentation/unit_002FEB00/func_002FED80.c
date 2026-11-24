/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 reserved[0x18];
    s32 selection;
} MatchPresentation;
typedef struct {
    u8 reserved[0x18];
    MatchPresentation *state;
} PresentationJob;
extern s32 func_00BD97D0(void);
extern s32 Pes6Random_Below(u16 maximum);
extern void func_002D4C40(s32);
extern s32 func_002FED20(PresentationJob *);
extern void func_00305E60(PresentationJob *, s32 (*)(PresentationJob *));
s32 func_002FED80(PresentationJob *job) {
    MatchPresentation *state = job->state;
    s32 selection;
    if (!func_00BD97D0())
        return 0;
    switch (Pes6Random_Below(2)) {
    case 0:
        selection = 6;
        break;
    default:
        selection = 5;
        break;
    }
    state->selection = selection;
    func_002D4C40(selection);
    func_00305E60(job, func_002FED20);
    return 1;
}
