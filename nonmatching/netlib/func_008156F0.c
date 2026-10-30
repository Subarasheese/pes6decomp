/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
extern char D_008A35F0[];

s32 func_008156F0(void) {
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    if (func_0082C2A0() == 0) {
        return 1;
    }
    if (((void *)D_008A35F0) == NULL) {
        goto block_24;
    }
    if (((void *)D_008A35F0) != NULL) {
        var_v0 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
    } else {
        var_v0 = 9;
    }
    if (var_v0 != 0) {
        if (((void *)D_008A35F0) != NULL) {
            var_v1 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
        } else {
            var_v1 = 9;
        }
        if (var_v1 == 1) {
            return 0;
        }
        if (((void *)D_008A35F0) != NULL) {
            M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41E) = 1;
        }
        if (((void *)D_008A35F0) != NULL) {
            var_v1_2 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
        } else {
            var_v1_2 = 9;
        }
        if (var_v1_2 == 8) {
            return 1;
        }
        goto block_24;
    }
block_24:
    return 0;
}
