/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x3];
    u8 mode : 2;
    u8 rest : 6;
    u8 pad4[0xEC];
} RecF0;

extern RecF0 D_005E3610[];

void func_002C7BB0(s32 index, s32 mode) {
    D_005E3610[index].mode = mode;
}
