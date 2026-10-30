/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AE624(s8 *, M2C_UNK *, s32);        /* extern */
s32 func_001B0444(M2C_UNK *);                       /* extern */
extern char D_0044DBF4[];

void *func_001100A4(M2C_UNK *arg0, s8 *arg1, s8 *arg2) {
    M2C_UNK *temp_s1;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_3;
    u8 temp_v0_2;

    temp_s3 = func_001B0444(((void *)D_0044DBF4));
    temp_v0 = func_001B0444(arg0);
    func_001AE624(arg1, arg0, temp_v0);
    arg1[temp_v0] = 0;
    temp_v0_2 = M2C_FIELD((arg0 + temp_v0), u8 *, 1);
    temp_s1 = temp_v0_2 + ((void *)D_0044DBF4);
    if ((s32) temp_v0_2 < temp_s3) {
        temp_v0_3 = func_001B0444(temp_s1);
        func_001AE624(arg2, temp_s1, temp_v0_3);
        arg2[temp_v0_3] = 0;
    } else {
        *arg2 = 0;
    }
    return arg0 + temp_v0 + 2;
}
