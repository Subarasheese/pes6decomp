/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void func_0023EC10(s32 *arg0, s32 arg1) {
    s32 temp_a2;

    temp_a2 = *arg0;
    if (arg1 != (arg1 & temp_a2)) {
        *arg0 = temp_a2 + arg1;
    }
}
