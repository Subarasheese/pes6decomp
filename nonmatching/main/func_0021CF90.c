/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C7E10(void *, s32);                     /* extern */
extern void *D_003A9180;

void *func_0021CF90(void *arg0, s32 arg1) {
    s32 temp_s2;
    s32 var_s3;
    s32 var_v1;
    void *temp_s5;
    void *var_s4;
    void *var_s6;
    void *var_s7;

    var_s6 = NULL;
    if (arg0 != NULL) {
        temp_s2 = M2C_FIELD(arg0, s32 *, 0x18);
        temp_s5 = D_003A9180;
        var_s7 = NULL;
        if ((temp_s5 != NULL) && (arg0 != NULL)) {
            var_s4 = M2C_FIELD(arg0, void **, 0x1C);
            var_s3 = 0;
loop_6:
            if (var_s3 >= temp_s2) {

            } else {
                if (func_001C7E10(temp_s5, var_s4 + (var_s3 << 5)) != 0) {
                    var_s3 += 1;
                    var_s4 += 0x20;
                    goto loop_6;
                }
                var_s7 = var_s4;
            }
        }
        if (var_s7 != NULL) {
            var_v1 = M2C_FIELD(var_s7, s32 *, 0x18);
        } else {
            var_v1 = 0;
        }
        switch (arg1) {                             /* irregular */
        default:
            var_s6 = (arg1 == 0) ? arg0 : NULL;
            break;
        case 1:
            var_s6 = D_003A9180;
            break;
        case 2:
            if (var_v1 != 0) {
                var_s6 = var_v1 + 0x104;
            }
            break;
        case 3:
            if (var_v1 != 0) {
                var_s6 = var_v1 + 0x144;
            }
            break;
        case 4:
            if (var_v1 != 0) {
                var_s6 = var_v1 + 0x184;
            }
            break;
        }
    }
    return var_s6;
}
