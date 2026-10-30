/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B5E950();                            /* extern */
M2C_UNK func_00B5EDE0();                            /* extern */
M2C_UNK func_00B5F560();                            /* extern */
M2C_UNK func_00B60900();                            /* extern */
extern s32 D_003EAEC4;

void func_00B5F300(void) {
    if (D_003EAEC4 != 0) {
        func_00B5EDE0();
        func_00B5E950();
        func_00B5F560();
        func_00B60900();
    }
}
