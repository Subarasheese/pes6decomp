/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
typedef struct {
    u8 reserved00[0xe74];
    s32 drawMode;
    u8 reservedE78[12];
    s32 requestedMode;
} ModeWidget;
void func_001777A8(ModeWidget *w) {
    s32 mode = w->requestedMode;
    switch (mode) {
    case 0:
        w->drawMode = 4;
        break;
    case 19:
        w->drawMode = 1;
        break;
    case 2:
        w->drawMode = mode;
        break;
    case 1:
        w->drawMode = 3;
        break;
    default:
        w->drawMode = 4;
        break;
    }
}
