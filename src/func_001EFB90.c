/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001EC390(s32, u8, s32, f32);
extern void func_001EFBE0();

void func_001EFB90(void *object) {
    if ((M2C_FIELD(object, u8 *, 0x38) != 0) && (M2C_FIELD(object, u16 *, 0x34) != 0)) {
        func_001EFBE0();
        func_001EC390(M2C_FIELD(object, s32 *, 0xC), M2C_FIELD(object, u8 *, 0x39), M2C_FIELD(object, s32 *, 0x30), M2C_FIELD(object, f32 *, 0x28));
    }
}
