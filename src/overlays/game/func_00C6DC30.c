/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_sprite_frame.h"

extern s8 D_00CCBBDD[];
extern s32 D_00CB4B98[];
extern const SpriteFrame D_00CA82E0[];
extern void *D_00CCBBC0[];

void func_00C6DC30(void *node, s32 unused, s32 x, s32 y) {
    s32 index = D_00CB4B98[D_00CCBBDD[0]];
    match_draw_frame(node, D_00CA82E0, index, D_00CCBBC0, x, y);
}
