/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_008A4398;
extern char D_008A5F70[];
extern char D_008A9A40[];
extern char D_008A9BEC[];
extern char D_008A9BF0[];

u8 *func_00822870(void) {
    M2C_UNK *var_v0_3;
    s8 var_v0_2;
    u8 *var_v0;

    if (D_008A4398 == NULL) {
        return NULL;
    }
    if (((void *)D_008A5F70) == NULL) {
        return NULL;
    }
    if (D_008A4398 == NULL) {
        var_v0_2 = 0;
    } else if (((void *)D_008A5F70) == NULL) {
        var_v0_2 = 0;
    } else {
        var_v0_2 = (*(s8 *)D_008A9A40);
    }
    if (((s64) ((s64) var_v0_2 << 0x38) >> 0x38) == 0) {
        if (D_008A4398 != NULL) {
            if (M2C_FIELD(D_008A4398, s32 *, 0x49E8) == 0) {
                var_v0_3 = NULL;
            } else {
                var_v0_3 = ((void *)D_008A9BEC);
            }
        } else {
            var_v0_3 = NULL;
        }
        if (var_v0_3 != NULL) {
            var_v0 = var_v0_3 + 4;
        } else {
            var_v0 = NULL;
        }
        if (var_v0 != NULL) {
            if (*var_v0 == 0) {
                goto block_28;
            }
        } else {
block_28:
            var_v0 = NULL;
        }
        return var_v0;
    }
    return ((void *)D_008A9BF0);
}
