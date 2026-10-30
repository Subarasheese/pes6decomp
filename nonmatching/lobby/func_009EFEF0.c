/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern s32 func_00365340(s32, s32, s32);
extern char D_00A00A80[];

void func_009EFEF0(void *arg0) {
    M2C_UNK *var_s0;
    s32 temp_s3;
    s32 var_s2;
    void *var_s1;

    var_s2 = 0;
    var_s1 = arg0;
    var_s0 = ((void *)D_00A00A80);
    temp_s3 = *M2C_FIELD(arg0, s32 **, 0x20);
    do {
        if (M2C_FIELD(var_s1, s32 *, 0x10) == 0) {
            M2C_FIELD(var_s1, s32 *, 0x10) = func_00365340(M2C_FIELD(var_s0, s32 *, 0), temp_s3, (s32) M2C_FIELD(var_s0, u16 *, 4));
        }
        func_001D7D60((void *) M2C_FIELD(var_s1, s32 *, 0x10), 0);
        M2C_FIELD(var_s1, s8 *, 0x14) = 0;
        var_s2 += 1;
        M2C_FIELD(var_s1, s8 *, 0x15) = 0;
        var_s0 += 8;
        var_s1 += 8;
    } while (var_s2 < 2);
}
