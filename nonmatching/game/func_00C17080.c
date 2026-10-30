/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292F00(u8, s8, s32);                     /* extern */
M2C_UNK func_00C17D50(s32);                         /* extern */
extern char D_00591A90[];
extern char D_005A2020[];

void func_00C17080(s32 arg0, s32 arg1) {
    M2C_UNK *var_a1;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a2;
    s32 var_s3;
    s8 *temp_a0;
    void *temp_s1;
    void *var_s2;

    func_00C17D50(arg1);
    temp_v1 = arg1 & 0xFF;
    var_a2 = temp_v1 * 0x8B;
    var_a1 = ((void *)D_00591A90);
    var_s3 = 0;
    var_s2 = ((void *)D_00591A90) + var_a2;
    temp_s1 = ((void *)D_005A2020) + (temp_v1 * 0x168);
    do {
        temp_a0 = arg0 + var_s3;
        var_a2 = (func_00292F00(M2C_FIELD((temp_s1 + (M2C_FIELD(temp_s1, u8 *, 1) * 0x52) + var_s3), u8 *, 0x1C), (s8) var_a1, var_a2) & 0xFF) << 5;
        var_s3 += 1;
        temp_a1 = M2C_FIELD(var_s2, u8 *, 7) & 0x1F;
        var_s2 += 1;
        var_a1 = (M2C_UNK *) (var_a2 | temp_a1);
        *temp_a0 = (s8) var_a1;
    } while (var_s3 < 0xB);
}
