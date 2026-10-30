/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
s32 func_00817AD0(M2C_UNK);                         /* extern */
M2C_UNK func_00817CC0();                            /* extern */
M2C_UNK func_009C8730();                            /* extern */
M2C_UNK func_009CC530(M2C_UNK);                     /* extern */
M2C_UNK func_009CCC20();                            /* extern */
M2C_UNK func_009DDB00(M2C_UNK);                     /* extern */
M2C_UNK func_00D0C090();                            /* extern */
extern void *D_00A7E238;

s32 func_009F2A70(void) {
    s32 temp_v0;

    if (M2C_FIELD(D_00A7E238, u8 *, 1) != 0) {
        func_00817CC0();
    }
    temp_v0 = func_00817AD0(0x6C0084);
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    default:
    case 2:
    case 1:
        func_009C8730();
        func_009CCC20();
        func_009DDB00(1);
        func_00213800(M2C_FIELD(D_00A7E238, void **, 8));
        M2C_FIELD(D_00A7E238, s8 *, 0) = 0;
        func_00D0C090();
        break;
    case 3:
        M2C_FIELD(D_00A7E238, s8 *, 0) = 6;
        func_009CC530(1);
        func_00D0C090();
        break;
    }
    return 0;
}
