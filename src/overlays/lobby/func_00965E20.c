/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


s32 func_00840560(s32);                             /* extern */
s32 func_00840C80();                                /* extern */

s32 func_00965E20(void) {
    return (func_00840560(func_00840C80()) & 0xFF) == 0;
}
