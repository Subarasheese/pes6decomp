/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_008B1B60[];

void func_00853F40(void) {
    M2C_UNK *var_a1_2;
    M2C_UNK *var_a4;
    s8 var_a5;
    void *var_a1;
    void *var_a1_3;
    void *var_a1_4;

    func_001C48E8(((void *)D_008B1B60), 0, 0x29C);
    var_a5 = 1;
    var_a4 = ((void *)D_008B1B60);
    do {
        M2C_FIELD(var_a4, s8 *, 8) = var_a5;
        if (var_a5 != 0x10) {
            if (var_a5 != 1) {
                var_a1 = var_a4 + 0x28;
                if (var_a1 == NULL) {
                    var_a1 = NULL;
                }
                M2C_FIELD(var_a4, void **, 4) = var_a1;
                if (var_a4 != NULL) {
                    var_a1_2 = var_a4;
                } else {
                    var_a1_2 = NULL;
                }
            } else {
                var_a1_3 = var_a4 + 0x28;
                *(M2C_UNK **)0x8B1DE8 = var_a4;
                if (var_a1_3 != NULL) {

                } else {
                    var_a1_3 = NULL;
                }
                M2C_FIELD(var_a4, void **, 4) = var_a1_3;
                if (var_a4 == NULL) {
                    var_a1_2 = NULL;
                } else {
                    var_a1_2 = var_a4;
                }
            }
            M2C_FIELD(var_a4, M2C_UNK **, 0x28) = var_a1_2;
        } else {
            var_a1_4 = var_a4 - 0x28;
            *(M2C_UNK **)0x8B1DEC = var_a4;
            if (var_a1_4 != NULL) {

            } else {
                var_a1_4 = NULL;
            }
            M2C_FIELD(var_a4, void **, 0) = var_a1_4;
        }
        var_a5 += 1;
        var_a4 += 0x28;
    } while (var_a5 < 0x11);
}
