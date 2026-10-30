/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00868290(s32 *, void *);                   /* extern */
M2C_UNK func_0086B180(s32 *, s32);                  /* extern */
s32 func_00871B60(s32 *, s32, s32);                 /* extern */

s32 func_00862040(void *arg0, s32 *arg1) {
    s32 temp_v1;
    s32 var_s0;

    temp_v1 = *arg1;
    var_s0 = 0;
    switch (temp_v1) {                              /* irregular */
    case 0x5:
        break;
    case 0x4401:
        var_s0 = func_00871B60(arg1, arg0 + 0x4830, arg0 + 0x161C0);
        break;
    case 0x4:
        M2C_FIELD(arg0, s32 *, 0xF8A0) = 0;
        func_0086B180(arg1, arg0 + 0x4830);
        break;
    case 0x6:
        var_s0 = func_00868290(arg1, arg0 + 0x1622C);
        func_001C48E8(arg0 + 0x16230, 0, 0x14);
        break;
    }
    return var_s0;
}
