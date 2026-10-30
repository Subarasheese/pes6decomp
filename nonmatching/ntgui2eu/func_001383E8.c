/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00158AE8();                                /* extern */
M2C_UNK func_001AFEB0(void *, M2C_UNK *);           /* extern */
u32 func_001B0444(s32);                             /* extern */
M2C_UNK func_001B08E8(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern char D_005FB058[];
extern char D_011D7490[];

M2C_UNK *func_001383E8(void) {
    s32 temp_v0;

    temp_v0 = func_00158AE8();
    func_001B08E8(((void *)D_011D7490), temp_v0, 0x32);
    if (func_001B0444(temp_v0) >= 0x32U) {
        if (M2C_FIELD(((void *)D_011D7490), s8 *, 0x32) != 0x2E) {
            func_001AFEB0(((void *)D_011D7490) + 0x32, ((void *)D_005FB058));
        }
    }
    return ((void *)D_011D7490);
}
