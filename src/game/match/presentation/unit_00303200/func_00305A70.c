/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad00[0x2C];
    s32 values[2];
    u8 choices[2];
    u8 limits[2];
    s32 counters[2];
    s32 seconds;
    s32 frames;
    u8 pad48[0xE];
    u8 phase;
    u8 flags;
} PresentationState;
typedef struct {
    u8 pad00[0x18];
    PresentationState *state;
} Presentation;
typedef s32 (*PresentationStep)(Presentation *);
extern void func_00305E60(Presentation *, PresentationStep);
extern s32 func_00304740(Presentation *);
extern s32 func_00304C00(Presentation *);
extern s32 func_00304A00(Presentation *);
extern s32 func_00303C40(s32, s32 *);
extern s32 Pes6Random_Below(s32);
extern s32 func_001CDAA0(void);
extern u8 D_00591C09[];
extern u8 D_00591BBA[];
extern u16 D_00591BB0[];
extern u8 D_003C54C0[];
s32 func_00305A70(Presentation *presentation) {
    PresentationState *state;
    s32 i;
    u8 mode = D_00591C09[0];
    if (mode == 7)
        func_00305E60(presentation, func_00304740);
    else if (D_00591BBA[0] && mode != 5)
        func_00305E60(presentation, func_00304C00);
    else
        func_00305E60(presentation, func_00304A00);
    state = presentation->state;
    for (i = 0; i < 2; i++) {
        func_00303C40(D_00591BB0[i], &state->values[i]);
        if (state->values[i] == 0x154)
            state->limits[i] = 10;
        else
            state->limits[i] = 5;
    }
    state->phase = 0;
    state->choices[0] = (Pes6Random_Below(state->limits[0]) & 0xFFFF) % state->limits[0];
    state->choices[1] = (Pes6Random_Below(state->limits[1]) & 0xFFFF) % state->limits[1];
    state->counters[1] = 0;
    state->counters[0] = 0;
    state->flags = 0;
    {
        s32 seconds = D_003C54C0[func_001CDAA0()];
        state->seconds = seconds;
        state->frames = seconds * 60;
    }
    return 1;
}
