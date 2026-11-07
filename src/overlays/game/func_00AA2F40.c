/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


s32 func_00AFBA70(u8);                              /* extern */

s32 func_00AA2F40(u8 *arg0) {
    return ((s32 *)(arg0 + 0x158))[func_00AFBA70(*arg0) & 0xFF];
}
