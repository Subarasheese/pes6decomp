/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00815450();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_009B1A60(M2C_UNK);                     /* extern */
M2C_UNK func_009B40A0(M2C_UNK);                     /* extern */
M2C_UNK func_009B4D20(s32);                         /* extern */
M2C_UNK func_009B4E80(s32);                         /* extern */
extern void *D_00A68CA8;

void func_00969510(void) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_v1;
    void *temp_s0;

    temp_s0 = D_00A68CA8;
    var_a0 = 0;
    if (M2C_FIELD(temp_s0, s32 *, 0x168) != 5) {

    } else {
        var_a0 = 1;
    }
    if ((var_a0 == 0) || (var_a0 = 1, (M2C_FIELD(temp_s0, s32 *, 0x174) == 1))) {
        func_009B4E80(var_a0);
    } else {
        func_009B4D20(1);
    }
    temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x174);
    switch (temp_a0) {                              /* irregular */
    case 0:
        func_009717C0(0xA);
        break;
    case 3:
    case 1:
        func_009717C0(0xC);
        break;
    }
    if (D_00A68CA8 == NULL) {
        var_v1 = 0;
    } else {
        var_v1 = M2C_FIELD(D_00A68CA8, s32 *, 0x184);
    }
    if (var_v1 != 0) {
        M2C_FIELD(temp_s0, s32 *, 0x16C) = 0x020D0034;
        func_009B40A0(0);
        func_009B1A60(0);
        if (func_00815450() == 0) {
            M2C_FIELD(temp_s0, s32 *, 0x18C) = 0;
        } else {
            M2C_FIELD(temp_s0, s32 *, 0x18C) = 1;
        }
        func_009717C0(0xE);
    }
}
