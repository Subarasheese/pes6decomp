/* compiler: mwcc-3.0.1b151 */
#include "pes6/player_clip_transition.h"

void func_00B4B0A0(ClipTransitionActor **actor) {
    s32 before = (*actor)->step;
    HeadingMotion *p;
    ClipTransitionActor *a;
    func_00B2ACF0(actor);
    limit_step(&(*actor)->step, before);
    a = *actor;
    if (a->repeats > 0 && (p = a->playback, func_00207D80(p, p->descriptor->phase2 * 2))) {
        p = (*actor)->playback;
        p->frame = p->descriptor->phase1 * 2;
        {
            u8 *count = &(*actor)->repeats;
            u8 n = *count;
            if (n != 255 && n != 0)
                *count = n - 1;
        }
        return;
    }
    if (!func_00207D10((*actor)->playback))
        return;
    switch ((*actor)->playback->clip) {
    case 0x418:
        if (func_00B67DA0(actor))
            func_002075B0((*actor)->playback, 0x46a, 0, 8);
        else
            func_002075B0((*actor)->playback, 0x46b, 0, 8);
        break;
    case 0x42e:
        if (func_00B67DA0(actor))
            func_002075B0((*actor)->playback, 0x431, 0, 8);
        else
            func_002075B0((*actor)->playback, 0x430, 0, 8);
        break;
    case 0x440:
        if (func_00B67DA0(actor))
            func_002075B0((*actor)->playback, 0x444, 0, 8);
        else
            func_002075B0((*actor)->playback, 0x443, 0, 8);
        break;
    case 0x40f:
        if (func_00B67DA0(actor))
            func_002075B0((*actor)->playback, 0x411, 0, 8);
        else
            func_002075B0((*actor)->playback, 0x410, 0, 8);
        break;
    }
    (*actor)->state = 0x13;
}
