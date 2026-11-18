/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x10];
    s32 active;
    u8 pad14[8];
} Pad;

typedef struct {
    u8 pad0[0x58];
    s32 state;
} PadData;

extern Pad D_011FD510[][4];
PadData *func_00194978(s32, s32, s32);

s32 func_00194AD0(s32 port, s32 slot) {
    if (D_011FD510[port][slot].active == 0) {
        return 0;
    }
    return func_00194978(port, slot, 0)->state;
}
