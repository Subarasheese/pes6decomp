/* compiler: mwcc-3.0.1b210 */

#include "types.h"
typedef struct {
    f32 x, y;
} MenuOffset;
typedef struct {
    f32 x, y, width, height;
} MenuRectangle;
typedef struct {
    u8 reserved00[2], kind, dirty, reserved04[0x24];
    MenuRectangle bounds;
} MenuRegion;
extern MenuOffset D_003B3FE0[];

void func_002EFB30(MenuRegion *region, const MenuRectangle *bounds) {
    MenuOffset margin;
    f32 width;
    f32 height;
    if (!region) {
        return;
    }
    region->bounds = *bounds;
    margin = D_003B3FE0[region->kind];
    width = 2.0f * margin.x;
    if (width > region->bounds.width) {
        region->bounds.width = width;
    }
    height = 2.0f * margin.y;
    if (height > region->bounds.height) {
        region->bounds.height = height;
    }
    region->dirty = 0;
}
