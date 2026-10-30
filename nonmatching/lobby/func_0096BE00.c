/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093D280();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009B40A0(M2C_UNK);                     /* extern */

void func_0096BE00(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v1;

    temp_s0 = func_00969AF0();
    var_s1 = 0;
    temp_v0 = func_0093D280();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case -2:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1 = 0x020D001B;
block_15:
        M2C_FIELD(temp_s0, s32 *, 0) = var_v1;
        break;
    case -1:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1 = 0x01FB003E;
        goto block_15;
    case 1:
        M2C_FIELD(temp_s0, s32 *, 0) = 0x020D001A;
        M2C_FIELD(temp_s0, s32 *, 0x28) = 1;
        func_009B40A0(0);
        var_s1 = 1;
        break;
    default:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1 = 0x01FB003E;
        goto block_15;
    }
    if (var_s1 != 0) {
        func_0099D030(0);
        func_009717C0(3);
    }
}
