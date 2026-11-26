/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    s32 available;
    u8 pad[0x18];
} TrainingEntry;

typedef struct {
    u8 pad[0x30];
    TrainingEntry entries[5];
} TrainingState;

extern void func_002648F0(TrainingState *);
extern s32 func_002646D0(TrainingState *);
extern void func_002646E0(TrainingState *);
extern void func_002648E0(TrainingState *);
extern s32 func_00CD6800(TrainingState *);
extern s32 func_001BE5B0(s32);
extern void func_00264790(TrainingState *, u8);

static inline int all_available(TrainingState *state) {
    return state->entries[0].available && state->entries[1].available &&
           state->entries[2].available && state->entries[3].available &&
           state->entries[4].available;
}

void func_00CD6E90(TrainingState *state) {
    int done = 0;
    u8 mode;
    func_002648F0(state);
    mode = (u8)func_002646D0(state);
    switch (mode) {
    case 0:
        if (all_available(state))
            func_00264790(state, 3);
        else
            func_002646E0(state);
        break;
    case 1:
        if (func_001BE5B0(0))
            func_002646E0(state);
        break;
    case 2:
        if (func_00CD6800(state))
            func_002646E0(state);
        break;
    case 3:
        done = 1;
        break;
    }
    func_002648E0(state);
    if (done)
        func_00264790(state, 15);
}
