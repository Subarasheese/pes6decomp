#ifndef PES6_MATCH_SPRITE_FRAME_H
#define PES6_MATCH_SPRITE_FRAME_H

#include "types.h"

typedef struct {
    s16 x, y, width, height;
} SpriteFrame;

typedef struct {
    f32 width, height;
} SpriteSize;

extern s32 func_00C8B100(s32 group);
extern s32 func_002F9370(void *object);
extern void func_002F9B80(void *node, s32 style, const SpriteFrame *frame, const SpriteSize *size,
                          s32 resource, s32 x, s32 y);

static inline void match_draw_frame(void *node, const SpriteFrame *frames, s32 index,
                                    void *const *object, s32 x, s32 y) {
    SpriteSize size;
    size.width = (f32)frames[index].width;
    size.height = (f32)frames[index].height;
    func_002F9B80(node, func_00C8B100(0), &frames[index], &size, func_002F9370(*object), x, y);
}

#endif
