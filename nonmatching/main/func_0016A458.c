/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0016A370();                              /* extern */
M2C_UNK func_001C8590(void *, s32, M2C_UNK);        /* extern */
extern char D_0050E334[];

s32 func_0016A458(s32 arg0, s32 arg1) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = -1;
    if ((*(s32 *)D_0050E334) != 0) {
        temp_v0 = func_0016A370();
        var_v0 = -2;
        if (temp_v0 != NULL) {
            func_001C8590(temp_v0, arg0, 0xC);
            var_v0 = 0;
            M2C_FIELD(temp_v0, s32 *, 0xC) = arg1;
        }
    }
    return var_v0;
}
