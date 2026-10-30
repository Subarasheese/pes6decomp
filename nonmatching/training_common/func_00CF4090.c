/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002631D0(void);
extern void func_0013E2A0(int);
M2C_UNK func_00802880();                            /* extern */
M2C_UNK func_00CD7AA0();                            /* extern */
M2C_UNK func_00CDC780();                            /* extern */
M2C_UNK func_00CDF5F0();                            /* extern */
M2C_UNK func_00CF5820();                            /* extern */
M2C_UNK func_00CF5AD0();                            /* extern */
M2C_UNK func_00CF68E0();                            /* extern */
extern s32 D_003E7E50;

void func_00CF4090(void) {
    s32 temp_v0;

    func_00CD7AA0();
    temp_v0 = func_002631D0();
    switch (temp_v0) {                              /* irregular */
    case 6:
    case 5:
        break;
    case 8:
        func_00CDC780();
        break;
    case 4:
        func_00CDC780();
        break;
    case 3:
        func_00CDF5F0();
        func_00CF68E0();
        func_00CF5AD0();
        func_00CF5820();
        func_00802880();
        break;
    }
    func_0013E2A0(D_003E7E50);
}
