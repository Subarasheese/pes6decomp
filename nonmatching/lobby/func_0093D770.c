/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00866220(s32, M2C_UNK);                /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_00A43860[];

s32 func_0093D770(void) {
    func_00866220(func_00D0BAF0(), 0);
    if (((void *)D_00A43860) != NULL) {
        func_001C48E8(((void *)D_00A43860), 0, 0x7534);
    }
    return 1;
}
