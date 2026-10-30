/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093C140();                                /* extern */
s32 func_0093C150(void *, s32);                     /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009C1440(M2C_UNK);                     /* extern */
M2C_UNK func_009E0260();                            /* extern */
M2C_UNK func_009E0370(s32, M2C_UNK);                /* extern */
M2C_UNK func_009E0380(M2C_UNK);                     /* extern */

void func_0096F1C0(void) {
    s32 temp_v0_2;
    s32 var_s2;
    void *temp_v0;

    temp_v0 = func_00969AF0();
    var_s2 = 0;
    temp_v0_2 = func_0093C150(temp_v0 + 0x2C, M2C_FIELD(temp_v0, s32 *, 0x14));
    switch (temp_v0_2) {                            /* irregular */
    case 0:
        break;
    case -1:
        var_s2 = 1;
        break;
    default:
    case 1:
        var_s2 = 1;
        break;
    }
    if (var_s2 != 0) {
        func_0099D030(0);
        if (temp_v0_2 != 1) {
            func_0026E840(0x8C008005);
            M2C_FIELD(temp_v0, s32 *, 0) = 0x01FB003E;
            func_009717C0(0xA);
        } else {
            func_009E0370(func_0093C140(), -1);
            func_009E0380(1);
            func_009C1440(1);
            if ((func_0093C140() > 0) && (func_0093C140() < 0x33)) {
                func_009E0260();
                func_009717C0(5);
                return;
            }
            if (func_0093C140() > 0) {
                func_0026E840(0x8C008005);
                M2C_FIELD(temp_v0, s32 *, 0) = 0x01FB0008;
                func_009717C0(0xA);
                return;
            }
            func_0026E840(0x8C008005);
            M2C_FIELD(temp_v0, s32 *, 0) = 0x020D0026;
            func_009717C0(0xA);
        }
    }
}
