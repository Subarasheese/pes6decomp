/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xC0];
    s32 active;
} Obj;

extern void (*D_00376DE8[])(Obj *);

void func_001564C8(Obj *obj) {
    if (obj->active != 0) {
        D_00376DE8[0](obj);
    }
}
