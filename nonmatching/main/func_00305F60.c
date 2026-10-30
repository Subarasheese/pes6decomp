/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00256140(void);
void func_00305F60(void) {
    M2C_UNK (*temp_v1_3)(void *);
    s32 temp_v1_2;
    void *temp_a2;
    void *temp_v0;
    void *temp_v1;
    void *var_a1;
    void *var_s1;

    temp_v0 = func_00256140();
    if (M2C_FIELD(temp_v0, u8 *, 2) != 0) {
        if (M2C_FIELD(temp_v0, s32 (**)(), 0x18)() != 0) {
            M2C_FIELD(temp_v0, u8 *, 2) = 0U;
            goto block_3;
        }
    } else {
block_3:
        temp_v1 = M2C_FIELD(temp_v0, void **, 0x1C);
        var_s1 = M2C_FIELD(temp_v1, void **, 0x14);
        if (var_s1 != temp_v1) {
            do {
                temp_v1_2 = M2C_FIELD(var_s1, s32 *, 0xC);
                if (temp_v1_2 != 0) {
                    M2C_FIELD(var_s1, s32 *, 0xC) = (s32) (temp_v1_2 - 1);
                } else if (M2C_FIELD(var_s1, u8 *, 9) != 0) {
                    if (M2C_FIELD(var_s1, s32 (**)(void *), 4)(var_s1) != 0) {
                        M2C_FIELD(var_s1, u8 *, 9) = 0U;
                        M2C_FIELD(var_s1, s32 (**)(void *), 4) = NULL;
                    }
                } else {
                    temp_v1_3 = M2C_FIELD(var_s1, M2C_UNK (**)(void *), 0);
                    if (temp_v1_3 != NULL) {
                        temp_v1_3(var_s1);
                    }
                }
                var_s1 = M2C_FIELD(var_s1, void **, 0x14);
            } while (var_s1 != M2C_FIELD(temp_v0, void **, 0x1C));
        }
        var_a1 = M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x1C), void **, 0x14);
        if (var_a1 != M2C_FIELD(temp_v0, void **, 0x1C)) {
            do {
                temp_a2 = M2C_FIELD(var_a1, void **, 0x14);
                if (M2C_FIELD(var_a1, u8 *, 8) != 0) {
                    M2C_FIELD(M2C_FIELD(var_a1, void **, 0x10), void **, 0x14) = temp_a2;
                    M2C_FIELD(M2C_FIELD(var_a1, void **, 0x14), void **, 0x10) = (void *) M2C_FIELD(var_a1, void **, 0x10);
                    M2C_FIELD(var_a1, void **, 0x14) = (void *) M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x20), void **, 0x14);
                    M2C_FIELD(M2C_FIELD(temp_v0, void **, 0x20), void **, 0x14) = var_a1;
                    M2C_FIELD(var_a1, void **, 0x10) = NULL;
                    M2C_FIELD(var_a1, u8 *, 8) = 0U;
                }
                var_a1 = temp_a2;
            } while (temp_a2 != M2C_FIELD(temp_v0, void **, 0x1C));
        }
    }
}
