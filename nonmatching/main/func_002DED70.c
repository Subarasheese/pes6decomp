/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void **D_003E9DE4;
extern void *D_003E9DE8;

void func_002DED70(s32 arg0) {
    void **temp_v0;
    void **var_a1;
    void *temp_v1;

    var_a1 = D_003E9DE4;
    if (var_a1 != NULL) {
loop_1:
        if (var_a1 != arg0) {
            var_a1 = M2C_FIELD(var_a1, void ***, 4);
            if (var_a1 != NULL) {
                goto loop_1;
            }
        }
    }
    if (var_a1 != NULL) {
        temp_v1 = M2C_FIELD(var_a1, void **, 0);
        temp_v0 = M2C_FIELD(var_a1, void ***, 4);
        if (temp_v1 != NULL) {
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v1, void ***, 4) = temp_v0;
                *temp_v0 = temp_v1;
            } else {
                M2C_FIELD(temp_v1, void ***, 4) = NULL;
                D_003E9DE8 = temp_v1;
            }
        } else if (temp_v0 != NULL) {
            *temp_v0 = NULL;
            D_003E9DE4 = temp_v0;
        } else {
            D_003E9DE8 = NULL;
            D_003E9DE4 = NULL;
        }
        func_00153FA0(var_a1);
    }
}
