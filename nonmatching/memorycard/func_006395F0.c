/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E9E24;
extern char D_0065D0C0[];

void func_006395F0(void *arg0, s32 arg1, s8 arg2) {
    s32 temp_a3;
    s8 var_a0;
    void *var_v1;

    temp_a3 = M2C_FIELD(arg0, s16 *, 2) + (M2C_FIELD(arg0, s16 *, 0) * 4);
    if (arg2 != 0xB) {
        M2C_FIELD((temp_a3 + ((void *)D_0065D0C0)), s8 *, 0xF) = arg2;
        return;
    }
    D_003E9E24 = 5;
    switch (arg1) {                                 /* irregular */
    case -119:
        var_v1 = temp_a3 + ((void *)D_0065D0C0);
        var_a0 = 8;
block_20:
        M2C_FIELD(var_v1, s8 *, 0xF) = var_a0;
        return;
    case -124:
        var_v1 = temp_a3 + ((void *)D_0065D0C0);
        var_a0 = 7;
        goto block_20;
    case -125:
    case -126:
    case -127:
        var_v1 = temp_a3 + ((void *)D_0065D0C0);
        var_a0 = 6;
        goto block_20;
    case -120:
    case -122:
        var_v1 = temp_a3 + ((void *)D_0065D0C0);
        var_a0 = 5;
        goto block_20;
    case 1:
        var_v1 = temp_a3 + ((void *)D_0065D0C0);
        var_a0 = 4;
        goto block_20;
    }
}
