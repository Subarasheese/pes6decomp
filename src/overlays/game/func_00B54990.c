/* compiler: mwcc-3.0.1b151 */
#include "pes6/player_clip_transition.h"
extern s32 func_00BA8570(void **actor);
extern void func_00B53A10(ClipTransitionActor **actor);
void func_00B54990(ClipTransitionActor **actor) {
    s32 before = (*actor)->step;
    HeadingMotion *motion;
    ClipTransitionActor *current;
    func_00B2ACF0(actor);
    limit_step(&(*actor)->step, before);
    current = *actor;
    if (current->repeats > 0) {
        motion = current->playback;
        if (func_00207D80(motion, motion->descriptor->phase2 * 2)) {
            rewind_repeated_clip(actor, 0);
            return;
        }
    }
    if (func_00207D10((*actor)->playback)) {
        func_00BA8570((void **)actor);
        func_00B53A10(actor);
    }
}
