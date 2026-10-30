/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK *D_008B1DE0;
extern M2C_UNK *D_008B1DE4;
extern M2C_UNK *D_008B1DE8;
extern char D_008B1DEC[];

M2C_UNK *func_00853DD0(M2C_UNK *arg0) {
    M2C_UNK *temp_a2;
    M2C_UNK *temp_v1;
    M2C_UNK *var_a4;
    M2C_UNK *var_a5;
    M2C_UNK *var_v0_2;
    M2C_UNK *var_v0_3;
    M2C_UNK *var_v0_4;
    M2C_UNK *var_v0_5;
    s8 temp_a3;
    s8 var_v0;

    temp_v1 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_v1 != NULL) {
        *temp_v1 = NULL;
        D_008B1DE8 = temp_v1;
    } else {
        D_008B1DE8 = NULL;
        (*(s32 *)D_008B1DEC) = 0;
    }
    var_a4 = D_008B1DE0;
    if (var_a4 == NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
        M2C_FIELD(arg0, M2C_UNK **, 0) = NULL;
        D_008B1DE0 = arg0;
        D_008B1DE4 = arg0;
    } else if (var_a4 != NULL) {
        temp_a3 = M2C_FIELD(arg0, s8 *, 8);
loop_7:
        temp_a2 = M2C_FIELD(var_a4, M2C_UNK **, 4);
        var_a5 = M2C_FIELD(var_a4, M2C_UNK **, 0);
        if (M2C_FIELD(arg0, s32 *, 0x1C) < M2C_FIELD(var_a4, s32 *, 0x1C)) {
            var_v0 = temp_a3;
        } else if ((u32) M2C_FIELD(var_a4, u32 *, 0x20) >= (u32) M2C_FIELD(arg0, u32 *, 0x20)) {
            var_v0 = temp_a3;
        } else {
            var_v0 = M2C_FIELD(var_a4, s8 *, 8);
        }
        if (temp_a3 == ((s64) ((s64) var_v0 << 0x38) >> 0x38)) {
            if (var_a4 == NULL) {
                var_v0_2 = NULL;
            } else {
                var_v0_2 = var_a4;
            }
            M2C_FIELD(arg0, M2C_UNK **, 4) = var_v0_2;
            if (arg0 != NULL) {
                var_v0_3 = arg0;
            } else {
                var_v0_3 = NULL;
            }
            M2C_FIELD(var_a4, M2C_UNK **, 0) = var_v0_3;
            if (var_a5 != NULL) {
                if (arg0 == NULL) {
                    var_v0_4 = NULL;
                } else {
                    var_v0_4 = arg0;
                }
                M2C_FIELD(var_a5, M2C_UNK **, 4) = var_v0_4;
                if (var_a5 != NULL) {

                } else {
                    var_a5 = NULL;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0) = var_a5;
            } else {
                M2C_FIELD(arg0, M2C_UNK **, 0) = NULL;
                D_008B1DE0 = arg0;
            }
        } else if (temp_a2 != NULL) {
            var_a4 = temp_a2;
            if (temp_a2 == NULL) {

            } else {
                goto loop_7;
            }
        } else {
            if (arg0 == NULL) {
                var_v0_5 = NULL;
            } else {
                var_v0_5 = arg0;
            }
            M2C_FIELD(var_a4, M2C_UNK **, 4) = var_v0_5;
            if (var_a4 != NULL) {

            } else {
                var_a4 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0) = var_a4;
            M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
            D_008B1DE4 = arg0;
        }
    }
    return M2C_FIELD(arg0, M2C_UNK **, 0);
}
