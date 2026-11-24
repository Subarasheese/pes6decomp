/* compiler: mwcc-3.0.1b151 */
#include "pes6/player_clip_transition.h"
extern s32 func_00208610(void *);
extern void func_00BD4040(void *, s32);
void func_00B6CD00(ClipTransitionActor **actor) {
    s32 before = (*actor)->step;
    HeadingMotion *motion;
    ClipTransitionActor *current;
    func_00B2ACF0(actor);
    limit_step(&(*actor)->step, before);
    current = *actor;
    if (current->repeats > 0) {
        motion = current->playback;
        if (func_00207D80(motion, motion->descriptor->phase2 * 2)) {
            rewind_repeated_clip(actor, 1);
            return;
        }
    }
    if (func_00207D10((*actor)->playback)) {
        func_00208610((*actor)->playback);
        switch ((*actor)->playback->clip) {
        case 0x1bf:
        case 0x489:
            break;
        case 0x38c:
        case 0x48e:
            (*actor)->state = 2;
            func_00BD4040(actor, 1);
            break;
        }
    }
}
