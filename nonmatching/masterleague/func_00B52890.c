/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B4E820();                            /* extern */
M2C_UNK func_00B52260();                            /* extern */
extern s32 D_003EAE98;

void func_00B52890(void) {
    if (D_003EAE98 != 0) {
        func_00B4E820();
        func_00B52260();
    }
}
