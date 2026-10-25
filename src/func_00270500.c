/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 id;
    u8 pad1[0x25];
    u16 value;
} Obj;

extern u8 D_003E9C8C;
u16 func_009B3FC0(u8);

u16 func_00270500(Obj *obj) {
    if (D_003E9C8C != 0) {
        return func_009B3FC0(obj->id);
    }
    return obj->value;
}
