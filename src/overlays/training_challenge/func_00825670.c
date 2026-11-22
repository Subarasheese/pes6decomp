/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002630F0(void);
extern s32 func_00263030(void);
extern u32 func_00CDCD70(void);

u8 func_00825670(void) {
    if (func_002630F0() != 0) {
        return M2C_FIELD(func_00CDCD70(), u8 *, 0x20);
    }
    switch (func_00263030()) {
    case 0:
        return 0U;
    default:
        return *(u8 *)0x1524;
    }
}
