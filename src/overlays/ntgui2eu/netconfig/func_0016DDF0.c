/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
typedef struct {
    u8 reserved00[0x5a0];
    s32 x, y, reserved5a8, width, height;
    u8 reserved5b4[0x20];
    s32 inset;
    u8 reserved5d8[0x878 - 0x5d8];
    s32 borderX, borderY, left, right, top, bottom;
} RegionWidget;
void func_0016DDF0(RegionWidget *w, s32 *x, s32 *y, s32 *width, s32 *height) {
    *x = w->x + w->borderX + (w->left + w->inset);
    *y = w->y + w->borderY + (w->top + w->inset);
    *width = w->width - w->borderX * 2 - w->left - w->right;
    if (*width < 0)
        *width = 0;
    *height = w->height - w->borderY * 2 - w->top - w->bottom;
    if (*height < 0)
        *height = 0;
}
