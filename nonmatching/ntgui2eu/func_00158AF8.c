/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00158A60();                            /* extern */
s32 func_00158A70();                                /* extern */
s32 func_00158A90();                                /* extern */
M2C_UNK func_001595C0(M2C_UNK);                     /* extern */
extern char D_005BEDEC[];

void func_00158AF8(void) {
    if ((func_00158A70() == 0) && (func_00158A90() == -1)) {
        func_001595C0(-1);
        return;
    }
    if (func_00158A90() != -1) {
        (*(s32 *)D_005BEDEC) = func_00158A90();
        func_00158A60();
    }
}
