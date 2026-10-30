/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002630F0(void);
extern s32 func_00263030(void);
void *func_00CDCD70();                              /* extern */

u8 func_00825670(void) {
    if (func_002630F0() != 0) {
        return M2C_FIELD(func_00CDCD70(), u8 *, 0x20);
    }
    if (func_00263030() == 0) {
        return 0U;
    }
    return *(u8 *)0x1524;
}
