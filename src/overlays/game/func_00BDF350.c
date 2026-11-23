/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 reserved00[4];
    void *animation;
    u8 reserved08[0x2c - 8];
    u16 heading;
    u8 reserved2e[0x6c - 0x2e];
    float aimX, aimZ;
} Actor;
typedef struct {
    Actor *actor;
} Action;
extern s32 func_00B2A9C0(void), func_00207D10(void *), func_00207D80(void *, s32);
extern void func_00B2ACF0(void *), func_00209820(void *), func_00208610(void *),
    func_00B9E5D0(void *), func_00B35E10(void *, float *, float *);
extern u16 func_009B3480(void *, float, float);
void func_00BDF350(Action *action) {
    s32 marker = func_00B2A9C0();
    func_00B2ACF0(action);
    func_00209820(action->actor->animation);
    if (!func_00207D10(action->actor->animation)) {
        if (marker && func_00207D80(action->actor->animation, marker)) {
            func_00B35E10(action, &action->actor->aimX, &action->actor->aimZ);
            action->actor->heading =
                func_009B3480(action->actor, action->actor->aimX, action->actor->aimZ);
        }
    } else {
        func_00208610(action->actor->animation);
        func_00B9E5D0(action);
    }
}
