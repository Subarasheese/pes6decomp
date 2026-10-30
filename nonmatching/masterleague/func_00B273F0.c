/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
u16 func_00B273F0(s32 arg0) {
    return M2C_FIELD((((arg0 & 0xFF) * 2) + func_00228960()), u16 *, 0xE4);
}
