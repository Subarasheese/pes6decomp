/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK *D_0050D180;
extern M2C_UNK *D_0050D184;
extern M2C_UNK *D_0050D188;

void func_0014A410(M2C_UNK *arg0) {
    M2C_UNK *temp_a4;
    M2C_UNK *temp_a4_2;
    M2C_UNK *temp_v1_2;
    M2C_UNK *temp_v1_3;
    void *temp_a1;
    void *temp_v1;

    temp_a1 = M2C_FIELD(arg0, void **, 8);
    temp_v1 = M2C_FIELD(arg0, void **, 0xC);
    M2C_FIELD(temp_a1, void **, 0xC) = temp_v1;
    M2C_FIELD(temp_v1, void **, 8) = temp_a1;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, void **, 8) = NULL;
    temp_a4 = M2C_FIELD(arg0, M2C_UNK **, 0);
    if (temp_a4 != NULL) {
        goto block_1;
    }
    if (M2C_FIELD(arg0, M2C_UNK **, 4) == NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = (M2C_UNK *) D_0050D188;
        D_0050D188 = arg0;
        return;
    }
block_1:
    if ((temp_a4 != NULL) && (M2C_FIELD(temp_a4, s32 *, 0x10) == 0)) {
        temp_v1_2 = M2C_FIELD(temp_a4, M2C_UNK **, 0);
        if (temp_v1_2 != NULL) {
            M2C_FIELD(temp_v1_2, M2C_UNK **, 4) = arg0;
        } else {
            D_0050D180 = arg0;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0) = M2C_FIELD(temp_a4, M2C_UNK **, 0);
        M2C_FIELD(arg0, s16 *, 0x14) = (s16) M2C_FIELD(temp_a4, s16 *, 0x14);
        M2C_FIELD(arg0, s16 *, 0x16) = (s16) (M2C_FIELD(arg0, s16 *, 0x16) + M2C_FIELD(temp_a4, s16 *, 0x16));
        M2C_FIELD(temp_a4, M2C_UNK **, 0) = NULL;
        M2C_FIELD(temp_a4, M2C_UNK **, 4) = (M2C_UNK *) D_0050D188;
        D_0050D188 = temp_a4;
    }
    temp_a4_2 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if ((temp_a4_2 != NULL) && (M2C_FIELD(temp_a4_2, s32 *, 0x10) == 0)) {
        temp_v1_3 = M2C_FIELD(temp_a4_2, M2C_UNK **, 4);
        if (temp_v1_3 != NULL) {
            *temp_v1_3 = arg0;
        } else {
            D_0050D184 = arg0;
        }
        M2C_FIELD(arg0, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(temp_a4_2, M2C_UNK **, 4);
        M2C_FIELD(arg0, s16 *, 0x16) = (s16) (M2C_FIELD(arg0, s16 *, 0x16) + M2C_FIELD(temp_a4_2, s16 *, 0x16));
        M2C_FIELD(temp_a4_2, M2C_UNK **, 0) = NULL;
        M2C_FIELD(temp_a4_2, M2C_UNK **, 4) = (M2C_UNK *) D_0050D188;
        D_0050D188 = temp_a4_2;
    }
}
