/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093D300(s32);                             /* extern */
M2C_UNK func_00964140();                            /* extern */
s32 func_00964180();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
extern s32 *D_00A68CD8;

void func_00971370(void) {
    s32 *temp_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v1;

    temp_s0 = D_00A68CD8;
    var_s1 = 0;
    temp_v0 = func_0093D300(func_00964180());
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case -3:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1 = 0x01F50013;
block_18:
        *temp_s0 = var_v1;
        break;
    case -2:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1 = 0x020D0001;
        goto block_18;
    case -1:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1 = 0x01FB003E;
        goto block_18;
    case 1:
        var_s1 = 1;
        var_v1 = 0x020D0000;
        goto block_18;
    }
    if (var_s1 != 0) {
        func_00964140();
        func_0099D030(0);
        func_009717C0(4);
    }
}
