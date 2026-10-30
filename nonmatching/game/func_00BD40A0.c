/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00930240(void *, M2C_UNK, void *);     /* extern */

s32 func_00BD40A0(void **arg0) {
    s32 var_s0;
    u16 temp_v1;
    void *temp_a0;
    void *temp_a2;

    temp_a2 = *arg0;
    temp_a0 = M2C_FIELD(temp_a2, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    var_s0 = 0;
    switch (temp_v1) {                              /* irregular */
    case 0x385:
        func_00209A00(temp_a0, 0x2A1, 0);
        break;
    case 0x2A1:
    case 0x2A5:
    case 0x29E:
    case 0x285:
        func_00930240(temp_a2, 0x2A1, temp_a2);
        if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
            func_00208610(M2C_FIELD(*arg0, void **, 4));
        }
        break;
    case 0x2A2:
    case 0x2A3:
        M2C_FIELD(temp_a2, s32 *, 0x1C) = 0;
        if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
            func_00208610(M2C_FIELD(*arg0, void **, 4));
        }
        break;
    case 0x253:
    case 0x254:
        if (func_00207D10(temp_a0) != 0) {
            M2C_FIELD(*arg0, s32 *, 0x1C) = 0;
            func_00208610(M2C_FIELD(*arg0, void **, 4));
        }
        break;
    case 0x0:
        M2C_FIELD(temp_a2, s32 *, 0x1C) = 0;
        /* fallthrough */
    default:
        var_s0 = 1;
        break;
    }
    return var_s0;
}
