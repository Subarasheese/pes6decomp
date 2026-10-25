/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 pad0;
    s32 cur;
    s32 next;
    s32 padC;
    s32 ok;
} Obj;

extern Obj D_00398660;
s32 func_001E6E10(s32);

s32 func_001BE610(void) {
    Obj *obj = &D_00398660;

    if (obj == NULL) {
        return 0;
    }
    if (func_001E6E10(obj->next) != 0) {
        obj->ok = 1;
        obj->cur = obj->next;
        return 1;
    }
    obj->ok = 0;
    return 0;
}
