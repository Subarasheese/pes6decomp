/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001BB430(int);
M2C_UNK func_001BB130(void *, void *);              /* extern */
extern s32 D_003E9918;
extern char D_00524A50[];

void func_001BA7F0(s32 arg0, s32 arg1) {
    void *temp_s0;
    void *temp_s2;
    void *var_s0;
    void *var_s1;

    if ((arg0 > 0) && ((u32) arg0 < 0x281U) && (arg1 > 0) && ((u32) arg1 < 0x281U)) {
        var_s1 = NULL;
        if ((arg0 > 0) && ((u32) arg0 < 0x281U)) {
            temp_s0 = ((void *)D_00524A50) + ((arg0 - 1) << 5) + 0x10;
            if (func_001BB430((s32) temp_s0) != D_003E9918) {
                var_s1 = temp_s0;
            }
        }
        var_s0 = NULL;
        if ((arg1 > 0) && ((u32) arg1 < 0x281U)) {
            temp_s2 = ((void *)D_00524A50) + ((arg1 - 1) << 5) + 0x10;
            if (func_001BB430((s32) temp_s2) != D_003E9918) {
                var_s0 = temp_s2;
            }
        }
        func_001BB130(var_s1, var_s0);
    }
}
