/* compiler: mwcc-3.0.1b198-O3 */
#include "types.h"
typedef struct {
    f32 x, y;
} FormationPoint;
typedef struct {
    f32 x, y, width, height;
} FormationRect;
typedef struct {
    s16 x, y, width, height;
} FormationTextureRect;
extern const FormationTextureRect D_008ECB18;
extern void *func_001E6E10(u32), *func_001F2410(void *);
extern void func_001EF900(void *, s8), func_001EF370(void *, const FormationRect *),
    func_001EEAC0(void *, void *), func_001EE630(void *, const FormationTextureRect *),
    func_001EE5D0(void *, f32 *), func_001EF860(void *, const f32 *);
void *func_008BB4D0(void *layer, const FormationPoint *point, s32 style) {
    FormationRect bounds;
    FormationTextureRect uv;
    f32 transform[4];
    void *texture, *sprite;
    if (!layer)
        return 0;
    if (style >= 3)
        return 0;
    texture = func_001E6E10(0x4edc);
    switch (style) {
    case 0:
        bounds.x = -D_008ECB18.width / 2;
        bounds.y = -D_008ECB18.height / 2;
        bounds.width = D_008ECB18.width;
        bounds.height = D_008ECB18.height;
        break;
    case 1:
        bounds.x = -5;
        bounds.y = -5;
        bounds.width = 11;
        bounds.height = 11;
        break;
    case 2:
        bounds.x = -6;
        bounds.y = -6;
        bounds.width = 13;
        bounds.height = 13;
        break;
    }
    uv = D_008ECB18;
    sprite = func_001F2410(layer);
    func_001EF900(sprite, 1);
    func_001EF370(sprite, &bounds);
    if (texture) {
        func_001EEAC0(sprite, texture);
        func_001EE630(sprite, &uv);
    }
    func_001EE5D0(sprite, transform);
    transform[0] = point->x;
    transform[1] = point->y;
    func_001EF860(sprite, transform);
    return sprite;
}
