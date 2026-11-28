#ifndef PES6_GAME_EVENT_CALLBACK_H
#define PES6_GAME_EVENT_CALLBACK_H

#include "types.h"

typedef struct GameEventCallback {
    s8 state, reserved01, active, reserved03;
    void (*update)(void);
} GameEventCallback;

extern GameEventCallback D_00CCBB40[];

#endif
