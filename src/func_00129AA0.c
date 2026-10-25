/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u16 low : 7;
    u16 count : 4;
    u16 high : 5;
} Bits16;

typedef struct {
    u8 pad0[0x1A];
    Bits16 bits;
} Obj1C;

s32 func_00129AA0(Obj1C *obj) {
    return 0xA00 / (obj->bits.count + 1);
}
