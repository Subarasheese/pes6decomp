/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093D200(s32, void *);                     /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */

void func_0096C230(void) {
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_v1;
    void *temp_v0;

    temp_v0 = func_00969AF0();
    var_s1 = 0;
    temp_v0_2 = func_0093D200(M2C_FIELD(temp_v0, s32 *, 4), temp_v0 + 0x2C);
    switch (temp_v0_2) {                            /* irregular */
    case -3:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1 = 0x020D0040;
block_19:
        M2C_FIELD(temp_v0, s32 *, 0) = var_v1;
        break;
    case -2:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1 = 0x020D003D;
        goto block_19;
    case -1:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1 = 0x01FB003E;
        goto block_19;
    case 1:
        var_s1 = 1;
        var_v1 = 0x020D0014;
        goto block_19;
    default:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1 = 0x01FB003E;
        goto block_19;
    }
    if (var_s1 != 0) {
        func_0099D030(0);
        func_009717C0(8);
    }
}
