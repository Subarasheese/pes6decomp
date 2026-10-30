/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00228A80(void);
s32 func_00229600(s32);                             /* extern */
extern s32 D_003E77AC;

void *func_00223E00(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_at;
    void *temp_v0_2;
    void *var_v0;

    if (func_00231240() != 1) {
        temp_v0 = arg0 & 0xFFFF;
        if (temp_v0 >= 0x1388) {
            temp_s0 = func_00229600(arg0) & 0xFF;
            if (temp_s0 == 0xFF) {
                return NULL;
            }
            temp_v0_2 = func_00228A80();
            if (temp_v0_2 != NULL) {
                var_at = 0x1071C;
                var_v0 = temp_v0_2 + ((temp_s0 & 0xFF) << 5);
                goto block_16;
            }
            return NULL;
        }
        var_at = 0x62D70;
        var_v0 = D_003E77AC + (temp_v0 << 5);
block_16:
        return var_v0 + var_at;
    }
    return NULL;
}
