/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001BB430(int);
extern s32 D_003E9918;
extern char D_00524A50[];

void func_001BAEF0(s32 arg0) {
    void *temp_s1;
    void *var_s0;

    var_s0 = NULL;
    if ((arg0 > 0) && ((u32) arg0 < 0x281U)) {
        temp_s1 = ((void *)D_00524A50) + ((arg0 - 1) << 5);
        if (func_001BB430((s32) (temp_s1 + 0x10)) != D_003E9918) {
            var_s0 = temp_s1;
        }
    }
    if (var_s0 != NULL) {
        M2C_FIELD(var_s0, u8 *, 2) = (u8) (M2C_FIELD(var_s0, u8 *, 2) + 1);
    }
}
