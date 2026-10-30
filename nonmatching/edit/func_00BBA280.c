/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BCF390(void);
M2C_UNK func_0025E150(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0025F3B0(M2C_UNK);                     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00BB76A0(void *);                      /* extern */
M2C_UNK func_00BBC050();                            /* extern */

s32 func_00BBA280(void *arg0) {
    if (func_00BCF390() & 0x4000) {
        if (M2C_FIELD(arg0, s32 *, 0x60) >= 2) {
            func_00BB76A0(arg0);
        }
        func_0025E150(0, 1);
        func_0025F3B0(3);
        func_00BBC050();
        func_0026E840(0x84008401);
        return 1;
    }
    return 0;
}
