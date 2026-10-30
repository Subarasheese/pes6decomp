/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093D1B0(s32, s8 *);                       /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009C2A10(s8 *, M2C_UNK);               /* extern */
extern void *D_00A68CC0;

void func_0096DBB0(void) {
    s8 sp30;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 *var_v1;
    void *temp_s0;

    var_v1 = &sp30;
    var_s1 = 0;
    temp_s0 = D_00A68CC0;
    var_v0 = 0x101;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_009C2A10(&sp30, 0x101);
    temp_v0 = func_0093D1B0(M2C_FIELD(temp_s0, s32 *, 8), &sp30);
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case -2:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1_2 = 0x020D002B;
block_22:
        M2C_FIELD(temp_s0, s32 *, 0) = var_v1_2;
        break;
    case -1:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1_2 = 0x01FB003E;
        goto block_22;
    case 1:
        if (M2C_FIELD(temp_s0, s32 *, 8) == 0) {
            var_v1_3 = 0x020D000F;
        } else {
            var_v1_3 = 0x020D000E;
        }
        M2C_FIELD(temp_s0, s32 *, 0) = var_v1_3;
        var_s1 = 1;
        break;
    default:
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1_2 = 0x01FB003E;
        goto block_22;
    }
    if (var_s1 != 0) {
        func_0099D030(0);
        func_009717C0(5);
    }
}
