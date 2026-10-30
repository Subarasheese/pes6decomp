/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00308400(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00900420();                            /* extern */
M2C_UNK func_00C913F0(M2C_UNK, s8 *, s32);          /* extern */
extern char D_003AE97D[];
extern char D_003AE97E[];
extern char D_003AE97F[];
extern void *D_003AE9D0;

s32 func_008FF690(M2C_UNK arg0, s32 arg1) {
    s32 var_a2;
    s8 *temp_a1;

    if (func_00308400() == 0) {
        if (arg1 != 3) {
            var_a2 = 1;
        } else {
            var_a2 = -1;
        }
        temp_a1 = ((void *)D_003AE97D) + M2C_FIELD(D_003AE9D0, s32 *, 0x18);
        *temp_a1 = (s8) ((s32) (*temp_a1 + 0xA + var_a2) % 10);
        if (((*(s8 *)D_003AE97E) == 0) && ((*(s8 *)D_003AE97F) == 0)) {
            func_00C913F0(0, temp_a1, var_a2);
        } else {
            func_00C913F0(1, temp_a1, var_a2);
        }
        func_00900420();
        func_0026E840(0x8400F803);
    }
    return 0;
}
