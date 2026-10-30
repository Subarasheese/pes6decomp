/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK *D_0050D184;
extern M2C_UNK *D_0050D188;

void func_0014A380(M2C_UNK *arg0, s16 arg1) {
    M2C_UNK *temp_a3;
    M2C_UNK *temp_v1;

    if (arg1 < M2C_FIELD(arg0, s16 *, 0x16)) {
        temp_a3 = D_0050D188;
        D_0050D188 = M2C_FIELD(temp_a3, M2C_UNK **, 4);
        M2C_FIELD(temp_a3, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 4);
        M2C_FIELD(temp_a3, M2C_UNK **, 0) = arg0;
        temp_v1 = M2C_FIELD(arg0, M2C_UNK **, 4);
        if (temp_v1 != NULL) {
            *temp_v1 = temp_a3;
        } else {
            D_0050D184 = arg0;
        }
        M2C_FIELD(arg0, M2C_UNK **, 4) = temp_a3;
        M2C_FIELD(temp_a3, s32 *, 0x10) = 0;
        M2C_FIELD(temp_a3, s16 *, 0x14) = (s16) (M2C_FIELD(arg0, s16 *, 0x14) + arg1);
        M2C_FIELD(temp_a3, s16 *, 0x16) = (s16) (M2C_FIELD(arg0, s16 *, 0x16) - arg1);
        M2C_FIELD(temp_a3, s16 *, 0x20) = 0;
        M2C_FIELD(arg0, s16 *, 0x16) = arg1;
    }
}
