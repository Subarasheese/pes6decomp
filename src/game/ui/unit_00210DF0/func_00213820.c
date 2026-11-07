/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x594];
    s32 parts[2];
} Obj;

void func_001F3C40(s32, u8);

void func_00213820(Obj *obj, s32 v) {
    s32 i;

    if (obj != NULL) {
        for (i = 0; i < 2; i++) {
            func_001F3C40(obj->parts[i], v);
        }
    }
}
