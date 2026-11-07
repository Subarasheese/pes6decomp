/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9890;
extern f32 D_00520590[];
extern f32 D_00520594[];
extern f32 D_00520598[];
extern f32 D_0052059C[];

void func_001A5620(f32 *vec) {
    f32 z = vec[2];
    f32 y = vec[1];
    f32 x = vec[0];

    D_003E9890 = 0;
    D_00520590[0] = x;
    D_00520594[0] = y;
    D_00520598[0] = z;
    D_0052059C[0] = 1.0f;
}
