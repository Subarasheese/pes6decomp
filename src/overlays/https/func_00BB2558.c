/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void *func_00BAD1A0(void);

void func_00BB2558(s32 arg0) {
    M2C_FIELD(func_00BAD1A0(), s32 *, 0x38) = arg0;
}
