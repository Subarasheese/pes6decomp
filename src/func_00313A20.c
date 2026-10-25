/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xC];
    u8 value;
    u8 state;
} ObjE;

u8 func_00313A20(ObjE *obj, s32 value, u8 mode) {
    switch (mode) {
    case 3:
    case 0:
        obj->state = 0xFF;
        break;
    case 1:
        obj->state = 0;
        break;
    case 2:
        obj->state = 1;
        break;
    }
    obj->value = value;
    return value;
}
