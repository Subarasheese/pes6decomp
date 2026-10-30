/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B00D40(void);
extern void *D_003EAD54;

s32 func_00B00CA0(s32 arg0) {
    s32 temp_s1_2;
    s32 var_s0;
    s32 var_v0;
    void *temp_s1;

    temp_s1 = D_003EAD54;
    if (temp_s1 == NULL) {
        return 0;
    }
    if (temp_s1 == NULL) {
        var_s0 = 0;
    } else if (arg0 >= (func_00B00D40() & 0xFF)) {
        var_s0 = 0;
    } else {
        var_s0 = 1;
    }
    temp_s1_2 = M2C_FIELD(temp_s1, s32 *, 0x5D4);
    if (D_003EAD54 == NULL) {
        var_v0 = 0;
    } else if (temp_s1_2 >= (func_00B00D40() & 0xFF)) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    return var_s0 == var_v0;
}
