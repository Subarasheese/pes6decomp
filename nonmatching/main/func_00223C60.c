/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00228A80(void);
s32 func_00229600(s32);                             /* extern */
extern s32 D_003E77AC;

void func_00223C60(s32 arg0, s8 arg1) {
    s32 temp_s1;
    s32 temp_v1;
    s32 var_at;
    void *temp_v0;
    void *var_v1;
    void *var_v1_2;

    if (func_00231240() != 1) {
        if (func_00231240() != 1) {
            temp_v1 = arg0 & 0xFFFF;
            if (temp_v1 >= 0x1388) {
                temp_s1 = func_00229600(arg0) & 0xFF;
                if (temp_s1 == 0xFF) {
                    var_v1 = NULL;
                } else {
                    temp_v0 = func_00228A80();
                    if (temp_v0 != NULL) {
                        var_at = 0x1071C;
                        var_v1_2 = temp_v0 + ((temp_s1 & 0xFF) << 5);
                        goto block_17;
                    }
                    var_v1 = NULL;
                }
            } else {
                var_at = 0x62D70;
                var_v1_2 = D_003E77AC + (temp_v1 << 5);
block_17:
                var_v1 = var_v1_2 + var_at;
            }
        } else {
            var_v1 = NULL;
        }
        if (var_v1 != NULL) {
            M2C_FIELD(var_v1, s8 *, 0xD) = arg1;
        }
    }
}
