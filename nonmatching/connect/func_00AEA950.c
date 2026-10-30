/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00B02AF0[];

M2C_UNK *func_00AEA950(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s8 *, 0x20) = 0;
    func_001C48E8(((void *)D_00B02AF0), 0, 8);
    return ((void *)D_00B02AF0);
}
