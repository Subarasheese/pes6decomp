/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    f32 x, y, z, w;
} __attribute__((aligned(16))) Position;
extern void func_001EE5D0(void *widget, Position *out),
    func_001EF860(void *widget, Position *position);
void func_0026D2D0(void *widget, f32 x, f32 y) {
    Position p;
    func_001EE5D0(widget, &p);
    p.x = x;
    p.y = y;
    func_001EF860(widget, &p);
}
