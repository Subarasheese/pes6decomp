/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058EA30[];
extern char D_005902F0[];

void func_00B704F0(s32 arg0, s32 arg1) {
    M2C_UNK *var_a2;
    M2C_UNK *var_a2_2;
    s32 var_a1;
    s32 var_a1_2;

    if (arg1 < 0xD) {
        var_a1 = 2;
        var_a2 = ((void *)D_0058EA30);
        do {
            if ((M2C_FIELD(var_a2, s32 *, 0x94) & 4) && (M2C_FIELD(var_a2, s32 *, 0x9C) == arg0)) {

            }
            var_a1 += 1;
            var_a2 += 0x240;
        } while (var_a1 < 0xC);
        return;
    }
    var_a1_2 = 0xD;
    var_a2_2 = ((void *)D_005902F0);
    do {
        if ((M2C_FIELD(var_a2_2, s32 *, 0x94) & 4) && (M2C_FIELD(var_a2_2, s32 *, 0x9C) == arg0)) {

        }
        var_a1_2 += 1;
        var_a2_2 += 0x240;
    } while (var_a1_2 < 0x17);
}
