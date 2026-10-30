/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B097A0();                            /* extern */
M2C_UNK func_00B09980();                            /* extern */
M2C_UNK func_00B09DC0();                            /* extern */
M2C_UNK func_00B0A310();                            /* extern */
extern s32 D_003EAD60;

void func_00B0AAF0(void) {
    if (D_003EAD60 != 0) {
        func_00B0A310();
        func_00B09DC0();
        func_00B09980();
        func_00B097A0();
    }
}
