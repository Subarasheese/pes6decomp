/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065C104[];
extern char D_0065C114[];

void *func_006247E0(s32 arg0) {
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_v1;
    u16 temp_v0_3;
    void *temp_v0;

    var_a1 = (*(s32 *)D_0065C114);
    var_a2 = 0;
    if ((*(s32 *)D_0065C104) == 0) {
        var_v1 = 0;
    } else {
        var_v1 = (*(s32 *)D_0065C104) + 0xC;
    }
    if (var_v1 == 0) {
        return NULL;
    }
    if (var_a1 > 0) {
        do {
            temp_v0_2 = var_a2 + var_a1;
            var_a3 = temp_v0_2 >> 1;
            if (temp_v0_2 < 0) {
                var_a3 = (s32) (temp_v0_2 + 1) >> 1;
            }
            temp_v0_3 = M2C_FIELD((var_v1 + (var_a3 * 6)), u16 *, 4);
            if (((s32) temp_v0_3 < arg0) && (temp_v0_3 != 0)) {
                var_a2 = var_a3 + 1;
            } else {
                var_a1 = var_a3;
            }
        } while (var_a2 < var_a1);
    }
    temp_v0 = (var_a2 * 6) + var_v1;
    if (arg0 != M2C_FIELD(temp_v0, u16 *, 4)) {
        return NULL;
    }
    return temp_v0;
}
