/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
s32 func_008214E0();                                /* extern */
M2C_UNK func_00978580();                            /* extern */
M2C_UNK func_0097E300();                            /* extern */
M2C_UNK func_009DDB00(M2C_UNK);                     /* extern */
extern void *D_00A7DD78;

s32 func_009C7C40(void) {
    u8 temp_a0;

    if (func_008214E0() == 0) {
        return 0;
    }
    temp_a0 = M2C_FIELD(D_00A7DD78, u8 *, 1);
    switch (temp_a0) {                              /* irregular */
    case 6:
        func_00213800(M2C_FIELD(D_00A7DD78, void **, 8));
        func_009DDB00(0);
        break;
    case 8:
        func_00213800(M2C_FIELD(D_00A7DD78, void **, 8));
        func_009DDB00(0);
        break;
    case 7:
        func_00213800(M2C_FIELD(D_00A7DD78, void **, 8));
        func_009DDB00(0);
        func_00978580();
        break;
    case 5:
        func_00213800(M2C_FIELD(D_00A7DD78, void **, 8));
        func_009DDB00(0);
        func_0097E300();
        break;
    }
    M2C_FIELD(D_00A7DD78, u8 *, 0) = (u8) M2C_FIELD(D_00A7DD78, u8 *, 1);
    return 0;
}
