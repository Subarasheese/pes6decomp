/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058D2E4[];
extern char D_0058D2E6[];
extern char D_0058D304[];

void func_0025F930(void *arg0, void *arg1) {
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 var_a0;
    s16 var_a2;
    s16 var_a2_2;
    s16 var_a2_3;
    s16 var_a2_4;
    s16 var_a2_5;
    s16 var_a3;
    s16 var_a3_2;
    s16 var_a3_3;
    s16 var_a3_4;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        var_a3 = M2C_FIELD(arg0, s16 *, 0);
        var_a2 = (*(s16 *)D_0058D2E4) - 1;
        if (var_a2 < var_a3) {

        } else {
            if (var_a3 < 0) {
                var_a3 = 0;
            }
            var_a2 = var_a3;
        }
        M2C_FIELD(arg0, s16 *, 0) = var_a2;
        var_a2_2 = M2C_FIELD(arg0, s16 *, 2);
        var_a3_2 = (*(s16 *)D_0058D2E6) - 1;
        if (var_a3_2 < var_a2_2) {

        } else {
            if (var_a2_2 < 0) {
                var_a2_2 = 0;
            }
            var_a3_2 = var_a2_2;
        }
        M2C_FIELD(arg0, s16 *, 2) = var_a3_2;
        var_a2_3 = M2C_FIELD(arg1, s16 *, 0);
        var_a3_3 = (*(s16 *)D_0058D2E4) - 1;
        if (var_a3_3 < var_a2_3) {

        } else {
            if (var_a2_3 < 0) {
                var_a2_3 = 0;
            }
            var_a3_3 = var_a2_3;
        }
        M2C_FIELD(arg1, s16 *, 0) = var_a3_3;
        var_a2_4 = M2C_FIELD(arg1, s16 *, 2);
        var_a3_4 = (*(s16 *)D_0058D2E6) - 1;
        if (var_a3_4 < var_a2_4) {

        } else {
            if (var_a2_4 < 0) {
                var_a2_4 = 0;
            }
            var_a3_4 = var_a2_4;
        }
        M2C_FIELD(arg1, s16 *, 2) = var_a3_4;
        temp_a3 = M2C_FIELD(arg1, s16 *, 0);
        temp_a2 = M2C_FIELD(arg0, s16 *, 0);
        if (temp_a2 >= temp_a3) {
            M2C_FIELD(((void *)D_0058D304), s16 *, 0) = temp_a3;
            var_a2_5 = M2C_FIELD(arg0, s16 *, 0);
        } else {
            M2C_FIELD(((void *)D_0058D304), s16 *, 0) = temp_a2;
            var_a2_5 = M2C_FIELD(arg1, s16 *, 0);
        }
        M2C_FIELD(((void *)D_0058D304), s16 *, 4) = var_a2_5;
        temp_a3_2 = M2C_FIELD(arg1, s16 *, 2);
        temp_a2_2 = M2C_FIELD(arg0, s16 *, 2);
        if (temp_a2_2 >= temp_a3_2) {
            M2C_FIELD(((void *)D_0058D304), s16 *, 2) = temp_a3_2;
            var_a0 = M2C_FIELD(arg0, s16 *, 2);
        } else {
            M2C_FIELD(((void *)D_0058D304), s16 *, 2) = temp_a2_2;
            var_a0 = M2C_FIELD(arg1, s16 *, 2);
        }
        M2C_FIELD(((void *)D_0058D304), s16 *, 6) = var_a0;
    }
}
