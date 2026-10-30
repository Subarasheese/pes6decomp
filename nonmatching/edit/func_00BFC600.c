/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B8FFF0(s32, s32, s32);               /* extern */
extern char D_00CBEA70[];

void func_00BFC600(void *arg0) {
    s32 *var_s2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2_2;
    s32 var_s2_3;
    u32 var_s3;

    var_s3 = 0;
    var_s2 = ((void *)D_00CBEA70);
    var_s1 = 0;
    do {
        func_00B8FFF0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4) + var_s1, *var_s2);
        var_s3 += 1;
        var_s2 += 4;
        var_s1 += 4;
    } while (var_s3 < 3U);
    var_s1_2 = 3;
    var_s2_2 = 0xC;
    do {
        func_00B8FFF0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4) + var_s2_2, 0xB);
        var_s1_2 += 1;
        var_s2_2 += 4;
    } while (var_s1_2 < 0xA);
    var_s1_3 = 0xA;
    var_s2_3 = 0x28;
    do {
        func_00B8FFF0(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4) + var_s2_3, 0xC);
        var_s1_3 += 1;
        var_s2_3 += 4;
    } while (var_s1_3 < 0x11);
}
