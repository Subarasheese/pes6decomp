/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00133860(s32);
extern char D_00511250[];

void func_0017CED0(void) {
    s32 var_s1;
    s32 var_s2;
    void *temp_s0;

    var_s2 = 0;
    do {
        temp_s0 = ((void *)D_00511250) + (var_s2 * 0x1E0);
        var_s1 = 0;
        if (M2C_FIELD(temp_s0, s32 *, 0x30) > 0) {
            do {
                func_00133860(var_s1);
                var_s1 += 1;
            } while (var_s1 < M2C_FIELD(temp_s0, s32 *, 0x30));
        }
        var_s2 += 1;
        M2C_FIELD(temp_s0, s32 *, 0x30) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x34) = 0;
    } while (var_s2 < 2);
}
