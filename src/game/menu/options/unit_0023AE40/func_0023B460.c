/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_option_sprite.h"

void func_0023B460(s32 side, s32 kind) {
    f32 position[4];
    D_0053C320[side] = func_003655D0(kind);
    func_008B31A0(D_0053C320[side], 0);
    func_008B3280(D_0053C320[side], position);
    if (position[2] < 2500.0f) {
        position[2] = 2500.0f;
        func_008B3290(D_0053C320[side], position);
    }
}
