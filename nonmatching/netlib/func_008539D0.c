/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C47E0(s32, void *, M2C_UNK);        /* extern */
s32 func_00853C80(M2C_UNK, s32);                    /* extern */
extern char D_008B1DF0[];
extern char D_008B1DF4[];
extern char D_008B1DF5[];

void func_008539D0(void *arg0) {
    s32 temp_s0;
    s8 temp_v1;
    s8 var_a0;

    temp_s0 = (*(s32 *)D_008B1DF0);
    if (arg0 != NULL) {
        func_001C47E0(temp_s0 + 0xC, arg0, 0x10);
    }
    temp_v1 = M2C_FIELD(arg0, s8 *, 3);
    switch (temp_v1) {                              /* irregular */
    case -1:
    case 1:
        (*(s32 *)D_008B1DF0) = func_00853C80(1, temp_s0);
        var_a0 = (*(s8 *)D_008B1DF4) - 1;
block_5:
        (*(s8 *)D_008B1DF4) = var_a0;
        break;
    default:
        (*(s32 *)D_008B1DF0) = func_00853C80(1, temp_s0);
        var_a0 = (*(s8 *)D_008B1DF4) - 1;
        goto block_5;
    case 0:
        (*(s32 *)D_008B1DF0) = func_00853C80(0, temp_s0);
        (*(s8 *)D_008B1DF5) += 1;
        break;
    }
}
