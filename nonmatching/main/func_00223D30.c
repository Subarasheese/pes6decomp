/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00228A80(void);
s32 func_00229600(s32);                             /* extern */
extern s32 D_003E77AC;

u8 func_00223D30(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_at;
    void *temp_v0_2;
    void *var_v0;
    void *var_v0_2;

    if (func_00231240() == 1) {
        return 0U;
    }
    if (func_00231240() != 1) {
        temp_v0 = arg0 & 0xFFFF;
        if (temp_v0 >= 0x1388) {
            temp_s0 = func_00229600(arg0) & 0xFF;
            if (temp_s0 == 0xFF) {
                var_v0 = NULL;
            } else {
                temp_v0_2 = func_00228A80();
                if (temp_v0_2 != NULL) {
                    var_at = 0x1071C;
                    var_v0_2 = temp_v0_2 + ((temp_s0 & 0xFF) << 5);
                    goto block_18;
                }
                var_v0 = NULL;
            }
        } else {
            var_at = 0x62D70;
            var_v0_2 = D_003E77AC + (temp_v0 << 5);
block_18:
            var_v0 = var_v0_2 + var_at;
        }
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, u8 *, 0xD);
    }
    return 0U;
}
