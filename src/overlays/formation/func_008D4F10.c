/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


s32 func_008B2FF0(u8);                              /* extern */

u8 func_008D4F10(u8 *arg0) {
    return arg0[func_008B2FF0(*arg0) + 5];
}
