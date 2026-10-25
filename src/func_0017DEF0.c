/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    s32 b;
} Pair;

void func_00143220(s32, s32);

void func_0017DEF0(void *obj, s32 index) {
    Pair *pair = &M2C_FIELD(obj, Pair **, 0x14)[index];

    ((void (*)(s32, s32))func_00143220)(pair->a, pair->b);
}
