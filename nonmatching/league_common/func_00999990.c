/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
M2C_UNK func_00998EE0();                            /* extern */

void func_00999990(void) {
    u8 *temp_v0;

    temp_v0 = func_00229DF0();
    if (temp_v0 != NULL) {
        *temp_v0 += 1;
        if ((s32) *temp_v0 >= 0xA) {
            *temp_v0 = 0;
            func_00998EE0();
        }
    }
}
