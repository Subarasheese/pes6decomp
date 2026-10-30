/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7840(void *, s8);
extern s32 func_002F9320(s32, s32);
extern s32 func_002F9630(s32);
extern s32 func_002F9370(void *);
extern void * func_002F96F0(void *, u32);
extern char D_003B43A0[];

void func_002F8F00(void *arg0, s32 arg1) {
    M2C_UNK *var_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    u32 var_s2;
    u32 var_s4;

    func_001D7840(func_002F9370(arg0), arg1 & 0xFF);
    var_s4 = 0;
    var_s1 = ((void *)D_003B43A0);
    do {
        temp_v0 = func_002F9320((s32) arg0, M2C_FIELD(var_s1, s32 *, 0));
        temp_v0_2 = func_002F9630(temp_v0);
        var_s2 = 0;
        if (temp_v0_2 > 0) {
            do {
                M2C_FIELD(var_s1, M2C_UNK (**)(void *, s32), 4)(func_002F96F0((void *) temp_v0, var_s2), arg1);
                var_s2 += 1;
            } while ((s32) var_s2 < temp_v0_2);
        }
        var_s4 += 1;
        var_s1 += 8;
    } while (var_s4 < 3U);
}
