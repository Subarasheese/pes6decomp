/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
void *func_0082C2A0();                              /* extern */
M2C_UNK func_00842980(M2C_UNK);                     /* extern */
s32 func_009812C0();                                /* extern */
extern char D_008A5F70[];
extern char D_008A94D0[];

s32 func_00980690(void) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 == NULL) {
        return 1;
    }
    if (((void *)D_008A5F70) == NULL) {
        return 1;
    }
    if (func_0082C2A0() == NULL) {
        var_v0 = 0;
    } else {
        var_v0 = func_009812C0();
    }
    if (var_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x13A7C) != 0) {
            func_001C48E8(var_v0, 0, 0x141EC);
        }
        (*(s32 *)D_008A94D0) = 0;
        func_00842980(1);
        return 4;
    }
    return 1;
}
