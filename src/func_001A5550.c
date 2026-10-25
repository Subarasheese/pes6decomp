/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9890;
extern f32 D_005205A0[];
extern f32 D_005205A4[];
extern f32 D_005205A8[];
extern f32 D_005205AC[];

void func_001A5550(f32 *vec) {
    f32 z = vec[2];
    f32 y = vec[1];
    f32 x = vec[0];

    D_003E9890 = 0;
    D_005205A0[0] = x;
    D_005205A4[0] = y;
    D_005205A8[0] = z;
    D_005205AC[0] = 1.0f;
}
