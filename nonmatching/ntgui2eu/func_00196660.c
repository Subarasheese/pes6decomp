/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
extern char D_005FF318[];
extern char D_011FD7C0[];
extern char D_011FD840[];
extern char D_011FED80[];
extern M2C_UNK func_00195BF0;

s32 func_00196660(void) {
    if (func_0019EE30(((void *)D_011FD7C0), 0x35, 0, ((void *)D_011FD840), 0x30, ((void *)D_011FED80), 4, &func_00195BF0, 0) != 0) {
        func_0019DBD0(((void *)D_005FF318));
        return -0x5B;
    }
    return M2C_FIELD(((void *)D_011FED80), s32 *, -0x1280);
}
