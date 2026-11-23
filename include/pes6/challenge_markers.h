#ifndef PES6_CHALLENGE_MARKERS_H
#define PES6_CHALLENGE_MARKERS_H

#include "pes6/challenge_sprites.h"

static inline void allocateMarkerSprites(TrainingSprites *sprites, u8 *markers) {
    s32 i;
    u8 sizes[2] = {0};
    sizes[0] = *markers;
    sizes[1] = *markers - 1;
    func_0081BD90(sprites, 2, sizes);
    {
        u8 objects[1] = {0};
        u8 resources[1] = {1};
        for (i = 0; i < *markers; ++i)
            func_00CD6300(&sprites->sets[0][i], 0, 2, sprites->resources, sprites->resources + 1, 1,
                          1, objects, resources);
    }
    {
        u8 objects2[1] = {0};
        for (i = 0; i < *markers - 1; ++i)
            func_00CD6300(&sprites->sets[1][i], 0, 0, sprites->resources + 2, 0, 1, 0, objects2, 0);
    }
}

#endif
