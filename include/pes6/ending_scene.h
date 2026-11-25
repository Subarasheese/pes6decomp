#ifndef PES6_ENDING_SCENE_H
#define PES6_ENDING_SCENE_H

#include "types.h"

typedef struct {
    u8 reserved00[4];
    void *resource;
    u8 reserved08[0x0e];
    u8 phase;
} EndingScene;

s32 func_008F9220(EndingScene *scene, s32 first, s32 last, s32 flags);

static inline s32 endingSceneFrames(EndingScene *scene, s32 first, s32 last) {
    switch (scene->phase) {
    case 0:
        scene->phase++;
        break;
    case 1:
        func_008F9220(scene, first, last, 0);
        break;
    }
    return 1;
}

#endif
