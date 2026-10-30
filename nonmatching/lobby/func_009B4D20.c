/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00213540(s32, s32);                    /* extern */
extern s32 *D_003EAD20;

void func_009B4D20(s32 arg0) {
    if (D_003EAD20 != NULL) {
        func_00213540(*D_003EAD20, arg0);
    }
}
