/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00134D28(M2C_UNK, s32);                /* extern */
M2C_UNK func_001AFEB0(s32, s8 *);                   /* extern */
s32 func_001AFFDC(M2C_UNK, s8);                     /* extern */
M2C_UNK func_001B02B0(s8 *, s8 *);                  /* extern */
M2C_UNK func_001B0580(s32, s8 *, s32);              /* extern */
extern char D_011D6F04[];
extern s8 *D_011D6F08;

s32 func_00134D78(s32 arg0) {
    s32 var_s0;
    s8 **var_s1;
    s8 *temp_a0_2;
    s8 *temp_a0_3;
    s8 *var_a0;
    s8 temp_a0;
    s8 temp_a1;

    var_s0 = arg0;
    if (var_s0 != 0) {
        var_s1 = &D_011D6F08;
        temp_a0 = M2C_FIELD(&D_011D6F08[var_s0], s8 *, -1);
        if ((temp_a0 == 0x6E) || (var_a0 = D_011D6F08, (temp_a0 == 0x4E))) {
            func_00134D28(0x3E, var_s0);
            var_s0 = 0;
            goto block_5;
        }
    } else {
        var_s1 = (s8 **)0x011D0000;
block_5:
        var_a0 = M2C_FIELD(var_s1, s8 **, 0x6F08);
    }
    temp_a1 = var_a0[var_s0];
    switch (temp_a1) {                              /* irregular */
    case 45:
        func_001B0580(M2C_FIELD(((void *)D_011D6F04), s32 *, 0), var_a0, var_s0);
        temp_a0_2 = M2C_FIELD(var_s1, s8 **, 0x6F08);
        func_001B02B0(temp_a0_2, temp_a0_2 + var_s0);
        func_00134D28(0x3F, var_s0 + 1);
block_14:
        *M2C_FIELD(var_s1, s8 **, 0x6F08) = 0;
        return 3;
    case 10:
        func_001B0580(M2C_FIELD(((void *)D_011D6F04), s32 *, 0), var_a0, var_s0);
        goto block_14;
    default:
        if (func_001AFFDC(0x5FAEF8, temp_a1) == 0) {
            func_001AFEB0(M2C_FIELD(((void *)D_011D6F04), s32 *, 0), M2C_FIELD(var_s1, s8 **, 0x6F08));
            goto block_14;
        }
        func_001B0580(M2C_FIELD(((void *)D_011D6F04), s32 *, 0x6F04), M2C_FIELD(var_s1, s8 **, 0x6F08), var_s0);
        temp_a0_3 = M2C_FIELD(var_s1, s8 **, 0x6F08);
        func_001B02B0(temp_a0_3, &temp_a0_3[var_s0]);
        return 2;
    }
}
