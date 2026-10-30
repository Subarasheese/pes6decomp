/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00825710();                              /* extern */
M2C_UNK func_00826EF0();                            /* extern */

void func_00825DF0(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_00825710();
    switch (arg0) {                                 /* irregular */
    case 1:
        M2C_FIELD(temp_v0, s32 *, 0) = arg1;
block_7:
        func_00826EF0();
        return;
    case 0:
        M2C_FIELD(temp_v0, s32 *, 4) = arg1;
        goto block_7;
    }
}
