/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */

void *func_00959050(s64 arg0) {
    s32 temp_v0;
    s64 temp_s1;
    void *temp_v1;
    void *var_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 != 0) {
        temp_s1 = (s64) (arg0 << 0x38) >> 0x38;
        if (temp_s1 >= 0) {
            if (temp_s1 < 3) {
                if (func_0082C8A0(0xA) != 0) {
                    temp_v1 = (temp_s1 * 0x64) + temp_v0;
                    if (M2C_FIELD(temp_v1, s32 *, 0x486C) != 0) {
                        var_v0 = temp_v1 + 0x4878;
                        if (var_v0 == NULL) {
                            return NULL;
                        }
                        /* Duplicate return node #20. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    return NULL;
                }
                return NULL;
            }
            return NULL;
        }
        var_v0 = NULL;
        return var_v0;
    }
    return NULL;
}
