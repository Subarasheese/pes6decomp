/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6Sprite_SetPositionZ(s32, f32);
s32 func_001D7C20(s32, s32);
s32 func_001D7D60(s32, s32);
s32 func_001D7D80(s32, s32);
s32 func_001D7E40(s32, s32);
s32 func_001D7F90(s32);
extern s32 D_003EA03C;

s32 func_003655D0(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;
    s32 temp_v1;

    temp_v1 = D_003EA03C;
    if (temp_v1 == 0) {
        return 0;
    }
    var_s0 = 0;
    switch (arg0) {
    case 0:
        var_s0 = 0;
        break;
    case 1:
        var_s0 = 1;
        break;
    case 2:
        var_s0 = 2;
        break;
    case 3:
        var_s0 = 3;
        break;
    }
    temp_v0 = func_001D7F90(temp_v1);
    func_001D7E40(temp_v0, var_s0);
    func_001D7D80(temp_v0, 0);
    func_001D7C20(temp_v0, 2);
    Pes6Sprite_SetPositionZ(temp_v0, 0.0f);
    func_001D7D60(temp_v0, 1);
    return temp_v0;
}
