/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void *D_003EA944;
extern void *D_003EA948;

void func_0096DA00(s32 arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *var_s0;

    var_s0 = D_003EA944;
    if (var_s0 != NULL) {
loop_1:
        if (M2C_FIELD(var_s0, void **, 0) != arg0) {
            var_s0 = M2C_FIELD(var_s0, void **, 4);
            if (var_s0 == NULL) {

            } else {
                goto loop_1;
            }
        } else {
            temp_v1 = M2C_FIELD(var_s0, void **, 8);
            if (temp_v1 != NULL) {
                temp_v0 = M2C_FIELD(var_s0, void **, 4);
                if (temp_v0 != NULL) {
                    M2C_FIELD(temp_v0, void **, 8) = temp_v1;
                    M2C_FIELD(M2C_FIELD(var_s0, void **, 8), void **, 4) = (void *) M2C_FIELD(var_s0, void **, 4);
                } else {
                    D_003EA948 = temp_v1;
                    M2C_FIELD(M2C_FIELD(var_s0, void **, 8), void **, 4) = NULL;
                }
            } else {
                temp_v0_2 = M2C_FIELD(var_s0, void **, 4);
                if (temp_v0_2 != NULL) {
                    D_003EA944 = temp_v0_2;
                    M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 8) = NULL;
                } else {
                    D_003EA944 = NULL;
                    D_003EA948 = NULL;
                }
            }
            func_00153FA0(M2C_FIELD(var_s0, void **, 0));
            func_00153FA0(var_s0);
        }
    }
}
