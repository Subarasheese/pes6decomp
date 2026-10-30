/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_00153FA0(void *);
extern void **D_003E9944;
extern void *D_003E9948;

void func_001D5C40(s32 arg0) {
    void **temp_v0_2;
    void **var_s0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s1;
    void *temp_v0;
    void *var_a0;

    var_s0 = D_003E9944;
    if (var_s0 != NULL) {
loop_1:
        if (M2C_FIELD(var_s0, s32 *, 8) == arg0) {

        } else {
            var_s0 = M2C_FIELD(var_s0, void ***, 4);
            if (var_s0 == NULL) {
                goto block_4;
            }
            goto loop_1;
        }
    } else {
block_4:
        var_s0 = NULL;
    }
    if ((var_s0 != NULL) && (M2C_FIELD(var_s0, u8 *, 0x28) == 0)) {
        if ((var_s0 != NULL) && (M2C_FIELD(var_s0, s32 *, 0x1C) != 0)) {
            var_a0 = M2C_FIELD(var_s0, void **, 0x20);
            do {
                temp_s1 = M2C_FIELD(var_a0, void **, 0xC);
                func_001D7F10(var_a0);
                var_a0 = temp_s1;
            } while (temp_s1 != NULL);
        }
        if (D_003E9944 != var_s0) {
            if (D_003E9948 != var_s0) {
                *M2C_FIELD(var_s0, void ***, 4) = M2C_FIELD(var_s0, void **, 0);
                M2C_FIELD(M2C_FIELD(var_s0, void **, 0), void ***, 4) = (void **) M2C_FIELD(var_s0, void ***, 4);
            } else {
                temp_v0 = M2C_FIELD(var_s0, void **, 0);
                D_003E9948 = temp_v0;
                M2C_FIELD(temp_v0, void ***, 4) = NULL;
            }
        } else {
            temp_v0_2 = M2C_FIELD(var_s0, void ***, 4);
            D_003E9944 = temp_v0_2;
            if (temp_v0_2 == NULL) {
                D_003E9948 = NULL;
            }
        }
        func_00153FA0(M2C_FIELD(var_s0, void **, 0xC));
        temp_a0 = M2C_FIELD(var_s0, void **, 0x14);
        if (temp_a0 != NULL) {
            func_00153FA0(temp_a0);
        }
        temp_a0_2 = M2C_FIELD(var_s0, void **, 0x18);
        if (temp_a0_2 != NULL) {
            func_00153FA0(temp_a0_2);
        }
        func_00153FA0(var_s0);
    }
}
