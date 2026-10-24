/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

void func_001EE5D0(void *, Vec4 *);
void func_001EF860(void *, Vec4 *);

void func_001B4F10(void *obj, f32 z) {
    Vec4 pos;

    if (obj == NULL) {
        return;
    }
    func_001EE5D0(obj, &pos);
    pos.z = z;
    func_001EF860(obj, &pos);
}
