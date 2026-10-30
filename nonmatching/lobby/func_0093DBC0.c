/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00A55580[];

s32 func_0093DBC0(void) {
    if (((void *)D_00A55580) != NULL) {
        func_001C48E8(((void *)D_00A55580), 0, 0x7534);
    }
    return 1;
}
