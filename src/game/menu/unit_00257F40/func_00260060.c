/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 v[4];
} Vec4;

extern Vec4 D_0058D2B0[];

void func_00260060(s32 index, Vec4 *out) {
    *out = D_0058D2B0[index];
}
