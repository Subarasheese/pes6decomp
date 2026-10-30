/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C4698(M2C_UNK);                         /* extern */
M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
s32 func_00BC5150(M2C_UNK, M2C_UNK);                /* extern */
extern s32 D_003EB218;

s32 func_00C16640(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    switch (D_003EB218) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (func_001C4698(0x30) != 0) {
            D_003EB218 = 1;
        } else {
            var_s0 = 1;
        }
        break;
    case 1:                                         /* switch 1 */
        temp_v0 = func_00BC5150(0xF40005, 0x6C001A);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            var_s0 = 2;
            D_003EB218 = 0;
            break;
        case 1:                                     /* switch 2 */
            func_001C4730(arg0, arg1, 0x30);
            D_003EB218 = 0;
            var_s0 = 1;
            break;
        }
        break;
    }
    return var_s0;
}
