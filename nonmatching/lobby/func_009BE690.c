/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099C570(s32);                         /* extern */
M2C_UNK func_0099C640(s32);                         /* extern */
s32 func_0099E960(s32, s32);                        /* extern */

void func_009BE690(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 var_a0;
    void *temp_v1;

    var_a0 = 0;
    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0);
        switch (temp_a1) {                          /* switch 1; irregular */
        case 4:                                     /* switch 1 */
            if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            default:                                /* switch 1 */
            case 10:                                /* switch 1 */
            case 9:                                 /* switch 1 */
            case 7:                                 /* switch 1 */
            case 5:                                 /* switch 1 */
block_32:
                if (var_a0 == 0) {
                    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
                    if (temp_a0 != 4) {
                        func_0099C570(temp_a0);
                    }
                } else {
                    func_0099C640(var_a0);
                    return;
                }
            }
            break;
        case 3:                                     /* switch 1 */
            temp_v1 = M2C_FIELD(arg0, void **, 0x10);
            if (temp_v1 != NULL) {
                temp_a1_2 = M2C_FIELD(temp_v1, s32 *, 0x18);
                switch (temp_a1_2) {                /* switch 2; irregular */
                case 1:                             /* switch 2 */
                    var_a0 = 0x01F5000D;
                    break;
                case 0:                             /* switch 2 */
                    var_a0 = 0x01F5000C;
                    break;
                }
                goto block_32;
            }
            break;
        case 2:                                     /* switch 1 */
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 4);
            if (temp_a0_2 != 0) {
                if (func_0099E960(temp_a0_2, temp_a1) != 1) {
                    var_a0 = 0x01F5000B;
                } else {
                    var_a0 = 0x01F5000A;
                }
                goto block_32;
            }
            break;
        }
    }
}
