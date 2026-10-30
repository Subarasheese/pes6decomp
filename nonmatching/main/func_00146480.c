/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK *D_0050AC70;
extern M2C_UNK *D_0050AC74;
extern M2C_UNK *D_0050AC78;
extern char D_0050AC7C[];

void func_00146480(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK *temp_a1;
    M2C_UNK *temp_a4;
    M2C_UNK *temp_a4_2;
    M2C_UNK *temp_a5;
    M2C_UNK *var_a5;
    M2C_UNK *var_a6;
    s32 var_a1;
    s32 var_a2;

    var_a1 = arg1;
    var_a2 = arg2;
    if (arg0 != 0) {
        var_a6 = D_0050AC78;
        if (var_a6 != NULL) {
loop_2:
            if (M2C_FIELD(var_a6, s32 *, 4) != arg0) {
                var_a6 = M2C_FIELD(var_a6, M2C_UNK **, 0);
                if (var_a6 != NULL) {
                    goto loop_2;
                }
            }
        }
        if (var_a6 != NULL) {
            var_a5 = M2C_FIELD(var_a6, M2C_UNK **, 8);
            if (M2C_FIELD(var_a5, s32 *, 4) == (*(s32 *)D_0050AC7C)) {
                if (var_a1 != 0) {
                    M2C_FIELD(var_a5, s32 *, 8) = var_a1;
                }
                if (var_a2 != 0) {
                    M2C_FIELD(var_a5, s32 *, 0xC) = var_a2;
                }
            } else {
                temp_a4 = D_0050AC70;
                D_0050AC70 = M2C_FIELD(temp_a4, M2C_UNK **, 0);
                M2C_FIELD(temp_a4, M2C_UNK **, 0) = var_a5;
                M2C_FIELD(temp_a4, s32 *, 4) = (s32) (*(s32 *)D_0050AC7C);
                if (var_a1 != 0) {

                } else {
                    var_a1 = M2C_FIELD(var_a5, s32 *, 8);
                }
                M2C_FIELD(temp_a4, s32 *, 8) = var_a1;
                if (var_a2 != 0) {

                } else {
                    var_a2 = M2C_FIELD(var_a5, s32 *, 0xC);
                }
                M2C_FIELD(temp_a4, s32 *, 0xC) = var_a2;
                var_a5 = temp_a4;
                M2C_FIELD(var_a6, M2C_UNK **, 8) = temp_a4;
            }
            temp_a1 = M2C_FIELD(var_a5, M2C_UNK **, 0);
            if ((temp_a1 != NULL) && (M2C_FIELD(var_a5, s32 *, 8) == M2C_FIELD(temp_a1, s32 *, 8)) && (M2C_FIELD(var_a5, s32 *, 0xC) == M2C_FIELD(temp_a1, s32 *, 0xC))) {
                M2C_FIELD(var_a6, M2C_UNK **, 8) = temp_a1;
                M2C_FIELD(var_a5, M2C_UNK **, 0) = D_0050AC70;
                D_0050AC70 = var_a5;
            }
        } else {
            if ((var_a1 != 0) && (var_a1 != arg0)) {
                goto block_24;
            }
            if ((var_a2 != 0) && (var_a2 != arg0)) {
block_24:
                temp_a5 = D_0050AC70;
                D_0050AC70 = M2C_FIELD(temp_a5, M2C_UNK **, 0);
                M2C_FIELD(temp_a5, M2C_UNK **, 0) = NULL;
                M2C_FIELD(temp_a5, s32 *, 4) = (s32) (*(s32 *)D_0050AC7C);
                if (var_a1 != 0) {

                } else {
                    var_a1 = arg0;
                }
                M2C_FIELD(temp_a5, s32 *, 8) = var_a1;
                if (var_a2 != 0) {

                } else {
                    var_a2 = arg0;
                }
                M2C_FIELD(temp_a5, s32 *, 0xC) = var_a2;
                temp_a4_2 = D_0050AC74;
                D_0050AC74 = M2C_FIELD(temp_a4_2, M2C_UNK **, 0);
                M2C_FIELD(temp_a4_2, M2C_UNK **, 0) = D_0050AC78;
                D_0050AC78 = temp_a4_2;
                M2C_FIELD(temp_a4_2, s32 *, 4) = arg0;
                M2C_FIELD(temp_a4_2, M2C_UNK **, 8) = temp_a5;
            }
        }
    }
}
