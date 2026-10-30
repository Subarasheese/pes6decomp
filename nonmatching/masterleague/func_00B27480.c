/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228960(void);
u8 func_00B27480(s32 arg0) {
    return M2C_FIELD(((arg0 & 0xFF) + func_00228960()), u8 *, 0x48);
}
