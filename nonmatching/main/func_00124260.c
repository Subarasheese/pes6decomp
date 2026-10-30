/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00123960(void *);                      /* extern */
s32 func_001240D0(void *, u32);                     /* extern */
void *func_00129810(s32, u32, M2C_UNK);             /* extern */
extern char D_00375B18[];
extern s8 *D_003E7404;
extern M2C_UNK func_001297E0;

s32 func_00124260(void *arg0, s32 arg1, s8 arg2, s32 arg3, s32 arg4, s32 arg5, s8 *arg6, s32 arg7) {
    s32 var_s2;
    s32 var_s3;
    s32 var_s7;
    u32 temp_a1;
    void *temp_v0;
    void *temp_v0_2;

    var_s7 = 0;
    var_s3 = arg1;
    var_s2 = arg3;
    if ((arg6 != NULL) && (*arg6 == *D_003E7404) && (arg7 == 0x48)) {
        if (arg0 == NULL) {
            return -2;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        if (M2C_FIELD(arg0, void *(**)(s32, u32, M2C_UNK), 0x28) == NULL) {
            M2C_FIELD(arg0, void *(**)(s32, u32, M2C_UNK), 0x28) = func_00129810;
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
        }
        if (M2C_FIELD(arg0, M2C_UNK **, 0x2C) == NULL) {
            M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &func_001297E0;
        }
        if (var_s3 == -1) {
            var_s3 = 6;
        }
        if (var_s2 < 0) {
            var_s7 = 1;
            var_s2 = -var_s2;
        }
        if ((arg4 > 0) && (arg4 < 0xA) && (arg2 == 8) && (var_s2 >= 9) && (var_s2 < 0x10) && (var_s3 >= 0) && (var_s3 < 0xA) && (arg5 >= 0) && (arg5 < 3)) {
            temp_v0 = M2C_FIELD(arg0, void *(**)(s32, u32, M2C_UNK), 0x28)(M2C_FIELD(arg0, s32 *, 0x30), 1U, 0x16D8);
            if (temp_v0 != NULL) {
                M2C_FIELD(arg0, void **, 0x24) = temp_v0;
                M2C_FIELD(temp_v0, void **, 0) = arg0;
                M2C_FIELD(temp_v0, s32 *, 0x20) = var_s7;
                M2C_FIELD(temp_v0, s32 *, 0x30) = var_s2;
                M2C_FIELD(temp_v0, u32 *, 0x2C) = (u32) (1 << M2C_FIELD(temp_v0, s32 *, 0x30));
                M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) (M2C_FIELD(temp_v0, u32 *, 0x2C) - 1);
                M2C_FIELD(temp_v0, s32 *, 0x58) = (s32) (arg4 + 7);
                M2C_FIELD(temp_v0, u32 *, 0x54) = (u32) (1 << M2C_FIELD(temp_v0, s32 *, 0x58));
                M2C_FIELD(temp_v0, s32 *, 0x5C) = (s32) (M2C_FIELD(temp_v0, u32 *, 0x54) - 1);
                M2C_FIELD(temp_v0, s32 *, 0x60) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x58) + 2) / 3);
                M2C_FIELD(temp_v0, void **, 0x38) = M2C_FIELD(arg0, void *(**)(s32, u32, M2C_UNK), 0x28)(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(temp_v0, u32 *, 0x2C), 2);
                M2C_FIELD(temp_v0, void **, 0x48) = M2C_FIELD(arg0, void *(**)(s32, u32, M2C_UNK), 0x28)(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(temp_v0, u32 *, 0x2C), 2);
                M2C_FIELD(temp_v0, void **, 0x4C) = M2C_FIELD(arg0, void *(**)(s32, u32, M2C_UNK), 0x28)(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(temp_v0, u32 *, 0x54), 2);
                M2C_FIELD(temp_v0, u32 *, 0x16AC) = (u32) (1 << (arg4 + 6));
                temp_v0_2 = M2C_FIELD(arg0, void *(**)(s32, u32, M2C_UNK), 0x28)(M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(temp_v0, u32 *, 0x16AC), 4);
                M2C_FIELD(temp_v0, void **, 8) = temp_v0_2;
                M2C_FIELD(temp_v0, s64 *, 0x10) = (s64) ((s64) M2C_FIELD(temp_v0, u32 *, 0x16AC) * 4);
                if ((M2C_FIELD(temp_v0, void **, 0x38) != NULL) && (M2C_FIELD(temp_v0, void **, 0x48) != NULL) && (M2C_FIELD(temp_v0, void **, 0x4C) != NULL) && (M2C_FIELD(temp_v0, void **, 8) != NULL)) {
                    M2C_FIELD(temp_v0, void **, 0x16B4) = (void *) (temp_v0_2 + (M2C_FIELD(temp_v0, u32 *, 0x16AC) & ~1));
                    temp_a1 = M2C_FIELD(temp_v0, u32 *, 0x16AC);
                    M2C_FIELD(temp_v0, void **, 0x16A8) = (void *) (M2C_FIELD(temp_v0, void **, 8) + (temp_a1 * 3));
                    M2C_FIELD(temp_v0, s32 *, 0x94) = var_s3;
                    M2C_FIELD(temp_v0, s32 *, 0x98) = arg5;
                    M2C_FIELD(temp_v0, s8 *, 0x25) = arg2;
                    return func_001240D0(arg0, temp_a1);
                }
                M2C_FIELD(arg0, s32 *, 0x20) = (s32) (*(s32 *)D_00375B18);
                func_00123960(arg0);
                goto block_34;
            }
block_34:
            return -4;
        }
        return -2;
    }
    return -6;
}
