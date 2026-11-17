/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009C57A0(void *);                     /* extern */
M2C_UNK func_009C6A80(void *);                     /* extern */
M2C_UNK func_009C6BC0(void *);                     /* extern */
M2C_UNK func_009C80D0(void *);                     /* extern */
M2C_UNK func_009C8970(void *);                     /* extern */
M2C_UNK func_009C9E40(void *);                     /* extern */
M2C_UNK func_009CAD90(void *);                     /* extern */
M2C_UNK func_009CB6B0(void *);                     /* extern */
M2C_UNK func_009CC0B0(void *);                     /* extern */
M2C_UNK func_009CCAE0(void *);                     /* extern */
M2C_UNK func_009CE220(void *);                     /* extern */
M2C_UNK func_009D2EE0(void *);                     /* extern */
M2C_UNK func_009D34E0(void *);                     /* extern */
M2C_UNK func_009D5560(void *);                     /* extern */
M2C_UNK func_009D5F20(void *);                     /* extern */
M2C_UNK func_009D6500(void *, M2C_UNK);             /* extern */
M2C_UNK func_00C1B320(void *);                     /* extern */
M2C_UNK func_00C1B370(void *);                     /* extern */
M2C_UNK func_00C1B9B0(void *);                     /* extern */
M2C_UNK func_00C1E010(void *);                     /* extern */
M2C_UNK func_00C53770(void *);                     /* extern */

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
                func_009C6BC0(arg0);
                break;
            case 0xA3:                              /* switch 2 */
                func_00C1B370(arg0);
                break;
            case 0x82:                              /* switch 2 */
                func_00C1E010(arg0);
                break;
            case 0x9D:                              /* switch 2 */
                func_00C1B9B0(arg0);
                break;
            case 0x83:                              /* switch 2 */
                func_009CCAE0(arg0);
                break;
            case 0x84:                              /* switch 2 */
                func_009CB6B0(arg0);
                break;
            case 0x9E:                              /* switch 2 */
                func_009CC0B0(arg0);
                break;
            case 0x87:                              /* switch 2 */
                func_009D34E0(arg0);
                break;
            case 0x88:                              /* switch 2 */
                func_009C9E40(arg0);
                break;
            case 0x89:                              /* switch 2 */
                func_009CE220(arg0);
                break;
            }
        } else {
            func_009D6500(arg0, var_a1);
        }
        break;
    case 0x8A:                                      /* switch 1 */
        func_009D2EE0(arg0);
        break;
    case 0x8F:                                      /* switch 1 */
        func_009D5F20(arg0);
        break;
    case 0x91:                                      /* switch 1 */
        func_00C53770(arg0);
        break;
    case 0x92:                                      /* switch 1 */
        func_009C80D0(arg0);
        break;
    case 0x94:                                      /* switch 1 */
        func_009C8970(arg0);
        break;
    case 0x95:                                      /* switch 1 */
        func_009C57A0(arg0);
        break;
    case 0x96:                                      /* switch 1 */
        func_009CAD90(arg0);
        break;
    case 0x97:                                      /* switch 1 */
        func_009C6A80(arg0);
        break;
    case 0x93:                                      /* switch 1 */
        func_009D5560(arg0);
        break;
    case 0x99:                                      /* switch 1 */
        func_00C1B320(arg0);
        break;
    }
    temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x4E);
    if (temp_v1_2 != 0) {
        M2C_FIELD(arg0, u8 *, 0x4E) = (u8) (temp_v1_2 - 1);
    }
}
