#ifndef PES6_CHALLENGE_SPRITES_H
#define PES6_CHALLENGE_SPRITES_H

#include "types.h"

typedef struct {
    u8 storage[0x130];
} TrainingSprite;
typedef struct {
    void *asset;
    u8 reserved04[4];
} TrainingSpriteResource;
typedef struct {
    u8 reserved00[0x10];
    TrainingSpriteResource *resources;
    u8 reserved14[4];
    TrainingSprite **sets;
} TrainingSprites;
extern void func_0081BD90(TrainingSprites *sprites, u8 setCount, const u8 *sizes);
extern void func_00CD6300(TrainingSprite *sprite, s32 type, s32 mode,
                          TrainingSpriteResource *objects, TrainingSpriteResource *resources,
                          s32 objectCount, s32 resourceCount, const u8 *objectSlots,
                          const u8 *resourceSlots);

#endif
