/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002630F0(void);
void *func_00CDCD70();                              /* extern */

void func_00825630(s32 arg0) {
    if (func_002630F0() != 0) {
        M2C_FIELD(func_00CDCD70(), s32 *, 0xC0) = arg0;
    }
}
