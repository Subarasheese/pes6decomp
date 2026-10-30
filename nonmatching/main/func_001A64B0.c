/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017F880(void);
extern void func_00153FA0(void *);
extern u8 D_003E98A4;
extern char D_00520640[];

void func_001A64B0(void *arg0) {
    s32 *var_a0;
    s32 var_a1;
    void *temp_a0;

    if (M2C_FIELD(arg0, u8 *, 1) == 1) {
        func_0017F880();
        var_a1 = 0;
        var_a0 = ((void *)D_00520640);
        do {
            if (*var_a0 == arg0) {
                *var_a0 = 0;
            }
            var_a1 += 1;
            var_a0 += 4;
        } while (var_a1 < 0x23);
        M2C_FIELD(arg0, u8 *, 1) = 0U;
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 3) >= 3) {
        temp_a0 = M2C_FIELD(arg0, void **, 8);
        if (temp_a0 != NULL) {
            func_00153FA0(temp_a0);
        }
        M2C_FIELD(arg0, void **, 8) = NULL;
        M2C_FIELD(arg0, u8 *, 1) = 0U;
    }
    M2C_FIELD(arg0, s8 *, 2) = 0;
    D_003E98A4 = M2C_FIELD(arg0, u8 *, 3);
}
