/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009C57A0(M2C_UNK);                     /* extern */
M2C_UNK func_009C6A80(M2C_UNK);                     /* extern */
M2C_UNK func_009C6BC0(M2C_UNK);                     /* extern */
M2C_UNK func_009C80D0(M2C_UNK);                     /* extern */
M2C_UNK func_009C8970(M2C_UNK);                     /* extern */
M2C_UNK func_009C9E40(M2C_UNK);                     /* extern */
M2C_UNK func_009CAD90(M2C_UNK);                     /* extern */
M2C_UNK func_009CB6B0(M2C_UNK);                     /* extern */
M2C_UNK func_009CC0B0(M2C_UNK);                     /* extern */
M2C_UNK func_009CCAE0(M2C_UNK);                     /* extern */
M2C_UNK func_009CE220(M2C_UNK);                     /* extern */
M2C_UNK func_009D2EE0(M2C_UNK);                     /* extern */
M2C_UNK func_009D34E0(M2C_UNK);                     /* extern */
M2C_UNK func_009D5560(M2C_UNK);                     /* extern */
M2C_UNK func_009D5F20(M2C_UNK);                     /* extern */
M2C_UNK func_009D6500(void *, M2C_UNK);             /* extern */
M2C_UNK func_00C1B320(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B370(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B9B0(M2C_UNK);                     /* extern */
M2C_UNK func_00C1E010(M2C_UNK);                     /* extern */
M2C_UNK func_00C53770(M2C_UNK);                     /* extern */

void func_009CD440(void *arg0) {
    M2C_UNK var_a1;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_v1) {                              /* switch 1; irregular */
    default:                                        /* switch 1 */
        var_a1 = 0x8C;
        if ((temp_v1 != 0x8C) && (var_a1 = 0x90, (temp_v1 != 0x90)) && (var_a1 = 0xAD, (temp_v1 != 0xAD))) {
            switch (temp_v1) {                      /* switch 2; irregular */
            case 0x81:                              /* switch 2 */
                func_009C6BC0(0x81);
                break;
            case 0xA3:                              /* switch 2 */
                func_00C1B370(0xA3);
                break;
            case 0x82:                              /* switch 2 */
                func_00C1E010(0x82);
                break;
            case 0x9D:                              /* switch 2 */
                func_00C1B9B0(0x9D);
                break;
            case 0x83:                              /* switch 2 */
                func_009CCAE0(0x83);
                break;
            case 0x84:                              /* switch 2 */
                func_009CB6B0(0x84);
                break;
            case 0x9E:                              /* switch 2 */
                func_009CC0B0(0x9E);
                break;
            case 0x87:                              /* switch 2 */
                func_009D34E0(0x87);
                break;
            case 0x88:                              /* switch 2 */
                func_009C9E40(0x88);
                break;
            case 0x89:                              /* switch 2 */
                func_009CE220(0x89);
                break;
            }
        } else {
            func_009D6500(arg0, var_a1);
        }
        break;
    case 0x8A:                                      /* switch 1 */
        func_009D2EE0(0x8A);
        break;
    case 0x8F:                                      /* switch 1 */
        func_009D5F20(0x8F);
        break;
    case 0x91:                                      /* switch 1 */
        func_00C53770(0x91);
        break;
    case 0x92:                                      /* switch 1 */
        func_009C80D0(0x92);
        break;
    case 0x94:                                      /* switch 1 */
        func_009C8970(0x94);
        break;
    case 0x95:                                      /* switch 1 */
        func_009C57A0(0x95);
        break;
    case 0x96:                                      /* switch 1 */
        func_009CAD90(0x96);
        break;
    case 0x97:                                      /* switch 1 */
        func_009C6A80(0x97);
        break;
    case 0x93:                                      /* switch 1 */
        func_009D5560(0x93);
        break;
    case 0x99:                                      /* switch 1 */
        func_00C1B320(0x99);
        break;
    }
    temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x4E);
    if (temp_v1_2 != 0) {
        M2C_FIELD(arg0, u8 *, 0x4E) = (u8) (temp_v1_2 - 1);
    }
}
