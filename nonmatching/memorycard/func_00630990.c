/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00656160(u8);                          /* extern */
extern char D_0065C290[];

void func_00630990(void) {
    if (M2C_FIELD(((void *)D_0065C290), u8 *, 0) != 0) {
        M2C_FIELD(((void *)D_0065C290), u8 *, 0) = 0U;
        func_00656160(M2C_FIELD(((void *)D_0065C290), u8 *, 1));
    }
}
