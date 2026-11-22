/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_002643F0(void);
extern s32 func_00CDCCB0(void);

s32 func_008071D0(void *arg0) {
    if (func_00CDCCB0() == 1) {
        return func_002643F0();
    }
    return M2C_FIELD(arg0, s32 *, 0x218);
}
