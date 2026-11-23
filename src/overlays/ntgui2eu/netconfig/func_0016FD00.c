/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
typedef struct {
    u8 reserved00[0x5a0];
    s32 x, y;
    s32 reserved5A8, width, height;
    u8 reserved5B4[0x20];
    s32 border;
} WindowBounds;
typedef struct {
    u8 reserved00[0x98];
    u32 state;
    u8 reserved9C[0x830 - 0x9c];
    s32 left, top, right, bottom;
} WindowClip;
extern WindowBounds *func_00165B00(WindowClip *);
extern s32 func_00163C30(WindowBounds *, s32);
extern s32 D_005BFCA8[];
void func_0016FD00(WindowClip *clip) {
    WindowBounds *child = func_00165B00(clip);
    if (child && func_00163C30(child, D_005BFCA8[0])) {
        clip->left = child->x + child->border;
        clip->top = child->y + child->border;
        clip->right = child->x + child->border + child->width;
        clip->bottom = child->y + child->border + child->height;
        clip->state = 2;
    }
}
