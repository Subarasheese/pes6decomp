/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0088B030[];

void *func_00809FE0(s32 arg0, s32 arg1) {
    s32 *var_a0;
    void *temp_a0;

    if (((void *)D_0088B030) == NULL) {
        var_a0 = NULL;
    } else if (arg0 < 0) {
        var_a0 = NULL;
    } else if (arg0 < 5) {
        var_a0 = ((void *)D_0088B030) + (arg0 * 0x4D18);
    } else {
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        if (*var_a0 == 1) {
            temp_a0 = (arg1 * 0x15C) + var_a0;
            if (M2C_FIELD(temp_a0, s32 *, 0xF8) != -1) {
                return temp_a0 + 0xFC;
            }
            return NULL;
        }
        return NULL;
    }
    return NULL;
}
