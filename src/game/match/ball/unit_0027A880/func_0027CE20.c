/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u8 D_00591DF0[];
extern f32 *D_003E74CC, D_00591BEC[], D_00591BF8[], D_00591C00[], D_00591C04[];
void func_0027CE20(s32 mode) {
    f32 fps;
    switch (mode) {
    default:
        fps = 60.0f;
        break;
    case 1:
        fps = 50.0f;
        break;
    case 2:
        fps = 30.0f;
        break;
    case 3:
        fps = 15.0f;
        break;
    }
    D_00591DF0[0] = (u8)fps;
    *D_003E74CC = 60.0f / fps;
    D_00591BEC[0] = 256.0f * (fps / 60.0f);
    D_00591BF8[0] = 4551266.0f;
    D_00591C00[0] = 1400000.0f;
    D_00591C04[0] = 180.0f;
}
