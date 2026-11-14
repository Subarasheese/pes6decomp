/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct { char pad[0xF4]; f32 v; } S;

void func_00A53E10(S *arg0) {
    if (arg0->v < -512.0f) {
        arg0->v = -512.0f;
    }
    if (!(arg0->v <= 512.0f)) {
        arg0->v = 512.0f;
    }
}
