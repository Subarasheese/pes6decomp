/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00177A80(void *, int);
extern char D_003CC428[];
extern char D_003CC458[];
extern char D_003CC4D8[];
extern char D_003CC4E8[];

s32 func_00178050(void *arg0, u32 arg1) {
    M2C_UNK (*temp_v0)(s32, M2C_UNK);
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;
    s32 temp_v0_2;
    s32 var_v1;
    void *var_a0_2;

    if (arg0 == NULL) {
        var_a0 = ((void *)D_003CC4D8);
        var_a1 = ((void *)D_003CC428);
        goto block_6;
    }
    if (M2C_FIELD(arg0, s8 *, 4) != 0) {
        if (arg1 >= 4U) {
            temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x28);
            if (temp_v0 == NULL) {
                return 0;
            }
            temp_v0(M2C_FIELD(arg0, s32 *, 0x2C), -3);
            return 0;
        }
        var_a0_2 = M2C_FIELD(((arg1 * 4) + arg0), void **, 0x18);
        var_v1 = 0;
        if (var_a0_2 != NULL) {
            do {
                temp_v0_2 = M2C_FIELD(var_a0_2, s32 *, 0xC);
                var_a0_2 = M2C_FIELD(var_a0_2, void **, 0);
                var_v1 += temp_v0_2;
            } while (var_a0_2 != NULL);
        }
        return var_v1;
    }
    var_a0 = ((void *)D_003CC4E8);
    var_a1 = ((void *)D_003CC458);
block_6:
    func_00177A80(var_a0, (s32) var_a1);
    return 0;
}
