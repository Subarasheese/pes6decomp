/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00811A80(M2C_UNK, void *);             /* extern */
s32 func_008375D0();                                /* extern */
s64 func_0083C4D0();                                /* extern */
M2C_UNK func_008439C0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_008596C0(M2C_UNK *);                   /* extern */
M2C_UNK func_00884200(M2C_UNK);                     /* extern */
extern char D_008B21C0[];

s32 func_00812400(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, 3) != 0) {
        if (func_008375D0() != 1) {
            func_008439C0(5, 0x9C40);
            M2C_FIELD(arg0, s8 *, 1) = 2;
        } else {
            func_008439C0(5, 0x5DC0);
            if (((s64) (func_0083C4D0() << 0x38) >> 0x38) != 1) {
                M2C_FIELD(arg0, s8 *, 1) = 0;
            } else {
                M2C_FIELD(arg0, s8 *, 1) = 1;
            }
        }
        func_008596C0(((void *)D_008B21C0));
        func_00811A80(2, arg0);
    } else {
        M2C_FIELD(arg0, s8 *, 4) = 1;
        M2C_FIELD(arg0, s8 *, 6) = 2;
        func_00884200(4);
    }
    return 0;
}
