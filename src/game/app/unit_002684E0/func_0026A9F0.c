/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    f32 x, y, z, w;
} Position;
extern void *func_001F3D30(void *, Position *);
extern void func_001F3D80(void *, Position *, s32);
void func_0026A9F0(void *object, f32 height) {
    Position position;
    func_001F3D30(object, &position);
    position.y = height;
    func_001F3D80(object, &position, 0);
}
