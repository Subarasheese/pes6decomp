/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 x;
    f32 y;
} Vec2;

void func_00C120C0(Vec2 *);

void func_002C3B20(Vec2 *out) {
    Vec2 tmp;

    func_00C120C0(&tmp);
    *out = tmp;
}
