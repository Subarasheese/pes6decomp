/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_008F86F8(void *, s32);
void func_008FAC28(void *arg0) {
    func_008F86F8(arg0, 3);
    if (func_008F86F8(arg0, 1) != 0) {
        func_008F86F8(arg0, 8);
        func_008F86F8(arg0, 8);
        M2C_FIELD(arg0, u32 *, 0x154) = func_008F86F8(arg0, 8);
    }
    M2C_FIELD(arg0, u32 *, 0x158) = func_008F86F8(arg0, 0xE);
    func_008F86F8(arg0, 1);
    M2C_FIELD(arg0, u32 *, 0x15C) = func_008F86F8(arg0, 0xE);
}
