/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_option_sprite.h"

void func_0023B090(s32 left, s32 right, s32 parent, s32 part, WidgetText *label, f32 offset) {
    f32 anchor[4], position[4];
    f32 width = func_001E4E30(label->text);
    func_008B31A0(D_0053C320[0], 1);
    func_008B31A0(D_0053C320[1], 1);
    func_008B32B0(parent, anchor, part);
    func_008B3280(D_0053C320[left], position);
    position[0] = anchor[0] - 3.0f;
    position[1] = anchor[1];
    func_008B3290(D_0053C320[left], position);
    func_008B3280(D_0053C320[right], position);
    position[0] = offset + (15.0f + (anchor[0] + width));
    position[1] = anchor[1];
    func_008B3290(D_0053C320[right], position);
}
