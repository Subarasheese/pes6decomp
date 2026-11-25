/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    f32 x, y, z;
} Point3;
u8 func_002A5880(const Point3 *point, const Point3 *table, s32 index) {
    return point->y < table[index].y;
}
