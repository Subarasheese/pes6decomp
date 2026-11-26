/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
typedef struct {
    u8 reserved00[0x98];
    s32 redraw;
    u8 reserved9c[0x2888 - 0x9c];
    s32 settings[4];
} Packet;
extern s32 (*D_005C3DC0)(void *, const void *, const void *);
s32 func_0017F9E0(Packet *dst, const Packet *current, const Packet *previous) {
    s32 changed = D_005C3DC0(dst, current, previous);
    if (current->settings[0] != previous->settings[0]) {
        dst->settings[0] = current->settings[0];
        dst->redraw = 2;
        changed = 1;
    }
    if (current->settings[1] != previous->settings[1]) {
        dst->settings[1] = current->settings[1];
        dst->redraw = 2;
        changed = 1;
    }
    if (current->settings[2] != previous->settings[2]) {
        dst->settings[2] = current->settings[2];
        dst->redraw = 2;
        changed = 1;
    }
    if (current->settings[3] != previous->settings[3]) {
        dst->settings[3] = current->settings[3];
        dst->redraw = 2;
        changed = 1;
    }
    return changed;
}
