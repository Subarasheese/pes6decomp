/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_00843F70(M2C_UNK);                     /* extern */
s32 func_00853530(M2C_UNK);                         /* extern */
extern u8 D_003E7810;
extern u8 D_003E7811;
extern char D_008B1424[];
extern char D_008B15B0[];

void func_00853260(void) {
    u8 sp6C;
    u8 sp6D;
    M2C_UNK *var_s3;
    s32 temp_s1;
    u32 var_s4;
    u8 *var_s2;
    void *temp_s0;

    var_s4 = 0;
    var_s2 = &sp6C;
    var_s3 = ((void *)D_008B15B0);
    sp6C = D_003E7810;
    temp_s1 = (*(s32 *)D_008B1424) & 7;
    sp6D = D_003E7811;
    do {
        temp_s0 = var_s3 + 0x68;
        if (M2C_FIELD(var_s3, s32 *, 0x74) == 0) {

        } else if (M2C_FIELD(temp_s0, s32 (**)(M2C_UNK), 0x10)(0) == 0) {
            if (temp_s1 == *var_s2) {
                M2C_FIELD(temp_s0, M2C_UNK (**)(), 0xC)();
            }
        } else {
            M2C_FIELD(temp_s0, M2C_UNK (**)(), 0xC) = NULL;
            M2C_FIELD(temp_s0, s32 (**)(M2C_UNK), 0x10) = func_00853530;
            M2C_FIELD(temp_s0, s32 *, 4) = 0;
            M2C_FIELD(temp_s0, s8 *, 9) = 0;
            M2C_FIELD(temp_s0, s8 *, 8) = 0;
            func_001C48E8(M2C_FIELD(temp_s0, s32 *, 0x14), 0, M2C_FIELD(temp_s0, s32 *, 0x18));
            if (M2C_FIELD(var_s3, s32 *, 0x68) == -9) {
                func_00843F70(-9);
            }
        }
        var_s4 += 1;
        var_s3 += 0x20;
        var_s2 += 1;
    } while (var_s4 < 2U);
}
