/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_00229460(void);
s32 func_00231240(void);

s32 func_00235B60(void) {
    u8 *info = func_00229460();

    if (func_00231240() == 1) {
        return 0;
    }
    if (info == NULL) {
        return 0;
    }
    return info[0x16F1];
}
