/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK *D_008B1DE0;
extern M2C_UNK *D_008B1DE4;
extern M2C_UNK *D_008B1DE8;
extern M2C_UNK *D_008B1DEC;

M2C_UNK *func_00853C80(s32 arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_s0;
    M2C_UNK *var_s2;
    M2C_UNK *var_v0;
    M2C_UNK *var_v0_2;
    M2C_UNK *var_v0_3;

    temp_s0 = M2C_FIELD(arg1, M2C_UNK **, 4);
    var_s2 = M2C_FIELD(arg1, M2C_UNK **, 0);
    if (arg0 == 0) {
        if (var_s2 == NULL) {
            D_008B1DE0 = arg1;
            M2C_FIELD(arg1, M2C_UNK **, 0) = NULL;
        }
        if (temp_s0 == NULL) {
            D_008B1DE4 = arg1;
            M2C_FIELD(arg1, M2C_UNK **, 4) = NULL;
        }
    } else {
        func_001C48E8(arg1 + 0xC, 0, 0x10);
        if ((var_s2 != NULL) && (temp_s0 != NULL)) {
            if (temp_s0 == NULL) {
                var_v0 = NULL;
            } else {
                var_v0 = temp_s0;
            }
            M2C_FIELD(var_s2, M2C_UNK **, 4) = var_v0;
            if (var_s2 != NULL) {

            } else {
                var_s2 = NULL;
            }
            *temp_s0 = var_s2;
        } else if (temp_s0 != NULL) {
            D_008B1DE0 = temp_s0;
            *temp_s0 = NULL;
        } else if (var_s2 != NULL) {
            D_008B1DE4 = var_s2;
            M2C_FIELD(var_s2, M2C_UNK **, 4) = NULL;
        } else {
            D_008B1DE0 = NULL;
            D_008B1DE4 = NULL;
        }
        M2C_FIELD(arg1, M2C_UNK **, 4) = NULL;
        M2C_FIELD(arg1, M2C_UNK **, 0) = NULL;
        if (D_008B1DE8 != NULL) {
            if (D_008B1DE8 == NULL) {
                var_v0_2 = NULL;
            } else {
                var_v0_2 = D_008B1DE8;
            }
            M2C_FIELD(arg1, M2C_UNK **, 4) = var_v0_2;
            if (arg1 != NULL) {
                var_v0_3 = arg1;
            } else {
                var_v0_3 = NULL;
            }
            *D_008B1DE8 = var_v0_3;
            D_008B1DE8 = arg1;
        } else {
            D_008B1DE8 = arg1;
            D_008B1DEC = arg1;
        }
    }
    return temp_s0;
}
