/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00BBC080();                            /* extern */

void func_00BB2BF0(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x2C);
    switch (temp_v1) {                              /* irregular */
    case 6:
        M2C_FIELD(arg0, s32 *, 0x4C) = 2;
        func_0026E840(0x84028400);
        func_00BBC080();
        return;
    case 4:
        M2C_FIELD(arg0, s32 *, 0x4C) = 1;
        func_0026E840(0x84028400);
        func_00BBC080();
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x4C) = 0;
        func_0026E840(0x84028400);
        func_00BBC080();
        return;
    default:
        func_0026E840(0x8C008005);
        return;
    }
}
