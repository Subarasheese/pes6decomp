/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C89450(s32, s32);                    /* extern */
extern void *D_003EA8B4;

void func_00C93D40(s32 arg0) {
    s32 var_s2;
    void *temp_s1;

    temp_s1 = D_003EA8B4;
    if (temp_s1 != NULL) {
        var_s2 = 0;
        if (M2C_FIELD(temp_s1, s32 *, 4) > 0) {
            do {
                func_00C89450(M2C_FIELD(temp_s1, s32 *, 0) + var_s2, arg0 & 0xFF);
                var_s2 += 1;
            } while (var_s2 < M2C_FIELD(temp_s1, s32 *, 4));
        }
    }
}
