/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
typedef struct {
    u8 reserved00[0x98];
    s32 redraw;
    u8 reserved9c[0x5ac - 0x9c];
    s32 dimensions[2];
    u8 reserved5b4[0xc74 - 0x5b4];
    s32 layout;
} Panel;
extern s32 (*D_005C3DC0)(void *, const void *, const void *);
extern void func_001884F0(Panel *widget);
s32 func_00188458(Panel *dst, const Panel *current, const Panel *previous) {
    s32 changed = D_005C3DC0(dst, current, previous);
    if (current->dimensions[0] != previous->dimensions[0] ||
        current->dimensions[1] != previous->dimensions[1]) {
        func_001884F0(dst);
        changed = 1;
    }
    if (current->layout != previous->layout) {
        dst->layout = current->layout;
        dst->redraw = 2;
        changed = 1;
    }
    return changed;
}
