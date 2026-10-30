/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00210E60(void);
M2C_UNK func_0096BF90();                            /* extern */

void func_00937630(void) {
    if ((func_00210E60() & 0xFF) <= 0) {
        func_0096BF90();
    }
}
