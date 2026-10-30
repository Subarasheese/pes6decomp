/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001A64B0(M2C_UNK *);                   /* extern */
extern char D_00520640[];
extern char D_005206D0[];

void func_001A6390(void) {
    M2C_UNK *var_s1;
    M2C_UNK *var_v1;
    s32 var_a0;
    s32 var_s0;

    var_a0 = 0;
    var_v1 = ((void *)D_00520640);
    do {
        M2C_FIELD(var_v1, s32 *, 0) = 0;
        var_a0 += 7;
        M2C_FIELD(var_v1, s32 *, 4) = 0;
        M2C_FIELD(var_v1, s32 *, 8) = 0;
        M2C_FIELD(var_v1, s32 *, 0xC) = 0;
        M2C_FIELD(var_v1, s32 *, 0x10) = 0;
        M2C_FIELD(var_v1, s32 *, 0x14) = 0;
        M2C_FIELD(var_v1, s32 *, 0x18) = 0;
        var_v1 += 0x1C;
    } while (var_a0 < 0x23);
    var_s0 = 0;
    var_s1 = ((void *)D_005206D0);
    do {
        func_001A64B0(var_s1);
        var_s0 += 1;
        var_s1 += 0x20;
    } while (var_s0 < 4);
}
