/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F4140(void *, s8, s32);
s32 func_001E5F60();                                /* extern */
M2C_UNK func_001F3C00(void *, M2C_UNK *);           /* extern */
extern M2C_UNK func_001F1410;
extern M2C_UNK func_001F1510;
extern M2C_UNK func_001F1530;

void *func_001F1490(void *arg0) {
    void *temp_v0;

    if (arg0 != NULL) {
        temp_v0 = func_001F4140(arg0, 0xD, 0x58);
        func_001F3C00(temp_v0, &func_001F1510);
        M2C_FIELD(temp_v0, s32 *, 0x48) = func_001E5F60();
        M2C_FIELD(temp_v0, s8 *, 0x55) = 0;
        M2C_FIELD(temp_v0, M2C_UNK **, 0x3C) = &func_001F1530;
        M2C_FIELD(temp_v0, M2C_UNK **, 0x40) = &func_001F1510;
        M2C_FIELD(temp_v0, M2C_UNK **, 0x44) = &func_001F1410;
        return temp_v0;
    }
    return NULL;
}
