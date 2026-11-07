/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00173A60(void *);
extern void func_00174470(void *);

s32 func_00171090(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0xD10) == 0) {
        func_00174470(arg0);
    }
    return func_00173A60(arg0);
}
