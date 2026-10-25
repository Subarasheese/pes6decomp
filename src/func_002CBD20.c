/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    s32 b;
} Pair;

extern Pair D_005E3BA0[];

void func_002CBD20(s8 index, s32 a, s32 b) {
    D_005E3BA0[index].a = a;
    D_005E3BA0[index].b = b;
}
