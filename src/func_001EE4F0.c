/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"



typedef struct {
    u8 pad0[0xA3];
    u8 value;
} Obj;

void func_001EE4F0(Obj *obj, u8 *out) {
    s32 ok;

    if (obj != NULL && out != NULL) {
        ok = 1;
    } else {
        ok = 0;
    }
    if (ok == 0) {
        return;
    }
    *out = obj->value;
}
