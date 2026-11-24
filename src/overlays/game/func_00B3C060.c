/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 pad[0x4e];
    u8 kind;
} ControlKind;
typedef struct {
    void *player;
    ControlKind *control;
} ControlView;
u8 func_00B3C060(const ControlView *ctx) {
    u8 kind = ctx->control->kind;
    u8 result = 0;
    switch (kind) {
    case 0x7f:
    case 0x7e:
    case 0x7c:
    case 0x78:
        result |= 1;
        break;
    case 0x3f:
    case 0x3e:
    case 0x3c:
    case 0x38:
        result |= 2;
        break;
    case 0x37:
    case 0x36:
    case 0x34:
    case 0x30:
    case 0x27:
    case 0x26:
    case 0x24:
    case 0x20:
    case 0x7:
    case 0x6:
    case 0x4:
    case 0x0:
        break;
    default:
        result = 255;
        break;
    }
    switch (kind) {
    case 0x7f:
    case 0x3f:
    case 0x37:
    case 0x27:
    case 0x7:
        result |= 8;
        break;
    case 0x7e:
    case 0x3e:
    case 0x36:
    case 0x26:
    case 0x6:
        result |= 16;
        break;
    case 0x7c:
    case 0x3c:
    case 0x34:
    case 0x24:
    case 0x4:
    case 0x78:
    case 0x38:
    case 0x30:
    case 0x20:
    case 0x0:
        break;
    default:
        result = 255;
        break;
    }
    return result;
}
