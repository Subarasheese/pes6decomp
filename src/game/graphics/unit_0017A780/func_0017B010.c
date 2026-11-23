/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 x;
    f32 y;
} Vec2;

extern Vec2 D_003FB114[];
void Pes6Camera_UpdateMatrices(void);
void func_00142B80(void);

void func_0017B010(Vec2 *v) {
    f32 x = v->x;
    f32 y = v->y;

    D_003FB114[0].x = x;
    D_003FB114[0].y = y;
    Pes6Camera_UpdateMatrices();
    func_00142B80();
}
