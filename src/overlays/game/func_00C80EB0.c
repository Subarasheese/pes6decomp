/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_sprite_frame.h"

extern s8 D_00CCC1B9[];
extern s32 D_00CB4CF8[];
extern const SpriteFrame D_00CA87A0[];
extern void *D_00CCC130[];

void func_00C80EB0(void *node, s32 unused, s32 x, s32 y) {
    s32 index = D_00CB4CF8[D_00CCC1B9[0]];
    match_draw_frame(node, D_00CA87A0, index, D_00CCC130, x, y);
}
