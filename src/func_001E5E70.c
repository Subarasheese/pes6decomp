/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x10];
    s64 stamp;
    u8 pad18[0x24];
    u8 flags;
} Obj;

extern s64 D_0052B0D8[];

void func_001E5E70(Obj *obj) {
    s64 stamp = D_0052B0D8[0];

    if (obj != NULL) {
        obj->stamp = stamp;
        obj->flags |= 4;
    }
}
