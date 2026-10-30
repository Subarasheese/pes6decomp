/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005F1CC0[];
extern char D_005F1CC1[];

s32 func_00338D00(void) {
    M2C_UNK (*temp_v0_2)(void *);
    M2C_UNK (*temp_v0_3)(void *);
    M2C_UNK *var_v1;
    s32 temp_v0;
    s32 temp_v0_4;
    s32 var_a0;
    s32 var_a1_2;
    void *temp_a2;
    void *var_a1;
    void *var_s0;

    if ((*(u8 *)D_005F1CC1) != 0) {
        if (M2C_FIELD(((void *)D_005F1CC0), s32 (**)(), 0xC) == NULL) {
            return 0;
        }
        if (M2C_FIELD(((void *)D_005F1CC0), s32 (**)(), 0xC)() != 0) {
            M2C_FIELD(((void *)D_005F1CC0), s8 *, 1) = 0;
            M2C_FIELD(((void *)D_005F1CC0), s32 (**)(), 0xC) = NULL;
            goto block_9;
        }
        return 0;
    }
block_9:
    var_s0 = ((void *)D_005F1CC0) + 0x94;
    if (M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x9C) != 0x21) {
        do {
            if (M2C_FIELD(var_s0, u8 *, 0x1A) == 0) {
                if (M2C_FIELD(var_s0, u8 *, 0x1B) != 0) {
                    temp_v0 = M2C_FIELD(var_s0, s32 *, 0x20) - 1;
                    M2C_FIELD(var_s0, s32 *, 0x20) = temp_v0;
                    if (temp_v0 == 0) {
                        M2C_FIELD(var_s0, u8 *, 0x1B) = 0U;
                        goto block_14;
                    }
                } else {
block_14:
                    if ((((s32) M2C_FIELD(var_s0, s32 *, 0x28) % (s32) M2C_FIELD(var_s0, s32 *, 0x1C)) == 0) && (M2C_FIELD(var_s0, u8 *, 0x18) == 0)) {
                        temp_v0_2 = M2C_FIELD(var_s0, M2C_UNK (**)(void *), 0);
                        if (temp_v0_2 != NULL) {
                            temp_v0_2(var_s0);
                        }
                    }
                    temp_v0_3 = M2C_FIELD(var_s0, M2C_UNK (**)(void *), 4);
                    if (temp_v0_3 != NULL) {
                        M2C_FIELD(var_s0, M2C_UNK (**)(void *), 0) = temp_v0_3;
                        M2C_FIELD(var_s0, M2C_UNK (**)(void *), 4) = NULL;
                    }
                }
            }
            M2C_FIELD(var_s0, s32 *, 0x28) = (s32) (M2C_FIELD(var_s0, s32 *, 0x28) + 1);
            var_s0 = M2C_FIELD(var_s0, void **, 0x14);
        } while (M2C_FIELD(var_s0, s32 *, 8) != 0x21);
    }
    var_a1 = ((void *)D_005F1CC0) + 0x94;
    if (M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x9C) != 0x21) {
        do {
            temp_a2 = M2C_FIELD(var_a1, void **, 0x14);
            if (M2C_FIELD(var_a1, u8 *, 0x19) != 0) {
                M2C_FIELD(var_a1, s32 *, 0xC) = 0;
                M2C_FIELD(M2C_FIELD(var_a1, void **, 0x10), void **, 0x14) = (void *) M2C_FIELD(var_a1, void **, 0x14);
                M2C_FIELD(M2C_FIELD(var_a1, void **, 0x14), void **, 0x10) = (void *) M2C_FIELD(var_a1, void **, 0x10);
                M2C_FIELD(var_a1, void **, 0x14) = (void *) M2C_FIELD(M2C_FIELD(((void *)D_005F1CC0), void **, 0x14C), void **, 0x14);
                M2C_FIELD(M2C_FIELD(((void *)D_005F1CC0), void **, 0x14C), void **, 0x14) = var_a1;
                M2C_FIELD(var_a1, void **, 0x10) = NULL;
                M2C_FIELD(var_a1, u8 *, 0x19) = 0U;
                M2C_FIELD(((void *)D_005F1CC0), s32 *, 8) = (s32) (M2C_FIELD(((void *)D_005F1CC0), s32 *, 8) - 1);
            }
            var_a1 = temp_a2;
        } while (M2C_FIELD(temp_a2, s32 *, 8) != 0x21);
    }
    var_a1_2 = 0;
    var_a0 = 0;
    if (M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x10) > 0) {
        var_v1 = ((void *)D_005F1CC0);
        do {
            temp_v0_4 = M2C_FIELD(var_v1, s32 *, 0x14) - 1;
            M2C_FIELD(var_v1, s32 *, 0x14) = temp_v0_4;
            if (temp_v0_4 < 0) {
                M2C_FIELD(var_v1, s32 *, 0x18) = 0;
                var_a0 += 1;
            }
            var_a1_2 += 1;
            var_v1 += 8;
        } while (var_a1_2 < M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x10));
    }
    M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x10) = (s32) (M2C_FIELD(((void *)D_005F1CC0), s32 *, 0x10) - var_a0);
    return 1;
}
