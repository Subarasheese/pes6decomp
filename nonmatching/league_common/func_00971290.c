/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00971D00(s32, M2C_UNK);                /* extern */

void func_00971290(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;

    if (arg0 != NULL) {
        switch (arg1) {                             /* irregular */
        case 1:
            temp_a0 = M2C_FIELD(arg0, s32 *, 0x10);
            if (temp_a0 != 0) {
                func_00971D00(temp_a0, 1);
            }
            break;
        case 0:
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xC);
            if (temp_a0_2 != 0) {
                func_00971D00(temp_a0_2, 0);
                return;
            }
            break;
        }
    }
}
