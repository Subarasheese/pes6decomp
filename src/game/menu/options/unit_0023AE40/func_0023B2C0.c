/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_option_sprite.h"

void func_0023B2C0(s32 side, s32 parent, s32 part) {
    f32 position[4];
    func_008B31A0(D_0053C320[side], 1);
    func_008B3210(parent, part, D_0053C320[side]);
    func_008B3280(D_0053C320[side], position);
    if (position[2] < 1500.0f) {
        position[2] = 1500.0f;
        func_008B3290(D_0053C320[side], position);
    }
}
