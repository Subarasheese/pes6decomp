/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00BD9D90();                                /* extern */
extern char D_00591DB7[];

s32 func_0030EEB0(void) {
    if ((*(u8 *)D_00591DB7) != 0) {
        return 0;
    }
    return func_00BD9D90();
}
