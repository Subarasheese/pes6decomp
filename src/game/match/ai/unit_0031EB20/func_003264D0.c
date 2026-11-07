/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 value;
    u8 pad4[0x38];
} Row3C;

typedef struct {
    u8 pad0[0x50];
    Row3C rows[2];
} Obj;

s32 func_003264D0(s32 *out, Obj *obj, s32 index) {
    if (index == 0xFF) {
        *out = 4;
    } else {
        *out = obj->rows[index].value;
    }
    return 1;
}
