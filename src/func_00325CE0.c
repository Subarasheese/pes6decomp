/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 value;
    u8 pad4[0x38];
} Row3C;

typedef struct {
    u8 pad0[0x54];
    Row3C rows[2];
} Obj;

s32 func_00325CE0(s32 *out, Obj *obj, s32 index) {
    if (index >= 2) {
        *out = 0;
    } else {
        *out = obj->rows[index].value;
    }
    return 1;
}
