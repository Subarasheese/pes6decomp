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
    WindowBounds bounds;
    u8 reserved5D8[0x998 - 0x5d8];
    s32 offsetX, offsetY;
} Window;
typedef struct {
    s32 kind, x, y;
} WindowPosition;
void func_00167EE8(Window *window, WindowPosition *out) {
    out->x = window->bounds.x + window->bounds.border + window->offsetX;
    out->y = window->bounds.y + window->bounds.border + window->offsetY;
    out->kind = 4;
}
