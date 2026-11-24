#ifndef PES6_IMAGE_LAYOUT_H
#define PES6_IMAGE_LAYOUT_H

#include "types.h"

typedef struct {
    s16 coord[4], depth, coord0A, coord0C;
} ImageBounds;
typedef struct {
    u8 red, green, blue, alpha;
} ImageVertexColor;
typedef struct {
    ImageBounds bounds;
    ImageVertexColor colors[4];
} ColoredImagePart;
typedef struct {
    ColoredImagePart colored;
    ImageVertexColor overlay[4];
} OverlayImagePart;
typedef struct {
    u8 overlayCount, coloredCount, plainCount, reserved03;
    OverlayImagePart *overlay;
    ColoredImagePart *colored;
    ImageBounds *plain;
} ImageLayout;
typedef struct {
    u8 reserved00[0x14];
    ImageLayout *layout;
} LayoutImage;

#endif
