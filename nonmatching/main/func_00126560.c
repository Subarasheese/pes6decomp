/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00124590(void *, void *);
void *func_001255F0(void *, M2C_UNK *, s32);        /* extern */
M2C_UNK func_00125770(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001297E0(s32, void *);                 /* extern */
void *func_00129810(s32, M2C_UNK, M2C_UNK);         /* extern */
extern char D_003C5968[];
extern M2C_UNK func_00125840;

s32 func_00126560(void *arg0, s32 arg1, s8 *arg2, s32 arg3) {
    M2C_UNK *var_a1;
    s32 var_s0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;

    var_s0 = arg1;
    if ((arg2 != NULL) && (*arg2 == (*(s8 *)D_003C5968)) && (arg3 == 0x48)) {
        if (arg0 == NULL) {
            return -2;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        if (M2C_FIELD(arg0, void *(**)(s32, M2C_UNK, M2C_UNK), 0x28) == NULL) {
            M2C_FIELD(arg0, void *(**)(s32, M2C_UNK, M2C_UNK), 0x28) = func_00129810;
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
        }
        if (M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x2C) == NULL) {
            M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x2C) = func_001297E0;
        }
        temp_v0 = M2C_FIELD(arg0, void *(**)(s32, M2C_UNK, M2C_UNK), 0x28)(M2C_FIELD(arg0, s32 *, 0x30), 1, 0x28);
        M2C_FIELD(arg0, void **, 0x24) = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x20) = NULL;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x18) = 0;
            if (var_s0 < 0) {
                var_s0 = -var_s0;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x18) = 1;
            }
            if ((var_s0 >= 8) && (var_s0 < 0x10)) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x1C) = var_s0;
                if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0x18) != 0) {
                    var_a1 = NULL;
                } else {
                    var_a1 = &func_00125840;
                }
                temp_v0_2 = func_001255F0(arg0, var_a1, 1 << var_s0);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x20) = temp_v0_2;
                if (temp_v0_2 != NULL) {
                    if ((arg0 != NULL) && (M2C_FIELD(arg0, void **, 0x24) != NULL)) {
                        M2C_FIELD(arg0, s64 *, 0x18) = 0;
                        M2C_FIELD(arg0, s64 *, 8) = 0;
                        M2C_FIELD(arg0, s32 *, 0x20) = 0;
                        temp_a0 = M2C_FIELD(arg0, void **, 0x24);
                        M2C_FIELD(temp_a0, s32 *, 0) = (s32) ((M2C_FIELD(temp_a0, s32 *, 0x18) == 0) ? 0 : 7);
                        func_00125770(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), void **, 0x20), arg0, 0);
                    }
                    return 0;
                }
                if (arg0 != NULL) {
                    temp_v1 = M2C_FIELD(arg0, void **, 0x24);
                    if ((temp_v1 != NULL) && (M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x2C) != NULL)) {
                        temp_a0_2 = M2C_FIELD(temp_v1, void **, 0x20);
                        if (temp_a0_2 != NULL) {
                            func_00124590(temp_a0_2, arg0);
                        }
                        M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x2C)(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, void **, 0x24));
                        M2C_FIELD(arg0, void **, 0x24) = NULL;
                    }
                }
                goto block_38;
            }
            if (arg0 != NULL) {
                temp_v1_2 = M2C_FIELD(arg0, void **, 0x24);
                if ((temp_v1_2 != NULL) && (M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x2C) != NULL)) {
                    temp_a0_3 = M2C_FIELD(temp_v1_2, void **, 0x20);
                    if (temp_a0_3 != NULL) {
                        func_00124590(temp_a0_3, arg0);
                    }
                    M2C_FIELD(arg0, M2C_UNK (**)(s32, void *), 0x2C)(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, void **, 0x24));
                    M2C_FIELD(arg0, void **, 0x24) = NULL;
                }
            }
            return -2;
        }
block_38:
        return -4;
    }
    return -6;
}
