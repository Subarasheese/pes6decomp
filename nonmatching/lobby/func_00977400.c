/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093BF50(s32 *);                           /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
extern s32 *D_00A68D50;

void func_00977400(void) {
    s32 *temp_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v1;

    var_s1 = 0;
    temp_s0 = D_00A68D50;
    temp_v0 = func_0093BF50(temp_s0 + 8);
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case -1:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1 = 0x01FB003E;
block_11:
        *temp_s0 = var_v1;
        break;
    case 1:
        var_s1 = 1;
        var_v1 = 0x020D001D;
        goto block_11;
    default:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1 = 0x01FB003E;
        goto block_11;
    }
    if (var_s1 != 0) {
        func_0099D030(0);
        func_009717C0(7);
    }
}
