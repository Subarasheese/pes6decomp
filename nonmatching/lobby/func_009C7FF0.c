/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
M2C_UNK func_00969BE0();                            /* extern */
s32 func_00969C00();                                /* extern */
M2C_UNK func_009DDB00(M2C_UNK);                     /* extern */
extern void *D_00A7DD78;

s32 func_009C7FF0(void) {
    s32 temp_v0;

    if (M2C_FIELD(D_00A7DD78, u8 *, 2) != 0) {
        func_00969BE0();
    }
    temp_v0 = func_00969C00();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 3:
        M2C_FIELD(D_00A7DD78, s8 *, 0) = 0;
        M2C_FIELD(D_00A7DD78, s8 *, 1) = 0xE;
        break;
    case 1:
        func_00213800(M2C_FIELD(D_00A7DD78, void **, 8));
        func_009DDB00(1);
        if (M2C_FIELD(D_00A7DD78, u8 *, 2) == 0) {
            M2C_FIELD(D_00A7DD78, s8 *, 0) = 0;
            M2C_FIELD(D_00A7DD78, s8 *, 1) = 1;
        } else {
            M2C_FIELD(D_00A7DD78, s8 *, 0) = 1;
        }
        break;
    case 2:
        M2C_FIELD(D_00A7DD78, s8 *, 0) = 0xF;
        M2C_FIELD(D_00A7DD78, s8 *, 4) = 4;
        break;
    }
    return 0;
}
