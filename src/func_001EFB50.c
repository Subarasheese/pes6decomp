/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001EFBE0();

void func_001EFB50(void *object) {
    if ((M2C_FIELD(object, u8 *, 0x38) != 0) && (M2C_FIELD(object, u16 *, 0x34) != 0)) {
        func_001EFBE0();
    }
}
