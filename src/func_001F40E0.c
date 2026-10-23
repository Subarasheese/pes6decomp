/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *func_00154060(s32, s32);
extern s8 func_001EC0F0();
extern s32 func_001EC540();

void *func_001F40E0(s8 type, s32 size) {
    void *object;

    object = func_00154060(size, 1);
    M2C_FIELD(object, s8 *, 0) = type;
    if (object != NULL) {
        M2C_FIELD(object, s8 *, 4) = func_001EC0F0();
        M2C_FIELD(object, s32 *, 0x1C) = func_001EC540();
    }
    return object;
}
