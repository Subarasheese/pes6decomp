/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
M2C_UNK func_00939470();                            /* extern */
s32 func_0099B6E0(M2C_UNK, u8);                     /* extern */
M2C_UNK func_00B1D610();                            /* extern */
M2C_UNK func_00B1D980();                            /* extern */
M2C_UNK func_00B2CEF0();                            /* extern */

void func_00B20B30(void) {
    void *temp_v0;

    temp_v0 = func_00229DF0();
    if (temp_v0 != NULL) {
        func_00B1D980();
        func_00B1D610();
        func_00939470();
        if (func_0099B6E0(4, M2C_FIELD(temp_v0, u8 *, 3)) == 1) {
            func_00B2CEF0();
        }
    }
}
