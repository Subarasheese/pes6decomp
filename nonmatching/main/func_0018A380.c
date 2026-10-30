/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00181A20(s32);
extern char D_00520118[];

void func_0018A380(void) {
    M2C_UNK *var_s1;
    s32 var_s2;
    void *temp_s3;

    var_s2 = 0;
    var_s1 = ((void *)D_00520118);
    do {
        if (M2C_FIELD(var_s1, u8 *, 0) != M2C_FIELD(var_s1, u8 *, 4)) {
            func_00181A20(0xF);
            func_00181A20(0x11);
            func_00181A20(0x10);
        }
        temp_s3 = ((void *)D_00520118) + (var_s2 + 2);
        M2C_FIELD(var_s1, u8 *, 4) = (u8) M2C_FIELD(var_s1, u8 *, 0);
        if (M2C_FIELD(temp_s3, u8 *, 0) != M2C_FIELD(temp_s3, u8 *, 4)) {
            func_00181A20(0xE);
        }
        var_s2 += 1;
        var_s1 += 1;
        M2C_FIELD(temp_s3, u8 *, 4) = (u8) M2C_FIELD(temp_s3, u8 *, 0);
    } while (var_s2 < 2);
}
