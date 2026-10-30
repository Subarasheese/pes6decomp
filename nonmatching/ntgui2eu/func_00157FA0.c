/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00158A50();                            /* extern */
s32 func_00158B68();                                /* extern */
M2C_UNK func_00158D20(M2C_UNK, s32);                /* extern */
extern char D_011E3910[];
extern M2C_UNK func_00157FF8;

s32 func_00157FA0(void *arg0) {
    if (func_00158B68() == 0) {
        func_00158A50();
        func_00158D20(2, (*(s32 *)D_011E3910));
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &func_00157FF8;
    }
    return 0;
}
