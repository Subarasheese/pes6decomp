/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3480(void *);                          /* extern */

s32 func_00B35DC0(void **arg0) {
    return (((M2C_FIELD(*arg0, u16 *, 0x26) - (func_009B3480(*arg0) & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001;
}
