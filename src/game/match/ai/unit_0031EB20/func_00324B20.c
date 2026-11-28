/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern u8 D_00591C09[];
extern s32 Pes6Settings_Get_B04_b3_w2(void);

s32 func_00324B20(s32 *code, s32 event) {
    switch (D_00591C09[0]) {
    case 4:
        *code = 3;
        break;
    case 1:
        switch (event) {
        case 13:
        case 11:
        case 12:
        case 14:
            switch (Pes6Settings_Get_B04_b3_w2()) {
            case 0:
                *code = 0;
                break;
            case 1:
                *code = 3;
                break;
            case 2:
                *code = 5;
                return 0;
            }
            break;
        default:
            *code = 3;
            break;
        }
        break;
    case 2:
        switch (event) {
        case 5:
        case 6:
        case 7:
        case 8:
            switch (Pes6Settings_Get_B04_b3_w2()) {
            case 0:
                *code = 0;
                break;
            case 1:
                *code = 3;
                break;
            case 2:
                *code = 5;
                return 0;
            }
            break;
        case 58:
            *code = 5;
            break;
        default:
            *code = 0;
            break;
        }
        break;
    case 14:
        *code = 0;
        break;
    default:
        *code = 5;
        return 0;
    }
    return 1;
}
