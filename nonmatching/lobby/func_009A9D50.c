/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093D650(s32);                             /* extern */
M2C_UNK func_0093D680();                            /* extern */
s32 func_0093D690();                                /* extern */
M2C_UNK func_0098CAD0();                            /* extern */
M2C_UNK func_0098CAE0();                            /* extern */

s32 func_009A9D50(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_0093D650(arg0 + 0x8E);
    if (temp_v0 != 0) {
        func_0098CAD0();
    }
    switch (temp_v0) {                              /* irregular */
    case 4:
        if (func_0093D690() == 0) {
            func_0026E840(0x8C008004);
            return 1;
        }
        func_0093D680();
        M2C_FIELD(arg0, s8 *, 0x74) = 8;
        func_0098CAE0();
block_18:
    default:
        return 0;
    case 1:
        func_0026E840(0x8C008005);
        M2C_FIELD(arg0, s32 *, 0x88) = 0x01FB003E;
        M2C_FIELD(arg0, s8 *, 0x74) = 9;
        goto block_18;
    case 2:
        return 4;
    case 3:
        return 3;
    }
}
