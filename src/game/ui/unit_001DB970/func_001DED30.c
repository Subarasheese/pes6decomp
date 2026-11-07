/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 x;
    f32 y;
} Vec2;

extern Vec2 D_0052AE68[];

void func_001DED30(Vec2 *v) {
    if (v != NULL) {
        D_0052AE68[0] = *v;
    }
}
