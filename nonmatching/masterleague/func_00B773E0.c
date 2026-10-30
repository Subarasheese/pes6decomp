/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B77640();                            /* extern */
M2C_UNK func_00B77980();                            /* extern */
extern s32 D_003EAF0C;

void func_00B773E0(void) {
    if (D_003EAF0C != 0) {
        func_00B77980();
        func_00B77640();
    }
}
