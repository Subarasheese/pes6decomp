/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C76510(M2C_UNK, s32, void *, M2C_UNK);   /* extern */
extern s32 D_003EA870;
extern char D_00591DCC[];
extern char D_00CCC070[];
extern char D_00CCC080[];

void func_00C7F1F0(void) {
    M2C_UNK *var_s1;
    s32 *var_s2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 var_s3;
    void *temp_v1;

    var_s3 = 0;
    var_s2 = ((void *)D_00CCC070);
    var_s1 = ((void *)D_00CCC080);
    do {
        if (*var_s2 != 0) {
            D_003EA870 = var_s3;
            if (((u64) ((s64) M2C_FIELD(var_s1, u8 *, 0x10) << 0x3E) >> 0x3F) == 0) {
                temp_s0 = var_s3 ^ (*(u8 *)D_00591DCC);
                temp_s0_2 = func_00C76510(0, temp_s0, var_s1 + 0x18, 7);
                temp_v0 = func_00C76510(1, temp_s0, ((void *)D_00CCC080) + (D_003EA870 * 0x58) + 0x38, 7);
                temp_v1 = ((void *)D_00CCC080) + (D_003EA870 * 0x58);
                M2C_FIELD(temp_v1, s32 *, 0x14) = temp_s0_2;
                M2C_FIELD(temp_v1, s32 *, 0x34) = temp_v0;
            }
        }
        var_s3 += 1;
        var_s2 += 4;
        var_s1 += 0x58;
    } while (var_s3 < 2);
}
